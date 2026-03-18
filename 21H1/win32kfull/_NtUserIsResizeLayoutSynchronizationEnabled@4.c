/*
 * XREFs of _NtUserIsResizeLayoutSynchronizationEnabled@4 @ 0x165B0E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserIsResizeLayoutSynchronizationEnabled(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  v1 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  EnterCrit(0, 1);
  v2 = ValidateHwnd(a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = *(_WORD *)(*(_DWORD *)(v2 + 20) + 30) & 0x3FFF;
    if ( v4 != 669 && v4 != 671 )
    {
      v6 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v6;
      v7 = v2;
      HMLockObject(v2);
      v1 = *(_BYTE *)(*(_DWORD *)(v3 + 20) + 17) & 0x80;
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
