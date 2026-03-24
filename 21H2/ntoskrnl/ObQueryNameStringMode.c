/*
 * XREFs of ObQueryNameStringMode @ 0x140718E10
 * Callers:
 *     IopGetRelatedFileName @ 0x1405D87C8 (IopGetRelatedFileName.c)
 *     EtwpEnumerateAddressSpace @ 0x14061A45C (EtwpEnumerateAddressSpace.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     IopQueryNameInternal @ 0x140620504 (IopQueryNameInternal.c)
 *     IoGetDeviceProperty @ 0x14063FC90 (IoGetDeviceProperty.c)
 *     IopGraftName @ 0x14069E8A4 (IopGraftName.c)
 *     CmpQueryNameString @ 0x140716838 (CmpQueryNameString.c)
 *     SepQueryNameString @ 0x14071869C (SepQueryNameString.c)
 *     PspInitializeFullProcessImageName @ 0x140718754 (PspInitializeFullProcessImageName.c)
 *     ObQueryNameString @ 0x140718930 (ObQueryNameString.c)
 *     NtQueryObject @ 0x140718950 (NtQueryObject.c)
 *     IoRegisterDeviceInterface @ 0x140748ED0 (IoRegisterDeviceInterface.c)
 *     PnpBuildCmResourceList @ 0x140751180 (PnpBuildCmResourceList.c)
 *     IopErrorLogThread @ 0x140755770 (IopErrorLogThread.c)
 *     IopRaiseHardError @ 0x140891C00 (IopRaiseHardError.c)
 *     AlpcpGetPortNameInformation @ 0x1408C3048 (AlpcpGetPortNameInformation.c)
 *     MmGetFileNameForAddress @ 0x1408C4044 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1408C415C (MmGetFileNameForSection.c)
 *     ObGetObjectInformation @ 0x1408DD478 (ObGetObjectInformation.c)
 *     SmKmFileInfoGetPath @ 0x14092B4A4 (SmKmFileInfoGetPath.c)
 *     SmKmStoreFileOpenVolume @ 0x14092CCD4 (SmKmStoreFileOpenVolume.c)
 *     EtwpTraceHandle @ 0x14093767C (EtwpTraceHandle.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14027C930 (PsGetCurrentSilo.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1403604C8 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413F40 (memmove.c)
 */

