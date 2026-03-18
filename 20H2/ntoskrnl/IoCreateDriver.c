/*
 * XREFs of IoCreateDriver @ 0x14079A9E0
 * Callers:
 *     HaliInitPnpDriver @ 0x14079AD30 (HaliInitPnpDriver.c)
 *     ViIrpLogExposeWmiCallback @ 0x1409E6F40 (ViIrpLogExposeWmiCallback.c)
 *     VfFilterAttach @ 0x1409E7F04 (VfFilterAttach.c)
 *     WMIInitialize @ 0x140A3EFD4 (WMIInitialize.c)
 *     CmInitSystem2 @ 0x140A48A08 (CmInitSystem2.c)
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 *     PiSwInit @ 0x140A51E98 (PiSwInit.c)
 *     PiDaInit @ 0x140A51F48 (PiDaInit.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14020AC94 (IopVerifierExAllocatePool.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     RtlStringCchLengthW @ 0x140240108 (RtlStringCchLengthW.c)
 *     RtlStringCchPrintfW @ 0x140340D00 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x1403FA370 (ZwMakeTemporaryObject.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObMakeTemporaryObject @ 0x1405D6DB0 (ObMakeTemporaryObject.c)
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     EtwTiLogDriverObjectLoad @ 0x14076E000 (EtwTiLogDriverObjectLoad.c)
 */

int __fastcall IoCreateDriver(_OWORD *a1, _DMA_OPERATIONS *a2)
{
  int result; // eax
  PADAPTER_OBJECT v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rcx
  _DMA_OPERATIONS *v7; // rdx
  _WORD *Pool; // rax
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
    Pool = IopVerifierExAllocatePool(PagedPool, LOWORD(Src[0]) + 2LL);
    *((_QWORD *)&v24 + 1) = Pool;
    v9 = Pool;
    if ( Pool )
    {
      LOWORD(v24) = Src[0];
      v10 = LOWORD(Src[0]);
      WORD1(v24) = LOWORD(Src[0]) + 2;
      memmove(Pool, Src[1], LOWORD(Src[0]));
      v11 = v24;
      v12 = DmaAdapter;
      v9[v10 >> 1] = 0;
      *(_OWORD *)(*(_QWORD *)&v4[3].Version + 24LL) = v11;
      inserted = ObInsertObjectEx(v12, 0LL, 1u, 0, 0, 0LL, &Handle);
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
      v17 = IopVerifierExAllocatePool(NonPagedPoolNx, WORD1(Src[0]));
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
