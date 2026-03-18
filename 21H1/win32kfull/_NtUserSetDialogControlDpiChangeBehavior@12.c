/*
 * XREFs of _NtUserSetDialogControlDpiChangeBehavior@12 @ 0x1692E5
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserSetDialogControlDpiChangeBehavior(int a1, char a2, unsigned __int8 a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h]

  v3 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  v5 = v4;
  if ( v4 )
  {
    v7 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v7;
    v8 = v4;
    HMLockObject(v4);
    if ( *(_DWORD *)(*(_DWORD *)(v5 + 8) + 232) == PsGetCurrentProcessWin32Process() )
    {
      v3 = 1;
      *(_WORD *)(*(_DWORD *)(v5 + 20) + 196) = a2 & 3 & a3 | *(_WORD *)(*(_DWORD *)(v5 + 20) + 196) & ~(a2 & 3);
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)5);
    }
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
