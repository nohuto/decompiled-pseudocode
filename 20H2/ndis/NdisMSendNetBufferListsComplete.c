/*
 * XREFs of NdisMSendNetBufferListsComplete @ 0x1C0002F10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000317C (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0005A60 (-ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C006938C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0074B38 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008F21C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008F3B4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A53C0 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AE11C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __stdcall NdisMSendNetBufferListsComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  PNET_BUFFER_LIST v4; // rbx
  struct _NET_BUFFER_LIST *Context; // rdx
  __int64 CurrentIrql; // rax
  _QWORD *v8; // rsi
  void (*v9)(void); // r12
  void *v10; // r13
  struct _NET_BUFFER_LIST **v11; // rdi
  bool v12; // zf
  _QWORD *v13; // r15
  __int64 v14; // r14
  char v15; // al
  struct _NET_BUFFER_LIST *v16; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v18; // rdi
  _SLIST_HEADER *Alignment; // rax
  unsigned int ChildRefCount; // [rsp+30h] [rbp-59h]
  unsigned int v21; // [rsp+30h] [rbp-59h]
  unsigned int v22; // [rsp+40h] [rbp-49h]
  __int64 v23; // [rsp+48h] [rbp-41h] BYREF
  __int64 v24; // [rsp+50h] [rbp-39h]
  int v25; // [rsp+58h] [rbp-31h]
  _QWORD Parameter[5]; // [rsp+60h] [rbp-29h] BYREF
  int v27; // [rsp+88h] [rbp-1h]
  __int64 v28; // [rsp+8Ch] [rbp+3h]
  ULONG v29; // [rsp+94h] [rbp+Bh]
  _QWORD v30[9]; // [rsp+98h] [rbp+Fh] BYREF
  KIRQL v31; // [rsp+F0h] [rbp+67h]
  char v32; // [rsp+108h] [rbp+7Fh]

  v4 = NetBufferList;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 0x800) != 0 )
    ndisNblVerifyTxCompletion((ULONG_PTR)NetBufferList, SendCompleteFlags, (ULONG_PTR)MiniportAdapterHandle);
  Context = 0LL;
  if ( *((_QWORD *)MiniportAdapterHandle + 556) )
  {
    Alignment = (_SLIST_HEADER *)v4;
    if ( v4 )
    {
      do
      {
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        Context = (struct _NET_BUFFER_LIST *)(unsigned int)((_DWORD)Context + 1);
      }
      while ( Alignment );
    }
    ndisClearBusy(MiniportAdapterHandle, Context, 52LL);
    Context = 0LL;
  }
  CurrentIrql = *((unsigned int *)MiniportAdapterHandle + 12);
  v23 = 0LL;
  v24 = 0LL;
  v25 = -1;
  if ( (_DWORD)CurrentIrql || *((_DWORD *)MiniportAdapterHandle + 20) )
  {
    LODWORD(v24) = CurrentIrql;
    HIDWORD(v24) = *((_DWORD *)MiniportAdapterHandle + 20);
    CurrentIrql = *((_QWORD *)MiniportAdapterHandle + 5);
    v23 = CurrentIrql;
    if ( !CurrentIrql )
    {
      CurrentIrql = *((_QWORD *)MiniportAdapterHandle + 5);
      v23 = CurrentIrql;
    }
  }
  v31 = 2;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    ndisNblTrackerTransferOwnershipInternal(
      v4,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 510),
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 323),
      NdisNblTrackerEvent_MiniportSendCompleted,
      (SendCompleteFlags & 1) != 0);
    Context = 0LL;
  }
  if ( byte_1C00E3FD8 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v4);
  if ( (v24 & 0x10000000000LL) != 0 )
  {
    if ( (SendCompleteFlags & 1) == 0 )
      v31 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v23, 8u);
    Context = 0LL;
  }
  v8 = (_QWORD *)*((_QWORD *)MiniportAdapterHandle + 324);
  v9 = (void (*)(void))*((_QWORD *)MiniportAdapterHandle + 327);
  v10 = (void *)*((_QWORD *)MiniportAdapterHandle + 322);
  if ( *(_BYTE *)v8 == 17 )
    goto LABEL_40;
  if ( ndisIterativeDataPathDisabled
    || (SendCompleteFlags & 1) == 0 && (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql != 2) )
  {
    if ( *(_BYTE *)MiniportAdapterHandle == 5 )
    {
      Parameter[0] = Context;
      v27 = (int)Context;
      Parameter[1] = v8;
      Parameter[2] = v10;
      v28 = 1LL;
      Parameter[3] = v9;
      Parameter[4] = v4;
      v29 = SendCompleteFlags;
      if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, Context) < 0 )
        ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)MiniportAdapterHandle, v4, 1u);
      goto LABEL_25;
    }
LABEL_40:
    (*((void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, _QWORD))MiniportAdapterHandle + 327))(
      *((_QWORD *)MiniportAdapterHandle + 322),
      v4,
      SendCompleteFlags);
    goto LABEL_25;
  }
  LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
  v11 = (struct _NET_BUFFER_LIST **)v30;
  v4->Scratch = Context;
  v4->ChildRefCount = SendCompleteFlags;
  v12 = *(_BYTE *)v8 == 5;
  v22 = CurrentIrql;
  v30[2] = Context;
  v30[0] = v4;
  v30[1] = v4;
  if ( v12 )
  {
    while ( *v11 )
    {
      v13 = v8;
      v14 = v8[53] + 96 * CurrentIrql;
      v15 = *(_BYTE *)(v14 + 40);
      *(_BYTE *)(v14 + 40) = 1;
      v16 = *v11;
      v32 = v15;
      *v11 = Context;
      if ( v16 )
      {
        do
        {
          Scratch = (struct _NET_BUFFER_LIST *)v16->Scratch;
          ChildRefCount = v16->ChildRefCount;
          v16->ChildRefCount = (int)Context;
          ndisCallSendCompleteHandler(v8, v9, v10, v16, (unsigned int)Context, (unsigned int)Context, ChildRefCount);
          v16 = Scratch;
          Context = 0LL;
        }
        while ( Scratch );
        v15 = v32;
      }
      *(_BYTE *)(v14 + 40) = 0;
      if ( v15 )
      {
        *(_BYTE *)(v14 + 40) = 1;
        v4 = *v11;
        goto LABEL_22;
      }
      v8 = (_QWORD *)v8[61];
      v11 = (struct _NET_BUFFER_LIST **)(v14 + 24);
      v9 = (void (*)(void))v13[58];
      v10 = (void *)v13[59];
      CurrentIrql = v22;
      if ( *(_BYTE *)v8 != 5 )
      {
        v4 = *(PNET_BUFFER_LIST *)(v14 + 24);
        goto LABEL_22;
      }
    }
  }
  else
  {
LABEL_22:
    if ( v4 )
    {
      *v11 = Context;
      do
      {
        v18 = (struct _NET_BUFFER_LIST *)v4->Scratch;
        v21 = v4->ChildRefCount;
        v4->ChildRefCount = (int)Context;
        ndisCallSendCompleteHandler(v8, v9, v10, v4, (unsigned int)Context, (unsigned int)Context, v21);
        v4 = v18;
        LODWORD(Context) = 0;
      }
      while ( v18 );
    }
  }
LABEL_25:
  if ( (v24 & 0x10000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v23, 8u, 0x15uLL);
    if ( v31 != 2 )
      KeLowerIrql(v31);
  }
}
