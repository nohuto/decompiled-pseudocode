/*
 * XREFs of sub_1801159EC @ 0x1801159EC
 * Callers:
 *     sub_18011584C @ 0x18011584C (sub_18011584C.c)
 * Callees:
 *     atexit @ 0x18011E554 (atexit.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *sub_1801159EC()
{
  _QWORD *v1; // rax

  if ( dword_18021AC08 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18021AC08);
    if ( dword_18021AC08 == -1 )
    {
      v1 = operator new(0x48uLL);
      *v1 = v1;
      v1[1] = v1;
      v1[2] = v1;
      *((_WORD *)v1 + 12) = 257;
      qword_18021ABF8 = (__int64)v1;
      atexit(sub_180133A50);
      Init_thread_footer(&dword_18021AC08);
    }
  }
  return &qword_18021ABF8;
}
