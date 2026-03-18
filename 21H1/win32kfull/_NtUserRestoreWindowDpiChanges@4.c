/*
 * XREFs of _NtUserRestoreWindowDpiChanges@4 @ 0xC48EC
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxRestoreWindowFromDeferredStateIfNeeded@8 @ 0xB4A52 (_xxxRestoreWindowFromDeferredStateIfNeeded@8.c)
 */

int __stdcall NtUserRestoreWindowDpiChanges(int a1)
{
  int v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  int v4; // ecx
  int v6; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  v1 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  EnterCrit(0, 1);
  v2 = (_DWORD *)ValidateHwnd(a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = *(_WORD *)(v2[5] + 30) & 0x3FFF;
    if ( v4 != 669 && v4 != 671 )
    {
      v6 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v6;
      v7 = v2;
      HMLockObject(v2);
      if ( (*(_DWORD *)(v3[5] + 184) & 0xF) == 2 )
        v1 = xxxRestoreWindowFromDeferredStateIfNeeded(v3, 1);
      else
        UserSetLastError((struct _NT_TIB *)0x57);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
