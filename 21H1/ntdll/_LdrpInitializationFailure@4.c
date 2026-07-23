/*
 * XREFs of _LdrpInitializationFailure@4 @ 0x4B331C4E
 * Callers:
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 *     _LdrpInitializeShimDllDependencies@0 @ 0x4B2A672F (_LdrpInitializeShimDllDependencies@0.c)
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 * Callees:
 *     _ZwRaiseHardError@24 @ 0x4B2F3FF0 (_ZwRaiseHardError@24.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpLogFatalLdrEtwEvent@8 @ 0x4B330261 (_LdrpLogFatalLdrEtwEvent@8.c)
 */

_WORD *__thiscall LdrpInitializationFailure(void *this)
{
  char v1; // al
  _WORD *result; // eax
  ULONG Response; // [esp+8h] [ebp-8h] BYREF
  unsigned __int64 Parameters; // [esp+Ch] [ebp-4h] BYREF

  v1 = ShowSnaps;
  if ( (ShowSnaps & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (int)"minkernel\\ntdll\\ldrinit.c",
      1949,
      (int)"LdrpInitializationFailure",
      0,
      "Process initialization failed with status 0x%08lx\n",
      this);
    v1 = ShowSnaps;
  }
  if ( (v1 & 0x10) != 0 )
    __debugbreak();
  result = LdrpLogFatalLdrEtwEvent(
             &NtCurrentPeb()->ProcessParameters->ImagePathName.Length,
             (const EVENT_DESCRIPTOR *)LdrFatalInitError);
  if ( !LdrpFatalHardErrorCount )
  {
    LODWORD(Parameters) = this;
    return (_WORD *)ZwRaiseHardError(-1073741499, 1u, 0, &Parameters, 1u, &Response);
  }
  return result;
}
