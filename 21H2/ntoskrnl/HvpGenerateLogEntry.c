/*
 * XREFs of HvpGenerateLogEntry @ 0x1406F91B8
 * Callers:
 *     HvStoreModifiedData @ 0x1406F88B8 (HvStoreModifiedData.c)
 * Callees:
 *     HvpGenerateLogEntryDirtyData @ 0x140256510 (HvpGenerateLogEntryDirtyData.c)
 *     RtlNumberOfSetBits @ 0x140274DA0 (RtlNumberOfSetBits.c)
 *     HvpGenerateLogEntryMetadata @ 0x1402F7104 (HvpGenerateLogEntryMetadata.c)
 *     HvpGenerateLogEntryHeader @ 0x1402F7170 (HvpGenerateLogEntryHeader.c)
 *     HvpAllocateLogBuffers @ 0x1402F7304 (HvpAllocateLogBuffers.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvpGenerateLogMetadata @ 0x14063B2A4 (HvpGenerateLogMetadata.c)
 *     HvpGenerateLogEntryChecksums @ 0x1406F9360 (HvpGenerateLogEntryChecksums.c)
 *     CmpLogDirtyVectorUse @ 0x1406F9438 (CmpLogDirtyVectorUse.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HvpGenerateLogEntry(ULONG_PTR BugCheckParameter2, PVOID **a2, _DWORD *a3, unsigned int *a4)
{
  int v4; // edi
  char v6; // r13
  ULONG v7; // eax
  int v8; // ebx
  SIZE_T v9; // rdx
  unsigned int v10; // edi
  PVOID PoolWithTag; // r12
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r14
  unsigned int v15; // esi
  PVOID *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  unsigned int v20; // eax
  PVOID *v21; // rdi
  PVOID *v23; // rbx
  __int64 v24; // [rsp+28h] [rbp-40h]
  int v25; // [rsp+30h] [rbp-38h]
  __int64 v26; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-20h] BYREF
  PVOID *v28; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v29; // [rsp+B0h] [rbp+48h] BYREF
  PVOID **v30; // [rsp+B8h] [rbp+50h]
  _DWORD *v31; // [rsp+C0h] [rbp+58h]
  unsigned int *v32; // [rsp+C8h] [rbp+60h]

  v32 = a4;
  v31 = a3;
  v30 = a2;
  v4 = *(_DWORD *)(BugCheckParameter2 + 176);
  v28 = 0LL;
  v26 = 0LL;
  v6 = v4 == 0;
  v27 = 0;
  v29 = 0;
  HvpGenerateLogMetadata((PRTL_BITMAP)(BugCheckParameter2 + 88), 0LL, (unsigned int *)&v26 + 1);
  v7 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
  v8 = HIDWORD(v26);
  CmpLogDirtyVectorUse(BugCheckParameter2, 1LL, HIDWORD(v26), v7);
  v9 = (unsigned int)(8 * v8);
  v10 = (v9 + (v4 != 0 ? 4135 : 4647) + (*(_DWORD *)(BugCheckParameter2 + 104) << 9)) & 0xFFFFF000;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, v9, 0x6F494D43u);
  if ( PoolWithTag )
  {
    v12 = HvpAllocateLogBuffers(&v28, &v27, v10);
    v14 = v27;
    v15 = v12;
    if ( v12 < 0 )
    {
      v21 = v28;
    }
    else
    {
      v25 = v8;
      v16 = v28;
      HvpGenerateLogEntryHeader(BugCheckParameter2, (__int64)v28, v13, &v29, (unsigned int *)&v26, v10, v25, v6);
      HvpGenerateLogEntryMetadata(
        BugCheckParameter2,
        (__int64)v16,
        v17,
        &v29,
        (unsigned int *)&v26,
        (__int64)PoolWithTag,
        SHIDWORD(v26));
      HvpGenerateLogEntryDirtyData(BugCheckParameter2, (int)v16, v18, (__int64)&v29, (__int64)&v26, v24);
      v20 = (unsigned int)v16[3 * v29 + 2];
      if ( (unsigned int)v26 < v20 )
        memset((char *)v16[3 * v29 + 1] + (unsigned int)v26, 0, v20 - (unsigned int)v26);
      LOBYTE(v19) = v6;
      HvpGenerateLogEntryChecksums(v16, (unsigned int)v14, v19);
      *v30 = v16;
      *v31 = v14;
      *v32 = v10;
      v21 = 0LL;
      v15 = 0;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v21 )
    {
      if ( (_DWORD)v14 )
      {
        v23 = v21 + 1;
        do
        {
          if ( *v23 )
          {
            ExFreePoolWithTag(*v23, 0);
            *v23 = 0LL;
          }
          v23 += 3;
          --v14;
        }
        while ( v14 );
      }
      ExFreePoolWithTag(v21, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v15;
}
