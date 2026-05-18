/*
 * XREFs of sub_180055168 @ 0x180055168
 * Callers:
 *     sub_180055D0C @ 0x180055D0C (sub_180055D0C.c)
 * Callees:
 *     atexit @ 0x18011E554 (atexit.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *sub_180055168()
{
  if ( dword_1802191F8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_1802191F8);
    if ( dword_1802191F8 == -1 )
    {
      qmemcpy(&qword_180208300, "ColorGrading", 12);
      qmemcpy(&qword_180208320, "ContrastCurve", 13);
      qmemcpy(&qword_180208340, "Diagnostics", 11);
      qmemcpy(&qword_180208360, "GammaEncoding", 13);
      qmemcpy(&qword_180208380, "ToneMapping", 11);
      atexit(sub_18012B9D0);
      Init_thread_footer(&dword_1802191F8);
    }
  }
  return &qword_180208300;
}
