/*
 * XREFs of IopAllocateIrpMustSucceed @ 0x14035C630
 * Callers:
 *     IopCloseFile @ 0x140713E00 (IopCloseFile.c)
 *     IopDeleteFile @ 0x14071AB40 (IopDeleteFile.c)
 *     IoCancelFileOpen @ 0x140893780 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x14089B224 (IopFreeBandwidthContract.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 *     IopAllocateReserveIrp @ 0x1405002F0 (IopAllocateReserveIrp.c)
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
