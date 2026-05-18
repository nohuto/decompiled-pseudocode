/*
 * XREFs of sub_18011B478 @ 0x18011B478
 * Callers:
 *     sub_18011B768 @ 0x18011B768 (sub_18011B768.c)
 * Callees:
 *     atexit @ 0x180123E24 (atexit.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 *     _Mtx_init_in_situ @ 0x180125276 (_Mtx_init_in_situ.c)
 */

void *sub_18011B478()
{
  if ( dword_180221F90 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180221F90);
    if ( dword_180221F90 == -1 )
    {
      Mtx_init_in_situ((_Mtx_t)&unk_180221F40, 2);
      atexit(sub_180139470);
      Init_thread_footer(&dword_180221F90);
    }
  }
  return &unk_180221F40;
}
