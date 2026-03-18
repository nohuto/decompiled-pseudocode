/*
 * XREFs of HvpGenerateLogEntry @ 0x1405DF298
 * Callers:
 *     HvStoreModifiedData @ 0x1405DEA18 (HvStoreModifiedData.c)
 * Callees:
 *     HvpGenerateLogEntryMetadata @ 0x1402048C4 (HvpGenerateLogEntryMetadata.c)
 *     HvpGenerateLogEntryHeader @ 0x140204930 (HvpGenerateLogEntryHeader.c)
 *     HvpAllocateLogBuffers @ 0x140204AC4 (HvpAllocateLogBuffers.c)
 *     RtlNumberOfSetBits @ 0x140263E60 (RtlNumberOfSetBits.c)
 *     HvpGenerateLogEntryDirtyData @ 0x14034282C (HvpGenerateLogEntryDirtyData.c)
 *     memset @ 0x140411300 (memset.c)
 *     HvpGenerateLogEntryChecksums @ 0x1405DF440 (HvpGenerateLogEntryChecksums.c)
 *     HvpGenerateLogMetadata @ 0x1405DF518 (HvpGenerateLogMetadata.c)
 *     CmpLogDirtyVectorUse @ 0x1405DF5DC (CmpLogDirtyVectorUse.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvpGenerateLogEntry(ULONG_PTR BugCheckParameter2, PVOID **a2, _DWORD *a3, unsigned int *a4)
{
  int v4; // edi
  char v6; // r13
  ULONG v7; // eax
  unsigned int v8; // edi
  PVOID PoolWithTag; // r12
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r14
  unsigned int v13; // esi
  PVOID *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  unsigned int v18; // eax
  PVOID *v19; // rdi
  PVOID *v21; // rbx
  __int64 v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-20h] BYREF
  PVOID *v25; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+48h] BYREF
  PVOID **v27; // [rsp+B8h] [rbp+50h]
  _DWORD *v28; // [rsp+C0h] [rbp+58h]
  unsigned int *v29; // [rsp+C8h] [rbp+60h]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v4 = *(_DWORD *)(BugCheckParameter2 + 176);
  v25 = 0LL;
  v23 = 0LL;
  v6 = v4 == 0;
  v24 = 0;
  v26 = 0;
  HvpGenerateLogMetadata((PRTL_BITMAP)(BugCheckParameter2 + 88));
  v7 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
  CmpLogDirtyVectorUse(BugCheckParameter2, 1LL, 0LL, v7);
  v8 = ((v4 != 0 ? 4135 : 4647) + (*(_DWORD *)(BugCheckParameter2 + 104) << 9)) & 0xFFFFF000;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, 0LL, 0x6F494D43u);
  if ( PoolWithTag )
  {
    v10 = HvpAllocateLogBuffers(&v25, &v24, v8);
    v12 = v24;
    v13 = v10;
    if ( v10 < 0 )
    {
      v19 = v25;
    }
    else
    {
      v14 = v25;
      HvpGenerateLogEntryHeader(BugCheckParameter2, (__int64)v25, v11, (__int64)&v26, (unsigned int *)&v23, v8, 0, v6);
      HvpGenerateLogEntryMetadata(
        BugCheckParameter2,
        (int)v14,
        v15,
        (__int64)&v26,
        (__int64)&v23,
        (__int64)PoolWithTag,
        SHIDWORD(v23));
      HvpGenerateLogEntryDirtyData(BugCheckParameter2, (__int64)v14, v16, &v26, (unsigned int *)&v23, v22);
      v18 = (unsigned int)v14[3 * v26 + 2];
      if ( (unsigned int)v23 < v18 )
        memset((char *)v14[3 * v26 + 1] + (unsigned int)v23, 0, v18 - (unsigned int)v23);
      LOBYTE(v17) = v6;
      HvpGenerateLogEntryChecksums(v14, (unsigned int)v12, v17);
      *v27 = v14;
      *v28 = v12;
      *v29 = v8;
      v19 = 0LL;
      v13 = 0;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v19 )
    {
      if ( (_DWORD)v12 )
      {
        v21 = v19 + 1;
        do
        {
          if ( *v21 )
          {
            ExFreePoolWithTag(*v21, 0);
            *v21 = 0LL;
          }
          v21 += 3;
          --v12;
        }
        while ( v12 );
      }
      ExFreePoolWithTag(v19, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v13;
}
