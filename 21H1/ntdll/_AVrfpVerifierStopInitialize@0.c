/*
 * XREFs of _AVrfpVerifierStopInitialize@0 @ 0x4B339708
 * Callers:
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _RtlInitAnsiString@8 @ 0x4B2F4FE0 (_RtlInitAnsiString@8.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 */

NTSTATUS __stdcall AVrfpVerifierStopInitialize()
{
  int i; // esi
  NTSTATUS result; // eax
  void *v2; // esi
  NTSTATUS v3; // esi
  PVOID ProcedureAddress; // [esp+Ch] [ebp-Ch] BYREF
  _STRING DestinationString; // [esp+10h] [ebp-8h] BYREF
  PVOID *retaddr; // [esp+1Ch] [ebp+4h]

  for ( i = AVrfpVerifierProvidersList; ; i = *(_DWORD *)i )
  {
    if ( (int *)i == &AVrfpVerifierProvidersList )
      goto LABEL_5;
    if ( !_wcsicmp(*(const wchar_t **)(i + 12), L"verifier.dll") )
      break;
  }
  v2 = *(void **)(*(_DWORD *)(i + 16) + 24);
  if ( !v2 )
  {
LABEL_5:
    DbgPrint("AVRF: Failed to find verifier.dll among loaded providers! \n");
    return -1073741823;
  }
  RtlInitAnsiString(&DestinationString, "VerifierStopMessage");
  result = LdrGetProcedureAddressForCaller(v2, &DestinationString, 0, &ProcedureAddress, 0, retaddr);
  v3 = result;
  if ( result >= 0 )
  {
    AVrfpVerifierStopMessageFunction = (int)ProcedureAddress;
  }
  else
  {
    DbgPrint("AVRF: Failed to find `VerifierStopMessage()' export in verifier.dll! \n");
    return v3;
  }
  return result;
}
