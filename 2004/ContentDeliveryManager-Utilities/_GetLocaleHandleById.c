/*
 * XREFs of _GetLocaleHandleById @ 0x1800B9BC8
 * Callers:
 *     _Tolower @ 0x1800B1B80 (_Tolower.c)
 *     _Toupper @ 0x1800BA654 (_Toupper.c)
 *     _Strcoll @ 0x1800CCD00 (_Strcoll.c)
 *     _Getdateorder @ 0x1800CCDF8 (_Getdateorder.c)
 *     _Wcscoll @ 0x1800CCE58 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800CCF58 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800CD088 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleById(int a1)
{
  return *(unsigned int *)(___lc_handle_func() + 4LL * a1);
}
