/*
 * XREFs of sub_18005AA38 @ 0x18005AA38
 * Callers:
 *     sub_18005B5DC @ 0x18005B5DC (sub_18005B5DC.c)
 * Callees:
 *     atexit @ 0x180123E24 (atexit.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *sub_18005AA38()
{
  if ( dword_180220528 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180220528);
    if ( dword_180220528 == -1 )
    {
      qmemcpy(&qword_18020F380, "ColorGrading", 12);
      qmemcpy(&qword_18020F3A0, "ContrastCurve", 13);
      qmemcpy(&qword_18020F3C0, "Diagnostics", 11);
      qmemcpy(&qword_18020F3E0, "GammaEncoding", 13);
      qmemcpy(&qword_18020F400, "ToneMapping", 11);
      atexit(sub_180131390);
      Init_thread_footer(&dword_180220528);
    }
  }
  return &qword_18020F380;
}
