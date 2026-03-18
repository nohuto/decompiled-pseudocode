/*
 * XREFs of MiValidateSectionCreate @ 0x1406EAE30
 * Callers:
 *     MiValidateSectionSigningPolicy @ 0x1406064F4 (MiValidateSectionSigningPolicy.c)
 *     MiPromoteControlAreaToStrongCode @ 0x1408CA5F0 (MiPromoteControlAreaToStrongCode.c)
 *     MiMapImageForEnclaveUse @ 0x1408D03BC (MiMapImageForEnclaveUse.c)
 * Callees:
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402F4E60 (MiFlushEntireTbDueToAttributeChange.c)
 *     PsSetSystemPagePriorityThread @ 0x140305A74 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x140305ACC (PsRevertToUserPagePriorityThread.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KeZeroSinglePage @ 0x1403FAFC0 (KeZeroSinglePage.c)
 *     KeCopyPage @ 0x1403FB0A0 (KeCopyPage.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiImageCantMove @ 0x14054F7E0 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x14054F880 (MiStrongCodeImage.c)
 *     MiMapImageInSystemSpace @ 0x14060C198 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406EB634 (MiUnmapImageInSystemSpace.c)
 *     SeValidateImageHeader @ 0x1406EB684 (SeValidateImageHeader.c)
 *     MiRevertRelocations @ 0x1406EB7C0 (MiRevertRelocations.c)
 *     MiPrefetchControlArea @ 0x1406EB8A0 (MiPrefetchControlArea.c)
 *     MiDereferencePerSessionProtos @ 0x14070A60C (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x14070A724 (MiCreatePerSessionProtos.c)
 *     SeReleaseImageValidationContext @ 0x14077C4A4 (SeReleaseImageValidationContext.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1408D4560 (MiCaptureSecureImageBaseAddress.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // r13
  __int64 result; // rax
  signed __int64 v31; // rcx
  bool v32; // zf
  signed __int64 v33; // rax
  int v34; // r15d
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdx
  int PerSessionProtos; // ebx
  char v38[8]; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-160h] BYREF
  int v40; // [rsp+80h] [rbp-158h] BYREF
  int v41; // [rsp+84h] [rbp-154h]
  int v42; // [rsp+88h] [rbp-150h]
  int v43; // [rsp+8Ch] [rbp-14Ch]
  int v44; // [rsp+90h] [rbp-148h]
  int v45; // [rsp+94h] [rbp-144h]
  int v46; // [rsp+98h] [rbp-140h]
  int v47; // [rsp+9Ch] [rbp-13Ch]
  int v48; // [rsp+A0h] [rbp-138h]
  int v49; // [rsp+A4h] [rbp-134h]
  int v50; // [rsp+A8h] [rbp-130h]
  int v51; // [rsp+ACh] [rbp-12Ch]
  int v52; // [rsp+B0h] [rbp-128h]
  unsigned int v53; // [rsp+B4h] [rbp-124h]
  unsigned int v54; // [rsp+B8h] [rbp-120h]
  int v55; // [rsp+BCh] [rbp-11Ch] BYREF
  void *v56; // [rsp+C0h] [rbp-118h]
  __int64 v57; // [rsp+C8h] [rbp-110h]
  unsigned int v58; // [rsp+D0h] [rbp-108h]
  int v59; // [rsp+D8h] [rbp-100h]
  int v60; // [rsp+DCh] [rbp-FCh]
  char *v61; // [rsp+E0h] [rbp-F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+E8h] [rbp-F0h]
  struct _KTHREAD *v63; // [rsp+F0h] [rbp-E8h]
  __int64 v64; // [rsp+F8h] [rbp-E0h]
  _KPROCESS *Process; // [rsp+100h] [rbp-D8h]
  PVOID v66; // [rsp+108h] [rbp-D0h]
  _KPROCESS *v67; // [rsp+110h] [rbp-C8h]
  signed __int64 v68; // [rsp+118h] [rbp-C0h]
  __int64 v69; // [rsp+120h] [rbp-B8h]
  ULONG_PTR v70; // [rsp+128h] [rbp-B0h]
  ULONG_PTR v71; // [rsp+130h] [rbp-A8h]
  __int64 v72; // [rsp+138h] [rbp-A0h]
  _QWORD v73[10]; // [rsp+140h] [rbp-98h] BYREF

  v64 = a4;
  v54 = a3;
  BugCheckParameter2 = a1;
  v70 = a1;
  v71 = a2;
  v58 = a3;
  v72 = a4;
  v39 = 0LL;
  v38[0] = 0;
  memset(v73, 0, sizeof(v73));
  v42 = 0;
  v50 = 1;
  v8 = 6;
  v41 = 6;
  v40 = 0;
  v55 = 0;
  v48 = 0;
  CurrentThread = 0LL;
  v63 = 0LL;
  if ( (*(_DWORD *)(a2 + 56) & 0x800) != 0 )
  {
    if ( (a5 & 0x40000000) != 0 )
    {
      dword_140C4CA18 = 115;
      return 3221226547LL;
    }
    a5 |= 0x10000000u;
  }
  if ( (a5 & 0x40000000) != 0 && !*(_QWORD *)(a2 + 144) )
  {
    dword_140C4CA18 = 116;
    return 3221225595LL;
  }
  if ( (a5 & 5) != 0 )
  {
    v8 = 7;
    v41 = 7;
    v40 = 2;
  }
  v47 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v67 = Process;
  while ( 1 )
  {
    v10 = v8 & 1;
    v49 = v10;
    v51 = v10;
    if ( (v8 & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v63 = CurrentThread;
      v34 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
      v48 = v34;
      if ( (*(_DWORD *)(a2 + 56) & 0x4000000) != 0 )
      {
        PerSessionProtos = MiCreatePerSessionProtos(a2, 0xFFFFFFFFLL);
        if ( PerSessionProtos < 0 )
        {
          PsRevertToUserPagePriorityThread((__int64)CurrentThread, v34);
          return (unsigned int)PerSessionProtos;
        }
        v47 = 1;
        v8 = v41;
      }
      if ( v50 )
        MiPrefetchControlArea(a2, RtlpInterceptorRoutines[0], 0, 1, 0, -1);
    }
    LODWORD(v11) = MiMapImageInSystemSpace((__int64 *)a2, v8, (__int64)v73);
    if ( (v11 & 0x80000000) != 0LL )
    {
      if ( v47 == 1 )
        MiDereferencePerSessionProtos(a2, 0xFFFFFFFFLL);
      if ( v10 )
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, v48);
      return (unsigned int)v11;
    }
    v12 = v73[0];
    v56 = (void *)v73[0];
    v13 = *(_QWORD *)(a2 + 96);
    v57 = v13;
    v69 = v13;
    v14 = *(_QWORD *)(v13 + 40);
    v68 = v14;
    v39 = v14;
    if ( v14 )
    {
      if ( (v14 & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v15 = 1;
        v43 = 1;
        v39 = v14 & 3;
        goto LABEL_11;
      }
      v35 = v14;
      if ( (v14 & 3) != 0 )
      {
        v35 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
        v15 = ((v14 & 3) != 1) + 2;
      }
      else
      {
        v15 = 4;
      }
      v39 = v35 & 0xFFFFFFFFFFFFFFFBuLL;
    }
    else
    {
      v15 = 0;
    }
    v43 = v15;
LABEL_11:
    v44 = v73[2];
    v16 = LODWORD(v73[2]) << 12;
    v46 = LODWORD(v73[2]) << 12;
    v59 = LODWORD(v73[2]) << 12;
    v17 = LODWORD(v73[2]) << 12;
    v45 = LODWORD(v73[2]) << 12;
    v38[0] = 1;
    v18 = *(_QWORD *)(v13 + 32);
    if ( !v18 || *(_QWORD *)(v18 + 40) == *(_QWORD *)(v18 + 48) )
    {
      v21 = (void *)v73[0];
      if ( v40 == 1 )
        v40 = 2;
    }
    else
    {
      if ( v40 == 2 )
      {
        v52 = v73[2];
      }
      else
      {
        v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 64LL);
        v44 = (v19 >> 12) + ((v19 & 0xFFF) != 0);
        v52 = v44;
        v17 = v44 << 12;
        v45 = v44 << 12;
      }
      Pool = (char *)MiAllocatePool(256, v17, 0x68496D4Du);
      v21 = Pool;
      v66 = Pool;
      if ( Pool )
      {
        LODWORD(v11) = 0;
        v60 = 0;
        v22 = (__int64)Pool;
        v61 = Pool;
        v23 = 0;
        v24 = v44;
        while ( 1 )
        {
          v53 = v23;
          if ( v23 >= v24 )
            break;
          KeCopyPage(v22, (__int64)v56 + 4096 * v23);
          v24 = v44;
          v23 = v53 + 1;
          v22 = (__int64)(v61 + 4096);
          v61 += 4096;
        }
        MiRevertRelocations(v21, a2, v24);
      }
      else
      {
        LODWORD(v11) = -1073741670;
      }
      v17 = v45;
      v12 = (int)v56;
      v16 = v46;
    }
    v51 = v40;
    if ( (v11 & 0x80000000) == 0LL )
    {
      v25 = SeValidateImageHeader(
              BugCheckParameter2,
              (_DWORD)v21,
              v17,
              v12,
              v16,
              (__int64)&v40,
              (__int64)Process,
              v64,
              a5,
              (__int64)&v39,
              a6,
              a7,
              (__int64)v38,
              (__int64)&v55);
      v11 = v25;
      if ( v25 == 301 )
      {
        MiImageCantMove(a2);
        v42 = 1;
LABEL_96:
        if ( (*(_DWORD *)(a2 + 56) & 0x40000000) != 0 )
          KeBugCheckEx(0x1Au, 0x5150EuLL, BugCheckParameter2, v11, 0LL);
        MiStrongCodeImage(a2, 1u);
        goto LABEL_26;
      }
      v26 = v42;
      if ( v25 == 302 )
        v26 = 1;
      v42 = v26;
      if ( v26 )
        goto LABEL_96;
    }
LABEL_26:
    if ( v21 != v56 && v21 )
      ExFreePoolWithTag(v21, 0);
    MiUnmapImageInSystemSpace(v73);
    if ( v47 == 1 )
      MiDereferencePerSessionProtos(a2, 0xFFFFFFFFLL);
    v27 = v49;
    if ( v49 )
    {
      if ( (MiFlags & 0x40000) != 0 )
        MiFlushEntireTbDueToAttributeChange();
      CurrentThread = v63;
      PsRevertToUserPagePriorityThread((__int64)v63, v48);
      v27 = v49;
    }
    else
    {
      CurrentThread = v63;
    }
    if ( (v11 & 0x80000000) == 0LL )
      break;
    if ( (_DWORD)v11 != -1073741789 || v51 >= v40 )
    {
      dword_140C4CA18 = 117;
      return (unsigned int)v11;
    }
    v8 = v41;
    if ( v27 )
    {
      v50 = 1;
    }
    else
    {
      v8 = v41 | 1;
      v41 |= 1u;
      if ( v40 == 1 )
        v50 = 0;
    }
  }
  if ( !v15 || v15 == 1 && (v39 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    if ( (v39 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      if ( v15 )
        v31 = v39 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      else
        v31 = v39 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    }
    else
    {
      v31 = v39 & 7 | 8;
    }
    v39 = v31;
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
    {
      v31 |= 4uLL;
      v39 = v31;
    }
    v29 = v57;
    while ( 1 )
    {
      v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 40), v31, v14);
      v32 = v14 == v33;
      v14 = v33;
      if ( v32 )
        break;
      if ( (v39 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
        goto LABEL_78;
      if ( (v33 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
      {
        v39 &= 0xFFFFFFFFFFFFFFF8uLL;
        SeReleaseImageValidationContext(v39);
LABEL_78:
        v39 = v14;
        break;
      }
      v31 = v39 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      v39 = v31;
    }
    v14 = v39;
  }
  else
  {
    v28 = v15 - 2;
    v29 = v57;
    if ( v28 <= 1 )
      v39 ^= ((unsigned __int8)v39 ^ (unsigned __int8)v14) & 3;
  }
  if ( (v39 & 3) == 0 )
  {
LABEL_40:
    *(_BYTE *)(*(_QWORD *)a2 + 15LL) = *(_BYTE *)(*(_QWORD *)a2 + 15LL) & 1 | (2 * ((8 * v38[0]) | v55 & 7));
    if ( v42 )
      MiStrongCodeImage(a2, 2u);
    return (unsigned int)v11;
  }
  if ( (MiFlags & 0x4000) != 0
    && (*(_DWORD *)(a2 + 92) & 0xC0000) != 0
    && *(_QWORD *)(v29 + 32)
    && (result = MiCaptureSecureImageBaseAddress(a2), (int)result < 0) )
  {
    dword_140C4CA18 = 118;
  }
  else
  {
    result = MiWalkEntireImage(a2, 0LL, 1, v54);
    LODWORD(v11) = result;
    if ( (int)result >= 0 )
    {
      v36 = v39 & 0xFFFFFFFFFFFFFFFCuLL;
      v39 &= 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
      {
        v36 |= 4uLL;
        v39 = v36;
      }
      _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 40), v36, v14);
      goto LABEL_40;
    }
    dword_140C4CA18 = 119;
  }
  return result;
}
