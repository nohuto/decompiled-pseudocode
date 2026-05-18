/*
 * XREFs of sub_1800CBBF8 @ 0x1800CBBF8
 * Callers:
 *     sub_180035060 @ 0x180035060 (sub_180035060.c)
 *     sub_180036A50 @ 0x180036A50 (sub_180036A50.c)
 *     sub_180036E70 @ 0x180036E70 (sub_180036E70.c)
 *     sub_180037010 @ 0x180037010 (sub_180037010.c)
 *     sub_1800621B0 @ 0x1800621B0 (sub_1800621B0.c)
 *     sub_1800622DC @ 0x1800622DC (sub_1800622DC.c)
 *     sub_180062318 @ 0x180062318 (sub_180062318.c)
 *     sub_1800623E4 @ 0x1800623E4 (sub_1800623E4.c)
 *     sub_180062844 @ 0x180062844 (sub_180062844.c)
 *     sub_18006AEB0 @ 0x18006AEB0 (sub_18006AEB0.c)
 *     sub_18006B7A4 @ 0x18006B7A4 (sub_18006B7A4.c)
 *     sub_18007643C @ 0x18007643C (sub_18007643C.c)
 *     sub_18007B1D4 @ 0x18007B1D4 (sub_18007B1D4.c)
 *     sub_1800928C0 @ 0x1800928C0 (sub_1800928C0.c)
 * Callees:
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 */

void *sub_1800CBBF8()
{
  _QWORD *v1; // rax
  __int64 v2; // rdx

  if ( dword_18021A340 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18021A340);
    if ( dword_18021A340 == -1 )
    {
      v2 = 75LL;
      v1 = &unk_1802199F0;
      do
      {
        *(v1 - 1) = 0LL;
        *v1 = 0LL;
        v1[1] = 0LL;
        v1 += 4;
        --v2;
      }
      while ( v2 );
      Init_thread_footer(&dword_18021A340);
    }
  }
  return &unk_1802199E0;
}
