/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618
 * Callers:
 *     sub_180012AA8 @ 0x180012AA8 (sub_180012AA8.c)
 *     unknown_libname_103 @ 0x1800135FC (unknown_libname_103.c)
 *     sub_18002BBF8 @ 0x18002BBF8 (sub_18002BBF8.c)
 *     unknown_libname_104 @ 0x18002BD80 (unknown_libname_104.c)
 *     sub_18002C218 @ 0x18002C218 (sub_18002C218.c)
 *     sub_18002C274 @ 0x18002C274 (sub_18002C274.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     sub_180039510 @ 0x180039510 (sub_180039510.c)
 *     sub_180039880 @ 0x180039880 (sub_180039880.c)
 *     sub_18003B700 @ 0x18003B700 (sub_18003B700.c)
 *     sub_180041294 @ 0x180041294 (sub_180041294.c)
 *     sub_180041788 @ 0x180041788 (sub_180041788.c)
 *     sub_180055318 @ 0x180055318 (sub_180055318.c)
 *     sub_18005C020 @ 0x18005C020 (sub_18005C020.c)
 *     sub_18005C428 @ 0x18005C428 (sub_18005C428.c)
 *     sub_18005C8C4 @ 0x18005C8C4 (sub_18005C8C4.c)
 *     sub_18005EAC4 @ 0x18005EAC4 (sub_18005EAC4.c)
 *     sub_180063CFC @ 0x180063CFC (sub_180063CFC.c)
 *     sub_180066684 @ 0x180066684 (sub_180066684.c)
 *     sub_180093CE8 @ 0x180093CE8 (sub_180093CE8.c)
 *     sub_180096B80 @ 0x180096B80 (sub_180096B80.c)
 *     sub_18009BCB8 @ 0x18009BCB8 (sub_18009BCB8.c)
 *     sub_1800A155C @ 0x1800A155C (sub_1800A155C.c)
 *     sub_1800A5574 @ 0x1800A5574 (sub_1800A5574.c)
 *     sub_1800D8398 @ 0x1800D8398 (sub_1800D8398.c)
 *     sub_1800F2EE8 @ 0x1800F2EE8 (sub_1800F2EE8.c)
 *     sub_180104F70 @ 0x180104F70 (sub_180104F70.c)
 *     sub_18010DF40 @ 0x18010DF40 (sub_18010DF40.c)
 * Callees:
 *     sub_180012B80 @ 0x180012B80 (sub_180012B80.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

_QWORD *__fastcall std::string::append(_QWORD *Src, const void *a2, unsigned __int64 Size)
{
  __int64 v5; // rcx
  bool v6; // cf
  _QWORD *v7; // rax
  char *v8; // rbx
  _QWORD *result; // rax

  v5 = Src[2];
  if ( Size > Src[3] - v5 )
    return sub_180012B80(Src, Size, 0LL, a2, Size);
  v6 = Src[3] < 0x10uLL;
  Src[2] = v5 + Size;
  v7 = Src;
  if ( !v6 )
    v7 = (_QWORD *)*Src;
  v8 = (char *)v7 + v5;
  memmove((char *)v7 + v5, a2, Size);
  result = Src;
  v8[Size] = 0;
  return result;
}
