/*
 * XREFs of ?ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021054
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012C504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002119C (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

void __fastcall ndisMFindNumaDistances(struct _NDIS_MINIPORT_BLOCK *a1)
{
  SIZE_T v2; // rdi
  unsigned __int16 *PoolWithTag; // rax
  __int64 v4; // rbx
  USHORT HighestNodeNumber; // ax
  ULONG SystemInformationLength; // ebp
  _WORD *v7; // rax
  _WORD *v8; // rdi
  __int64 v9; // r8
  USHORT *p_NodeId; // rdx
  __int64 v11; // rax

  v2 = 2LL * ndisMaxNumberOfProcessors;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x2020444Eu);
  v4 = 0LL;
  a1->NumaDistances = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v2);
    a1->NumaNodeId = -1;
    if ( (int)ndisMFindNumaNode(a1) >= 0 )
    {
      HighestNodeNumber = KeQueryHighestNodeNumber();
      SystemInformationLength = 4 * HighestNodeNumber + 4;
      v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * HighestNodeNumber + 4, 0x2020444Eu);
      v8 = v7;
      if ( v7 )
      {
        if ( NtQuerySystemInformationEx(
               SystemNodeDistanceInformation,
               &a1->NumaNodeId,
               2u,
               v7,
               SystemInformationLength,
               0LL) >= 0
          && ndisMaxNumberOfProcessors )
        {
          v9 = ndisMaxNumberOfProcessors;
          p_NodeId = &ndisCpuInfo->NodeId;
          do
          {
            v11 = *p_NodeId;
            p_NodeId += 10;
            a1->NumaDistances[v4++] = v8[2 * v11];
            --v9;
          }
          while ( v9 );
        }
        ExFreePoolWithTag(v8, 0);
      }
    }
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0x72u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      a1);
  }
}
