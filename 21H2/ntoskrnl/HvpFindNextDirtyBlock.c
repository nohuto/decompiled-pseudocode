/*
 * XREFs of HvpFindNextDirtyBlock @ 0x14063AF08
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x140256510 (HvpGenerateLogEntryDirtyData.c)
 *     HvWriteHivePrimaryFile @ 0x140613AFC (HvWriteHivePrimaryFile.c)
 *     HvStoreModifiedData @ 0x1406F88B8 (HvStoreModifiedData.c)
 * Callees:
 *     HvpFindNextDirtyRun @ 0x140255088 (HvpFindNextDirtyRun.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     HvpMapEntryGetFreeBin @ 0x14071F4EC (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x14071FB10 (HvpGetCellMap.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall HvpFindNextDirtyBlock(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        char a7)
{
  char *PoolWithTag; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  __int64 CellMap; // rax
  __int64 v13; // rdx
  __int64 FreeBin; // rax
  _QWORD *v15; // r8
  int v16; // r10d
  int v17; // r11d
  unsigned __int64 v18; // rcx
  char *v19; // rax
  int v20; // edx
  unsigned int v21; // r8d
  unsigned int v22; // ebp
  unsigned int v23; // r14d
  unsigned int v25; // esi
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // r8
  size_t v31; // r10
  const void *v32; // rdx
  unsigned int v33; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-34h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-30h]
  unsigned int v36; // [rsp+3Ch] [rbp-2Ch]

  v34 = 0;
  v33 = 0;
  PoolWithTag = 0LL;
  if ( !HvpFindNextDirtyRun(a2, a3, &v33, &v34) )
    return 0;
  v10 = v33 << 9;
  v11 = (v34 << 9) - (v33 << 9);
  v36 = v34 << 9;
  if ( a7 && (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x33354D43u)) == 0LL )
  {
    *a4 = 0LL;
    return 1;
  }
  else
  {
    CellMap = HvpGetCellMap(BugCheckParameter2, v10);
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x1287uLL);
    FreeBin = HvpMapEntryGetFreeBin(CellMap, v13, CellMap);
    if ( FreeBin )
      v18 = (v15[1] & 0xFFFFFFFFFFFFFFF0uLL) + v10 - *(_DWORD *)(FreeBin + 20);
    else
      v18 = *v15 + (v15[1] & 0xFFFFFFFFFFFFFFF0uLL);
    if ( a7 )
      v19 = PoolWithTag;
    else
      v19 = (char *)(v18 + (v10 & 0xFFF));
    *a4 = v19;
    v20 = v16 & 7;
    v21 = v17 - v16;
    v22 = v17 - v16;
    v35 = v17 - v16;
    *a6 = v10 + 4096;
    if ( v17 - v16 >= (unsigned int)(8 - v20) )
      v22 = 8 - v20;
    v23 = v22 << 9;
    if ( a7 )
    {
      memmove(PoolWithTag, (const void *)(v18 + (unsigned int)(v20 << 9)), v23);
      v21 = v35;
      PoolWithTag += v23;
    }
    if ( v21 > v22 )
    {
      v25 = (v10 + 4096) & 0xFFFFF000;
      if ( v23 < v11 )
      {
        v26 = v36;
        do
        {
          v27 = HvpGetCellMap(BugCheckParameter2, v25);
          if ( !v27 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v25, 0x12F1uLL);
          if ( !a7 && (*(_BYTE *)(v27 + 8) & 1) != 0 )
            break;
          v29 = HvpMapEntryGetFreeBin(v27, v28, v27);
          if ( v29 )
            v32 = (const void *)((v30[1] & 0xFFFFFFFFFFFFFFF0uLL) + v25 - *(_DWORD *)(v29 + 20));
          else
            v32 = (const void *)(*v30 + (v30[1] & 0xFFFFFFFFFFFFFFF0uLL));
          if ( v26 - v25 <= (unsigned int)v31 )
          {
            if ( a7 )
              memmove(PoolWithTag, v32, v26 - v25);
            goto LABEL_13;
          }
          if ( a7 )
          {
            memmove(PoolWithTag, v32, v31);
            LODWORD(v31) = 4096;
            PoolWithTag += 4096;
          }
          v23 += v31;
          v22 += 8;
          v25 += v31;
        }
        while ( v23 < v11 );
      }
      *a5 = v23;
      if ( v22 + v33 != v34 )
        *a3 = v22 + v33;
    }
    else
    {
LABEL_13:
      *a5 = v11;
    }
    return 1;
  }
}
