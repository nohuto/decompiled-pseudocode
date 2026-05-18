/*
 * XREFs of sub_1800642AC @ 0x1800642AC
 * Callers:
 *     sub_180064394 @ 0x180064394 (sub_180064394.c)
 * Callees:
 *     atexit @ 0x180123E24 (atexit.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *sub_1800642AC()
{
  if ( dword_180220A70 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180220A70);
    if ( dword_180220A70 == -1 )
    {
      qword_18020F520 = 0x6C6E4F6874706544LL;
      byte_18020F528 = 121;
      qmemcpy(&qword_18020F540, "Diagnostics", 11);
      qword_18020F560 = 0x73614D6168706C41LL;
      byte_18020F568 = 107;
      qmemcpy(&qword_18020F580, "AlphaBlend", 10);
      atexit(sub_180131410);
      Init_thread_footer(&dword_180220A70);
    }
  }
  return &qword_18020F520;
}
