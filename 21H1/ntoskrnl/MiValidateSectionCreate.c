/*
 * XREFs of MiValidateSectionCreate @ 0x1406C9BB0
 * Callers:
 *     MiValidateSectionSigningPolicy @ 0x14063B5E4 (MiValidateSectionSigningPolicy.c)
 *     MiPromoteControlAreaToStrongCode @ 0x1408C92A0 (MiPromoteControlAreaToStrongCode.c)
 *     MiMapImageForEnclaveUse @ 0x1408CF06C (MiMapImageForEnclaveUse.c)
 * Callees:
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     PsSetSystemPagePriorityThread @ 0x1402C37C4 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x1402C381C (PsRevertToUserPagePriorityThread.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140350E3C (MiFlushEntireTbDueToAttributeChange.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeZeroSinglePage @ 0x1403F9D30 (KeZeroSinglePage.c)
 *     KeCopyPage @ 0x1403F9E10 (KeCopyPage.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiImageCantMove @ 0x14054F190 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x14054F230 (MiStrongCodeImage.c)
 *     MiMapImageInSystemSpace @ 0x1406412E8 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406CA3B4 (MiUnmapImageInSystemSpace.c)
 *     SeValidateImageHeader @ 0x1406CA404 (SeValidateImageHeader.c)
 *     MiRevertRelocations @ 0x1406CA540 (MiRevertRelocations.c)
 *     MiPrefetchControlArea @ 0x1406CA620 (MiPrefetchControlArea.c)
 *     MiDereferencePerSessionProtos @ 0x1406E678C (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406E68A4 (MiCreatePerSessionProtos.c)
 *     SeReleaseImageValidationContext @ 0x14077A094 (SeReleaseImageValidationContext.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1408D3210 (MiCaptureSecureImageBaseAddress.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // r12
  int v12; // r13d
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR v15; // r15
  int v16; // r10d
  __int64 v17; // r9
  signed __int64 v18; // rbx
  int v19; // r13d
  int v20; // r11d
  unsigned int v21; // r8d
  __int64 v22; // rax
  unsigned int v23; // eax
  char *Pool; // rax
  void *v25; // r12
  __int64 v26; // r8
  unsigned int v27; // ecx
  unsigned int v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // r13
  __int64 result; // rax
  signed __int64 v35; // rcx
  bool v36; // zf
  signed __int64 v37; // rax
  unsigned int v38; // r15d
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  int PerSessionProtos; // ebx
  __int64 v42; // r8
  __int64 v43; // r9
  char v44[8]; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int64 v45; // [rsp+78h] [rbp-160h] BYREF
  int v46; // [rsp+80h] [rbp-158h] BYREF
  int v47; // [rsp+84h] [rbp-154h]
  int v48; // [rsp+88h] [rbp-150h]
  int v49; // [rsp+8Ch] [rbp-14Ch]
  int v50; // [rsp+90h] [rbp-148h]
  int v51; // [rsp+94h] [rbp-144h]
  int v52; // [rsp+98h] [rbp-140h]
  int v53; // [rsp+9Ch] [rbp-13Ch]
  unsigned int v54; // [rsp+A0h] [rbp-138h]
  int v55; // [rsp+A4h] [rbp-134h]
  int v56; // [rsp+A8h] [rbp-130h]
  int v57; // [rsp+ACh] [rbp-12Ch]
  int v58; // [rsp+B0h] [rbp-128h]
  unsigned int v59; // [rsp+B4h] [rbp-124h]
  unsigned int v60; // [rsp+B8h] [rbp-120h]
  int v61; // [rsp+BCh] [rbp-11Ch] BYREF
  void *v62; // [rsp+C0h] [rbp-118h]
  __int64 v63; // [rsp+C8h] [rbp-110h]
  unsigned int v64; // [rsp+D0h] [rbp-108h]
  int v65; // [rsp+D8h] [rbp-100h]
  int v66; // [rsp+DCh] [rbp-FCh]
  char *v67; // [rsp+E0h] [rbp-F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+E8h] [rbp-F0h]
  struct _KTHREAD *v69; // [rsp+F0h] [rbp-E8h]
  __int64 v70; // [rsp+F8h] [rbp-E0h]
  _KPROCESS *Process; // [rsp+100h] [rbp-D8h]
  PVOID v72; // [rsp+108h] [rbp-D0h]
  _KPROCESS *v73; // [rsp+110h] [rbp-C8h]
  signed __int64 v74; // [rsp+118h] [rbp-C0h]
  __int64 v75; // [rsp+120h] [rbp-B8h]
  ULONG_PTR v76; // [rsp+128h] [rbp-B0h]
  ULONG_PTR v77; // [rsp+130h] [rbp-A8h]
  __int64 v78; // [rsp+138h] [rbp-A0h]
  _QWORD v79[10]; // [rsp+140h] [rbp-98h] BYREF

  v70 = a4;
  v60 = a3;
  BugCheckParameter2 = a1;
  v76 = a1;
  v77 = a2;
  v64 = a3;
  v78 = a4;
  v45 = 0LL;
  v44[0] = 0;
  memset(v79, 0, sizeof(v79));
  v48 = 0;
  v56 = 1;
  v10 = 6;
  v47 = 6;
  v46 = 0;
  v61 = 0;
  v54 = 0;
  CurrentThread = 0LL;
  v69 = 0LL;
  if ( (*(_DWORD *)(a2 + 56) & 0x800) != 0 )
  {
    if ( (a5 & 0x40000000) != 0 )
    {
      dword_140C4CB58 = 115;
      return 3221226547LL;
    }
    a5 |= 0x10000000u;
  }
  if ( (a5 & 0x40000000) != 0 && !*(_QWORD *)(a2 + 144) )
  {
    dword_140C4CB58 = 116;
    return 3221225595LL;
  }
  if ( (a5 & 5) != 0 )
  {
    v10 = 7;
    v47 = 7;
    v46 = 2;
  }
  v53 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v73 = Process;
  while ( 1 )
  {
    v12 = v10 & 1;
    v55 = v12;
    v57 = v12;
    if ( (v10 & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v69 = CurrentThread;
      v38 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1, v8, v9);
      v54 = v38;
      if ( (*(_DWORD *)(a2 + 56) & 0x4000000) != 0 )
      {
        PerSessionProtos = MiCreatePerSessionProtos(a2, 0xFFFFFFFFLL);
        if ( PerSessionProtos < 0 )
        {
          PsRevertToUserPagePriorityThread((__int64)CurrentThread, v38, v42, v43);
          return (unsigned int)PerSessionProtos;
        }
        v53 = 1;
        v10 = v47;
      }
      if ( v56 )
        MiPrefetchControlArea(a2, RtlpInterceptorRoutines[0], 0, 1, 0, -1);
    }
    LODWORD(v15) = MiMapImageInSystemSpace((__int64 *)a2, v10, (__int64)v79);
    if ( (v15 & 0x80000000) != 0LL )
    {
      if ( v53 == 1 )
        MiDereferencePerSessionProtos(a2, 0xFFFFFFFFLL);
      if ( v12 )
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, v54, v13, v14);
      return (unsigned int)v15;
    }
    v16 = v79[0];
    v62 = (void *)v79[0];
    v17 = *(_QWORD *)(a2 + 96);
    v63 = v17;
    v75 = v17;
    v18 = *(_QWORD *)(v17 + 40);
    v74 = v18;
    v45 = v18;
    if ( v18 )
    {
      if ( (v18 & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v19 = 1;
        v49 = 1;
        v45 = v18 & 3;
        goto LABEL_11;
      }
      v39 = v18;
      if ( (v18 & 3) != 0 )
      {
        v39 = v18 & 0xFFFFFFFFFFFFFFFCuLL;
        v19 = ((v18 & 3) != 1) + 2;
      }
      else
      {
        v19 = 4;
      }
      v45 = v39 & 0xFFFFFFFFFFFFFFFBuLL;
    }
    else
    {
      v19 = 0;
    }
    v49 = v19;
LABEL_11:
    v50 = v79[2];
    v20 = LODWORD(v79[2]) << 12;
    v52 = LODWORD(v79[2]) << 12;
    v65 = LODWORD(v79[2]) << 12;
    v21 = LODWORD(v79[2]) << 12;
    v51 = LODWORD(v79[2]) << 12;
    v44[0] = 1;
    v22 = *(_QWORD *)(v17 + 32);
    if ( !v22 || *(_QWORD *)(v22 + 40) == *(_QWORD *)(v22 + 48) )
    {
      v25 = (void *)v79[0];
      if ( v46 == 1 )
        v46 = 2;
    }
    else
    {
      if ( v46 == 2 )
      {
        v58 = v79[2];
      }
      else
      {
        v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 64LL);
        v50 = (v23 >> 12) + ((v23 & 0xFFF) != 0);
        v58 = v50;
        v21 = v50 << 12;
        v51 = v50 << 12;
      }
      Pool = (char *)MiAllocatePool(256, v21, 0x68496D4Du);
      v25 = Pool;
      v72 = Pool;
      if ( Pool )
      {
        LODWORD(v15) = 0;
        v66 = 0;
        v26 = (__int64)Pool;
        v67 = Pool;
        v27 = 0;
        v28 = v50;
        while ( 1 )
        {
          v59 = v27;
          if ( v27 >= v28 )
            break;
          KeCopyPage(v26, (__int64)v62 + 4096 * v27);
          v28 = v50;
          v27 = v59 + 1;
          v26 = (__int64)(v67 + 4096);
          v67 += 4096;
        }
        MiRevertRelocations(v25, a2, v28);
      }
      else
      {
        LODWORD(v15) = -1073741670;
      }
      v21 = v51;
      v16 = (int)v62;
      v20 = v52;
    }
    v57 = v46;
    if ( (v15 & 0x80000000) == 0LL )
    {
      v29 = SeValidateImageHeader(
              BugCheckParameter2,
              (_DWORD)v25,
              v21,
              v16,
              v20,
              (__int64)&v46,
              (__int64)Process,
              v70,
              a5,
              (__int64)&v45,
              a6,
              a7,
              (__int64)v44,
              (__int64)&v61);
      v15 = v29;
      if ( v29 == 301 )
      {
        MiImageCantMove(a2);
        v48 = 1;
LABEL_96:
        if ( (*(_DWORD *)(a2 + 56) & 0x40000000) != 0 )
          KeBugCheckEx(0x1Au, 0x5150EuLL, BugCheckParameter2, v15, 0LL);
        MiStrongCodeImage(a2, 1u);
        goto LABEL_26;
      }
      v30 = v48;
      if ( v29 == 302 )
        v30 = 1;
      v48 = v30;
      if ( v30 )
        goto LABEL_96;
    }
LABEL_26:
    if ( v25 != v62 && v25 )
      ExFreePoolWithTag(v25, 0);
    MiUnmapImageInSystemSpace(v79);
    if ( v53 == 1 )
      MiDereferencePerSessionProtos(a2, 0xFFFFFFFFLL);
    v31 = v55;
    if ( v55 )
    {
      if ( (MiFlags & 0x40000) != 0 )
        MiFlushEntireTbDueToAttributeChange();
      CurrentThread = v69;
      PsRevertToUserPagePriorityThread((__int64)v69, v54, v8, v9);
      v31 = v55;
    }
    else
    {
      CurrentThread = v69;
    }
    if ( (v15 & 0x80000000) == 0LL )
      break;
    if ( (_DWORD)v15 != -1073741789 || v57 >= v46 )
    {
      dword_140C4CB58 = 117;
      return (unsigned int)v15;
    }
    v10 = v47;
    if ( v31 )
    {
      v56 = 1;
    }
    else
    {
      v10 = v47 | 1;
      v47 |= 1u;
      if ( v46 == 1 )
        v56 = 0;
    }
  }
  if ( !v19 || v19 == 1 && (v45 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    if ( (v45 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      if ( v19 )
        v35 = v45 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      else
        v35 = v45 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    }
    else
    {
      v35 = v45 & 7 | 8;
    }
    v45 = v35;
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
    {
      v35 |= 4uLL;
      v45 = v35;
    }
    v33 = v63;
    while ( 1 )
    {
      v37 = _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 40), v35, v18);
      v36 = v18 == v37;
      v18 = v37;
      if ( v36 )
        break;
      if ( (v45 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
        goto LABEL_78;
      if ( (v37 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
      {
        v45 &= 0xFFFFFFFFFFFFFFF8uLL;
        SeReleaseImageValidationContext(v45);
LABEL_78:
        v45 = v18;
        break;
      }
      v35 = v45 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      v45 = v35;
    }
    v18 = v45;
  }
  else
  {
    v32 = v19 - 2;
    v33 = v63;
    if ( v32 <= 1 )
      v45 ^= ((unsigned __int8)v45 ^ (unsigned __int8)v18) & 3;
  }
  if ( (v45 & 3) == 0 )
  {
LABEL_40:
    *(_BYTE *)(*(_QWORD *)a2 + 15LL) = *(_BYTE *)(*(_QWORD *)a2 + 15LL) & 1 | (2 * ((8 * v44[0]) | v61 & 7));
    if ( v48 )
      MiStrongCodeImage(a2, 2u);
    return (unsigned int)v15;
  }
  if ( (MiFlags & 0x4000) != 0
    && (*(_DWORD *)(a2 + 92) & 0xC0000) != 0
    && *(_QWORD *)(v33 + 32)
    && (result = MiCaptureSecureImageBaseAddress(a2), (int)result < 0) )
  {
    dword_140C4CB58 = 118;
  }
  else
  {
    result = MiWalkEntireImage(a2, 0LL, 1, v60);
    LODWORD(v15) = result;
    if ( (int)result >= 0 )
    {
      v40 = v45 & 0xFFFFFFFFFFFFFFFCuLL;
      v45 &= 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
      {
        v40 |= 4uLL;
        v45 = v40;
      }
      _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 40), v40, v18);
      goto LABEL_40;
    }
    dword_140C4CB58 = 119;
  }
  return result;
}