__int64 __fastcall ObQueryNameStringMode(char *a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  signed __int64 *v9; // r14
  unsigned __int64 v10; // rdx
  char *v11; // rdi
  __int64 (__fastcall *v12)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char); // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  char *v15; // rax
  void **v16; // rax
  struct _DMA_ADAPTER *v17; // rdi
  unsigned int v18; // edx
  char *v19; // rcx
  char *v20; // rcx
  ULONG_PTR v21; // rcx
  ULONG_PTR v22; // rcx
  _WORD *v23; // rcx
  size_t v24; // r8
  char *v25; // rcx
  struct _DMA_ADAPTER *v26; // rdi
  struct _DMA_ADAPTER *v27; // rcx
  struct _DMA_ADAPTER *v28; // rdi
  size_t v29; // r8
  _WORD *v30; // rdx
  unsigned int v31; // ecx
  ULONG_PTR v32; // rcx
  _WORD *v33; // rdx
  char v34; // [rsp+40h] [rbp-D8h]
  char v35; // [rsp+41h] [rbp-D7h]
  int v36; // [rsp+44h] [rbp-D4h]
  unsigned int v37; // [rsp+48h] [rbp-D0h]
  struct _DMA_ADAPTER *DmaAdapter; // [rsp+50h] [rbp-C8h]
  _WORD *v39; // [rsp+58h] [rbp-C0h]
  unsigned int v40; // [rsp+58h] [rbp-C0h]
  unsigned int v41; // [rsp+60h] [rbp-B8h]
  _WORD *v42; // [rsp+68h] [rbp-B0h]
  signed __int64 *BugCheckParameter2; // [rsp+70h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2a; // [rsp+70h] [rbp-A8h]
  char *v45; // [rsp+78h] [rbp-A0h]
  char *v46; // [rsp+78h] [rbp-A0h]
  struct _DMA_ADAPTER *v47; // [rsp+78h] [rbp-A0h]
  char *v48; // [rsp+80h] [rbp-98h]
  void **v49; // [rsp+88h] [rbp-90h]
  char *v50; // [rsp+90h] [rbp-88h]
  signed __int64 *v51; // [rsp+98h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-60h]
  struct _KTHREAD *v53; // [rsp+C0h] [rbp-58h]
  struct _KTHREAD *v54; // [rsp+C8h] [rbp-50h]
  struct _KTHREAD *v55; // [rsp+D0h] [rbp-48h]

  v34 = 1;
  v35 = 0;
  v41 = 0;
  DmaAdapter = 0LL;
  v36 = -1073741823;
  v9 = (signed __int64 *)(a1 - 48);
  v10 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  if ( (*(a1 - 22) & 2) != 0 )
    v11 = (char *)v9 - ObpInfoMaskToOffset[*(a1 - 22) & 3];
  else
    v11 = 0LL;
  v49 = (void **)v11;
  v12 = *(__int64 (__fastcall **)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char))(ObTypeIndexTable[v10] + 160);
  if ( v12 )
  {
    if ( v11 && *((_WORD *)v11 + 4) )
      LOBYTE(v10) = 1;
    else
      v10 = 0LL;
    v36 = v12(a1, v10, a2, a3, a4, a5);
LABEL_7:
    if ( v36 >= 0 )
LABEL_8:
      *(_DWORD *)(a2 + 4) = 0;
    return (unsigned int)v36;
  }
  CurrentSilo = PsGetCurrentSilo();
  v15 = (char *)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
  v48 = v15;
  while ( v11 )
  {
    if ( a1 != v15 && a1 != ObpRootDirectoryObject )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v9 + 2), 0LL);
      v16 = v49;
      v17 = (struct _DMA_ADAPTER *)*v49;
      v45 = (char *)*v49;
      if ( *v49 )
      {
        ObfReferenceObject(v17);
        DmaAdapter = v17;
        v16 = v49;
      }
      v37 = *((unsigned __int16 *)v16 + 4) + 2;
      if ( _InterlockedCompareExchange64(v9 + 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v9 + 2);
      KeAbPostRelease((ULONG_PTR)(v9 + 2));
      KeLeaveCriticalRegion();
      v18 = v37;
      v19 = v45;
      while ( v19 != v48 && v19 != ObpRootDirectoryObject && v19 && (*((_DWORD *)v19 + 84) & 0x20) == 0 )
      {
        v50 = v19 - 48;
        v53 = KeGetCurrentThread();
        --v53->KernelApcDisable;
        BugCheckParameter2 = (signed __int64 *)(v19 - 32);
        ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
        if ( (v50[26] & 2) == 0 || (v20 = &v50[-ObpInfoMaskToOffset[v50[26] & 3]]) == 0LL || !*(_QWORD *)v20 )
        {
          v22 = (ULONG_PTR)BugCheckParameter2;
          if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared(BugCheckParameter2);
            v22 = (ULONG_PTR)BugCheckParameter2;
          }
          KeAbPostRelease(v22);
          KeLeaveCriticalRegion();
          v18 = v37 + 8;
          break;
        }
        v37 += 2 + *((unsigned __int16 *)v20 + 4);
        v46 = *(char **)v20;
        ObfReferenceObject(*(PVOID *)v20);
        v21 = (ULONG_PTR)BugCheckParameter2;
        if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared(BugCheckParameter2);
          v21 = (ULONG_PTR)BugCheckParameter2;
        }
        KeAbPostRelease(v21);
        KeLeaveCriticalRegion();
        HalPutDmaAdapter(DmaAdapter);
        v19 = v46;
        DmaAdapter = (struct _DMA_ADAPTER *)v46;
        v18 = v37;
        if ( v37 > 0xFFFF )
          goto LABEL_37;
      }
      if ( v18 <= 0xFFFF )
        goto LABEL_31;
LABEL_37:
      v36 = -1073741562;
      goto LABEL_33;
    }
    v18 = 2;
