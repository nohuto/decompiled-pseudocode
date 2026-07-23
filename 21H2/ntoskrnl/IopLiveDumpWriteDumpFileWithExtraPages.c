/*
 * XREFs of IopLiveDumpWriteDumpFileWithExtraPages @ 0x140899000
 * Callers:
 *     IoCaptureLiveDump @ 0x1408963F8 (IoCaptureLiveDump.c)
 * Callees:
 *     RtlClearAllBitsEx @ 0x14023FAF0 (RtlClearAllBitsEx.c)
 *     MmFreePagesFromMdl @ 0x14024E380 (MmFreePagesFromMdl.c)
 *     RtlMergeBitMapsEx @ 0x1403C714C (RtlMergeBitMapsEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     SecureDump_Get_SecureDumpHeader @ 0x14050AAD0 (SecureDump_Get_SecureDumpHeader.c)
 *     RtlNumberOfSetBitsEx @ 0x1405880E0 (RtlNumberOfSetBitsEx.c)
 *     MmFreeIndependentPages @ 0x140764790 (MmFreeIndependentPages.c)
 *     IopLiveDumpCheckTermination @ 0x1408980BC (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140898180 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpGetExtraMergePages @ 0x1408982F0 (IopLiveDumpGetExtraMergePages.c)
 *     IopLiveDumpGetNtMergePages @ 0x1408985A4 (IopLiveDumpGetNtMergePages.c)
 *     IopLiveDumpWriteBuffer @ 0x140898C1C (IopLiveDumpWriteBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFileWithExtraPages(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rsi
  _OWORD *v4; // r12
  int SecureDumpHeader; // edi
  __int64 v6; // rdi
  LARGE_INTEGER v7; // rax
  void *v8; // r13
  __int64 v9; // rax
  char ExtraMergePages; // al
  int v11; // r15d
  __int64 *v12; // r8
  int v13; // r14d
  __int64 *v14; // rax
  _QWORD *v15; // r8
  _QWORD *v16; // r9
  char v17; // r10
  __int64 v18; // r11
  ULONG v19; // edi
  __int64 v20; // r14
  char v21; // al
  int v22; // edi
  __int64 v23; // r15
  bool v24; // zf
  char *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  struct _MDL *v29; // rcx
  char v30; // cl
  _OWORD *PoolWithTag; // rax
  __int64 v32; // rcx
  unsigned int v33; // r14d
  __int128 v34; // xmm0
  int v35; // r15d
  unsigned int v36; // edi
  int v37; // eax
  __int128 v38; // xmm0
  int v39; // eax
  __int128 v40; // xmm0
  __int64 v41; // rax
  SIZE_T v42; // rdx
  _DWORD *v43; // rax
  void *v44; // r14
  ULONG v45; // r8d
  char v47; // [rsp+38h] [rbp-99h]
  char v48; // [rsp+39h] [rbp-98h]
  char v49; // [rsp+3Ah] [rbp-97h]
  LARGE_INTEGER ByteOffset; // [rsp+40h] [rbp-91h] BYREF
  __int64 v51; // [rsp+48h] [rbp-89h] BYREF
  char *v52; // [rsp+50h] [rbp-81h] BYREF
  char *v53; // [rsp+58h] [rbp-79h] BYREF
  _QWORD *v54; // [rsp+60h] [rbp-71h]
  __int64 v55; // [rsp+68h] [rbp-69h] BYREF
  __int64 *v56; // [rsp+70h] [rbp-61h]
  __int64 v57; // [rsp+78h] [rbp-59h] BYREF
  __int64 v58; // [rsp+80h] [rbp-51h]
  PVOID Buffer; // [rsp+88h] [rbp-49h]
  __int64 v60; // [rsp+98h] [rbp-39h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-31h]
  __int64 v62; // [rsp+A8h] [rbp-29h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-21h]
  void *v64; // [rsp+B8h] [rbp-19h]
  __int64 v65; // [rsp+C0h] [rbp-11h]
  _OWORD Src[2]; // [rsp+C8h] [rbp-9h] BYREF
  __int128 v67; // [rsp+E8h] [rbp+17h] BYREF

  v1 = *(_QWORD *)(a1 + 1024);
  v2 = *(_QWORD *)(a1 + 560);
  v53 = 0LL;
  v57 = 0LL;
  v52 = 0LL;
  v4 = 0LL;
  v55 = 0LL;
  v51 = 0LL;
  v64 = 0LL;
  v65 = a1 + 680;
  v62 = v1;
  v67 = 0LL;
  memset(Src, 0, sizeof(Src));
  if ( !v1 )
    goto LABEL_2;
  v6 = *(_QWORD *)(a1 + 1032);
  v61 = v6;
  if ( !v6 )
    goto LABEL_2;
  if ( *(_BYTE *)(a1 + 880) )
    v7.QuadPart = *(_QWORD *)(v2 + 8224) + *(unsigned int *)(a1 + 888);
  else
    v7 = *(LARGE_INTEGER *)(v2 + 8224);
  v8 = *(void **)(a1 + 64);
  ByteOffset = v7;
  v60 = -1LL;
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)(a1 + 624);
  v58 = 0LL;
  v47 = 0;
  if ( *(_QWORD *)(a1 + 552) != v9 )
  {
    RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 616));
    v9 = *(_QWORD *)(a1 + 624);
  }
  if ( v9 != *(_QWORD *)(a1 + 640) )
    RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 632));
  *(_QWORD *)(a1 + 728) = 0LL;
  *(_QWORD *)(a1 + 736) = 0LL;
  IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, v6, &v52, &v51, &v55);
  v56 = (__int64 *)v6;
  ExtraMergePages = IopLiveDumpGetExtraMergePages((_QWORD *)a1, v1, &v53, (_DWORD *)&v51 + 1, &v57);
  v11 = v51;
  v12 = (__int64 *)v1;
  v54 = (_QWORD *)v1;
  v13 = HIDWORD(v51);
  v48 = ExtraMergePages;
  while ( v13 || v11 )
  {
    if ( v11 )
    {
      v14 = &v60;
      if ( v13 )
        v14 = v12;
      v54 = v14;
    }
    else
    {
      v56 = &v60;
    }
    SecureDumpHeader = IopLiveDumpCheckTermination(a1, (__int64)CurrentThread);
    if ( SecureDumpHeader < 0 )
      goto LABEL_89;
    if ( v13 && v15[v13 - 1] < *v16 )
    {
      Buffer = v53;
      v19 = v13 << 12;
      v20 = v62;
      v47 = v17;
      v58 = v57;
      v21 = IopLiveDumpGetExtraMergePages((_QWORD *)a1, v62, &v53, (_DWORD *)&v51 + 1, &v57);
      v54 = (_QWORD *)v20;
      goto LABEL_37;
    }
    if ( v11 && v16[v11 - 1] < *v15 )
    {
      v22 = v11;
      Buffer = v52;
      v23 = v61;
      v19 = v22 << 12;
      v58 = v55;
      v47 = 1;
      IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, v61, &v52, &v51, &v55);
      v56 = (__int64 *)v23;
      v11 = v51;
      goto LABEL_38;
    }
    v49 = 0;
    v24 = *v16 == *v15;
    if ( *v16 < *v15 )
    {
      v25 = v52;
      Buffer = v52;
      goto LABEL_30;
    }
    Buffer = v53;
    v49 = 1;
    if ( v24 )
    {
      v25 = v52;
LABEL_30:
      v24 = v11-- == 1;
      LODWORD(v51) = v11;
      if ( v24 )
      {
        v26 = v61;
        v47 = 1;
        v58 = v55;
        IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, v61, &v52, &v51, &v55);
        v15 = v54;
        v18 = 4096LL;
        v17 = v48;
        v11 = v51;
        v56 = (__int64 *)v26;
      }
      else
      {
        v52 = &v25[v18];
        v56 = v16 + 1;
      }
    }
    v19 = v18;
    if ( !v49 )
      goto LABEL_38;
    v24 = v13-- == 1;
    HIDWORD(v51) = v13;
    if ( !v24 )
    {
      v53 += v18;
      v54 = v15 + 1;
      goto LABEL_38;
    }
    v27 = v62;
    v47 = v17;
    v58 = v57;
    v21 = IopLiveDumpGetExtraMergePages((_QWORD *)a1, v62, &v53, (_DWORD *)&v51 + 1, &v57);
    v54 = (_QWORD *)v27;
    v19 = 4096;
LABEL_37:
    v13 = HIDWORD(v51);
    v48 = v21;
LABEL_38:
    SecureDumpHeader = IopLiveDumpWriteBuffer(v8, Buffer, v19, &ByteOffset, a1, 0);
    if ( SecureDumpHeader < 0 )
      goto LABEL_89;
    v12 = v54;
    if ( v47 )
    {
      v28 = v58;
      v29 = *(struct _MDL **)(*(_QWORD *)(a1 + 760) + 8 * v58);
      if ( v29 )
      {
        MmFreePagesFromMdl(v29);
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 760) + 8 * v28), 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 760) + 8 * v28) = 0LL;
      }
      else
      {
        MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v58), (unsigned int)BufferChunkSizeInBytes);
      }
      v12 = v54;
      *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v28) = 0LL;
      v47 = 0;
    }
  }
  v30 = *(_BYTE *)(a1 + 880);
  if ( !v30 )
    goto LABEL_47;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x706D644Cu);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_2:
    SecureDumpHeader = -1073741670;
    goto LABEL_89;
  }
  memset(PoolWithTag, 0, 0x1000uLL);
  v30 = *(_BYTE *)(a1 + 880);
LABEL_47:
  LODWORD(v67) = 1886221636;
  *(_QWORD *)((char *)&v67 + 4) = 0x10626F6C42LL;
  HIDWORD(v67) = NtBuildNumber;
  if ( v30 )
  {
    v32 = 1LL;
    *v4 = v67;
    goto LABEL_51;
  }
  SecureDumpHeader = IopLiveDumpWriteBuffer(v8, &v67, 0x10u, &ByteOffset, a1, 1);
  if ( SecureDumpHeader >= 0 )
  {
    v32 = 0LL;
LABEL_51:
    v33 = 32;
    DWORD1(Src[1]) = *(_DWORD *)(a1 + 184);
    v34 = *(_OWORD *)(a1 + 160);
    LODWORD(Src[0]) = 32;
    HIDWORD(Src[1]) = 0;
    *(_OWORD *)((char *)Src + 4) = v34;
    if ( *(_BYTE *)(a1 + 880) )
    {
      v35 = 4096;
      DWORD2(Src[1]) = 4064 - v32 * 16;
      memmove(&v4[v32], Src, 0x20uLL);
      while ( 1 )
      {
        SecureDumpHeader = IopLiveDumpWriteBuffer(v8, v4, 0x1000u, &ByteOffset, a1, 0);
        if ( SecureDumpHeader < 0 )
          goto LABEL_87;
        v35 -= 4096;
        memset(v4, 0, 0x1000uLL);
        if ( v33 != LODWORD(Src[0]) )
        {
          v36 = LODWORD(Src[0]) - v33;
          if ( LODWORD(Src[0]) - v33 > 0x1000 )
            v36 = 4096;
          memmove(v4, (char *)Src + v33, v36);
          v33 += v36;
        }
        if ( !v35 )
          goto LABEL_62;
      }
    }
    DWORD2(Src[1]) = ((ByteOffset.LowPart + 4127) & 0xFFFFF000) - ByteOffset.LowPart;
    SecureDumpHeader = IopLiveDumpWriteBuffer(v8, Src, 0x20u, &ByteOffset, a1, 1);
    if ( SecureDumpHeader >= 0 )
    {
      ByteOffset.QuadPart += DWORD2(Src[1]);
LABEL_62:
      SecureDumpHeader = IopLiveDumpWriteBuffer(v8, *(PVOID *)(a1 + 176), *(_DWORD *)(a1 + 184), &ByteOffset, a1, 0);
      if ( SecureDumpHeader >= 0 )
      {
        v37 = *(_DWORD *)(a1 + 984);
        if ( !v37
          || (v38 = *(_OWORD *)(a1 + 960),
              *((_QWORD *)&Src[1] + 1) = 0LL,
              LODWORD(Src[0]) = 32,
              DWORD1(Src[1]) = v37,
              *(_OWORD *)((char *)Src + 4) = v38,
              SecureDumpHeader = IopLiveDumpWriteBuffer(v8, Src, 0x20u, &ByteOffset, a1, 0),
              SecureDumpHeader >= 0)
          && (SecureDumpHeader = IopLiveDumpWriteBuffer(
                                   v8,
                                   *(PVOID *)(a1 + 976),
                                   *(_DWORD *)(a1 + 984),
                                   &ByteOffset,
                                   a1,
                                   0),
              SecureDumpHeader >= 0) )
        {
          v39 = *(_DWORD *)(a1 + 936);
          if ( !v39
            || (v40 = *(_OWORD *)(a1 + 912),
                *((_QWORD *)&Src[1] + 1) = 0LL,
                LODWORD(Src[0]) = 32,
                DWORD1(Src[1]) = v39,
                *(_OWORD *)((char *)Src + 4) = v40,
                SecureDumpHeader = IopLiveDumpWriteBuffer(v8, Src, 0x20u, &ByteOffset, a1, 0),
                SecureDumpHeader >= 0)
            && (SecureDumpHeader = IopLiveDumpWriteBuffer(
                                     v8,
                                     *(PVOID *)(a1 + 928),
                                     *(_DWORD *)(a1 + 936),
                                     &ByteOffset,
                                     a1,
                                     0),
                SecureDumpHeader >= 0) )
          {
            v41 = *(_QWORD *)(a1 + 624);
            if ( *(_QWORD *)(a1 + 552) != v41 )
            {
              RtlMergeBitMapsEx((unsigned __int64 *)(a1 + 544), (__int64 *)(a1 + 616));
              v41 = *(_QWORD *)(a1 + 624);
            }
            if ( v41 != *(_QWORD *)(a1 + 640) )
              RtlMergeBitMapsEx((unsigned __int64 *)(a1 + 544), (__int64 *)(a1 + 632));
            *(_DWORD *)(v2 + 0x2000) = 1347241043;
            *(_DWORD *)(v2 + 8196) = 1347245380;
            *(_QWORD *)(v2 + 8232) = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 544));
            if ( *(_BYTE *)(a1 + 880) )
              *(_QWORD *)(v2 + 4000) = ByteOffset.QuadPart - *(unsigned int *)(a1 + 888);
            else
              *(LARGE_INTEGER *)(v2 + 4000) = ByteOffset;
            *(_DWORD *)(v2 + 4176) |= 0x10u;
            if ( *(_BYTE *)(a1 + 880) )
            {
              v42 = *(unsigned int *)(a1 + 888);
              ByteOffset.QuadPart = v42;
              v43 = ExAllocatePoolWithTag(NonPagedPoolNx, v42, 0x706D644Cu);
              v44 = v43;
              if ( !v43 )
              {
                SecureDumpHeader = -1073741670;
                goto LABEL_87;
              }
              SecureDumpHeader = SecureDump_Get_SecureDumpHeader(v2, v43, *(_DWORD *)(a1 + 888));
              if ( SecureDumpHeader >= 0 )
              {
LABEL_82:
                SecureDumpHeader = IopLiveDumpWriteBuffer(v8, (PVOID)v2, *(_DWORD *)(v2 + 8224), &ByteOffset, a1, 0);
                if ( SecureDumpHeader >= 0 && *(_BYTE *)(a1 + 880) )
                {
                  v45 = *(_DWORD *)(a1 + 888);
                  ByteOffset.QuadPart = 0LL;
                  SecureDumpHeader = IopLiveDumpWriteBuffer(v8, v44, v45, &ByteOffset, a1, 1);
                }
              }
              if ( v44 )
                ExFreePoolWithTag(v44, 0);
              goto LABEL_87;
            }
            v44 = v64;
            ByteOffset.QuadPart = 0LL;
            goto LABEL_82;
          }
        }
      }
    }
  }
LABEL_87:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_89:
  IopLiveDumpFreeDumpBuffers(v65);
  return (unsigned int)SecureDumpHeader;
}
