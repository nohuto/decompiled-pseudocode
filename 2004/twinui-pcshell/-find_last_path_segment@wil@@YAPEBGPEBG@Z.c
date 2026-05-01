/*
 * XREFs of ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x1800877C4
 * Callers:
 *     ?GetAppViewFileName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180015D34 (-GetAppViewFileName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x18045EE94 (-ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@.c)
 *     ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x18045FC70 (-ComposeWin32AppIdForJavaApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?IsJavawExe@@YA_NPEBG@Z @ 0x18045FE10 (-IsJavawExe@@YA_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall wil::find_last_path_segment(LPCWSTR lpStringSource, const unsigned __int16 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  int StringOrdinal; // eax

  v2 = -1LL;
  do
    ++v2;
  while ( lpStringSource[v2] );
  v4 = v2;
  if ( v2 && lpStringSource[v4 - 1] == 92 )
    LODWORD(v2) = v2 - 1;
  StringOrdinal = FindStringOrdinal(0x800000u, lpStringSource, v2, L"\\", 1, 1);
  if ( StringOrdinal == -1 )
    return &lpStringSource[v4];
  else
    return &lpStringSource[StringOrdinal + 1];
}
