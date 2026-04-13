/*
 * XREFs of ??$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z @ 0x1800718D4
 * Callers:
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006F0F8 (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800714B0 (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL::Wrappers::HString::Set<wchar_t const *>(HSTRING *string, const WCHAR **a2)
{
  const WCHAR *v2; // rsi
  unsigned __int64 v4; // rbx
  UINT32 v5; // edx
  const WCHAR *v6; // rcx

  v2 = *a2;
  if ( *a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v2[v4] );
    if ( v4 > 0xFFFFFFFF )
      return -2147024362;
    WindowsDeleteString(*string);
    v5 = v4;
    v6 = v2;
  }
  else
  {
    WindowsDeleteString(*string);
    v5 = 0;
    v6 = &Src;
  }
  *string = 0LL;
  return WindowsCreateString(v6, v5, string);
}
