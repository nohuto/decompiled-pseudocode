/*
 * XREFs of sub_1800D14C8 @ 0x1800D14C8
 * Callers:
 *     sub_18003A930 @ 0x18003A930 (sub_18003A930.c)
 *     sub_18003C320 @ 0x18003C320 (sub_18003C320.c)
 *     sub_18003C740 @ 0x18003C740 (sub_18003C740.c)
 *     sub_18003C8E0 @ 0x18003C8E0 (sub_18003C8E0.c)
 *     sub_180067A80 @ 0x180067A80 (sub_180067A80.c)
 *     sub_180067BAC @ 0x180067BAC (sub_180067BAC.c)
 *     sub_180067BE8 @ 0x180067BE8 (sub_180067BE8.c)
 *     sub_180067CB4 @ 0x180067CB4 (sub_180067CB4.c)
 *     sub_180068114 @ 0x180068114 (sub_180068114.c)
 *     sub_180070780 @ 0x180070780 (sub_180070780.c)
 *     sub_180071074 @ 0x180071074 (sub_180071074.c)
 *     sub_18007BD0C @ 0x18007BD0C (sub_18007BD0C.c)
 *     sub_180080AA4 @ 0x180080AA4 (sub_180080AA4.c)
 *     sub_180098190 @ 0x180098190 (sub_180098190.c)
 * Callees:
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 */

void *sub_1800D14C8()
{
  _QWORD *v1; // rax
  __int64 v2; // rdx

  if ( dword_180221670 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180221670);
    if ( dword_180221670 == -1 )
    {
      v2 = 75LL;
      v1 = &unk_180220D20;
      do
      {
        *(v1 - 1) = 0LL;
        *v1 = 0LL;
        v1[1] = 0LL;
        v1 += 4;
        --v2;
      }
      while ( v2 );
      Init_thread_footer(&dword_180221670);
    }
  }
  return &unk_180220D10;
}
