/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x140702350
 * Callers:
 *     IoCreateStreamFileObjectLite @ 0x140702300 (IoCreateStreamFileObjectLite.c)
 *     IoCreateStreamFileObjectEx @ 0x14075E830 (IoCreateStreamFileObjectEx.c)
 *     IoCreateStreamFileObject @ 0x1407674A0 (IoCreateStreamFileObject.c)
 * Callees:
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140254800 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140255810 (IopIncrementDeviceObjectRefCount.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     IopGetSetSpecificExtension @ 0x140281A24 (IopGetSetSpecificExtension.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     IopIncrementVpbRefCount @ 0x14033F614 (IopIncrementVpbRefCount.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 */

__int64 IoCreateStreamFileObjectEx2(__int64 a1, __int64 a2, ULONG_PTR a3, struct _DMA_ADAPTER **a4, ...)
{
  HANDLE *v4; // r14
  __int16 v5; // r12
  ULONG_PTR v6; // r13
  NTSTATUS SetSpecificExtension; // edi
  PADAPTER_OBJECT v9; // r15
  struct _KPRCB *CurrentPrcb; // rdx
  _SLIST_ENTRY *v11; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  struct _DMA_ADAPTER *v13; // r15
  ULONG_PTR v14; // rcx
  __int64 result; // rax
  __int64 v16; // [rsp+28h] [rbp-41h]
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
  HANDLE *v27; // [rsp+E8h] [rbp+7Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+7Fh]
  va_list va1; // [rsp+F0h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v27 = va_arg(va1, HANDLE *);
  v26 = a4;
  v4 = v27;
  v5 = *(_WORD *)(a1 + 2) & 2;
  DmaAdapter = 0LL;
  v6 = a3;
  v19[1] = 0;
  v23 = 0;
  Handle = 0LL;
  *a4 = 0LL;
  if ( v4 )
    *v4 = 0LL;
  if ( *(_WORD *)a1 != 16 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741637);
    return 3221225659LL;
  }
  if ( v5 && v4 )
    goto LABEL_33;
  if ( a2 )
  {
    v6 = *(_QWORD *)(a2 + 8);
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
  IopIncrementDeviceObjectRefCount(v6, 1);
  v19[0] = 48;
  v20 = 0LL;
  v22 = 512;
  v21 = 0LL;
  v24 = 0LL;
  LOWORD(v27) = 1;
  SetSpecificExtension = ObCreateObjectEx(
                           0,
                           IoFileObjectType,
                           (__int64)v19,
                           0,
                           v16,
                           216,
                           216,
                           0,
                           &DmaAdapter,
                           (HANDLE **)va);
  if ( SetSpecificExtension < 0 )
  {
    IopDecrementDeviceObjectRef(v6, 0);
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(SetSpecificExtension);
    return (unsigned int)SetSpecificExtension;
  }
  v9 = DmaAdapter;
  memset(DmaAdapter, 0, 0xD8uLL);
  *(_DWORD *)&v9->Version = 14155781;
  v9->DmaOperations = (_DMA_OPERATIONS *)v6;
  *(_DWORD *)&v9[5].Version = 256;
  KeInitializeEvent((PRKEVENT)&v9[9].DmaOperations, SynchronizationEvent, 0);
  v9[11].DmaOperations = 0LL;
  v9[12].DmaOperations = (_DMA_OPERATIONS *)&v9[12];
  *(_QWORD *)&v9[12].Version = v9 + 12;
  if ( v5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = *(_SLIST_ENTRY **)&v9[-1].Version;
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v11);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v11);
    }
    *(_QWORD *)&v9[-1].Version = 0LL;
LABEL_13:
    v13 = DmaAdapter;
    *(_DWORD *)&DmaAdapter[5].Version |= 0x40000u;
    v14 = *(_QWORD *)(v6 + 56);
    if ( v14 )
      IopIncrementVpbRefCount(v14, 1);
    if ( !v5 )
    {
      if ( v4 )
      {
        *v4 = Handle;
        HalPutDmaAdapter(v13);
      }
      else
      {
        ObCloseHandle(Handle, 0);
      }
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      v18 = 0LL;
      SetSpecificExtension = IopGetSetSpecificExtension((__int64)v13, 1u, 0x20u, 1, &v18, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        if ( v4 )
        {
          ObCloseHandle(*v4, 0);
          *v4 = 0LL;
        }
        else
        {
          HalPutDmaAdapter(v13);
        }
        if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
          RtlRaiseStatus(SetSpecificExtension);
        return (unsigned int)SetSpecificExtension;
      }
      *v18 = *(_QWORD *)(a1 + 8);
    }
    *v26 = v13;
    return (unsigned int)SetSpecificExtension;
  }
  result = ObInsertObjectEx(v9, 0LL, 1u, 1, 0, (__int64)&DmaAdapter, &Handle);
  SetSpecificExtension = result;
  if ( (int)result >= 0 )
    goto LABEL_13;
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(result);
  return result;
}
