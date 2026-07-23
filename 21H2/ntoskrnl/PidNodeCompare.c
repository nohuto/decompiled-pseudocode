/*
 * XREFs of PidNodeCompare @ 0x14093FAF0
 * Callers:
 *     EtwpDemuxPrivateTraceHandle @ 0x14093F1EC (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPidDemuxList @ 0x14093F310 (EtwpGetPidDemuxList.c)
 *     EtwpRegisterPrivateSession @ 0x14093F578 (EtwpRegisterPrivateSession.c)
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
