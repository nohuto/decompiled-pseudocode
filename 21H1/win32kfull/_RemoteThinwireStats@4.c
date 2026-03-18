/*
 * XREFs of _RemoteThinwireStats@4 @ 0x187E11
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall RemoteThinwireStats(volatile void *Address)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 20, &WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids);
  if ( PsGetCurrentProcess() != _gpepCSRSS )
    return -1073741790;
  if ( !_gpThinWireCache )
    return -1073741810;
  ProbeForWrite(Address, 0x54u, 1u);
  qmemcpy((void *)Address, _gpThinWireCache, 0x54u);
  return 0;
}
