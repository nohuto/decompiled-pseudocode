/*
 * XREFs of _GetLocaleHandleByColl @ 0x1800B9BBC
 * Callers:
 *     _Towlower @ 0x1800B1A20 (_Towlower.c)
 *     _Tolower @ 0x1800B1B80 (_Tolower.c)
 *     _Towupper @ 0x1800B2068 (_Towupper.c)
 *     _Toupper @ 0x1800BA654 (_Toupper.c)
 *     _Strcoll @ 0x1800CCD00 (_Strcoll.c)
 *     _Wcscoll @ 0x1800CCE58 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800CCF58 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800CD088 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByColl(unsigned int *a1)
{
  return *a1;
}
