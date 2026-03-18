/*
 * XREFs of EtwTraceDCompCommitBatchEvent @ 0x1C009C200
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C009BBF0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     McTemplateK0qpq_EtwWriteTransfer @ 0x1C012B41C (McTemplateK0qpq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceDCompCommitBatchEvent(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    return McTemplateK0qpq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3);
  return result;
}
