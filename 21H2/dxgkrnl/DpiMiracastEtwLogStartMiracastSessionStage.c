/*
 * XREFs of DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C00610BC
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C0063340 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C038D50C (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     McTemplateK0xq_EtwWriteTransfer @ 0x1C006464C (McTemplateK0xq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiMiracastEtwLogStartMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    return McTemplateK0xq_EtwWriteTransfer(a1, &EventMiracastStartMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
