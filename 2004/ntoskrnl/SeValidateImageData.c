/*
 * XREFs of SeValidateImageData @ 0x1406EBC98
 * Callers:
 *     MiValidateInPage @ 0x1402297C0 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1406EBA64 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_140C1D8C8 )
    return qword_140C1D8C8(a1);
  else
    return 3221226536LL;
}
