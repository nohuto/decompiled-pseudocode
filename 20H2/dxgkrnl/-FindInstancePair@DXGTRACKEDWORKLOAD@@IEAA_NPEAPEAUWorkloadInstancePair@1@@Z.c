/*
 * XREFs of ?FindInstancePair@DXGTRACKEDWORKLOAD@@IEAA_NPEAPEAUWorkloadInstancePair@1@@Z @ 0x1C02BB51C
 * Callers:
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C02BBEC0 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGTRACKEDWORKLOAD::FindInstancePair(
        DXGTRACKEDWORKLOAD *this,
        struct DXGTRACKEDWORKLOAD::WorkloadInstancePair **a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  __int64 v5; // r10
  bool result; // al
  __int64 v7; // rdx

  v2 = *((_DWORD *)this + 26);
  v3 = 0;
  if ( !v2 )
    return 0;
  v5 = *((_QWORD *)this + 4);
  while ( *(_BYTE *)(136LL * v3 + v5 + 32) )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  v7 = 136LL * v3;
  result = 1;
  *(_BYTE *)(v7 + v5 + 32) = 1;
  *a2 = (struct DXGTRACKEDWORKLOAD::WorkloadInstancePair *)(*((_QWORD *)this + 4) + v7);
  return result;
}
