/*
 * XREFs of __local_stdio_printf_options @ 0x180034A34
 * Callers:
 *     ??$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_fe718337787c493ce2d833414db25eba_@@@Z @ 0x18003304C (--$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@-$NativeString@V-$CoTaskMemPol.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800331A8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x180034980 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     initialize_printf_standard_rounding @ 0x18008C420 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x18008C440 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18008C480 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18008CF78 (__scrt_initialize_default_local_stdio_options.c)
 *     _vscwprintf @ 0x18008D670 (_vscwprintf.c)
 *     swprintf_s @ 0x18008D6C0 (swprintf_s.c)
 *     _scwprintf @ 0x18008D718 (_scwprintf.c)
 *     _vsnprintf_s @ 0x18008D7C8 (_vsnprintf_s.c)
 *     _vsnwprintf_l @ 0x180443F6C (_vsnwprintf_l.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
