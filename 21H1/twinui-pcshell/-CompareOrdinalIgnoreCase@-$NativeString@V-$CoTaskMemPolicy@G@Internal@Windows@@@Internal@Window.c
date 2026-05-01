/*
 * XREFs of ?CompareOrdinalIgnoreCase@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG@Z @ 0x18016F0B8
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18044AB18 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinalIgnoreCase(
        const WCHAR **a1,
        const WCHAR *a2)
{
  const WCHAR *v2; // r10
  const WCHAR *v3; // rax
  const WCHAR *v4; // rcx
  int v5; // r9d

  v2 = &word_1804BE2A8;
  v3 = a1[1];
  v4 = *a1;
  v5 = -(a2 != 0LL);
  if ( !a2 )
    a2 = &word_1804BE2A8;
  if ( v3 == (const WCHAR *)-1LL )
  {
    if ( v4 )
    {
      do
        v3 = (const WCHAR *)((char *)v3 + 1);
      while ( v4[(_QWORD)v3] );
    }
    else
    {
      LODWORD(v3) = 0;
    }
  }
  if ( v4 )
    v2 = v4;
  return CompareStringOrdinal(v2, (int)v3, a2, v5, 1);
}
