/*
 * XREFs of IoTransferActivityId @ 0x140396A30
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     IopIsActivityTracingEventEnabled @ 0x140396A68 (IopIsActivityTracingEventEnabled.c)
 */

NTSTATUS __fastcall IoTransferActivityId(LPCGUID ActivityId, LPCGUID RelatedActivityId)
{
  NTSTATUS result; // eax

  result = IopIsActivityTracingEventEnabled(&IoTrace_ActivityIdTransfer);
  if ( (_BYTE)result )
    return EtwWriteEx(IoTraceHandle, &IoTrace_ActivityIdTransfer, 0LL, 0, ActivityId, RelatedActivityId, 0, 0LL);
  return result;
}
