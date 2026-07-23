/*
 * XREFs of HvStoreModifiedData @ 0x140689398
 * Callers:
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x1402E0FC0 (RtlClearAllBits.c)
 *     RtlMergeBitMaps @ 0x1402E1944 (RtlMergeBitMaps.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     HvpTruncateBins @ 0x1406897BC (HvpTruncateBins.c)
 *     HvResetDirtyData @ 0x140689BDC (HvResetDirtyData.c)
 *     HvpGenerateLogEntry @ 0x140689C18 (HvpGenerateLogEntry.c)
 *     HvpFindNextDirtyBlock @ 0x140704D68 (HvpFindNextDirtyBlock.c)
 *     HvpCountSetRangesInVector @ 0x140705010 (HvpCountSetRangesInVector.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HvStoreModifiedData(ULONG_PTR BugCheckParameter2, char a2, char a3)
{
  bool v3; // zf
  void *v5; // r14
  PVOID v6; // r15
  unsigned int *v7; // r12
  PVOID *v8; // r13
  unsigned int v9; // eax
  SIZE_T v10; // rsi
  PVOID PoolWithTag; // rax
  unsigned int SizeOfBitMap; // esi
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  PVOID v17; // rax
  __int64 v18; // rdx
  _OWORD *v19; // rax
  _OWORD *v20; // rcx
  __int128 v21; // xmm1
  unsigned int *v22; // rax
  PVOID *v23; // rax
  char *v24; // rsi
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // eax
  PVOID v30; // rax
  PVOID *v31; // rsi
  __int64 v32; // r14
  unsigned int Size; // [rsp+40h] [rbp-39h]
  int v34; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v35; // [rsp+4Ch] [rbp-2Dh]
  int v36; // [rsp+50h] [rbp-29h]
  int v37; // [rsp+54h] [rbp-25h]
  PVOID P; // [rsp+58h] [rbp-21h]
  PVOID v39; // [rsp+60h] [rbp-19h]
  int v40; // [rsp+68h] [rbp-11h]
  _RTL_BITMAP BitMapHeader; // [rsp+70h] [rbp-9h] BYREF
  __int64 v42; // [rsp+80h] [rbp+7h]
  __int128 v43; // [rsp+88h] [rbp+Fh] BYREF
  unsigned int v44; // [rsp+E0h] [rbp+67h]
  __int64 v47; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8000) == 0;
  v42 = 0LL;
  v34 = 0;
  v5 = 0LL;
  LODWORD(v47) = 0;
  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v37 = 0;
  v44 = 0;
  v39 = 0LL;
  v43 = 0LL;
  BitMapHeader = 0LL;
  if ( !v3 )
    return 1;
  *(_DWORD *)(BugCheckParameter2 + 1720) = (unsigned __int8)HvpTruncateBins(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 )
    return 1;
  v9 = *(_DWORD *)(BugCheckParameter2 + 108);
  v10 = v9;
  Size = v9;
  if ( *(_DWORD *)(BugCheckParameter2 + 104) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x30354D43u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return 2;
    memmove(PoolWithTag, *(const void **)(BugCheckParameter2 + 96), (unsigned int)v10);
    v36 = *(_DWORD *)(BugCheckParameter2 + 88);
    LODWORD(v43) = v36;
    *((_QWORD *)&v43 + 1) = v5;
    v6 = P;
    if ( (int)HvpGenerateLogEntry(BugCheckParameter2) < 0 )
      goto LABEL_49;
  }
  else
  {
    v36 = v43;
  }
  if ( !a3 && !a2 )
    goto LABEL_8;
  v17 = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x30354D43u);
  v39 = v17;
  if ( v17 )
  {
    memset(v17, 0, 0x1000uLL);
    v18 = 4LL;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = *(_DWORD *)(BugCheckParameter2 + 272);
    v19 = *(_OWORD **)(BugCheckParameter2 + 64);
    v20 = v39;
    do
    {
      *v20 = *v19;
      v20[1] = v19[1];
      v20[2] = v19[2];
      v20[3] = v19[3];
      v20[4] = v19[4];
      v20[5] = v19[5];
      v20[6] = v19[6];
      v20 += 8;
      v21 = v19[7];
      v19 += 8;
      *(v20 - 1) = v21;
      --v18;
    }
    while ( v18 );
    if ( !a3 )
    {
LABEL_8:
      SizeOfBitMap = BitMapHeader.SizeOfBitMap;
LABEL_9:
      v13 = *(_DWORD *)(BugCheckParameter2 + 272);
      if ( *(_DWORD *)(BugCheckParameter2 + 1784) < v13 || *(_DWORD *)(BugCheckParameter2 + 1720) )
        *(_DWORD *)(BugCheckParameter2 + 1784) = v13;
      if ( *(_DWORD *)(BugCheckParameter2 + 104) )
      {
        *(_DWORD *)(BugCheckParameter2 + 1680) = v36;
        *(_QWORD *)(BugCheckParameter2 + 1688) = v5;
        v5 = 0LL;
        *(_DWORD *)(BugCheckParameter2 + 1696) = Size;
        *(_DWORD *)(BugCheckParameter2 + 1712) = 0;
        v14 = v37;
        *(_QWORD *)(BugCheckParameter2 + 1704) = v6;
        v6 = 0LL;
        *(_DWORD *)(BugCheckParameter2 + 1716) = v14;
        HvResetDirtyData(BugCheckParameter2);
      }
      if ( a2 || a3 )
      {
        v30 = v39;
        v39 = 0LL;
        v3 = *(_BYTE *)(BugCheckParameter2 + 191) == 0;
        *(_QWORD *)(BugCheckParameter2 + 1768) = v30;
        if ( !v3 )
          *(_BYTE *)(BugCheckParameter2 + 1724) = 1;
        if ( a3 )
        {
          *(_QWORD *)(BugCheckParameter2 + 1736) = v7;
          v7 = 0LL;
          *(_DWORD *)(BugCheckParameter2 + 1728) = SizeOfBitMap;
          *(_QWORD *)(BugCheckParameter2 + 1752) = v8;
          v8 = 0LL;
          *(_DWORD *)(BugCheckParameter2 + 1744) = Size;
          *(_DWORD *)(BugCheckParameter2 + 1760) = v44;
          if ( *(_QWORD *)(BugCheckParameter2 + 120) )
          {
            RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
            *(_DWORD *)(BugCheckParameter2 + 128) = 0;
            *(_BYTE *)(BugCheckParameter2 + 191) = 0;
          }
        }
      }
      v15 = 0;
      goto LABEL_16;
    }
    v22 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v10, 0x30354D43u);
    v7 = v22;
    if ( v22 )
    {
      memmove(v22, *(const void **)(BugCheckParameter2 + 120), v10);
      LODWORD(P) = *(_DWORD *)(BugCheckParameter2 + 112);
      BitMapHeader.SizeOfBitMap = (unsigned int)P;
      BitMapHeader.Buffer = v7;
      if ( *(_DWORD *)(BugCheckParameter2 + 104) )
        RtlMergeBitMaps((__int64)&BitMapHeader, (unsigned int *)&v43);
      v44 = HvpCountSetRangesInVector(&BitMapHeader);
      v23 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 24LL * v44, 0x32354D43u);
      v8 = v23;
      if ( v23 )
      {
        memset(v23, 0, 24LL * v44);
        v35 = 0;
        v40 = 0;
        if ( v44 )
        {
          v24 = (char *)(v8 + 1);
          do
          {
            if ( !(unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&v34, (__int64)&v47, 1) )
              break;
            v25 = v42;
            if ( !v42 )
              goto LABEL_49;
            v26 = v47;
            v27 = v34;
            *((_DWORD *)v24 + 2) = v34;
            *((_DWORD *)v24 - 2) = v26;
            v28 = v27 + v26;
            v29 = v35 + 1;
            *(_QWORD *)v24 = v25;
            v24 += 24;
            LODWORD(v47) = v28;
            v35 = v29;
          }
          while ( v29 < v44 );
        }
        memmove(v7, *(const void **)(BugCheckParameter2 + 120), Size);
        SizeOfBitMap = (unsigned int)P;
        goto LABEL_9;
      }
    }
  }
LABEL_49:
  v15 = 2;
LABEL_16:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
  {
    if ( v44 )
    {
      v31 = v8 + 1;
      v32 = v44;
      do
      {
        if ( *v31 )
          ExFreePoolWithTag(*v31, 0);
        v31 += 3;
        --v32;
      }
      while ( v32 );
    }
    ExFreePoolWithTag(v8, 0);
  }
  if ( v39 )
    ExFreePoolWithTag(v39, 0);
  return v15;
}
