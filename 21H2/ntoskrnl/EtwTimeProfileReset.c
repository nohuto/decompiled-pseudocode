/*
 * XREFs of EtwTimeProfileReset @ 0x1408644E0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeStopProfile @ 0x1405716A4 (KeStopProfile.c)
 *     EtwpTimeProfileStart @ 0x1409E3B04 (EtwpTimeProfileStart.c)
 */

__int64 EtwTimeProfileReset()
{
  __int64 result; // rax

  result = DWORD1(PerfGlobalGroupMask[0]);
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 2) != 0 )
  {
    KeStopProfile((ULONG_PTR)&EtwpProfileObject);
    return EtwpTimeProfileStart();
  }
  return result;
}
