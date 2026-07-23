/*
 * XREFs of _RtlQueryApplicationKeyOption@32 @ 0x4B2A6C1D
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _LdrpIsVerifierActivationFilterMatched@12 @ 0x4B333042 (_LdrpIsVerifierActivationFilterMatched@12.c)
 * Callees:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 */

int __fastcall RtlQueryApplicationKeyOption(
        HANDLE KeyHandle,
        HANDLE a2,
        PCWSTR SourceString,
        int a4,
        PULONG Value,
        int a6,
        int a7,
        _DWORD *a8)
{
  int result; // eax

  if ( KeyHandle
    && ((result = RtlQueryImageFileKeyOption(KeyHandle, SourceString, a4, Value, a6, 0), result >= 0)
     || result == -2147483643) )
  {
    if ( a8 )
      *a8 = KeyHandle;
  }
  else if ( a2
         && ((result = RtlQueryImageFileKeyOption(a2, SourceString, a4, Value, a6, 0), result >= 0)
          || result == -2147483643) )
  {
    if ( a8 )
      *a8 = a2;
  }
  else
  {
    return -1073741811;
  }
  return result;
}
