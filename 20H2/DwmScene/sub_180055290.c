/*
 * XREFs of sub_180055290 @ 0x180055290
 * Callers:
 *     sub_18005C020 @ 0x18005C020 (sub_18005C020.c)
 * Callees:
 *     atexit @ 0x18011E554 (atexit.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 */

int *sub_180055290()
{
  if ( dword_1802191E4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_1802191E4);
    if ( dword_1802191E4 == -1 )
    {
      dword_1802082E0 = 1836409916;
      word_1802082E4 = 31085;
      byte_1802082E6 = 62;
      atexit(sub_18012B9F0);
      Init_thread_footer(&dword_1802191E4);
    }
  }
  return &dword_1802082E0;
}
