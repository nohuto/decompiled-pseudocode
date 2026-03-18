/*
 * XREFs of MiFreeSubsectionProtos @ 0x1406E6BD0
 * Callers:
 *     MiDereferencePerSessionProtos @ 0x1406E678C (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406E68A4 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiDeletePerSessionProtos @ 0x14031F1CC (MiDeletePerSessionProtos.c)
 */

__int64 __fastcall MiFreeSubsectionProtos(unsigned __int64 **a1)
{
  unsigned __int64 *v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      break;
    *a1 = (unsigned __int64 *)*v2;
    result = MiDeletePerSessionProtos(v2);
  }
  return result;
}
