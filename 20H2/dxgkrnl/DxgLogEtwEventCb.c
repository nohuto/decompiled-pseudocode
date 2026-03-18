/*
 * XREFs of DxgLogEtwEventCb @ 0x1C0043A70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0juhbr2_EtwWriteTransfer @ 0x1C0043AF8 (McTemplateK0juhbr2_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgLogEtwEventCb(int a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    return McTemplateK0juhbr2_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
