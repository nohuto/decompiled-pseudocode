/*
 * XREFs of __local_stdio_printf_options @ 0x180034E64
 * Callers:
 *     ??$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_fe718337787c493ce2d833414db25eba_@@@Z @ 0x1800332AC (--$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@-$NativeString@V-$CoTaskMemPol.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180033408 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x180034DB0 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     initialize_printf_standard_rounding @ 0x18008CBA0 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x18008CBC0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18008CC00 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18008D828 (__scrt_initialize_default_local_stdio_options.c)
 *     _vscwprintf @ 0x18008DF20 (_vscwprintf.c)
 *     swprintf_s @ 0x18008DF70 (swprintf_s.c)
 *     _scwprintf @ 0x18008DFC8 (_scwprintf.c)
 *     _vsnprintf_s @ 0x18008E0C8 (_vsnprintf_s.c)
 *     _vsnwprintf_l @ 0x180467DDC (_vsnwprintf_l.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
