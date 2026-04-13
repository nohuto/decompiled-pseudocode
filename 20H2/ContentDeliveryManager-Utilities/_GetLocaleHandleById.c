/*
 * XREFs of _GetLocaleHandleById @ 0x1800B9778
 * Callers:
 *     _Tolower @ 0x1800B1730 (_Tolower.c)
 *     _Toupper @ 0x1800BA204 (_Toupper.c)
 *     _Strcoll @ 0x1800CC8B0 (_Strcoll.c)
 *     _Getdateorder @ 0x1800CC9A8 (_Getdateorder.c)
 *     _Wcscoll @ 0x1800CCA08 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800CCB08 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800CCC38 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleById(int a1)
{
  return *(unsigned int *)(___lc_handle_func() + 4LL * a1);
}
