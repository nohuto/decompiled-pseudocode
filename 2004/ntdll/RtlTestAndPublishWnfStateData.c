/*
 * XREFs of RtlTestAndPublishWnfStateData @ 0x180084C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1800A07C0 (ZwUpdateWnfStateData.c)
 *     RtlpWnfETWEventPublish @ 0x1800DE958 (RtlpWnfETWEventPublish.c)
 */

__int64 __fastcall RtlTestAndPublishWnfStateData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  int updated; // ebx
  __int64 v8; // rdx
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF

  v10 = a1;
  updated = ZwUpdateWnfStateData(&v10, a3, a4, a2, a5, a6, 1);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v8 = 2147353486LL;
  if ( *(_BYTE *)v8 && updated >= 0 )
    RtlpWnfETWEventPublish(v10, a4);
  return (unsigned int)updated;
}
