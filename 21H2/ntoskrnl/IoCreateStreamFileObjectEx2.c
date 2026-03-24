/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x14071BF10
 * Callers:
 *     IoCreateStreamFileObjectLite @ 0x14071BEC0 (IoCreateStreamFileObjectLite.c)
 *     IoCreateStreamFileObjectEx @ 0x1407732A0 (IoCreateStreamFileObjectEx.c)
 *     IoCreateStreamFileObject @ 0x14077BE40 (IoCreateStreamFileObject.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IopIncrementVpbRefCount @ 0x14030F0A8 (IopIncrementVpbRefCount.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140353B90 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140354BA0 (IopIncrementDeviceObjectRefCount.c)
 *     IopGetSetSpecificExtension @ 0x140356AE8 (IopGetSetSpecificExtension.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
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
  signed int SetSpecificExtension; // edi
  _DWORD *v10; // r9
  PADAPTER_OBJECT v11; // r15
  struct _KPRCB *CurrentPrcb; // rdx
  struct _SLIST_ENTRY *v13; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  struct _DMA_ADAPTER *v15; // r15
  ULONG_PTR v16; // rcx
  __int64 result; // rax
  char *v18; // [rsp+28h] [rbp-41h]
  HANDLE Handle; // [rsp+58h] [rbp-11h] BYREF
  _QWORD *v20; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v21[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v22; // [rsp+70h] [rbp+7h]
  __int64 v23; // [rsp+78h] [rbp+Fh]
  int v24; // [rsp+80h] [rbp+17h]
  int v25; // [rsp+84h] [rbp+1Bh]
  __int128 v26; // [rsp+88h] [rbp+1Fh]
  PADAPTER_OBJECT DmaAdapter; // [rsp+C8h] [rbp+5Fh] BYREF
  struct _DMA_ADAPTER **v28; // [rsp+E0h] [rbp+77h]

  v28 = a4;
  v5 = a5;
  v6 = *(_WORD *)(a1 + 2) & 2;
  DmaAdapter = 0LL;
  v7 = a3;
  v21[1] = 0;
  v25 = 0;
  Handle = 0LL;
  *a4 = 0LL;
  if ( v5 )
    *v5 = 0LL;
  if ( *(_WORD *)a1 != 16 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(0xC00000BB);
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
      RtlRaiseStatus(0xC000000D);
    return 3221225485LL;
  }
LABEL_8:
  IopIncrementDeviceObjectRefCount(v7, 1, a3, a4);
  v21[0] = 48;
  v22 = 0LL;
  v24 = 512;
  v23 = 0LL;
  v26 = 0LL;
  LOWORD(a5) = 1;
  SetSpecificExtension = ObCreateObjectEx(0, IoFileObjectType, (__int64)v21, 0, v18, 216, 216, 0, &DmaAdapter, &a5);
  if ( SetSpecificExtension < 0 )
  {
    IopDecrementDeviceObjectRef(v7, 0, 0LL, v10);
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(SetSpecificExtension);
    return (unsigned int)SetSpecificExtension;
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
    v13 = *(struct _SLIST_ENTRY **)&v11[-1].Version;
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
      ((void (__fastcall *)(struct _SLIST_ENTRY *))P->FreeEx)(v13);
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
      v20 = 0LL;
      SetSpecificExtension = IopGetSetSpecificExtension((__int64)v15, 1u, 0x20u, 1, &v20, 0LL);
      if ( SetSpecificExtension < 0 )
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
          RtlRaiseStatus(SetSpecificExtension);
        return (unsigned int)SetSpecificExtension;
      }
      *v20 = *(_QWORD *)(a1 + 8);
    }
    *v28 = v15;
    return (unsigned int)SetSpecificExtension;
  }
  result = ObInsertObjectEx((char *)v11, 0LL, 1u, 1, 0, (__int64)&DmaAdapter, (unsigned __int64 *)&Handle);
  SetSpecificExtension = result;
  if ( (int)result >= 0 )
    goto LABEL_13;
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(result);
  return result;
}
