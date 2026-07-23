/*
 * XREFs of MiValidateSectionCreate @ 0x1406C32C0
 * Callers:
 *     MiValidateSectionSigningPolicy @ 0x1406C2794 (MiValidateSectionSigningPolicy.c)
 *     MiPromoteControlAreaToStrongCode @ 0x1408CDD50 (MiPromoteControlAreaToStrongCode.c)
 *     MiMapImageForEnclaveUse @ 0x1408D3B1C (MiMapImageForEnclaveUse.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     PsSetSystemPagePriorityThread @ 0x14028F880 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x14028F8D8 (PsRevertToUserPagePriorityThread.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14030F0DC (MiFlushEntireTbDueToAttributeChange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeZeroSinglePage @ 0x140402F50 (KeZeroSinglePage.c)
 *     KeCopyPage @ 0x140403030 (KeCopyPage.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiImageCantMove @ 0x140554EC0 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x140554F60 (MiStrongCodeImage.c)
 *     MiDereferencePerSessionProtos @ 0x14061B9CC (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x14061BAE4 (MiCreatePerSessionProtos.c)
 *     MiUnmapImageInSystemSpace @ 0x1406C3BF4 (MiUnmapImageInSystemSpace.c)
 *     SeValidateImageHeader @ 0x1406C3C44 (SeValidateImageHeader.c)
 *     MiMapImageInSystemSpace @ 0x1406C3D80 (MiMapImageInSystemSpace.c)
 *     MiRevertRelocations @ 0x1406C3F08 (MiRevertRelocations.c)
 *     MiPrefetchControlArea @ 0x1406C3FE8 (MiPrefetchControlArea.c)
 *     SeReleaseImageValidationContext @ 0x14078EA34 (SeReleaseImageValidationContext.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1408D7CC0 (MiCaptureSecureImageBaseAddress.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiValidateSectionCreate(
        ULONG_PTR a1,
        ULONG_PTR a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        char a7)
{
  unsigned int v9; // ebx
  struct _KTHREAD *CurrentThread; // r12
  __int64 result; // rax
  int v12; // r13d
  int v13; // r15d
  int PerSessionProtos; // ebx
  ULONG_PTR v15; // r15
  int v16; // r9d
  __int64 v17; // r8
  signed __int64 v18; // rbx
  int v19; // r13d
  unsigned __int64 v20; // rax
  int v21; // r11d
  unsigned int v22; // r10d
  __int64 v23; // rax
  unsigned int v24; // eax
  char *Pool; // rax
  void *v26; // r12
  __int64 v27; // r8
  unsigned int v28; // ecx
  unsigned int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // r13
  signed __int64 v35; // rcx
  bool i; // zf
  signed __int64 v37; // rax
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rdx
  char v40[8]; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int64 v41; // [rsp+78h] [rbp-160h] BYREF
  int v42; // [rsp+80h] [rbp-158h] BYREF
  int v43; // [rsp+84h] [rbp-154h]
  int v44; // [rsp+88h] [rbp-150h]
  int v45; // [rsp+8Ch] [rbp-14Ch]
  int v46; // [rsp+90h] [rbp-148h]
  int v47; // [rsp+94h] [rbp-144h]
  int v48; // [rsp+98h] [rbp-140h]
  int v49; // [rsp+9Ch] [rbp-13Ch]
  int v50; // [rsp+A0h] [rbp-138h]
  int v51; // [rsp+A4h] [rbp-134h]
  int v52; // [rsp+A8h] [rbp-130h]
  int v53; // [rsp+ACh] [rbp-12Ch]
  int v54; // [rsp+B0h] [rbp-128h]
  unsigned int v55; // [rsp+B4h] [rbp-124h]
  unsigned int v56; // [rsp+B8h] [rbp-120h]
  int v57; // [rsp+BCh] [rbp-11Ch] BYREF
  void *v58; // [rsp+C0h] [rbp-118h]
  __int64 v59; // [rsp+C8h] [rbp-110h]
  unsigned int v60; // [rsp+D0h] [rbp-108h]
  int v61; // [rsp+D8h] [rbp-100h]
  int v62; // [rsp+DCh] [rbp-FCh]
  char *v63; // [rsp+E0h] [rbp-F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+E8h] [rbp-F0h]
  struct _KTHREAD *v65; // [rsp+F0h] [rbp-E8h]
  __int64 v66; // [rsp+F8h] [rbp-E0h]
  _KPROCESS *Process; // [rsp+100h] [rbp-D8h]
  PVOID v68; // [rsp+108h] [rbp-D0h]
  _KPROCESS *v69; // [rsp+110h] [rbp-C8h]
  signed __int64 v70; // [rsp+118h] [rbp-C0h]
  __int64 v71; // [rsp+120h] [rbp-B8h]
  ULONG_PTR v72; // [rsp+128h] [rbp-B0h]
  ULONG_PTR v73; // [rsp+130h] [rbp-A8h]
  __int64 v74; // [rsp+138h] [rbp-A0h]
  _QWORD v75[10]; // [rsp+140h] [rbp-98h] BYREF

  v66 = a4;
  v56 = a3;
  BugCheckParameter2 = a1;
  v72 = a1;
  v73 = a2;
  v60 = a3;
  v74 = a4;
  v41 = 0LL;
  v40[0] = 0;
  memset(v75, 0, sizeof(v75));
  v44 = 0;
  v52 = 1;
  v9 = 6;
  v43 = 6;
  v42 = 0;
  v57 = 0;
  v50 = 0;
  CurrentThread = 0LL;
  v65 = 0LL;
  if ( (*(_DWORD *)(a2 + 56) & 0x800) != 0 )
  {
    if ( (a5 & 0x40000000) != 0 )
    {
      dword_140C4CC58 = 115;
      return 3221226547LL;
    }
    a5 |= 0x10000000u;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) & 0x10) != 0 )
  {
    a5 |= 0x40u;
  }
  if ( (a5 & 0x40000000) != 0 && !*(_QWORD *)(a2 + 144) )
  {
    dword_140C4CC58 = 116;
    return 3221225595LL;
  }
  if ( (a5 & 5) != 0 )
  {
    v9 = 7;
    v43 = 7;
    v42 = 2;
  }
  v49 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v69 = Process;
  while ( 1 )
  {
    v12 = v9 & 1;
    v51 = v12;
    v53 = v12;
    if ( (v9 & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v65 = CurrentThread;
      v13 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
      v50 = v13;
      if ( (*(_DWORD *)(a2 + 56) & 0x4000000) != 0 )
      {
        PerSessionProtos = MiCreatePerSessionProtos((__int64 *)a2, 0xFFFFFFFF);
        if ( PerSessionProtos < 0 )
        {
          PsRevertToUserPagePriorityThread((__int64)CurrentThread, v13);
          return (unsigned int)PerSessionProtos;
        }
        v49 = 1;
        v9 = v43;
      }
      if ( v52 )
        MiPrefetchControlArea(a2, RtlpInterceptorRoutines[0], 0, 1, 0, -1);
    }
    LODWORD(v15) = MiMapImageInSystemSpace(a2, v9, v75);
    if ( (v15 & 0x80000000) != 0LL )
    {
      if ( v49 == 1 )
        MiDereferencePerSessionProtos((__int64 *)a2, 0xFFFFFFFF);
      if ( v12 )
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, v50);
      return (unsigned int)v15;
    }
    v16 = v75[0];
    v58 = (void *)v75[0];
    v17 = *(_QWORD *)(a2 + 96);
    v59 = v17;
    v71 = v17;
    v18 = *(_QWORD *)(v17 + 40);
    v70 = v18;
    v41 = v18;
    if ( !v18 )
    {
      v19 = 0;
LABEL_33:
      v45 = v19;
      goto LABEL_34;
    }
    if ( (v18 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
    {
      v20 = v18;
      if ( (v18 & 3) != 0 )
      {
        v20 = v18 & 0xFFFFFFFFFFFFFFFCuLL;
        v19 = ((v18 & 3) != 1) + 2;
      }
      else
      {
        v19 = 4;
      }
      v41 = v20 & 0xFFFFFFFFFFFFFFFBuLL;
      goto LABEL_33;
    }
    v19 = 1;
    v45 = 1;
    v41 = v18 & 3;
LABEL_34:
    v46 = v75[2];
    v21 = LODWORD(v75[2]) << 12;
    v48 = LODWORD(v75[2]) << 12;
    v61 = LODWORD(v75[2]) << 12;
    v22 = LODWORD(v75[2]) << 12;
    v47 = LODWORD(v75[2]) << 12;
    v40[0] = 1;
    v23 = *(_QWORD *)(v17 + 32);
    if ( !v23 || *(_QWORD *)(v23 + 40) == *(_QWORD *)(v23 + 48) )
    {
      v26 = (void *)v75[0];
      if ( v42 == 1 )
        v42 = 2;
    }
    else
    {
      if ( v42 == 2 )
      {
        v54 = v75[2];
      }
      else
      {
        v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 64LL);
        v46 = (v24 >> 12) + ((v24 & 0xFFF) != 0);
        v54 = v46;
        v22 = v46 << 12;
        v47 = v46 << 12;
      }
      Pool = (char *)MiAllocatePool(256, v22, 0x68496D4Du);
      v26 = Pool;
      v68 = Pool;
      if ( Pool )
      {
        LODWORD(v15) = 0;
        v62 = 0;
        v27 = (__int64)Pool;
        v63 = Pool;
        v28 = 0;
        v29 = v46;
        while ( 1 )
        {
          v55 = v28;
          if ( v28 >= v29 )
            break;
          KeCopyPage(v27, (__int64)v58 + 4096 * v28);
          v29 = v46;
          v28 = v55 + 1;
          v27 = (__int64)(v63 + 4096);
          v63 += 4096;
        }
        MiRevertRelocations(v26, a2, v29);
      }
      else
      {
        LODWORD(v15) = -1073741670;
      }
      v22 = v47;
      v16 = (int)v58;
      v21 = v48;
    }
    v53 = v42;
    if ( (v15 & 0x80000000) == 0LL )
    {
      v30 = SeValidateImageHeader(
              BugCheckParameter2,
              (_DWORD)v26,
              v22,
              v16,
              v21,
              (__int64)&v42,
              (__int64)Process,
              v66,
              a5,
              (__int64)&v41,
              a6,
              a7,
              (__int64)v40,
              (__int64)&v57);
      v15 = v30;
      if ( v30 == 301 )
      {
        MiImageCantMove(a2);
        v44 = 1;
LABEL_54:
        if ( (*(_DWORD *)(a2 + 56) & 0x40000000) != 0 )
          KeBugCheckEx(0x1Au, 0x5150EuLL, BugCheckParameter2, v15, 0LL);
        MiStrongCodeImage(a2, 1u);
        goto LABEL_56;
      }
      v31 = v44;
      if ( v30 == 302 )
        v31 = 1;
      v44 = v31;
      if ( v31 )
        goto LABEL_54;
    }
LABEL_56:
    if ( v26 != v58 && v26 )
      ExFreePoolWithTag(v26, 0);
    MiUnmapImageInSystemSpace(v75);
    if ( v49 == 1 )
      MiDereferencePerSessionProtos((__int64 *)a2, 0xFFFFFFFF);
    v32 = v51;
    if ( v51 )
    {
      if ( (MiFlags & 0x40000) != 0 )
        MiFlushEntireTbDueToAttributeChange();
      CurrentThread = v65;
      PsRevertToUserPagePriorityThread((__int64)v65, v50);
      v32 = v51;
    }
    else
    {
      CurrentThread = v65;
    }
    if ( (v15 & 0x80000000) == 0LL )
      break;
    if ( (_DWORD)v15 != -1073741789 || v53 >= v42 )
    {
      dword_140C4CC58 = 117;
      return (unsigned int)v15;
    }
    v9 = v43;
    if ( v32 )
    {
      v52 = 1;
    }
    else
    {
      v9 = v43 | 1;
      v43 |= 1u;
      if ( v42 == 1 )
        v52 = 0;
    }
  }
  if ( !v19 || v19 == 1 && (v41 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    if ( (v41 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      if ( v19 )
        v35 = v41 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      else
        v35 = v41 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    }
    else
    {
      v35 = v41 & 7 | 8;
    }
    v41 = v35;
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
    {
      v35 |= 4uLL;
      v41 = v35;
    }
    v34 = v59;
    v37 = _InterlockedCompareExchange64((volatile signed __int64 *)(v59 + 40), v35, v18);
    for ( i = v18 == v37; ; i = v37 == v38 )
    {
      v38 = v37;
      if ( i )
        break;
      if ( (v41 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
        goto LABEL_93;
      if ( (v37 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
      {
        v41 &= 0xFFFFFFFFFFFFFFF8uLL;
        SeReleaseImageValidationContext(v41);
LABEL_93:
        v41 = v38;
        break;
      }
      v41 = v41 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      v37 = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 40), v41, v37);
    }
    v18 = v41;
  }
  else
  {
    v33 = v19 - 2;
    v34 = v59;
    if ( v33 <= 1 )
      v41 ^= ((unsigned __int8)v41 ^ (unsigned __int8)v18) & 3;
  }
  if ( (v41 & 3) != 0 )
  {
    if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a2 + 92) & 0xC0000) != 0 )
    {
      if ( *(_QWORD *)(v34 + 32) )
      {
        result = MiCaptureSecureImageBaseAddress(a2);
        if ( (int)result < 0 )
        {
          dword_140C4CC58 = 118;
          return result;
        }
      }
    }
    result = MiWalkEntireImage(a2, 0LL, 1, v56);
    LODWORD(v15) = result;
    if ( (int)result < 0 )
    {
      dword_140C4CC58 = 119;
      return result;
    }
    v39 = v41 & 0xFFFFFFFFFFFFFFFCuLL;
    v41 &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
    {
      v39 |= 4uLL;
      v41 = v39;
    }
    _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 40), v39, v18);
  }
  *(_BYTE *)(*(_QWORD *)a2 + 15LL) = *(_BYTE *)(*(_QWORD *)a2 + 15LL) & 1 | (2 * ((8 * v40[0]) | v57 & 7));
  if ( v44 )
    MiStrongCodeImage(a2, 2u);
  return (unsigned int)v15;
}
