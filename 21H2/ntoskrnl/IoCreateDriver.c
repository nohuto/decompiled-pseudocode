/*
 * XREFs of IoCreateDriver @ 0x1407A5100
 * Callers:
 *     HaliInitPnpDriver @ 0x1407A5450 (HaliInitPnpDriver.c)
 *     ViIrpLogExposeWmiCallback @ 0x1409E4F30 (ViIrpLogExposeWmiCallback.c)
 *     VfFilterAttach @ 0x1409E5EF4 (VfFilterAttach.c)
 *     WMIInitialize @ 0x140A3DB54 (WMIInitialize.c)
 *     CmInitSystem2 @ 0x140A4C3D4 (CmInitSystem2.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 *     PiSwInit @ 0x140A544A0 (PiSwInit.c)
 *     PiDaInit @ 0x140A54550 (PiDaInit.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlStringCchLengthW @ 0x140252F04 (RtlStringCchLengthW.c)
 *     RtlStringCchPrintfW @ 0x14026D570 (RtlStringCchPrintfW.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x1403FC780 (ZwMakeTemporaryObject.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObMakeTemporaryObject @ 0x14061C330 (ObMakeTemporaryObject.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     EtwTiLogDriverObjectLoad @ 0x140772380 (EtwTiLogDriverObjectLoad.c)
 */

int __fastcall IoCreateDriver(_OWORD *a1, _DMA_OPERATIONS *a2)
{
  int result; // eax
  PADAPTER_OBJECT v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rcx
  _DMA_OPERATIONS *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _WORD *Pool; // rax
  _WORD *v12; // rbx
  unsigned __int64 v13; // rdi
  __int128 v14; // xmm0
  char *v15; // rcx
  int inserted; // ebx
  HANDLE v17; // rsi
  NTSTATUS v18; // eax
  void *v19; // rdi
  PVOID v20; // rax
  char *Object; // [rsp+20h] [rbp-E0h]
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-A0h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  PVOID v26; // [rsp+78h] [rbp-88h] BYREF
  __int128 v27; // [rsp+80h] [rbp-80h]
  _DWORD v28[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h]
  void **v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+ACh] [rbp-54h]
  __int128 v33; // [rsp+B0h] [rbp-50h]
  wchar_t pszDest[64]; // [rsp+C0h] [rbp-40h] BYREF

  v28[1] = 0;
  v32 = 0;
  DmaAdapter = 0LL;
  Handle = 0LL;
  pcchLength = 0LL;
  *(_OWORD *)Src = 0LL;
  v27 = 0LL;
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
    v30 = Src;
    v28[0] = 48;
    v29 = 0LL;
    v31 = 592;
    v33 = 0LL;
    result = ObCreateObjectEx(0, IoDriverObjectType, (__int64)v28, 0, Object, 416, 0, 0, &DmaAdapter, 0LL);
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
    Pool = IopVerifierExAllocatePool(PagedPool, LOWORD(Src[0]) + 2LL);
    *((_QWORD *)&v27 + 1) = Pool;
    v12 = Pool;
    if ( Pool )
    {
      LOWORD(v27) = Src[0];
      v13 = LOWORD(Src[0]);
      WORD1(v27) = LOWORD(Src[0]) + 2;
      memmove(Pool, Src[1], LOWORD(Src[0]));
      v14 = v27;
      v15 = (char *)DmaAdapter;
      v12[v13 >> 1] = 0;
      *(_OWORD *)(*(_QWORD *)&v4[3].Version + 24LL) = v14;
      inserted = ObInsertObjectEx(v15, 0LL, 1u, 0, 0, 0LL, (unsigned __int64 *)&Handle);
      if ( inserted < 0 )
        return inserted;
      v17 = Handle;
      v26 = 0LL;
      v18 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v26, 0LL);
      v19 = v26;
      inserted = v18;
      if ( v18 < 0 )
      {
        ZwMakeTemporaryObject(v17);
        ZwClose(v17);
        return inserted;
      }
      ZwClose(v17);
      v20 = IopVerifierExAllocatePool(NonPagedPoolNx, WORD1(Src[0]));
      *((_QWORD *)v19 + 8) = v20;
      if ( v20 )
      {
        *((_DWORD *)v19 + 14) = Src[0];
        memmove(*((void **)v19 + 8), Src[1], WORD1(Src[0]));
      }
      inserted = ((__int64 (__fastcall *)(void *, _QWORD))a2)(v19, 0LL);
      if ( inserted >= 0 )
      {
        EtwTiLogDriverObjectLoad((unsigned __int16 *)Src);
        return inserted;
      }
    }
    else
    {
      v19 = DmaAdapter;
      inserted = -1073741670;
    }
    ObMakeTemporaryObject(v19);
    HalPutDmaAdapter((PADAPTER_OBJECT)v19);
    return inserted;
  }
  return result;
}
