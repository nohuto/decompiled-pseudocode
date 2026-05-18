/*
 * XREFs of sub_18005AB60 @ 0x18005AB60
 * Callers:
 *     sub_1800618F0 @ 0x1800618F0 (sub_1800618F0.c)
 * Callees:
 *     atexit @ 0x180123E24 (atexit.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 */

int *sub_18005AB60()
{
  if ( dword_180220514 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180220514);
    if ( dword_180220514 == -1 )
    {
      dword_18020F360 = 1836409916;
      word_18020F364 = 31085;
      byte_18020F366 = 62;
      atexit(sub_1801313B0);
      Init_thread_footer(&dword_180220514);
    }
  }
  return &dword_18020F360;
}
