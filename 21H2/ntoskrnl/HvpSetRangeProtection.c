/*
 * XREFs of HvpSetRangeProtection @ 0x14079B0D0
 * Callers:
 *     HvpAddBin @ 0x14068C820 (HvpAddBin.c)
 *     HvpResetPageProtection @ 0x1406C61D8 (HvpResetPageProtection.c)
 *     HvpMarkDirty @ 0x14071F430 (HvpMarkDirty.c)
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x14091A9EC (HvpApplyLogEntryDataToFileBackedHive.c)
 *     HvpPerformLogFileRecovery @ 0x14091ADA0 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HvpViewMapSealRange @ 0x14068DE2C (HvpViewMapSealRange.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x14068DF38 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpProtectBinPartial @ 0x1406C9BF4 (HvpProtectBinPartial.c)
 *     HvpMapEntryGetFreeBin @ 0x14079B740 (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140AB44A4 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetCellMap @ 0x140AB44C0 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140AB451C (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140AB4534 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpSetRangeProtection(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        int a4)
{
  unsigned int v7; // ebx
  int v8; // r8d
  __int64 CellMap; // rax
  __int64 FreeBin; // rax
  unsigned int *v11; // rcx
  unsigned int v12; // r11d
  __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // r8
  __int64 v16; // r10
  int v17; // r11d
  unsigned int v18; // esi
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 BinAddress; // rax
  __int64 v22; // r8
  unsigned int v23; // r11d
  int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // ecx
  __int16 v27; // [rsp+50h] [rbp+8h] BYREF

  v27 = 0;
  v7 = BugCheckParameter3;
  HvpGetBinContextInitialize(&v27);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x11) == 0 && v8 )
  {
    do
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, v7);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x445uLL);
      if ( (*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      {
        v7 += 4096;
        a3 -= 4096;
        continue;
      }
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      if ( FreeBin )
        v12 = v7 - *(_DWORD *)(FreeBin + 20);
      else
        v12 = *v11;
      v13 = HvpGetCellMap(BugCheckParameter2, v7 - v12);
      v18 = *(_DWORD *)(v13 + 16) - v17;
      if ( a3 < v18 )
        v18 = a3;
      if ( (v15 & 8) != 0 )
      {
        BinAddress = HvpMapEntryGetBinAddress(v14, v16, &v27);
        v24 = HvpProtectBinPartial(BugCheckParameter2, BinAddress, v22, v23, v18, a4 == 4);
        HvpMapEntryReleaseBinAddress(v24 >= 0, v25, &v27);
        result = v26;
        if ( !v26 )
          goto LABEL_23;
      }
      else if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
      {
        v19 = BugCheckParameter2 + 224;
        if ( a4 == 2 )
        {
          HvpViewMapSealRange(v19, v7, v18);
        }
        else if ( (int)HvpViewMapCOWAndUnsealRange(v19, v7, v18) < 0 )
        {
          result = 0LL;
LABEL_23:
          if ( a4 == 4 )
            return result;
        }
      }
      a3 -= v18;
      v7 += v18;
    }
    while ( a3 );
  }
  return 1LL;
}
