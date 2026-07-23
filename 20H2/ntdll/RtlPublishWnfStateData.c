/*
 * XREFs of RtlPublishWnfStateData @ 0x18007CBB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1800A0A60 (ZwUpdateWnfStateData.c)
 *     RtlpWnfETWEventPublish @ 0x1800DECF8 (RtlpWnfETWEventPublish.c)
 */

NTSTATUS __cdecl RtlPublishWnfStateData(
        WNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *Buffer,
        ULONG Length,
        const void *ExplicitScope)
{
  int updated; // ebx
  __int64 v7; // rdx
  WNF_STATE_NAME StateNamea; // [rsp+40h] [rbp-28h] BYREF

  StateNamea = StateName;
  updated = ZwUpdateWnfStateData(&StateNamea, Buffer, Length, TypeId, ExplicitScope, 0, 0);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v7 = 2147353486LL;
  if ( *(_BYTE *)v7 && updated >= 0 )
    ((void (__fastcall *)(_QWORD, _QWORD))RtlpWnfETWEventPublish)(StateNamea, Length);
  return updated;
}
