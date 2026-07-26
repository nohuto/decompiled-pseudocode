/*
 * XREFs of ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A8654
 * Callers:
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A6E10 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0019320 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C0083AB8 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x1C00A4C5C (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A5330 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C00A58A4 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C00A6928 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00AA290 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     PktMonClientNblDropNdis @ 0x1C00C656C (PktMonClientNblDropNdis.c)
 */

char __fastcall ndisWdmSetBusyAsync(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  struct _NET_BUFFER_LIST *v7; // rdi
  char v8; // r15
  unsigned int v10; // r12d
  KIRQL v11; // r13
  int v12; // eax
  int v13; // r9d
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  int v16; // r8d
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _GUID *v19; // [rsp+20h] [rbp-40h]
  char v20[8]; // [rsp+30h] [rbp-30h]
  char v21; // [rsp+40h] [rbp-20h]
  char v22; // [rsp+41h] [rbp-1Fh]
  struct _NET_BUFFER_LIST *v23; // [rsp+48h] [rbp-18h] BYREF
  struct _LIST_ENTRY v24; // [rsp+50h] [rbp-10h] BYREF
  char v25; // [rsp+A0h] [rbp+40h] BYREF
  int v26; // [rsp+A8h] [rbp+48h]
  __int64 v27; // [rsp+B8h] [rbp+58h]

  v27 = a4;
  v26 = a2;
  v5 = *(_QWORD *)(a1 + 4448);
  v24.Blink = &v24;
  v7 = 0LL;
  v8 = 1;
  v24.Flink = &v24;
  v22 = 1;
  v23 = 0LL;
  v10 = 0;
  v25 = 0;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
  v12 = *(_DWORD *)(v5 + 504);
  if ( (v12 & 0x14) == 0 || (v12 & 0x200) != 0 )
  {
    v21 = 1;
    v22 = ndisIncrementAsyncIdleCountersLocked(v5, v26, a3);
    ndisSelectiveSuspendSetResumeBusyReason(v14, 0, a3, 0);
  }
  else
  {
    v21 = 0;
    ndisPendWorkOnSetBusyAsyncLocked(v5, a3, v27, a5, &v23, &v24, &v25);
    if ( v25 && (*(_DWORD *)(v5 + 504) & 0xC0) == 0 )
    {
      if ( a3 == 50 )
        v13 = *(_DWORD *)(v5 + 632);
      else
        v13 = 0;
      ndisSelectiveSuspendSetResumeBusyReason((_DWORD *)v5, 1, a3, v13);
      v10 = a3;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v20 = a3;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xFu,
          0x26u,
          (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
          a1,
          *(_QWORD *)v20);
      }
      *(_DWORD *)(v5 + 504) |= 0x40u;
      ndisScheduleWorkItemInternal((struct _NDIS_WORK_ITEM *)(v5 + 376));
    }
    v7 = v23;
  }
  if ( (*(_DWORD *)(v5 + 504) & 0x200) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v5, v11);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v5, v11);
    if ( v7 )
    {
      if ( byte_1C00E3EA8 && (*(_DWORD *)(a1 + 5820) & 2) != 0 )
        PktMonClientNblDropNdis(a1 + 5808, (_DWORD)v7, v16, 2, -1071448017, -536866805);
      Alignment = v7;
      do
      {
        Alignment->Status = -1071448052;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      ndisMSendNetBufferListsCompleteInternal((struct _NDIS_MINIPORT_BLOCK *)a1, v7, 0, 0);
    }
    if ( v24.Flink != &v24 )
      ndisCancelDequeuedDirectOidRequests((struct _NDIS_MINIPORT_BLOCK *)a1, &v24);
    if ( v10 && (byte_1C00E6081 & 8) != 0 )
    {
      LODWORD(v19) = v10;
      McTemplateK0qq_EtwWriteTransfer(
        v15,
        &SSResumeRequested,
        (const GUID *)(a1 + 4008),
        (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF,
        (__int64)v19);
    }
    if ( !v21 || !v22 )
      return 0;
  }
  return v8;
}
