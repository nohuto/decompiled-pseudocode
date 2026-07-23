/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x140635260
 * Callers:
 *     IoCreateStreamFileObjectLite @ 0x140635210 (IoCreateStreamFileObjectLite.c)
 *     IoCreateStreamFileObjectEx @ 0x140760C00 (IoCreateStreamFileObjectEx.c)
 *     IoCreateStreamFileObject @ 0x140769880 (IoCreateStreamFileObject.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     IopGetSetSpecificExtension @ 0x1402289D4 (IopGetSetSpecificExtension.c)
 *     IopIncrementVpbRefCount @ 0x14026FFD4 (IopIncrementVpbRefCount.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140291080 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140292090 (IopIncrementDeviceObjectRefCount.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 */

__int64 __fastcall IoCreateStreamFileObjectEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _DMA_ADAPTER **a4,
        HANDLE *a5)
{
  HANDLE *v5; // r14
  __int16 v6; // r12
  ULONG_PTR v7; // r13
  NTSTATUS Object; // edi
  _DWORD *v10; // r9
  PADAPTER_OBJECT v11; // r15
  struct _KPRCB *CurrentPrcb; // rdx
  _SLIST_ENTRY *v13; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  struct _DMA_ADAPTER *v15; // r15
  ULONG_PTR v16; // rcx
  __int64 result; // rax
  HANDLE Handle; // [rsp+58h] [rbp-11h] BYREF
  _QWORD *v19; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v20[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v21; // [rsp+70h] [rbp+7h]
  __int64 v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+84h] [rbp+1Bh]
  __int128 v25; // [rsp+88h] [rbp+1Fh]
  PADAPTER_OBJECT DmaAdapter; // [rsp+C8h] [rbp+5Fh] BYREF
  struct _DMA_ADAPTER **v27; // [rsp+E0h] [rbp+77h]

  v27 = a4;
  v5 = a5;
  v6 = *(_WORD *)(a1 + 2) & 2;
  DmaAdapter = 0LL;
  v7 = a3;
  v20[1] = 0;
  v24 = 0;
  Handle = 0LL;
  *a4 = 0LL;
  if ( v5 )
    *v5 = 0LL;
  if ( *(_WORD *)a1 != 16 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741637);
    return 3221225659LL;
  }
  if ( v6 && v5 )
    goto LABEL_33;
  if ( a2 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    goto LABEL_8;
  }
  if ( !a3 )
  {
LABEL_33:
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741811);
    return 3221225485LL;
  }
LABEL_8:
  IopIncrementDeviceObjectRefCount(v7, 1, a3, a4);
  v20[0] = 48;
  v21 = 0LL;
  v23 = 512;
  v22 = 0LL;
  v25 = 0LL;
  LOWORD(a5) = 1;
  Object = ObCreateObjectEx(0, (_DWORD)IoFileObjectType, (unsigned int)v20, 0);
  if ( Object < 0 )
  {
    IopDecrementDeviceObjectRef(v7, 0, 0LL, v10);
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(Object);
    return (unsigned int)Object;
  }
  v11 = DmaAdapter;
  memset(DmaAdapter, 0, 0xD8uLL);
  *(_DWORD *)&v11->Version = 14155781;
  v11->DmaOperations = (_DMA_OPERATIONS *)v7;
  *(_DWORD *)&v11[5].Version = 256;
  KeInitializeEvent((PRKEVENT)&v11[9].DmaOperations, SynchronizationEvent, 0);
  v11[11].DmaOperations = 0LL;
  v11[12].DmaOperations = (_DMA_OPERATIONS *)&v11[12];
  *(_QWORD *)&v11[12].Version = v11 + 12;
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = *(_SLIST_ENTRY **)&v11[-1].Version;
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v13);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v13);
    }
    *(_QWORD *)&v11[-1].Version = 0LL;
LABEL_13:
    v15 = DmaAdapter;
    *(_DWORD *)&DmaAdapter[5].Version |= 0x40000u;
    v16 = *(_QWORD *)(v7 + 56);
    if ( v16 )
      IopIncrementVpbRefCount(v16, 1);
    if ( !v6 )
    {
      if ( v5 )
      {
        *v5 = Handle;
        HalPutDmaAdapter(v15);
      }
      else
      {
        ObCloseHandle(Handle, 0);
      }
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      v19 = 0LL;
      Object = IopGetSetSpecificExtension((__int64)v15, 1u, 0x20u, 1, &v19, 0LL);
      if ( Object < 0 )
      {
        if ( v5 )
        {
          ObCloseHandle(*v5, 0);
          *v5 = 0LL;
        }
        else
        {
          HalPutDmaAdapter(v15);
        }
        if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
          RtlRaiseStatus(Object);
        return (unsigned int)Object;
      }
      *v19 = *(_QWORD *)(a1 + 8);
    }
    *v27 = v15;
    return (unsigned int)Object;
  }
  result = ObInsertObjectEx(v11, 0LL, 0, (__int64)&DmaAdapter, (__int64)&Handle);
  Object = result;
  if ( (int)result >= 0 )
    goto LABEL_13;
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(result);
  return result;
}
