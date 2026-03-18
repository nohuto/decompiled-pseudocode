/*
 * XREFs of ?MxGetSystemRoutineAddress@Mx@@SAPEAXPEBG@Z @ 0x1C002ECC4
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C002E278 (FxLibraryGlobalsCommission.c)
 *     FxLibraryGlobalsVerifyVersion @ 0x1C002EBEC (FxLibraryGlobalsVerifyVersion.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall Mx::MxGetSystemRoutineAddress(const wchar_t *FuncName)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, FuncName);
  return MmGetSystemRoutineAddress(&DestinationString);
}
