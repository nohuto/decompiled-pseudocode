/*
 * XREFs of MiLocateSessionProtosInSubsection @ 0x1402CF08C
 * Callers:
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A628C (MiGetSharedProtosAtDpcLevel.c)
 *     MiDereferenceSubsectionProtos @ 0x1406BC8AC (MiDereferenceSubsectionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406BC914 (MiCreatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiLocateSessionProtosInSubsection(__int64 a1, unsigned int a2)
{
  __int64 *result; // rax

  result = *(__int64 **)(a1 + 24);
  while ( result )
  {
    if ( a2 > *((_DWORD *)result + 16) )
    {
      result = (__int64 *)result[1];
    }
    else
    {
      if ( a2 >= *((_DWORD *)result + 16) )
        return result;
      result = (__int64 *)*result;
    }
  }
  return 0LL;
}
