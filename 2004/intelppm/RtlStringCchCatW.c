/*
 * XREFs of RtlStringCchCatW @ 0x1C000FDCC
 * Callers:
 *     ReadEnergyEquation @ 0x1C003B680 (ReadEnergyEquation.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C000202C (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchCatW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v4; // rdx
  NTSTRSAFE_PWSTR v5; // rax
  NTSTATUS result; // eax
  __int64 v7; // rcx
  size_t v8; // [rsp+20h] [rbp-18h]

  v4 = 192LL;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    v7 = 192 - v4;
  else
    v7 = 0LL;
  if ( v4 )
    return RtlStringCopyWorkerW(&pszDest[v7], 192 - v7, (size_t *)pszSrc, pszSrc, v8);
  return result;
}