LABEL_31:
    v41 = v18 + 18;
    *a4 = v18 + 18;
    if ( a3 < v18 + 18 )
    {
      v36 = -1073741820;
LABEL_33:
      v34 = 0;
    }
    if ( DmaAdapter )
    {
      HalPutDmaAdapter(DmaAdapter);
      DmaAdapter = 0LL;
    }
    if ( !v34 )
      goto LABEL_7;
    if ( (*((_BYTE *)v9 + 26) & 2) != 0 )
      v11 = (char *)v9 - ObpInfoMaskToOffset[*((_BYTE *)v9 + 26) & 3];
    else
      v11 = 0LL;
    v49 = (void **)v11;
    if ( !v11 )
      goto LABEL_91;
    v23 = (_WORD *)(a2 + v41 - 2LL);
    *v23 = 0;
    if ( a1 == v48 || a1 == ObpRootDirectoryObject )
      goto LABEL_66;
    v24 = *((unsigned __int16 *)v11 + 4);
    v25 = (char *)v23 - v24;
    v42 = v25;
    if ( (unsigned __int64)v25 > a2 + 16 )
    {
      memmove(v25, *((const void **)v11 + 2), v24);
      v54 = KeGetCurrentThread();
      --v54->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v9 + 2), 0LL);
      v26 = *(struct _DMA_ADAPTER **)v11;
      v47 = v26;
      if ( v26 )
      {
        ObfReferenceObject(v26);
        DmaAdapter = v26;
      }
      if ( _InterlockedCompareExchange64(v9 + 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v9 + 2);
      KeAbPostRelease((ULONG_PTR)(v9 + 2));
      KeLeaveCriticalRegion();
      while ( 1 )
      {
        if ( v47 == (struct _DMA_ADAPTER *)v48
          || v47 == ObpRootDirectoryObject
          || !v47
          || (*(_DWORD *)&v47[21].Version & 0x20) != 0 )
        {
          v23 = v42;
          goto LABEL_66;
        }
        v39 = v42 - 1;
        *(v42 - 1) = 92;
        v27 = v47 - 3;
        BugCheckParameter2a = (BYTE2(v47[-2].DmaOperations) & 2) != 0
                            ? (ULONG_PTR)v27 - ObpInfoMaskToOffset[BYTE2(v47[-2].DmaOperations) & 3]
                            : 0LL;
        v55 = KeGetCurrentThread();
        --v55->KernelApcDisable;
        v51 = (signed __int64 *)&v27[1];
        ExAcquirePushLockSharedEx((ULONG_PTR)&v27[1], 0LL);
        if ( !BugCheckParameter2a || !*(_QWORD *)BugCheckParameter2a )
          break;
        HalPutDmaAdapter(DmaAdapter);
        v28 = *(struct _DMA_ADAPTER **)BugCheckParameter2a;
        v47 = *(struct _DMA_ADAPTER **)BugCheckParameter2a;
        ObfReferenceObject(*(PVOID *)BugCheckParameter2a);
        DmaAdapter = v28;
        v29 = *(unsigned __int16 *)(BugCheckParameter2a + 8);
        v42 = (_WORD *)((char *)v39 - v29);
        if ( (unsigned __int64)v39 - v29 <= a2 + 16 )
        {
          v35 = 1;
          if ( _InterlockedCompareExchange64(v51, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v51);
          KeAbPostRelease((ULONG_PTR)v51);
          KeLeaveCriticalRegion();
          goto LABEL_79;
        }
        memmove((char *)v39 - v29, *(const void **)(BugCheckParameter2a + 16), v29);
        if ( _InterlockedCompareExchange64(v51, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v51);
        KeAbPostRelease((ULONG_PTR)v51);
        KeLeaveCriticalRegion();
      }
      v32 = (ULONG_PTR)v51;
      if ( _InterlockedCompareExchange64(v51, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared(v51);
        v32 = (ULONG_PTR)v51;
      }
      KeAbPostRelease(v32);
      KeLeaveCriticalRegion();
      v23 = v42 - 4;
      v33 = v42 - 4;
      if ( (unsigned __int64)(v42 - 4) < a2 + 16 )
      {
        v23 = (_WORD *)(a2 + 16);
        v33 = (_WORD *)(a2 + 16);
      }
      *(_DWORD *)v23 = *(_DWORD *)L"...";
      v23[2] = asc_1407DC0A0[2];
      if ( v33 == (_WORD *)(a2 + 16) )
        v23 = v33 + 1;
LABEL_66:
      v30 = v23 - 1;
      *v30 = 92;
      v31 = (unsigned __int16)(a2 + v41 - ((_WORD)v23 - 2));
      v40 = v31;
      *(_WORD *)(a2 + 2) = v31;
      *(_WORD *)a2 = v31 - 2;
      *(_QWORD *)(a2 + 8) = a2 + 16;
      if ( (_WORD *)(a2 + 16) != v30 )
      {
        memmove((void *)(a2 + 16), v30, v31);
        *a4 = v40 + 16;
      }
      goto LABEL_79;
    }
    v35 = 1;
LABEL_79:
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    if ( !v35 )
      goto LABEL_82;
    if ( (*((_BYTE *)v9 + 26) & 2) != 0 )
      v11 = (char *)v9 - ObpInfoMaskToOffset[*((_BYTE *)v9 + 26) & 3];
    else
      v11 = 0LL;
    v49 = (void **)v11;
    v35 = 0;
LABEL_91:
    v15 = v48;
  }
  *a4 = 16;
  if ( a3 >= 0x10 )
  {
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
LABEL_82:
    v36 = 0;
    goto LABEL_8;
  }
  return (unsigned int)-1073741820;
}
