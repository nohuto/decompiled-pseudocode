/*
 * XREFs of HvpSetRangeProtection @ 0x14070661C
 * Callers:
 *     HvpAddBin @ 0x1405DB258 (HvpAddBin.c)
 *     HvpResetPageProtection @ 0x14070436C (HvpResetPageProtection.c)
 *     HvpMarkDirty @ 0x140707D60 (HvpMarkDirty.c)
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x140876458 (HvpApplyLogEntryDataToFileBackedHive.c)
 *     HvpPerformLogFileRecovery @ 0x1408767D8 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140238434 (ExProtectPoolEx.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     HvpViewMapSealRange @ 0x1407043FC (HvpViewMapSealRange.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x140704508 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpMapEntryGetFreeBin @ 0x14070790C (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x140707F30 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpSetRangeProtection(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 CellMap; // rax
  __int64 FreeBin; // rax
  _DWORD *v10; // rcx
  int v11; // r10d
  __int64 v12; // rax
  char v13; // r8
  unsigned int v14; // r10d
  __int64 v15; // r11
  unsigned int v16; // esi
  ULONG_PTR v17; // rcx
  __int64 result; // rax

  v5 = a3;
  v6 = BugCheckParameter3;
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x11) == 0 && a3 )
  {
    while ( 1 )
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, v6);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v6, 0x40CuLL);
      if ( (*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      {
        v5 -= 4096;
        v16 = 4096;
        goto LABEL_14;
      }
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      v11 = FreeBin ? v6 - *(_DWORD *)(FreeBin + 20) : *v10;
      v12 = HvpGetCellMap(BugCheckParameter2, v6 - v11);
      v16 = v5;
      if ( v5 >= *(_DWORD *)(v12 + 16) - v14 )
        v16 = *(_DWORD *)(v12 + 16) - v14;
      if ( (v13 & 8) != 0 )
        break;
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0 )
      {
        result = 1LL;
LABEL_19:
        if ( !(_DWORD)result )
          goto LABEL_23;
        goto LABEL_13;
      }
      v17 = BugCheckParameter2 + 216;
      if ( a4 == 2 )
      {
        HvpViewMapSealRange(v17, v6, v16);
      }
      else if ( (int)HvpViewMapCOWAndUnsealRange(v17, v6, v16) < 0 )
      {
        result = 0LL;
LABEL_23:
        if ( a4 == 4 )
          return result;
      }
LABEL_13:
      v5 -= v16;
LABEL_14:
      v6 += v16;
      if ( !v5 )
        return 1LL;
    }
    result = ExProtectPoolEx(v15, v15 + v14, v16, a4);
    goto LABEL_19;
  }
  return 1LL;
}
