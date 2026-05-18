/*
 * XREFs of sub_18005A984 @ 0x18005A984
 * Callers:
 *     sub_18005ABE8 @ 0x18005ABE8 (sub_18005ABE8.c)
 * Callees:
 *     atexit @ 0x180123E24 (atexit.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=2
int *sub_18005A984()
{
  if ( dword_1802204E0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_1802204E0);
    if ( dword_1802204E0 == -1 )
    {
      dword_18020F300 = 1920298050;
      byte_18020F304 = 56;
      dword_18020F320 = 1920298050;
      word_18020F324 = 13873;
      dword_18020F340 = 1920298050;
      word_18020F344 = 12851;
      atexit(sub_180131370);
      Init_thread_footer(&dword_1802204E0);
    }
  }
  return &dword_18020F300;
}
