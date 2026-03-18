/*
 * XREFs of _xxxRemoteNotify@4 @ 0xEBFFE
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall xxxRemoteNotify(unsigned int a1)
{
  int *v1; // ecx
  int v3; // [esp+14h] [ebp-1Ch]

  if ( PsGetCurrentProcess() == _gpepCSRSS )
  {
    v1 = (int *)a1;
    if ( a1 + 4 < a1 || a1 + 4 > _MmUserProbeAddress )
      v1 = (int *)_MmUserProbeAddress;
    v3 = *v1;
    if ( *v1 == 6 )
      return 0;
    if ( v3 == 11 )
    {
      _gdwHydraHint |= 0x4000000u;
    }
    else
    {
      if ( v3 != 12 )
        return 0;
      _gdwHydraHint |= 0x8000000u;
    }
    SetConnectCompletedState(1);
    return 0;
  }
  return -1073741790;
}
