/*
 * XREFs of __GetProcessDefaultLayout@4 @ 0x142114
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall _GetProcessDefaultLayout(_DWORD *a1)
{
  int v1; // esi
  _DWORD *v2; // ecx

  v1 = 0;
  if ( PsGetCurrentProcess() == _gpepCSRSS )
  {
    UserSetLastError((struct _NT_TIB *)0xC);
  }
  else
  {
    v2 = a1;
    if ( (unsigned int)a1 >= _MmUserProbeAddress )
      v2 = (_DWORD *)_MmUserProbeAddress;
    *v2 = *v2;
    *a1 = *(_DWORD *)(PsGetCurrentProcessWin32Process() + 468);
    return 1;
  }
  return v1;
}
