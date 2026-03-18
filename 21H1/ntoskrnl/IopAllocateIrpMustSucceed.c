/*
 * XREFs of IopAllocateIrpMustSucceed @ 0x140253450
 * Callers:
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140600E60 (IopDeleteFile.c)
 *     IoCancelFileOpen @ 0x14088F240 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x140896CB0 (IopFreeBandwidthContract.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopAllocateReserveIrp @ 0x1404FA8DC (IopAllocateReserveIrp.c)
 */

__int64 __fastcall IopAllocateIrpMustSucceed(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  for ( result = IopAllocateIrpExReturn(); !result; result = IopAllocateIrpExReturn() )
  {
    result = IopAllocateReserveIrp(v4, a2, 3LL);
    if ( result )
      break;
  }
  *(_BYTE *)(result + 71) |= 0x20u;
  return result;
}
