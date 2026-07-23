/*
 * XREFs of LdrpInitializationFailure @ 0x1800D0B78
 * Callers:
 *     LdrpLoadShimEngine @ 0x18006B8F4 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x18006BB94 (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x180074C8C (_LdrpInitialize.c)
 * Callees:
 *     NtRaiseHardError @ 0x18009FD80 (NtRaiseHardError.c)
 *     LdrpLogDbgPrint @ 0x1800CDCC8 (LdrpLogDbgPrint.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800CF468 (LdrpLogFatalLdrEtwEvent.c)
 */

NTSTATUS __fastcall LdrpInitializationFailure(int a1)
{
  char v1; // al
  unsigned __int64 v2; // rbx
  NTSTATUS result; // eax
  ULONG Response; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 Parameters; // [rsp+50h] [rbp+18h] BYREF

  v1 = LdrpDebugFlags;
  v2 = a1;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      1969,
      "LdrpInitializationFailure",
      0,
      "Process initialization failed with status 0x%08lx\n",
      a1);
    v1 = LdrpDebugFlags;
  }
  if ( (v1 & 0x10) != 0 )
    __debugbreak();
  result = LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &LdrFatalInitError);
  if ( !LdrpFatalHardErrorCount )
  {
    Parameters = v2;
    return NtRaiseHardError(-1073741499, 1u, 0, &Parameters, 1u, &Response);
  }
  return result;
}
