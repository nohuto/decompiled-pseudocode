/*
 * XREFs of ?Request@@YAKPEAUtagDDECONV@@@Z @ 0x1C021ABA4
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C48C (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C021A6B8 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 */

__int64 __fastcall Request(struct tagDDECONV **a1)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)a1, 4, 14, 39, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  return AnticipatePost(
           a1[4],
           (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxRequestAck,
           0LL,
           0LL,
           0LL,
           0) != 0LL
       ? 2
       : 0;
}
