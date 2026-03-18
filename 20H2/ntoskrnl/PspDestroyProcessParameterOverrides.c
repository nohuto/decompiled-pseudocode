/*
 * XREFs of PspDestroyProcessParameterOverrides @ 0x140692CF0
 * Callers:
 *     PspDeleteCreateProcessContext @ 0x140692B54 (PspDeleteCreateProcessContext.c)
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
