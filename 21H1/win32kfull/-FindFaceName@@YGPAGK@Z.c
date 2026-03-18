/*
 * XREFs of ?FindFaceName@@YGPAGK@Z @ 0x8ADBC
 * Callers:
 *     ?bGetFaceName@MAPPER@@AAEHXZ @ 0x8ACA6 (-bGetFaceName@MAPPER@@AAEHXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__thiscall FindFaceName(void *this)
{
  unsigned int *i; // edx

  for ( i = MAPPER::SignatureTable; ; ++i )
  {
    if ( i >= (unsigned int *)MAPPER::FaceNameTable )
      return (unsigned __int16 *)byte_FC318;
    if ( (void *)*(unsigned __int16 *)i == this )
      break;
  }
  return &MAPPER::FaceNameTable[*((unsigned __int16 *)i + 1)];
}
