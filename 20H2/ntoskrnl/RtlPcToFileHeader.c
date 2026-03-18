/*
 * XREFs of RtlPcToFileHeader @ 0x1402FEEF0
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x1402E73C4 (RtlGuardCheckExceptionHandler.c)
 *     KiLockExtendedServiceTable @ 0x1403DB558 (KiLockExtendedServiceTable.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058DA38 (RtlGuardCheckLongJumpTarget.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1406AFC40 (EtwpLocateDbgIdForRegEntry.c)
 *     KeSetTracepoint @ 0x1408BEBD0 (KeSetTracepoint.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x140228D50 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlPcToFileHeader(unsigned __int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  if ( a1 >= *(&xmmword_140E00020 + 1) && a1 < *(&xmmword_140E00020 + 1) + (unsigned int)qword_140E00030 )
    v6 = *(_OWORD *)&xmmword_140E00020;
  else
    RtlpxLookupFunctionTable(a1, (unsigned __int64)&v6, *(&xmmword_140E00020 + 1), a4);
  result = *((_QWORD *)&v6 + 1);
  *a2 = *((_QWORD *)&v6 + 1);
  return result;
}
