/*
 * XREFs of ?IsAppAllowedToBeResized@HolographicApps@@YA_NPEBG@Z @ 0x18021ED80
 * Callers:
 *     ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x18021F910 (-ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall HolographicApps::IsAppAllowedToBeResized(const wchar_t *this, const unsigned __int16 *a2)
{
  wchar_t **v3; // rbx

  v3 = &off_1805970D8;
  while ( _o__wcsicmp(this, *v3) )
  {
    if ( ++v3 == (wchar_t **)&unk_1805970E0 )
      return 0;
  }
  return 1;
}
