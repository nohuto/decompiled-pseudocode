/*
 * XREFs of IopAllocateIrpMustSucceed @ 0x140211230
 * Callers:
 *     IopDeleteFile @ 0x1405FE150 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14060E6B0 (IopCloseFile.c)
 *     IoCancelFileOpen @ 0x140896050 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x14089DAF4 (IopFreeBandwidthContract.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopAllocateReserveIrp @ 0x1404FE7D0 (IopAllocateReserveIrp.c)
 */

__int64 __fastcall IopAllocateIrpMustSucceed(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 result; // rax
  __int64 v5; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  for ( result = IopAllocateIrpExReturn(a1, a2, 0LL, retaddr);
        !result;
        result = IopAllocateIrpExReturn(a1, v2, 0LL, retaddr) )
  {
    result = IopAllocateReserveIrp(v5, v2, 3LL);
    if ( result )
      break;
  }
  *(_BYTE *)(result + 71) |= 0x20u;
  return result;
}
