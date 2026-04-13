/*
 * XREFs of _GetLocaleHandleById @ 0x1800BBC78
 * Callers:
 *     _Tolower @ 0x1800B3C30 (_Tolower.c)
 *     _Toupper @ 0x1800BC704 (_Toupper.c)
 *     _Strcoll @ 0x1800CEDB0 (_Strcoll.c)
 *     _Getdateorder @ 0x1800CEEA8 (_Getdateorder.c)
 *     _Wcscoll @ 0x1800CEF08 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800CF008 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800CF138 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleById(int a1)
{
  return *(unsigned int *)(___lc_handle_func() + 4LL * a1);
}
