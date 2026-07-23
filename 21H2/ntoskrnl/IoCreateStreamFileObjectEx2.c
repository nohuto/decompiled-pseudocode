/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x1406C9360
 * Callers:
 *     IoCreateStreamFileObjectLite @ 0x1406C9310 (IoCreateStreamFileObjectLite.c)
 *     IoCreateStreamFileObjectEx @ 0x140773460 (IoCreateStreamFileObjectEx.c)
 *     IoCreateStreamFileObject @ 0x14077C000 (IoCreateStreamFileObject.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IopIncrementVpbRefCount @ 0x140319DF8 (IopIncrementVpbRefCount.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x14035E8E0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14035F8F0 (IopIncrementDeviceObjectRefCount.c)
 *     IopGetSetSpecificExtension @ 0x140361838 (IopGetSetSpecificExtension.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

__int64 __fastcall IoCreateStreamFileObjectEx2(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        struct _DMA_ADAPTER **a4,
        HANDLE *a5)
{
  HANDLE *v5; // r14
  __int16 v6; // r12
  ULONG_PTR v7; // r13
  NTSTATUS Object; // edi
  PADAPTER_OBJECT v10; // r15
  struct _KPRCB *CurrentPrcb; // rdx
  _SLIST_ENTRY *v12; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  struct _DMA_ADAPTER *v14; // r15
  ULONG_PTR v15; // rcx
  __int64 result; // rax
  HANDLE Handle; // [rsp+58h] [rbp-11h] BYREF
  _QWORD *v18; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v19[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v20; // [rsp+70h] [rbp+7h]
  __int64 v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+84h] [rbp+1Bh]
  __int128 v24; // [rsp+88h] [rbp+1Fh]
  PADAPTER_OBJECT DmaAdapter; // [rsp+C8h] [rbp+5Fh] BYREF
  struct _DMA_ADAPTER **v26; // [rsp+E0h] [rbp+77h]

  v26 = a4;
  v5 = a5;
  v6 = *(_WORD *)(a1 + 2) & 2;
  DmaAdapter = 0LL;
  v7 = a3;
  v19[1] = 0;
  v23 = 0;
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
  IopIncrementDeviceObjectRefCount(v7, 1);
  v19[0] = 48;
  v20 = 0LL;
  v22 = 512;
  v21 = 0LL;
  v24 = 0LL;
  LOWORD(a5) = 1;
  Object = ObCreateObjectEx(0, (_DWORD)IoFileObjectType, (unsigned int)v19, 0);
  if ( Object < 0 )
  {
    IopDecrementDeviceObjectRef(v7, 0, 0);
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(Object);
    return (unsigned int)Object;
  }
  v10 = DmaAdapter;
  memset(DmaAdapter, 0, 0xD8uLL);
  *(_DWORD *)&v10->Version = 14155781;
  v10->DmaOperations = (_DMA_OPERATIONS *)v7;
  *(_DWORD *)&v10[5].Version = 256;
  KeInitializeEvent((PRKEVENT)&v10[9].DmaOperations, SynchronizationEvent, 0);
  v10[11].DmaOperations = 0LL;
  v10[12].DmaOperations = (_DMA_OPERATIONS *)&v10[12];
  *(_QWORD *)&v10[12].Version = v10 + 12;
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = *(_SLIST_ENTRY **)&v10[-1].Version;
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v12);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v12);
    }
    *(_QWORD *)&v10[-1].Version = 0LL;
LABEL_13:
    v14 = DmaAdapter;
    *(_DWORD *)&DmaAdapter[5].Version |= 0x40000u;
    v15 = *(_QWORD *)(v7 + 56);
    if ( v15 )
      IopIncrementVpbRefCount(v15, 1);
    if ( !v6 )
    {
      if ( v5 )
      {
        *v5 = Handle;
        HalPutDmaAdapter(v14);
      }
      else
      {
        ObCloseHandle(Handle, 0);
      }
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      v18 = 0LL;
      Object = IopGetSetSpecificExtension((__int64)v14, 1u, 0x20u, 1, &v18, 0LL);
      if ( Object < 0 )
      {
        if ( v5 )
        {
          ObCloseHandle(*v5, 0);
          *v5 = 0LL;
        }
        else
        {
          HalPutDmaAdapter(v14);
        }
        if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
          RtlRaiseStatus(Object);
        return (unsigned int)Object;
      }
      *v18 = *(_QWORD *)(a1 + 8);
    }
    *v26 = v14;
    return (unsigned int)Object;
  }
  result = ObInsertObjectEx(v10, 0LL, 0, (__int64)&DmaAdapter, (__int64)&Handle);
  Object = result;
  if ( (int)result >= 0 )
    goto LABEL_13;
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(result);
  return result;
}
