/*
 * XREFs of MiValidateSectionCreate @ 0x14070EA48
 * Callers:
 *     MiValidateSectionSigningPolicy @ 0x14062B59C (MiValidateSectionSigningPolicy.c)
 *     MiPromoteControlAreaToStrongCode @ 0x1408D0430 (MiPromoteControlAreaToStrongCode.c)
 *     MiMapImageForEnclaveUse @ 0x1408D61FC (MiMapImageForEnclaveUse.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402E9FB8 (MiFlushEntireTbDueToAttributeChange.c)
 *     PsRevertToUserPagePriorityThread @ 0x140356DAC (PsRevertToUserPagePriorityThread.c)
 *     PsSetSystemPagePriorityThread @ 0x140356E18 (PsSetSystemPagePriorityThread.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KeZeroSinglePage @ 0x140400910 (KeZeroSinglePage.c)
 *     KeCopyPage @ 0x1404009F0 (KeCopyPage.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiImageCantMove @ 0x1405531B0 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x140553250 (MiStrongCodeImage.c)
 *     MiDereferencePerSessionProtos @ 0x1406DC9FC (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406DCB14 (MiCreatePerSessionProtos.c)
 *     MiUnmapImageInSystemSpace @ 0x14070D7F4 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x14070E1EC (MiMapImageInSystemSpace.c)
 *     SeValidateImageHeader @ 0x14070F24C (SeValidateImageHeader.c)
 *     MiRevertRelocations @ 0x14070F388 (MiRevertRelocations.c)
 *     MiPrefetchControlArea @ 0x14070F6A0 (MiPrefetchControlArea.c)
 *     SeReleaseImageValidationContext @ 0x14078AAA4 (SeReleaseImageValidationContext.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1408DA3A0 (MiCaptureSecureImageBaseAddress.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  int v8; // ebx
  struct _KTHREAD *CurrentThread; // r12
  int v10; // r13d
  ULONG_PTR v11; // r15
  int v12; // r10d
  __int64 v13; // r9
  signed __int64 v14; // rbx
  int v15; // r13d
  int v16; // r11d
  unsigned int v17; // r8d
  __int64 v18; // rax
  unsigned int v19; // eax
  char *Pool; // rax
  void *v21; // r12
  __int64 v22; // r8
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int v25; // eax
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // r13
  __int64 result; // rax
  signed __int64 v35; // rcx
  bool v36; // zf
  signed __int64 v37; // rax
  int v38; // r15d
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  int PerSessionProtos; // ebx
  char v42[8]; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-160h] BYREF
  int v44; // [rsp+80h] [rbp-158h] BYREF
  int v45; // [rsp+84h] [rbp-154h]
  int v46; // [rsp+88h] [rbp-150h]
  int v47; // [rsp+8Ch] [rbp-14Ch]
  int v48; // [rsp+90h] [rbp-148h]
  int v49; // [rsp+94h] [rbp-144h]
  int v50; // [rsp+98h] [rbp-140h]
  int v51; // [rsp+9Ch] [rbp-13Ch]
  int v52; // [rsp+A0h] [rbp-138h]
  int v53; // [rsp+A4h] [rbp-134h]
  int v54; // [rsp+A8h] [rbp-130h]
  int v55; // [rsp+ACh] [rbp-12Ch]
  int v56; // [rsp+B0h] [rbp-128h]
  unsigned int v57; // [rsp+B4h] [rbp-124h]
  unsigned int v58; // [rsp+B8h] [rbp-120h]
  int v59; // [rsp+BCh] [rbp-11Ch] BYREF
  unsigned __int64 v60; // [rsp+C0h] [rbp-118h]
  __int64 v61; // [rsp+C8h] [rbp-110h]
  unsigned int v62; // [rsp+D0h] [rbp-108h]
  int v63; // [rsp+D8h] [rbp-100h]
  int v64; // [rsp+DCh] [rbp-FCh]
  char *v65; // [rsp+E0h] [rbp-F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+E8h] [rbp-F0h]
  struct _KTHREAD *v67; // [rsp+F0h] [rbp-E8h]
  __int64 v68; // [rsp+F8h] [rbp-E0h]
  _KPROCESS *Process; // [rsp+100h] [rbp-D8h]
  PVOID v70; // [rsp+108h] [rbp-D0h]
  _KPROCESS *v71; // [rsp+110h] [rbp-C8h]
  signed __int64 v72; // [rsp+118h] [rbp-C0h]
  __int64 v73; // [rsp+120h] [rbp-B8h]
  ULONG_PTR v74; // [rsp+128h] [rbp-B0h]
  ULONG_PTR v75; // [rsp+130h] [rbp-A8h]
  __int64 v76; // [rsp+138h] [rbp-A0h]
  unsigned __int64 v77[10]; // [rsp+140h] [rbp-98h] BYREF

  v68 = a4;
  v58 = a3;
  BugCheckParameter2 = a1;
  v74 = a1;
  v75 = a2;
  v62 = a3;
  v76 = a4;
  v43 = 0LL;
  v42[0] = 0;
  memset(v77, 0, sizeof(v77));
  v46 = 0;
  v54 = 1;
  v8 = 6;
  v45 = 6;
  v44 = 0;
  v59 = 0;
  v52 = 0;
  CurrentThread = 0LL;
  v67 = 0LL;
  if ( (*(_DWORD *)(a2 + 56) & 0x800) != 0 )
  {
    if ( (a5 & 0x40000000) != 0 )
    {
      dword_140C4CA98 = 115;
      return 3221226547LL;
    }
    a5 |= 0x10000000u;
  }
  if ( (a5 & 0x40000000) != 0 && !*(_QWORD *)(a2 + 144) )
  {
    dword_140C4CA98 = 116;
    return 3221225595LL;
  }
  if ( (a5 & 5) != 0 )
  {
    v8 = 7;
    v45 = 7;
    v44 = 2;
  }
  v51 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v71 = Process;
  while ( 1 )
  {
    v10 = v8 & 1;
    v53 = v10;
    v55 = v10;
    if ( (v8 & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v67 = CurrentThread;
      v38 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
      v52 = v38;
      if ( (*(_DWORD *)(a2 + 56) & 0x4000000) != 0 )
      {
        PerSessionProtos = MiCreatePerSessionProtos((__int64 *)a2, 0xFFFFFFFF);
        if ( PerSessionProtos < 0 )
        {
          PsRevertToUserPagePriorityThread((__int64)CurrentThread, v38);
          return (unsigned int)PerSessionProtos;
        }
        v51 = 1;
        v8 = v45;
      }
      if ( v54 )
        MiPrefetchControlArea(a2, RtlpInterceptorRoutines[0], 0, 1, 0, -1);
    }
    LODWORD(v11) = MiMapImageInSystemSpace((__int64 *)a2, v8, (__int64)v77);
    if ( (v11 & 0x80000000) != 0LL )
    {
      if ( v51 == 1 )
        MiDereferencePerSessionProtos((__int64 *)a2, 0xFFFFFFFF);
      if ( v10 )
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, v52);
      return (unsigned int)v11;
    }
    v12 = v77[0];
    v60 = v77[0];
    v13 = *(_QWORD *)(a2 + 96);
    v61 = v13;
    v73 = v13;
    v14 = *(_QWORD *)(v13 + 40);
    v72 = v14;
    v43 = v14;
    if ( v14 )
    {
      if ( (v14 & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v15 = 1;
        v47 = 1;
        v43 = v14 & 3;
        goto LABEL_11;
      }
      v39 = v14;
      if ( (v14 & 3) != 0 )
      {
        v39 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
        v15 = ((v14 & 3) != 1) + 2;
      }
      else
      {
        v15 = 4;
      }
      v43 = v39 & 0xFFFFFFFFFFFFFFFBuLL;
    }
    else
    {
      v15 = 0;
    }
    v47 = v15;
LABEL_11:
    v48 = v77[2];
    v16 = LODWORD(v77[2]) << 12;
    v50 = LODWORD(v77[2]) << 12;
    v63 = LODWORD(v77[2]) << 12;
    v17 = LODWORD(v77[2]) << 12;
    v49 = LODWORD(v77[2]) << 12;
    v42[0] = 1;
    v18 = *(_QWORD *)(v13 + 32);
    if ( !v18 || *(_QWORD *)(v18 + 40) == *(_QWORD *)(v18 + 48) )
    {
      v21 = (void *)v77[0];
      if ( v44 == 1 )
        v44 = 2;
    }
    else
    {
      if ( v44 == 2 )
      {
        v56 = v77[2];
      }
      else
      {
        v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 64LL);
        v48 = (v19 >> 12) + ((v19 & 0xFFF) != 0);
        v56 = v48;
        v17 = v48 << 12;
        v49 = v48 << 12;
      }
      Pool = (char *)MiAllocatePool(256, v17, 0x68496D4Du);
      v21 = Pool;
      v70 = Pool;
      if ( Pool )
      {
        LODWORD(v11) = 0;
        v64 = 0;
        v22 = (__int64)Pool;
        v65 = Pool;
        v23 = 0;
        v24 = v48;
        while ( 1 )
        {
          v57 = v23;
          if ( v23 >= v24 )
            break;
          KeCopyPage(v22, v60 + (v23 << 12));
          v24 = v48;
          v23 = v57 + 1;
          v22 = (__int64)(v65 + 4096);
          v65 += 4096;
        }
        MiRevertRelocations(v21, a2, v24);
      }
      else
      {
        LODWORD(v11) = -1073741670;
      }
      v17 = v49;
      v12 = v60;
      v16 = v50;
    }
    v55 = v44;
    if ( (v11 & 0x80000000) == 0LL )
    {
      v25 = SeValidateImageHeader(
              BugCheckParameter2,
              (_DWORD)v21,
              v17,
              v12,
              v16,
              (__int64)&v44,
              (__int64)Process,
              v68,
              a5,
              (__int64)&v43,
              a6,
              a7,
              (__int64)v42,
              (__int64)&v59);
      v11 = v25;
      if ( v25 == 301 )
      {
        MiImageCantMove(a2);
        v46 = 1;
LABEL_96:
        if ( (*(_DWORD *)(a2 + 56) & 0x40000000) != 0 )
          KeBugCheckEx(0x1Au, 0x5150EuLL, BugCheckParameter2, v11, 0LL);
        MiStrongCodeImage(a2, 1u);
        goto LABEL_26;
      }
      v26 = v46;
      if ( v25 == 302 )
        v26 = 1;
      v46 = v26;
      if ( v26 )
        goto LABEL_96;
    }
LABEL_26:
    if ( v21 != (void *)v60 && v21 )
      ExFreePoolWithTag(v21, 0);
    MiUnmapImageInSystemSpace(v77);
    if ( v51 == 1 )
      MiDereferencePerSessionProtos((__int64 *)a2, 0xFFFFFFFF);
    v31 = v53;
    if ( v53 )
    {
      if ( (MiFlags & 0x40000) != 0 )
        MiFlushEntireTbDueToAttributeChange(v28, v27, v29, v30);
      CurrentThread = v67;
      PsRevertToUserPagePriorityThread((__int64)v67, v52);
      v31 = v53;
    }
    else
    {
      CurrentThread = v67;
    }
    if ( (v11 & 0x80000000) == 0LL )
      break;
    if ( (_DWORD)v11 != -1073741789 || v55 >= v44 )
    {
      dword_140C4CA98 = 117;
      return (unsigned int)v11;
    }
    v8 = v45;
    if ( v31 )
    {
      v54 = 1;
    }
    else
    {
      v8 = v45 | 1;
      v45 |= 1u;
      if ( v44 == 1 )
        v54 = 0;
    }
  }
  if ( !v15 || v15 == 1 && (v43 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    if ( (v43 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      if ( v15 )
        v35 = v43 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      else
        v35 = v43 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    }
    else
    {
      v35 = v43 & 7 | 8;
    }
    v43 = v35;
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
    {
      v35 |= 4uLL;
      v43 = v35;
    }
    v33 = v61;
    while ( 1 )
    {
      v37 = _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 40), v35, v14);
      v36 = v14 == v37;
      v14 = v37;
      if ( v36 )
        break;
      if ( (v43 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
        goto LABEL_78;
      if ( (v37 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
      {
        v43 &= 0xFFFFFFFFFFFFFFF8uLL;
        SeReleaseImageValidationContext(v43);
LABEL_78:
        v43 = v14;
        break;
      }
      v35 = v43 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      v43 = v35;
    }
    v14 = v43;
  }
  else
  {
    v32 = v15 - 2;
    v33 = v61;
    if ( v32 <= 1 )
      v43 ^= ((unsigned __int8)v43 ^ (unsigned __int8)v14) & 3;
  }
  if ( (v43 & 3) == 0 )
  {
LABEL_40:
    *(_BYTE *)(*(_QWORD *)a2 + 15LL) = *(_BYTE *)(*(_QWORD *)a2 + 15LL) & 1 | (2 * ((8 * v42[0]) | v59 & 7));
    if ( v46 )
      MiStrongCodeImage(a2, 2u);
    return (unsigned int)v11;
  }
  if ( (MiFlags & 0x4000) != 0
    && (*(_DWORD *)(a2 + 92) & 0xC0000) != 0
    && *(_QWORD *)(v33 + 32)
    && (result = MiCaptureSecureImageBaseAddress(a2), (int)result < 0) )
  {
    dword_140C4CA98 = 118;
  }
  else
  {
    result = MiWalkEntireImage(a2, 0LL, 1, v58);
    LODWORD(v11) = result;
    if ( (int)result >= 0 )
    {
      v40 = v43 & 0xFFFFFFFFFFFFFFFCuLL;
      v43 &= 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
      {
        v40 |= 4uLL;
        v43 = v40;
      }
      _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 40), v40, v14);
      goto LABEL_40;
    }
    dword_140C4CA98 = 119;
  }
  return result;
}
