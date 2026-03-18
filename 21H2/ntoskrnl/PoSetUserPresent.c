/*
 * XREFs of PoSetUserPresent @ 0x140368E20
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     PopSetSystemState @ 0x140368E90 (PopSetSystemState.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PoSetUserPresent(unsigned int a1)
{
  char v2; // bl
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    PopAcquirePolicyLock();
    v2 = 1;
  }
  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    v4 = 0LL;
    v5 = 0;
    v6 = 0;
    EtwTraceKernelEvent((__int64)&v4, 1u, 0x80008000, 0x1241u, 0x401802u);
  }
  result = PopSetSystemState(4LL, a1);
  if ( v2 )
    return PopReleasePolicyLock();
  return result;
}
