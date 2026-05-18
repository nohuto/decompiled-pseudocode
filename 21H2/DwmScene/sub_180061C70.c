/*
 * XREFs of sub_180061C70 @ 0x180061C70
 * Callers:
 *     sub_180061CF8 @ 0x180061CF8 (sub_180061CF8.c)
 * Callees:
 *     atexit @ 0x180123E24 (atexit.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 */

int *sub_180061C70()
{
  if ( dword_180220930 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180220930);
    if ( dword_180220930 == -1 )
    {
      dword_18020F440 = 1836409916;
      word_18020F444 = 31085;
      byte_18020F446 = 62;
      atexit(sub_1801313D0);
      Init_thread_footer(&dword_180220930);
    }
  }
  return &dword_18020F440;
}
