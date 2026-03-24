/*
 * XREFs of DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C005341C
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C0055770 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C02CE44C (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C003A2E0 (McTemplateK0pq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall DpiMiracastEtwLogStartMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &EventMiracastStartMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
