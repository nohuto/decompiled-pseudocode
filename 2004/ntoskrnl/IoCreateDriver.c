/*
 * XREFs of IoCreateDriver @ 0x14078E2A0
 * Callers:
 *     HaliInitPnpDriver @ 0x14078E5F0 (HaliInitPnpDriver.c)
 *     ViIrpLogExposeWmiCallback @ 0x1409E0F20 (ViIrpLogExposeWmiCallback.c)
 *     VfFilterAttach @ 0x1409E1EE4 (VfFilterAttach.c)
 *     WMIInitialize @ 0x140A38FF0 (WMIInitialize.c)
 *     CmInitSystem2 @ 0x140A42768 (CmInitSystem2.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 *     PiSwInit @ 0x140A51818 (PiSwInit.c)
 *     PiDaInit @ 0x140A518C8 (PiDaInit.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     RtlStringCchPrintfW @ 0x140272280 (RtlStringCchPrintfW.c)
 *     RtlStringCchLengthW @ 0x140272AD8 (RtlStringCchLengthW.c)
 *     IopVerifierExAllocatePool_0 @ 0x14027C6F4 (IopVerifierExAllocatePool_0.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x1403F57A0 (ZwMakeTemporaryObject.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 *     ObMakeTemporaryObject @ 0x14070AFD0 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectLoad @ 0x14075F990 (EtwTiLogDriverObjectLoad.c)
 */

int __fastcall IoCreateDriver(_OWORD *a1, _DMA_OPERATIONS *a2)
{
  int result; // eax
  PADAPTER_OBJECT v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rcx
  _DMA_OPERATIONS *v7; // rdx
  _WORD *Pool_0; // rax
  _WORD *v9; // rbx
  unsigned __int64 v10; // rdi
  __int128 v11; // xmm0
  struct _DMA_ADAPTER *v12; // rcx
  int inserted; // ebx
  HANDLE v14; // rsi
  NTSTATUS v15; // eax
  void *v16; // rdi
  PVOID v17; // rax
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-A0h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  PVOID v23; // [rsp+78h] [rbp-88h] BYREF
  __int128 v24; // [rsp+80h] [rbp-80h]
  _DWORD v25[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h]
  void **v27; // [rsp+A0h] [rbp-60h]
  int v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+ACh] [rbp-54h]
  __int128 v30; // [rsp+B0h] [rbp-50h]
  wchar_t pszDest[64]; // [rsp+C0h] [rbp-40h] BYREF

  v25[1] = 0;
  v29 = 0;
  DmaAdapter = 0LL;
  Handle = 0LL;
  pcchLength = 0LL;
  *(_OWORD *)Src = 0LL;
  v24 = 0LL;
  if ( a1 )
  {
    *(_OWORD *)Src = *a1;
    goto LABEL_3;
  }
  RtlStringCchPrintfW(
    pszDest,
    0x3CuLL,
    L"\\Driver\\%08u",
    (unsigned int)_InterlockedIncrement(&IopUniqueDriverObjectNumber));
  result = RtlStringCchLengthW(pszDest, 0x3CuLL, &pcchLength);
  if ( result >= 0 )
  {
    if ( pcchLength > 0xFFFF )
      return -2147483643;
    LOWORD(Src[0]) = 2 * pcchLength;
    WORD1(Src[0]) = 2 * pcchLength + 2;
    Src[1] = pszDest;
LABEL_3:
    v27 = Src;
    v25[0] = 48;
    v26 = 0LL;
    v28 = 592;
    v30 = 0LL;
    result = ObCreateObjectEx(0, IoDriverObjectType, (int)v25, 0, (__int64)Object, 416, 0, 0, &DmaAdapter, 0LL);
    if ( result < 0 )
      return result;
    v4 = DmaAdapter;
    memset(DmaAdapter, 0, 0x1A0uLL);
    *(_QWORD *)&v4[3].Version = v4 + 21;
    *(_QWORD *)&v4[21].Version = v4;
    *(_DWORD *)&v4->Version = 22020100;
    *(_DWORD *)&v4[1].Version = 4;
    memset64(&v4[7], (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    v4[5].DmaOperations = a2;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      v7 = (_DMA_OPERATIONS *)i[6];
      if ( a2 >= v7 && a2 < (_DMA_OPERATIONS *)((char *)v7 + *((unsigned int *)i + 16)) )
      {
        DmaAdapter[1].DmaOperations = v7;
        break;
      }
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    Pool_0 = IopVerifierExAllocatePool_0(PagedPool, LOWORD(Src[0]) + 2LL);
    *((_QWORD *)&v24 + 1) = Pool_0;
    v9 = Pool_0;
    if ( Pool_0 )
    {
      LOWORD(v24) = Src[0];
      v10 = LOWORD(Src[0]);
      WORD1(v24) = LOWORD(Src[0]) + 2;
      memmove(Pool_0, Src[1], LOWORD(Src[0]));
      v11 = v24;
      v12 = DmaAdapter;
      v9[v10 >> 1] = 0;
      *(_OWORD *)(*(_QWORD *)&v4[3].Version + 24LL) = v11;
      inserted = ObInsertObjectEx(v12, 0LL, 1u, 0, 0, 0LL, (unsigned __int64 *)&Handle);
      if ( inserted < 0 )
        return inserted;
      v14 = Handle;
      v23 = 0LL;
      v15 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v23, 0LL);
      v16 = v23;
      inserted = v15;
      if ( v15 < 0 )
      {
        ZwMakeTemporaryObject(v14);
        ZwClose(v14);
        return inserted;
      }
      ZwClose(v14);
      v17 = IopVerifierExAllocatePool_0(NonPagedPoolNx, WORD1(Src[0]));
      *((_QWORD *)v16 + 8) = v17;
      if ( v17 )
      {
        *((_DWORD *)v16 + 14) = Src[0];
        memmove(*((void **)v16 + 8), Src[1], WORD1(Src[0]));
      }
      inserted = ((__int64 (__fastcall *)(void *, _QWORD))a2)(v16, 0LL);
      if ( inserted >= 0 )
      {
        EtwTiLogDriverObjectLoad((unsigned __int16 *)Src);
        return inserted;
      }
    }
    else
    {
      v16 = DmaAdapter;
      inserted = -1073741670;
    }
    ObMakeTemporaryObject(v16);
    HalPutDmaAdapter((PADAPTER_OBJECT)v16);
    return inserted;
  }
  return result;
}
