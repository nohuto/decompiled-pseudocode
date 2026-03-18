/*
 * XREFs of PidNodeCompare @ 0x14093C320
 * Callers:
 *     EtwpDemuxPrivateTraceHandle @ 0x14093BA1C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPidDemuxList @ 0x14093BB40 (EtwpGetPidDemuxList.c)
 *     EtwpRegisterPrivateSession @ 0x14093BDA8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PidNodeCompare(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ecx

  v2 = *a1;
  v3 = *(_DWORD *)(a2 + 24);
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFLL;
}
