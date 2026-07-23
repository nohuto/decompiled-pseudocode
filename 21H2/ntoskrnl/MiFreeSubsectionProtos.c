/*
 * XREFs of MiFreeSubsectionProtos @ 0x14061BE10
 * Callers:
 *     MiDereferencePerSessionProtos @ 0x14061B9CC (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x14061BAE4 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiDeletePerSessionProtos @ 0x14024D674 (MiDeletePerSessionProtos.c)
 */

__int64 __fastcall MiFreeSubsectionProtos(char **a1)
{
  char *v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      break;
    *a1 = *(char **)v2;
    result = MiDeletePerSessionProtos(v2);
  }
  return result;
}
