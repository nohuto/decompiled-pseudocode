/*
 * XREFs of RtlPcToFileHeader @ 0x14034F460
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x1402E69A0 (RtlGuardCheckExceptionHandler.c)
 *     KiLockExtendedServiceTable @ 0x1403D88C8 (KiLockExtendedServiceTable.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058A008 (RtlGuardCheckLongJumpTarget.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1406FACAC (EtwpLocateDbgIdForRegEntry.c)
 *     KeSetTracepoint @ 0x1408B8E70 (KeSetTracepoint.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402E92F0 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlPcToFileHeader(unsigned __int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  if ( a1 >= *(&xmmword_140E00020 + 1) && a1 < *(&xmmword_140E00020 + 1) + (unsigned int)qword_140E00030 )
    v4 = *(_OWORD *)&xmmword_140E00020;
  else
    RtlpxLookupFunctionTable(a1, (__int64)&v4);
  result = *((_QWORD *)&v4 + 1);
  *a2 = *((_QWORD *)&v4 + 1);
  return result;
}
