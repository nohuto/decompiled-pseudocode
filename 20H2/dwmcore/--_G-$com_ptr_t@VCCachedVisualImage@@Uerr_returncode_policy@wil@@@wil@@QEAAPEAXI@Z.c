/*
 * XREFs of ??_G?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAXI@Z @ 0x18016C668
 * Callers:
 *     ??$destruct_range@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1801695FC (--$destruct_range@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@@Y.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 */

CRenderTargetBitmap **__fastcall wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::`scalar deleting destructor'(
        CRenderTargetBitmap **a1)
{
  CRenderTargetBitmap *v2; // rcx

  v2 = *a1;
  if ( v2 )
    CRenderTargetBitmap::Release(v2);
  return a1;
}
