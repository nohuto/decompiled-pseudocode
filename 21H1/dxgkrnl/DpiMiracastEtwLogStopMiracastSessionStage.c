/*
 * XREFs of DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C00515EC
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0052EF8 (DpiMiracastTearDownAssociation.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C02C9FA4 (DpiMiracastHandleStopSessionDone.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0038624 (McTemplateK0pq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall DpiMiracastEtwLogStopMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &EventMiracastStopMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
