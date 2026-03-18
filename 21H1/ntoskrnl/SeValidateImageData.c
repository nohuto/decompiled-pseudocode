/*
 * XREFs of SeValidateImageData @ 0x1406CAA18
 * Callers:
 *     MiValidateInPage @ 0x140282810 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1406CA7E4 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_140C1DA88 )
    return qword_140C1DA88(a1);
  else
    return 3221226536LL;
}
