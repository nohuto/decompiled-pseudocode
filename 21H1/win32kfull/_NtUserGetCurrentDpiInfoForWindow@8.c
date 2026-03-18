/*
 * XREFs of _NtUserGetCurrentDpiInfoForWindow@8 @ 0xA6BC8
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserGetCurrentDpiInfoForWindow(int a1, ULONG a2)
{
  int v2; // ebx
  _DWORD *v3; // eax
  int v4; // esi
  void *v5; // edi

  v2 = 0;
  EnterSharedCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v3 = (_DWORD *)ValidateHwnd(a1);
  if ( v3 )
  {
    if ( *(_WORD *)(v3[5] + 182) )
      v4 = v3[43];
    else
      v4 = v3[42];
    v5 = (void *)a2;
    if ( a2 >= _MmUserProbeAddress )
      v5 = (void *)_MmUserProbeAddress;
    qmemcpy(v5, (const void *)(v4 + 4), 0x60u);
    v2 = 1;
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
