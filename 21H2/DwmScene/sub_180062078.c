/*
 * XREFs of sub_180062078 @ 0x180062078
 * Callers:
 *     sub_180062194 @ 0x180062194 (sub_180062194.c)
 * Callees:
 *     atexit @ 0x180123E24 (atexit.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *sub_180062078()
{
  if ( dword_180220948 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180220948);
    if ( dword_180220948 == -1 )
    {
      qmemcpy(&qword_18020F460, "ColorGrading", 12);
      qmemcpy(&qword_18020F480, "ContrastCurve", 13);
      qmemcpy(&qword_18020F4A0, "ToneMapping", 11);
      qword_18020F4E0 = 0x6C6E4F6874706544LL;
      byte_18020F4E8 = 121;
      qmemcpy(&qword_18020F500, "GroundPlane", 11);
      atexit(sub_1801313F0);
      Init_thread_footer(&dword_180220948);
    }
  }
  return &qword_18020F460;
}
