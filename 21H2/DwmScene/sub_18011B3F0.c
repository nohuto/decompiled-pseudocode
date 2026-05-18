/*
 * XREFs of sub_18011B3F0 @ 0x18011B3F0
 * Callers:
 *     sub_18011B768 @ 0x18011B768 (sub_18011B768.c)
 * Callees:
 *     atexit @ 0x180123E24 (atexit.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *sub_18011B3F0()
{
  _QWORD *v1; // rax

  if ( dword_180221FA8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180221FA8);
    if ( dword_180221FA8 == -1 )
    {
      v1 = operator new(0x68uLL);
      *v1 = v1;
      v1[1] = v1;
      v1[2] = v1;
      *((_WORD *)v1 + 12) = 257;
      qword_180221F98 = (__int64)v1;
      atexit(sub_180139420);
      Init_thread_footer(&dword_180221FA8);
    }
  }
  return &qword_180221F98;
}
