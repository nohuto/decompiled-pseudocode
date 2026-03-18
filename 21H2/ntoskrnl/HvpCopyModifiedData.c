/*
 * XREFs of HvpCopyModifiedData @ 0x14091AAA0
 * Callers:
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x14091A9EC (HvpApplyLogEntryDataToFileBackedHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     HvpMapEntryGetBlockAddress @ 0x1407C9904 (HvpMapEntryGetBlockAddress.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x1409221DC (HvpMapEntryReleaseBlockAddress.c)
 *     HvpGetCellMap @ 0x140AB44C0 (HvpGetCellMap.c)
 *     HvpGetBinContextInitialize @ 0x140AB4534 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpCopyModifiedData(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v9; // edi
  int v10; // r9d
  _QWORD *CellMap; // rax
  unsigned int v12; // r8d
  _QWORD *v13; // rsi
  void *BlockAddress; // rax
  __int16 v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  result = HvpGetBinContextInitialize(&v15);
  v9 = 0;
  if ( v10 )
  {
    do
    {
      CellMap = (_QWORD *)HvpGetCellMap(BugCheckParameter2, v9 + a2);
      v13 = CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v12, 0xC41uLL);
      BlockAddress = (void *)HvpMapEntryGetBlockAddress(BugCheckParameter2, CellMap, (__int64)&v15);
      memmove(BlockAddress, (const void *)(a3 + v9), 0x1000uLL);
      result = HvpMapEntryReleaseBlockAddress(BugCheckParameter2, v13, &v15);
      v9 += 4096;
    }
    while ( v9 < a4 );
  }
  return result;
}
