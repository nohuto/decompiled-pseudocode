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

PVOID __cdecl RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  __int64 v2; // r9
  PVOID result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  if ( (unsigned __int64)PcValue >= *(&xmmword_140E00020 + 1)
    && (unsigned __int64)PcValue < *(&xmmword_140E00020 + 1) + (unsigned int)qword_140E00030 )
  {
    v5 = *(_OWORD *)&xmmword_140E00020;
  }
  else
  {
    RtlpxLookupFunctionTable((unsigned __int64)PcValue, (unsigned __int64)&v5, *(&xmmword_140E00020 + 1), v2);
  }
  result = (PVOID)*((_QWORD *)&v5 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v5 + 1);
  return result;
}
