/*
 * XREFs of WINRT_WindowsCreateString @ 0x18008E061
 * Callers:
 *     ?IsCortanaApp@DefaultLaunchPositionOverride@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800660E0 (-IsCortanaApp@DefaultLaunchPositionOverride@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?__windowsCreateString@__winRT@@YAJPEB_WHPEAPEAUHSTRING__@@@Z @ 0x180091014 (-__windowsCreateString@__winRT@@YAJPEB_WHPEAPEAUHSTRING__@@@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C41A4 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1801C41EC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x1801D4D98 (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x1802CA1AC (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 *     ?get@?$runtime_class_name@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x18044275C (-get@-$runtime_class_name@U-$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@SA-AUhstr.c)
 *     ?get@?$runtime_class_name@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1804427AC (-get@-$runtime_class_name@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@SA-AUhst.c)
 *     ?get@?$runtime_class_name@UIObjectWithSite@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1804427FC (-get@-$runtime_class_name@UIObjectWithSite@@X@impl@winrt@@SA-AUhstring@3@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WINRT_WindowsCreateString(PCNZWCH sourceString, UINT32 length, HSTRING *string)
{
  return WindowsCreateString(sourceString, length, string);
}
