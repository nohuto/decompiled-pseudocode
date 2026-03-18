/*
 * XREFs of PspBindProcessSessionToJob @ 0x1406724CC
 * Callers:
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspEstablishJobHierarchy @ 0x140672018 (PspEstablishJobHierarchy.c)
 * Callees:
 *     MmGetSessionId @ 0x1402041B0 (MmGetSessionId.c)
 *     PspConvertJobToMixed @ 0x140904604 (PspConvertJobToMixed.c)
 */

__int64 __fastcall PspBindProcessSessionToJob(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  signed __int32 SessionId; // r9d
  int v4; // r10d
  signed __int32 v6; // eax

  SessionId = MmGetSessionId(a2);
  if ( v4 == SessionId )
    return 0LL;
  if ( v4 == -1
    && ((v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 480), SessionId, -1), v6 == -1)
     || v6 == SessionId) )
  {
    return 0LL;
  }
  else
  {
    return PspConvertJobToMixed(v2, 0LL);
  }
}
