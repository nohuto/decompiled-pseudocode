/*
 * XREFs of HvpGenerateLogEntryDirtyData @ 0x140268570
 * Callers:
 *     HvpGenerateLogEntry @ 0x140721960 (HvpGenerateLogEntry.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140253830 (RtlNumberOfSetBits.c)
 *     HvpCopyDataToOffsetArray @ 0x14026A190 (HvpCopyDataToOffsetArray.c)
 *     HvpFindNextDirtyBlock @ 0x14064611C (HvpFindNextDirtyBlock.c)
 *     HvpCountSetRangesInVector @ 0x1406463C4 (HvpCountSetRangesInVector.c)
 *     CmpLogDirtyVectorUse @ 0x140721BE0 (CmpLogDirtyVectorUse.c)
 */

__int64 __fastcall HvpGenerateLogEntryDirtyData(
        ULONG_PTR BugCheckParameter2,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  RTL_BITMAP *v6; // rdi
  int v10; // r9d
  __int64 v11; // rbx
  ULONG v12; // ebx
  unsigned int v13; // eax
  __int64 v15; // [rsp+90h] [rbp+40h] BYREF

  LODWORD(v15) = 0;
  v6 = (RTL_BITMAP *)(BugCheckParameter2 + 88);
  LODWORD(a6) = 0;
  if ( (unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&v15, (__int64)&a6, 0) )
  {
    v11 = a5;
    do
      HvpCopyDataToOffsetArray(0, v15, a2, v10, a4, v11);
    while ( (unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&v15, (__int64)&a6, 0) );
  }
  v12 = RtlNumberOfSetBits(v6);
  v13 = HvpCountSetRangesInVector(v6);
  return CmpLogDirtyVectorUse(BugCheckParameter2, 2LL, v13, v12);
}
