/*
 * XREFs of IopAllocateIrpMustSucceed @ 0x1402AA860
 * Callers:
 *     IopDeleteFile @ 0x14072B630 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 *     IoCancelFileOpen @ 0x140935F60 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x14093FC6C (IopFreeBandwidthContract.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IopAllocateReserveIrp @ 0x1405562E8 (IopAllocateReserveIrp.c)
 */

__int64 __fastcall IopAllocateIrpMustSucceed(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = a2;
  for ( result = IopAllocateIrpExReturn(a1, a2, 0LL); !result; result = IopAllocateIrpExReturn(a1, v2, 0LL) )
  {
    result = IopAllocateReserveIrp(v5, v2, 3LL);
    if ( result )
      break;
  }
  *(_BYTE *)(result + 71) |= 0x20u;
  return result;
}
