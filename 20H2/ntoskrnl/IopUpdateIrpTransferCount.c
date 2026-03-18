/*
 * XREFs of IopUpdateIrpTransferCount @ 0x1403F0538
 * Callers:
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 *     IopCopyCompleteReadRequest @ 0x1403F0C80 (IopCopyCompleteReadRequest.c)
 * Callees:
 *     IopUpdateWriteTransferCount @ 0x140209E80 (IopUpdateWriteTransferCount.c)
 *     IopUpdateReadTransferCount @ 0x140209EE0 (IopUpdateReadTransferCount.c)
 *     IopUpdateOtherTransferCount @ 0x140210C10 (IopUpdateOtherTransferCount.c)
 */

unsigned __int64 __fastcall IopUpdateIrpTransferCount(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  result = *(unsigned int *)(a1 + 16);
  if ( (result & 0x100) != 0 )
    return IopUpdateReadTransferCount(*(_DWORD *)(a1 + 56), a2);
  if ( (result & 0x200) != 0 )
    return IopUpdateWriteTransferCount(*(_DWORD *)(a1 + 56), a2);
  if ( *(__int64 *)(a1 + 56) >= 0 )
    return IopUpdateOtherTransferCount(*(_DWORD *)(a1 + 56), a2);
  return result;
}
