/*
 * XREFs of IopUpdateIrpTransferCount @ 0x1403488C0
 * Callers:
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     IopCopyCompleteReadRequest @ 0x140418160 (IopCopyCompleteReadRequest.c)
 *     IopIoRingCompleteIrp @ 0x140559FA8 (IopIoRingCompleteIrp.c)
 * Callees:
 *     IopUpdateReadTransferCount @ 0x14022B4B0 (IopUpdateReadTransferCount.c)
 *     IopUpdateWriteTransferCount @ 0x1402A3680 (IopUpdateWriteTransferCount.c)
 *     IopUpdateOtherTransferCount @ 0x140348980 (IopUpdateOtherTransferCount.c)
 */

struct _KTHREAD *__fastcall IopUpdateIrpTransferCount(__int64 a1, __int64 a2)
{
  int v2; // eax
  struct _KTHREAD *result; // rax

  v2 = *(_DWORD *)(a1 + 16);
  if ( (v2 & 0x100) != 0 )
    return IopUpdateReadTransferCount(*(_DWORD *)(a1 + 56), a2);
  if ( (v2 & 0x200) != 0 )
    return IopUpdateWriteTransferCount(*(_DWORD *)(a1 + 56), a2);
  result = *(struct _KTHREAD **)(a1 + 56);
  if ( (__int64)result >= 0 )
    return (struct _KTHREAD *)IopUpdateOtherTransferCount((unsigned int)result);
  return result;
}
