/*
 * XREFs of _GetLocaleHandleByColl @ 0x1800B976C
 * Callers:
 *     _Towlower @ 0x1800B15D0 (_Towlower.c)
 *     _Tolower @ 0x1800B1730 (_Tolower.c)
 *     _Towupper @ 0x1800B1C18 (_Towupper.c)
 *     _Toupper @ 0x1800BA204 (_Toupper.c)
 *     _Strcoll @ 0x1800CC8B0 (_Strcoll.c)
 *     _Wcscoll @ 0x1800CCA08 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800CCB08 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800CCC38 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByColl(unsigned int *a1)
{
  return *a1;
}
