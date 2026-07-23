/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x1405D9BF0
 * Callers:
 *     IoCreateStreamFileObjectLite @ 0x1405D9BA0 (IoCreateStreamFileObjectLite.c)
 *     IoCreateStreamFileObjectEx @ 0x14076F210 (IoCreateStreamFileObjectEx.c)
 *     IoCreateStreamFileObject @ 0x140777E90 (IoCreateStreamFileObject.c)
 * Callees:
 *     IopIncrementVpbRefCount @ 0x14020B07C (IopIncrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x14020D560 (IopDecrementDeviceObjectRef.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14020DD20 (IopIncrementDeviceObjectRefCount.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     IopGetSetSpecificExtension @ 0x14029F8F4 (IopGetSetSpecificExtension.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
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
  __int64 v14; // r9
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
  IopIncrementDeviceObjectRefCount(v7, 1);
  v20[0] = 48;
  v21 = 0LL;
  v23 = 512;
  v22 = 0LL;
  v25 = 0LL;
  LOWORD(a5) = 1;
  Object = ObCreateObjectEx(0, (_DWORD)IoFileObjectType, (unsigned int)v20, 0);
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
      LOBYTE(v14) = 1;
      Object = IopGetSetSpecificExtension((__int64)v15, 1u, 32LL, v14, &v19, 0LL);
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
  result = ObInsertObjectEx(v10, 0, (__int64)&DmaAdapter, (__int64)&Handle);
  Object = result;
  if ( (int)result >= 0 )
    goto LABEL_13;
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(result);
  return result;
}
