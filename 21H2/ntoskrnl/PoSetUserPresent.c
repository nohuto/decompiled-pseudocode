/*
 * XREFs of PoSetUserPresent @ 0x1403A5FA0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     PopSetSystemState @ 0x1403A6010 (PopSetSystemState.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PoSetUserPresent(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF

  v2 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    PopAcquirePolicyLock(a1, a2);
  if ( (xmmword_140CFC490 & 0x8000) != 0 )
  {
    v7[0] = 0LL;
    v7[1] = 0LL;
    EtwTraceKernelEvent((int)v7, 1, 0x80008000, 4673, 4200450);
  }
  result = PopSetSystemState(4LL, v2);
  if ( CurrentIrql < 2u )
    return PopReleasePolicyLock(v6, v5);
  return result;
}
