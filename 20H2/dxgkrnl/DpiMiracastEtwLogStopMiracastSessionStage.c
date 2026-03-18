/*
 * XREFs of DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C005253C
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0053E48 (DpiMiracastTearDownAssociation.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C02CD564 (DpiMiracastHandleStopSessionDone.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00393B4 (McTemplateK0pq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall DpiMiracastEtwLogStopMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &EventMiracastStopMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
