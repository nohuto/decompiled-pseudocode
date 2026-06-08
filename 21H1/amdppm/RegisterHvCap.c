/*
 * XREFs of RegisterHvCap @ 0x1C00216B0
 * Callers:
 *     RegisterHvPerfStates @ 0x1C00223C0 (RegisterHvPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegisterHvCap(_DWORD *a1)
{
  _DWORD v2[6]; // [rsp+20h] [rbp-28h] BYREF

  v2[1] = a1[12];
  v2[2] = a1[112];
  v2[3] = a1[124];
  v2[4] = a1[180];
  v2[0] = 62;
  if ( qword_1C0013670 )
    qword_1C0013670(v2);
  return 0LL;
}
