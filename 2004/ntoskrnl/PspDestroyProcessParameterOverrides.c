/*
 * XREFs of PspDestroyProcessParameterOverrides @ 0x1406B1B70
 * Callers:
 *     PspDeleteCreateProcessContext @ 0x1406B19D4 (PspDeleteCreateProcessContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspDestroyProcessParameterOverrides(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return PsDestroyProcessParameterOverrides();
  return result;
}
