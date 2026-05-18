/*
 * XREFs of sub_180115A74 @ 0x180115A74
 * Callers:
 *     sub_18011584C @ 0x18011584C (sub_18011584C.c)
 * Callees:
 *     atexit @ 0x18011E554 (atexit.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 *     _Mtx_init_in_situ @ 0x18011F9A6 (_Mtx_init_in_situ.c)
 */

void *sub_180115A74()
{
  if ( dword_18021ABF0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18021ABF0);
    if ( dword_18021ABF0 == -1 )
    {
      Mtx_init_in_situ((_Mtx_t)&unk_18021ABA0, 2);
      atexit(sub_180133AA0);
      Init_thread_footer(&dword_18021ABF0);
    }
  }
  return &unk_18021ABA0;
}
