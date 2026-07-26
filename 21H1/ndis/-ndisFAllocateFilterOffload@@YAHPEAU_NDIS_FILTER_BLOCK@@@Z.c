/*
 * XREFs of ?ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0026310
 * Callers:
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x1C001FFC0 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0025E2C (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

__int64 __fastcall ndisFAllocateFilterOffload(struct _NDIS_FILTER_BLOCK *a1)
{
  unsigned int v2; // ebx
  _NDIS_FILTER_TASK_OFFLOAD *PoolWithTag; // rax

  v2 = -1073741670;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xEu,
      (struct _GUID *)&WPP_cf208d18948535781faf8aaae63f05ed_Traceguids,
      a1);
  PoolWithTag = (_NDIS_FILTER_TASK_OFFLOAD *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD8uLL, 0x666F444Eu);
  a1->Offload = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(_NDIS_FILTER_TASK_OFFLOAD));
    v2 = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_cf208d18948535781faf8aaae63f05ed_Traceguids,
      a1->Offload);
  return v2;
}
