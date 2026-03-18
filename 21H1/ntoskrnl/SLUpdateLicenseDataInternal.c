/*
 * XREFs of SLUpdateLicenseDataInternal @ 0x140949960
 * Callers:
 *     ExUpdateLicenseData @ 0x1406EDCD0 (ExUpdateLicenseData.c)
 *     ExInitLicenseData @ 0x140791B78 (ExInitLicenseData.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x1402556F0 (PsIsHostSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x1403CE5A0 (memcmp.c)
 *     qsort @ 0x1403CE680 (qsort.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwCreateSection @ 0x1403F2C70 (ZwCreateSection.c)
 *     RtlCompareMemory @ 0x1403FE5E0 (RtlCompareMemory.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExpGetLicenseTamperState @ 0x1405AD048 (ExpGetLicenseTamperState.c)
 *     ExpLicUpdateChecksum @ 0x1405AD1A8 (ExpLicUpdateChecksum.c)
 *     ExpSetLicenseTamperState @ 0x1405AD3E4 (ExpSetLicenseTamperState.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     MmUnmapViewInSystemSpace @ 0x14063AD00 (MmUnmapViewInSystemSpace.c)
 *     ExpSetKernelDataProtection @ 0x1406B8830 (ExpSetKernelDataProtection.c)
 *     MmMapViewInSystemSpace @ 0x1406E94F0 (MmMapViewInSystemSpace.c)
 *     ExpReducedLicenseData @ 0x1406EDD30 (ExpReducedLicenseData.c)
 *     sub_1407926FC @ 0x1407926FC (sub_1407926FC.c)
 *     sub_140799C50 @ 0x140799C50 (sub_140799C50.c)
 *     ntoskrnl_24 @ 0x140948CB0 (ntoskrnl_24.c)
 *     sub_14094935C @ 0x14094935C (sub_14094935C.c)
 *     SLSendPolicyChangeNotifications @ 0x140949938 (SLSendPolicyChangeNotifications.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SLUpdateLicenseDataInternal(__int64 a1, int a2, unsigned int *a3)
{
  struct _DMA_ADAPTER *v6; // r13
  void *v7; // r12
  int v8; // ecx
  __int64 v9; // rdx
  unsigned int v10; // r9d
  char *v11; // rdi
  char v12; // r15
  volatile signed __int64 *v13; // r13
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  struct _KTHREAD *v16; // rax
  bool v17; // di
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int updated; // ecx
  __int64 v21; // r9
  NTSTATUS v22; // edi
  PVOID v23; // r12
  unsigned int *v24; // rdi
  _DWORD *v25; // rcx
  int v26; // esi
  struct _KTHREAD *v27; // rax
  size_t v28; // rdi
  PVOID PoolWithTag; // rax
  unsigned int v30; // r12d
  __int64 v31; // rax
  __int64 v32; // rsi
  int v33; // eax
  __int64 v34; // r9
  __int64 v35; // rdx
  struct _KTHREAD *v36; // rax
  __int64 v37; // rdx
  PVOID v38; // r12
  __int64 v39; // rdi
  unsigned int v40; // ecx
  __int64 v41; // r9
  struct _LIST_ENTRY *CurrentServerSilo; // rax
  char v43; // al
  bool v44; // di
  PVOID v45; // rax
  struct _KTHREAD *v46; // rax
  struct _KTHREAD *v47; // rax
  signed int v49; // [rsp+40h] [rbp-1D8h]
  bool v50; // [rsp+44h] [rbp-1D4h]
  char v51; // [rsp+45h] [rbp-1D3h]
  bool v52; // [rsp+46h] [rbp-1D2h]
  _QWORD *v53; // [rsp+48h] [rbp-1D0h]
  size_t NumOfElements; // [rsp+50h] [rbp-1C8h] BYREF
  struct _DMA_ADAPTER *v55; // [rsp+58h] [rbp-1C0h]
  unsigned int v56; // [rsp+60h] [rbp-1B8h]
  unsigned int v57; // [rsp+64h] [rbp-1B4h]
  PVOID MappedBase; // [rsp+68h] [rbp-1B0h] BYREF
  int v59; // [rsp+70h] [rbp-1A8h] BYREF
  PVOID v60; // [rsp+78h] [rbp-1A0h]
  PVOID v61; // [rsp+80h] [rbp-198h]
  LARGE_INTEGER MaximumSize; // [rsp+88h] [rbp-190h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp-188h] BYREF
  PVOID Object; // [rsp+98h] [rbp-180h] BYREF
  PVOID v65; // [rsp+A0h] [rbp-178h]
  __int128 v66; // [rsp+B0h] [rbp-168h] BYREF
  __int128 v67; // [rsp+C0h] [rbp-158h]
  __int128 v68; // [rsp+D0h] [rbp-148h]
  __int128 v69; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v70; // [rsp+F0h] [rbp-128h]
  __int128 v71; // [rsp+100h] [rbp-118h]
  int v72; // [rsp+110h] [rbp-108h]
  ULONG_PTR ViewSize; // [rsp+118h] [rbp-100h] BYREF
  void *Src; // [rsp+120h] [rbp-F8h]
  __int64 v75; // [rsp+128h] [rbp-F0h]
  __int128 v76; // [rsp+130h] [rbp-E8h] BYREF
  __int128 v77; // [rsp+140h] [rbp-D8h]
  __int128 v78; // [rsp+150h] [rbp-C8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+160h] [rbp-B8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+190h] [rbp-88h]
  struct _KTHREAD *v81; // [rsp+198h] [rbp-80h]
  __int64 v82; // [rsp+1A0h] [rbp-78h]
  _OWORD v83[7]; // [rsp+1A8h] [rbp-70h] BYREF
  char v84; // [rsp+230h] [rbp+18h]

  v52 = 0;
  v50 = 0;
  v84 = 0;
  SectionHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  MaximumSize.QuadPart = 0LL;
  MappedBase = 0LL;
  v65 = 0LL;
  v61 = 0LL;
  v6 = 0LL;
  v55 = 0LL;
  NumOfElements = 0LL;
  v7 = 0LL;
  v53 = 0LL;
  v59 = 0;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  if ( !a3 || (unsigned int)(a2 - 25) > 0xFFE7 || ((unsigned __int8)a3 & 3) != 0 )
  {
    v49 = -1073741811;
    goto LABEL_148;
  }
  v8 = *a3;
  if ( *a3 > 0x10000 || (v9 = a3[1], (unsigned int)v9 > 0x10000) || (v10 = a3[2], v10 > 0x10000) )
  {
    v49 = -1073741760;
    goto LABEL_148;
  }
  v11 = (char *)a3 + v9 + 20;
  Src = v11;
  if ( ((unsigned __int8)v11 & 3) != 0 )
  {
    v49 = -1073741811;
    v7 = 0LL;
LABEL_148:
    v12 = 1;
    goto LABEL_124;
  }
  v12 = 1;
  if ( v10 + (_DWORD)v9 + 20 != v8 || v8 != a2 || a3[4] != 1 )
  {
    v49 = -1073741811;
    v7 = 0LL;
    goto LABEL_124;
  }
  v49 = 0;
  *(_BYTE *)(a1 + 37480) = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = (volatile signed __int64 *)(a1 + 37464);
  ExAcquirePushLockSharedEx(a1 + 37464, 0LL);
  v60 = *(PVOID *)a1;
  v50 = v60 == 0LL;
  if ( !ExpReducedLicenseData() )
  {
    if ( !v60 && (a3[3] & 1) != 0 )
    {
      v49 = -1073741811;
      goto LABEL_29;
    }
LABEL_19:
    v52 = 0;
    if ( !v60 )
    {
      v14 = *(_DWORD **)(a1 + 37456);
      if ( v14 )
      {
        if ( !*(_BYTE *)(a1 + 37616) && *a3 == *v14 )
        {
          v15 = a3[1];
          if ( v15 == v14[1]
            && a3[2] == v14[2]
            && a3[3] == v14[3]
            && a3[4] == v14[4]
            && RtlCompareMemory(v14 + 5, a3 + 5, v15) == a3[1] )
          {
            v52 = RtlCompareMemory(
                    (const void *)(*(unsigned int *)(*(_QWORD *)(a1 + 37456) + 4LL) + *(_QWORD *)(a1 + 37456) + 20LL),
                    v11,
                    a3[2]) == a3[2];
          }
        }
      }
    }
    goto LABEL_29;
  }
  if ( v60 )
    goto LABEL_19;
  v49 = -1073741823;
LABEL_29:
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 37464));
  KeAbPostRelease(a1 + 37464);
  KeLeaveCriticalRegion();
  if ( v49 < 0 )
    goto LABEL_146;
  if ( v52 )
  {
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 37464, 0LL);
    ExpGetLicenseTamperState(a1, (_DWORD *)&NumOfElements + 1);
    v17 = HIDWORD(NumOfElements) != 0;
    v18 = *(unsigned int *)(a1 + 37448);
    HIDWORD(v66) = 0;
    *(_DWORD *)((char *)&v68 + 9) = 0;
    *(_WORD *)((char *)&v68 + 13) = 0;
    HIBYTE(v68) = 0;
    if ( !(_DWORD)v18 || a1 != -24 )
    {
      *(_QWORD *)&v66 = 0LL;
      v67 = 0uLL;
      DWORD2(v66) = 0;
      *(_QWORD *)&v68 = 10800LL;
      BYTE8(v68) = 1;
      updated = ExpLicUpdateChecksum((__int64)(a3 + 5), v18, &v66);
      if ( !updated )
      {
        if ( (_DWORD)v19 )
        {
          updated = (unsigned __int64)(16 * v19) > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( (unsigned __int64)(16 * v19) <= 0xFFFFFFFF )
            updated = ExpLicUpdateChecksum(v21, 0xFFFFFFFFLL, &v66);
        }
      }
      if ( updated )
      {
        *(_QWORD *)&v66 = 0LL;
        DWORD2(v66) = 4;
      }
      v76 = v66;
      v77 = v67;
      v78 = v68;
      ExpSetKernelDataProtection(a1, (__int64)&v76, 7, 1);
    }
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 37464);
    KeAbPostRelease(a1 + 37464);
    KeLeaveCriticalRegion();
    if ( v17 )
      SLSendPolicyChangeNotifications(a1);
    v49 = 0x40000000;
LABEL_47:
    v7 = 0LL;
LABEL_48:
    v6 = 0LL;
    goto LABEL_124;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 544;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MaximumSize.QuadPart = *a3;
  v49 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v49 < 0 )
    goto LABEL_146;
  Object = 0LL;
  v22 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
  v23 = Object;
  v61 = Object;
  v49 = v22;
  ZwClose(SectionHandle);
  if ( v22 < 0 || (ViewSize = 0LL, v49 = MmMapViewInSystemSpace(v23, &MappedBase, &ViewSize), v49 < 0) )
  {
LABEL_146:
    v7 = 0LL;
    v6 = 0LL;
    goto LABEL_124;
  }
  v24 = (unsigned int *)MappedBase;
  *(_OWORD *)MappedBase = *(_OWORD *)a3;
  v24[4] = a3[4];
  memmove(v24 + 5, a3 + 5, a3[1]);
  memmove((char *)v24 + a3[1] + 20, Src, a3[2]);
  v25 = (unsigned int *)((char *)v24 + v24[1] + 20);
  v26 = 0;
  if ( v24[2] != 4 || !v25 || *v25 != 69 )
  {
    v49 = -1073741761;
    v7 = 0LL;
    v6 = 0LL;
    goto LABEL_124;
  }
  v49 = sub_1407926FC((__int64)v24, 1, 0LL, 0, (unsigned int *)&NumOfElements);
  if ( v49 == -1073741789 )
  {
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    ExAcquirePushLockSharedEx(a1 + 37464, 0LL);
    v49 = (unsigned int)NumOfElements > 0x923 ? 0xC000000D : 0;
    if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 37464));
    KeAbPostRelease(a1 + 37464);
    KeLeaveCriticalRegion();
    if ( v49 < 0 )
      goto LABEL_47;
    v28 = (unsigned int)NumOfElements;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)NumOfElements, 0x20534C53u);
    v7 = PoolWithTag;
    v53 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v49 = -1073741801;
      goto LABEL_48;
    }
    v49 = sub_1407926FC((__int64)MappedBase, 0, PoolWithTag, NumOfElements, 0LL);
    if ( v49 >= 0 )
      qsort(v7, v28, 0x10uLL, (int (__cdecl *)(const void *, const void *))sub_140799C50);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v49 < 0 )
  {
    v6 = 0LL;
    if ( v49 == -1073741762 )
      v49 = -1073741811;
    goto LABEL_124;
  }
  v51 = 0;
  v81 = KeGetCurrentThread();
  --v81->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 37464, 0LL);
  if ( !v60 )
  {
    v30 = 0;
    v57 = 0;
    v31 = 0LL;
    v56 = 0;
    while ( v30 < (unsigned int)NumOfElements )
    {
      if ( (unsigned int)v31 >= *(_DWORD *)(a1 + 37448) )
      {
        while ( v30 < (unsigned int)NumOfElements )
        {
          v75 = v53[2 * v30 + 1];
          if ( (*(_DWORD *)(v75 + 8) & 2) != 0 )
            goto LABEL_73;
          v57 = ++v30;
        }
        break;
      }
      v32 = (unsigned int)v31;
      v33 = sub_140799C50(&v53[2 * v30], (_QWORD *)(16 * v31 + a1 + 24));
      v72 = v33;
      v34 = v53[2 * v30 + 1];
      v75 = v34;
      v35 = *(_QWORD *)(a1 + 16 * (v32 + 2));
      v82 = v35;
      v26 = 0;
      if ( v33 >= 0 )
      {
        if ( v33 <= 0 )
        {
          if ( (*(_DWORD *)(v34 + 8) & 2) != 0
            && (*(_WORD *)(v34 + 6) != *(_WORD *)(v35 + 6)
             || memcmp(
                  (const void *)(*(unsigned __int16 *)(v34 + 2) + v34 + 16),
                  (const void *)(*(unsigned __int16 *)(v35 + 2) + 16LL + v35),
                  *(unsigned __int16 *)(v35 + 6))) )
          {
LABEL_73:
            v51 = 1;
            break;
          }
          v57 = ++v30;
        }
        v31 = ++v56;
      }
      else
      {
        if ( (*(_DWORD *)(v34 + 8) & 2) != 0 )
          goto LABEL_73;
        v57 = ++v30;
        v31 = v56;
      }
    }
  }
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 37464));
  KeAbPostRelease(a1 + 37464);
  KeLeaveCriticalRegion();
  ObfReferenceObject(v61);
  v36 = KeGetCurrentThread();
  --v36->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 37464, 0LL);
  HIDWORD(v69) = 0;
  *(_DWORD *)((char *)&v71 + 9) = 0;
  *(_WORD *)((char *)&v71 + 13) = 0;
  HIBYTE(v71) = 0;
  v38 = MappedBase;
  if ( MappedBase )
  {
    v39 = (unsigned int)NumOfElements;
    if ( !(_DWORD)NumOfElements || v53 )
    {
      *(_QWORD *)&v69 = 0LL;
      v70 = 0uLL;
      DWORD2(v69) = 0;
      *(_QWORD *)&v71 = 10800LL;
      BYTE8(v71) = 1;
      v40 = ExpLicUpdateChecksum((__int64)MappedBase + 20, v37, &v69);
      if ( !v40 )
      {
        if ( (_DWORD)v39 )
        {
          v40 = (unsigned __int64)(16 * v39) > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( (unsigned __int64)(16 * v39) <= 0xFFFFFFFF )
            v40 = ExpLicUpdateChecksum(v41, 0xFFFFFFFFLL, &v69);
        }
      }
      if ( v40 )
      {
        *(_QWORD *)&v69 = 0LL;
        DWORD2(v69) = 4;
      }
      v76 = v69;
      v77 = v70;
      v78 = v71;
      goto LABEL_98;
    }
  }
  else
  {
    LODWORD(v39) = NumOfElements;
  }
  v26 = -1073741811;
LABEL_98:
  v49 = v26;
  if ( v26 < 0 )
  {
    v44 = 0;
  }
  else
  {
    ExpSetKernelDataProtection(a1, (__int64)&v76, 7, 1);
    v55 = *(struct _DMA_ADAPTER **)(a1 + 16);
    v65 = *(PVOID *)(a1 + 37456);
    *(_QWORD *)(a1 + 16) = v61;
    *(_QWORD *)(a1 + 37456) = v38;
    MappedBase = 0LL;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo((__int64)CurrentServerSilo) && *(_QWORD *)a1 )
      ExFreePoolWithTag(*(PVOID *)a1, 0x69534C53u);
    *(_QWORD *)a1 = 0LL;
    v84 = *(_BYTE *)(a1 + 37616);
    *(_BYTE *)(a1 + 37616) = 0;
    memset((void *)(a1 + 24), 0, 16LL * *(unsigned int *)(a1 + 37448));
    *(_DWORD *)(a1 + 37448) = 0;
    if ( v53 )
    {
      memmove((void *)(a1 + 24), v53, 16LL * (unsigned int)v39);
      *(_DWORD *)(a1 + 37448) = v39;
    }
    *(_BYTE *)(a1 + 37452) = 1;
    ExpGetLicenseTamperState(a1, &v59);
    v43 = v50;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 37456) + 12LL) & 1) != 0 )
      v43 = 1;
    v50 = v43;
    ExpSetLicenseTamperState(a1, 2 * (*(_DWORD *)(*(_QWORD *)(a1 + 37456) + 12LL) & 1));
    ExpGetLicenseTamperState(a1, (_DWORD *)&NumOfElements + 1);
    v44 = v59 != HIDWORD(NumOfElements) && (!v59 || !HIDWORD(NumOfElements));
  }
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 37464);
  KeAbPostRelease(a1 + 37464);
  KeLeaveCriticalRegion();
  if ( v26 < 0 )
    goto LABEL_123;
  v45 = v60;
  if ( v60 )
    goto LABEL_118;
  v49 = sub_14094935C(a1);
  if ( v49 < 0 )
  {
LABEL_123:
    v6 = v55;
    v7 = v53;
    goto LABEL_124;
  }
  v45 = v60;
LABEL_118:
  if ( v44 || !v45 )
    SLSendPolicyChangeNotifications(a1);
  v49 = 0;
  v7 = v53;
  v6 = v55;
  if ( v51 == 1 )
    v49 = 263;
LABEL_124:
  if ( v84 && !*(_BYTE *)(a1 + 37616) )
    ntoskrnl_24(&KernelLicensingCacheCorruptionFixed);
  if ( v50 )
  {
    v46 = KeGetCurrentThread();
    --v46->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 37464, 0LL);
    memset(v83, 0, 48);
    ExpSetKernelDataProtection(a1, (__int64)v83, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 37464), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 37464);
    KeAbPostRelease(a1 + 37464);
    KeLeaveCriticalRegion();
  }
  if ( v61 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v61);
  if ( v6 )
    HalPutDmaAdapter(v6);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v65 )
    MmUnmapViewInSystemSpace(v65);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v49 == -1073741811 || (unsigned int)(v49 + 1073741761) <= 1 )
  {
    v47 = KeGetCurrentThread();
    --v47->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 37464, 0LL);
    ExpGetLicenseTamperState(a1, (_DWORD *)&NumOfElements + 1);
    if ( HIDWORD(NumOfElements) )
      v12 = 0;
    else
      ExpSetLicenseTamperState(a1, 5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 37464), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 37464);
    KeAbPostRelease(a1 + 37464);
    KeLeaveCriticalRegion();
    if ( v12 )
      SLSendPolicyChangeNotifications(a1);
  }
  return (unsigned int)v49;
}
