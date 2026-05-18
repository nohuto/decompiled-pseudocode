/*
 * XREFs of sub_1800496D0 @ 0x1800496D0
 * Callers:
 *     sub_180049844 @ 0x180049844 (sub_180049844.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     atexit @ 0x180123E24 (atexit.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=8
__int64 *sub_1800496D0()
{
  if ( dword_18021FC08 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18021FC08);
    if ( dword_18021FC08 == -1 )
    {
      qword_18020F1E0 = 0x6C6E4F6874706544LL;
      byte_18020F1E8 = 121;
      qmemcpy(&qword_18020F200, "Diagnostics", 11);
      qmemcpy(&qword_18020F220, "Background", 10);
      qword_18020F240 = 0x73614D6168706C41LL;
      byte_18020F248 = 107;
      qmemcpy(&qword_18020F260, "AlphaBlend", 10);
      qmemcpy(&qword_18020F2A0, "DepthToColor", 12);
      sub_18000FC14(qword_18020F2C0, 0x16uLL, 0LL, "StochasticTransparency");
      qword_18020F2F8 = 15LL;
      qword_18020F2F0 = 12LL;
      strcpy((char *)&qword_18020F2E0, "GLTFMaterial");
      atexit(sub_180131350);
      Init_thread_footer(&dword_18021FC08);
    }
  }
  return &qword_18020F1E0;
}
