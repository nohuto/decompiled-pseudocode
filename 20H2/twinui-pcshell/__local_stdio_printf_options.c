/*
 * XREFs of __local_stdio_printf_options @ 0x18002BFC4
 * Callers:
 *     ??$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_fe718337787c493ce2d833414db25eba_@@@Z @ 0x18002A40C (--$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@-$NativeString@V-$CoTaskMemPol.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002A568 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x18002BF10 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     initialize_printf_standard_rounding @ 0x18008C700 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x18008C720 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18008C760 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18008D388 (__scrt_initialize_default_local_stdio_options.c)
 *     _vscwprintf @ 0x18008DA80 (_vscwprintf.c)
 *     swprintf_s @ 0x18008DAD0 (swprintf_s.c)
 *     _scwprintf @ 0x18008DB28 (_scwprintf.c)
 *     _vsnprintf_s @ 0x18008DC28 (_vsnprintf_s.c)
 *     _vsnwprintf_l @ 0x1804676DC (_vsnwprintf_l.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
