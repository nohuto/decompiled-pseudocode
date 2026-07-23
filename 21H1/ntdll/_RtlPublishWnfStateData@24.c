/*
 * XREFs of _RtlPublishWnfStateData@24 @ 0x4B2F1FE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtUpdateWnfStateData@28 @ 0x4B2F4660 (_NtUpdateWnfStateData@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpWnfETWEventPublish@12 @ 0x4B33C482 (_RtlpWnfETWEventPublish@12.c)
 */

NTSTATUS __cdecl RtlPublishWnfStateData(
        WNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *Buffer,
        ULONG Length,
        const void *ExplicitScope)
{
  int updated; // esi
  int v6; // ecx
  WNF_STATE_NAME v8; // [esp+4h] [ebp-Ch] BYREF

  v8 = StateName;
  updated = NtUpdateWnfStateData(&v8, Buffer, Length, TypeId, ExplicitScope, 0, 0);
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (int)NtCurrentPeb()->SharedData + 564;
  else
    v6 = 2147353486;
  if ( *(_BYTE *)v6 && updated >= 0 )
    RtlpWnfETWEventPublish(v8.Data[0], v8.Data[1]);
  return updated;
}
