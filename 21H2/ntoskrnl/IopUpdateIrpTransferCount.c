/*
 * XREFs of IopUpdateIrpTransferCount @ 0x1403F116C
 * Callers:
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     IopCopyCompleteReadRequest @ 0x1403F1900 (IopCopyCompleteReadRequest.c)
 * Callees:
 *     IopUpdateWriteTransferCount @ 0x140269CB0 (IopUpdateWriteTransferCount.c)
 *     IopUpdateReadTransferCount @ 0x14026A3C0 (IopUpdateReadTransferCount.c)
 *     IopUpdateOtherTransferCount @ 0x140350410 (IopUpdateOtherTransferCount.c)
 */

struct _KTHREAD *__fastcall IopUpdateIrpTransferCount(__int64 a1, __int64 a2)
{
  struct _KTHREAD *result; // rax

  result = (struct _KTHREAD *)*(unsigned int *)(a1 + 16);
  if ( ((unsigned __int16)result & 0x100) != 0 )
    return IopUpdateReadTransferCount(*(_DWORD *)(a1 + 56), a2);
  if ( ((unsigned __int16)result & 0x200) != 0 )
    return (struct _KTHREAD *)IopUpdateWriteTransferCount(*(_DWORD *)(a1 + 56), a2);
  if ( *(__int64 *)(a1 + 56) >= 0 )
    return IopUpdateOtherTransferCount(*(_DWORD *)(a1 + 56), a2);
  return result;
}
