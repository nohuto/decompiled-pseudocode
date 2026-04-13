/*
 * XREFs of _GetLocaleHandleByColl @ 0x1800B755C
 * Callers:
 *     _Towlower @ 0x1800AF3C0 (_Towlower.c)
 *     _Tolower @ 0x1800AF520 (_Tolower.c)
 *     _Towupper @ 0x1800AFA08 (_Towupper.c)
 *     _Toupper @ 0x1800B7FF4 (_Toupper.c)
 *     _Strcoll @ 0x1800CA6A0 (_Strcoll.c)
 *     _Wcscoll @ 0x1800CA7F8 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800CA8F8 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800CAA28 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByColl(unsigned int *a1)
{
  return *a1;
}
