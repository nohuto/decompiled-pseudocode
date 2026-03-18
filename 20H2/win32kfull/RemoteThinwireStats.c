/*
 * XREFs of RemoteThinwireStats @ 0x1C02263D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RemoteThinwireStats(_OWORD *Address, __int64 a2, __int64 a3)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)Address, a2, 9, 20, (__int64)&WPP_a65f4517be503488af1f6543f5ef864f_Traceguids);
  }
  if ( PsGetCurrentProcess(Address, a2, a3) != gpepCSRSS )
    return 3221225506LL;
  if ( !gpThinWireCache )
    return 3221225486LL;
  ProbeForWrite(Address, 0x54uLL, 1u);
  *Address = *gpThinWireCache;
  Address[1] = *(_OWORD *)(gpThinWireCache + 16LL);
  Address[2] = *(_OWORD *)(gpThinWireCache + 32LL);
  Address[3] = *(_OWORD *)(gpThinWireCache + 48LL);
  Address[4] = *(_OWORD *)(gpThinWireCache + 64LL);
  *((_DWORD *)Address + 20) = *(_DWORD *)(gpThinWireCache + 80LL);
  return 0LL;
}
