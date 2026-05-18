/*
 * XREFs of sub_18005C3A0 @ 0x18005C3A0
 * Callers:
 *     sub_18005C428 @ 0x18005C428 (sub_18005C428.c)
 * Callees:
 *     atexit @ 0x18011E554 (atexit.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 */

int *sub_18005C3A0()
{
  if ( dword_180219600 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180219600);
    if ( dword_180219600 == -1 )
    {
      dword_1802083C0 = 1836409916;
      word_1802083C4 = 31085;
      byte_1802083C6 = 62;
      atexit(sub_18012BA10);
      Init_thread_footer(&dword_180219600);
    }
  }
  return &dword_1802083C0;
}
