/*
 * XREFs of PopCheckForAbnormalReset @ 0x1403CC8A4
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     PopDiagTraceAbnormalReset @ 0x14056B694 (PopDiagTraceAbnormalReset.c)
 */

__int64 PopCheckForAbnormalReset()
{
  __int64 result; // rax

  if ( (unsigned __int8)off_140C008D0[0]() )
    return PopDiagTraceAbnormalReset(DWORD1(PoOffCrashConfigTable));
  result = (unsigned int)(PoOffCrashConfigTable - 1);
  if ( (unsigned int)result <= 1 )
  {
    if ( DWORD1(PoOffCrashConfigTable) )
      return PopDiagTraceAbnormalReset(DWORD1(PoOffCrashConfigTable));
  }
  return result;
}
