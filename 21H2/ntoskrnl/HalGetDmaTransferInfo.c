/*
 * XREFs of HalGetDmaTransferInfo @ 0x1404C64B0
 * Callers:
 *     HalCalculateScatterGatherListSizeV3 @ 0x1403A1120 (HalCalculateScatterGatherListSizeV3.c)
 * Callees:
 *     HalGetDmaTransferInfoInternal @ 0x14039FB98 (HalGetDmaTransferInfoInternal.c)
 */

__int64 __fastcall HalGetDmaTransferInfo(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-18h]

  result = HalGetDmaTransferInfoInternal(a1, a2, a3, a4, v7, a6);
  if ( (*a6 == 1 || *a6 == 2) && !a6[1] )
    a6[1] = 1;
  return result;
}
