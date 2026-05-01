/*
 * XREFs of sub_18006649C @ 0x18006649C
 * Callers:
 *     sub_18003A9F8 @ 0x18003A9F8 (sub_18003A9F8.c)
 *     sub_180064258 @ 0x180064258 (sub_180064258.c)
 * Callees:
 *     sub_18003ABD4 @ 0x18003ABD4 (sub_18003ABD4.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

FARPROC __fastcall sub_18006649C(__int64 a1)
{
  FARPROC result; // rax
  HMODULE v3; // rax

  result = (FARPROC)qword_1800B5018;
  if ( qword_1800B5018 )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  v3 = sub_18003ABD4();
  result = GetProcAddress(v3, "RtlUnsubscribeWnfNotificationWaitForCompletion");
  qword_1800B5018 = (__int64)result;
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  return result;
}
