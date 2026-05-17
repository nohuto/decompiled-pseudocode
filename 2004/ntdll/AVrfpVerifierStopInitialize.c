/*
 * XREFs of AVrfpVerifierStopInitialize @ 0x1800DB4C0
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D97F8 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1800152F0 (RtlInitAnsiString.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     DbgPrint @ 0x180050960 (DbgPrint.c)
 *     _wcsicmp @ 0x18008DC70 (_wcsicmp.c)
 */

__int64 AVrfpVerifierStopInitialize()
{
  __int64 i; // rbx
  unsigned __int64 v2; // rbx
  int ProcedureAddressForCaller; // ebx
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  for ( i = AVrfpVerifierProvidersList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &AVrfpVerifierProvidersList )
      goto LABEL_5;
    if ( !wcsicmp(*(const wchar_t **)(i + 24), L"verifier.dll") )
      break;
  }
  v2 = *(_QWORD *)(*(_QWORD *)(i + 32) + 48LL);
  if ( !v2 )
  {
LABEL_5:
    DbgPrint("AVRF: Failed to find verifier.dll among loaded providers! \n");
    return 3221225473LL;
  }
  RtlInitAnsiString(&DestinationString, "VerifierStopMessage");
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v2, (const void **)&DestinationString, 0, &v6, 0, retaddr);
  if ( ProcedureAddressForCaller >= 0 )
    AVrfpVerifierStopMessageFunction = v6;
  else
    DbgPrint("AVRF: Failed to find `VerifierStopMessage()' export in verifier.dll! \n");
  return (unsigned int)ProcedureAddressForCaller;
}
