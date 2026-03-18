/*
 * XREFs of _NtUserSetChildWindowNoActivate@4 @ 0xE3D4A
 * Callers:
 *     <none>
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserSetChildWindowNoActivate(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // edi
  int v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  v1 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  EnterCrit(0, 1);
  v2 = ValidateHwnd(a1);
  v3 = v2;
  if ( v2 )
  {
    v5 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v5;
    v6 = v2;
    HMLockObject(v2);
    if ( (*(_BYTE *)(*(_DWORD *)(v3 + 20) + 23) & 0x40) != 0 )
    {
      SetOrClrWF(1, v3, 0x8910u, 1);
      v1 = 1;
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)0x57);
    }
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
