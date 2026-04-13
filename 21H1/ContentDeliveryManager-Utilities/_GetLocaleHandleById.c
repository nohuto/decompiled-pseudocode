/*
 * XREFs of _GetLocaleHandleById @ 0x1800B7568
 * Callers:
 *     _Tolower @ 0x1800AF520 (_Tolower.c)
 *     _Toupper @ 0x1800B7FF4 (_Toupper.c)
 *     _Strcoll @ 0x1800CA6A0 (_Strcoll.c)
 *     _Getdateorder @ 0x1800CA798 (_Getdateorder.c)
 *     _Wcscoll @ 0x1800CA7F8 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800CA8F8 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800CAA28 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleById(int a1)
{
  return *(unsigned int *)(___lc_handle_func() + 4LL * a1);
}
