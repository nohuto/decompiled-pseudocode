/*
 * XREFs of HalpMapNvsArea @ 0x140999E28
 * Callers:
 *     HalpPowerStateCallback @ 0x1403A7040 (HalpPowerStateCallback.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpFreeNvsBuffers @ 0x140999EB8 (HalpFreeNvsBuffers.c)
 */

__int64 __fastcall HalpMapNvsArea(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdi

  result = (unsigned int)HalpNvsPreservedDataSize;
  if ( !HalpNvsPreservedDataSize )
  {
    HalpDisableNvsSaveRestore = 1;
    return result;
  }
  HalpDisableNvsSaveRestore = 0;
  result = HalpMmAllocCtxAlloc(a1, (unsigned int)HalpNvsPreservedDataSize);
  HalpNvsPreservedData = result;
  if ( !result )
    goto LABEL_8;
  v2 = 0LL;
  if ( HalpNvsRegionCount )
  {
    while ( 1 )
    {
      result = MmMapIoSpaceEx(
                 *(_QWORD *)(HalpNvsRegionData + 24 * v2),
                 *(unsigned int *)(HalpNvsRegionData + 24 * v2 + 8),
                 0x204u);
      *(_QWORD *)(HalpNvsRegionData + 24 * v2 + 16) = result;
      if ( !result )
        break;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= HalpNvsRegionCount )
        return result;
    }
LABEL_8:
    DbgPrint("HALACPI:  The BIOS's non-volatile data will not be preserved\n");
    HalpDisableNvsSaveRestore = 1;
    return HalpFreeNvsBuffers();
  }
  return result;
}
