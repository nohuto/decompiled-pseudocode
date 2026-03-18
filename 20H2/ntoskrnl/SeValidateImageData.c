/*
 * XREFs of SeValidateImageData @ 0x1406BF0A8
 * Callers:
 *     MiValidateInPage @ 0x1402C9D90 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1406BEE74 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_140C1D968 )
    return qword_140C1D968(a1);
  else
    return 3221226536LL;
}
