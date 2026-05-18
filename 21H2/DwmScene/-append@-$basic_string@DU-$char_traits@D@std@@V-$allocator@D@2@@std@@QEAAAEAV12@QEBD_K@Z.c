/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8
 * Callers:
 *     sub_180012B88 @ 0x180012B88 (sub_180012B88.c)
 *     unknown_libname_105 @ 0x1800136DC (unknown_libname_105.c)
 *     sub_1800314C8 @ 0x1800314C8 (sub_1800314C8.c)
 *     unknown_libname_106 @ 0x180031650 (unknown_libname_106.c)
 *     sub_180031AE8 @ 0x180031AE8 (sub_180031AE8.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_180031D30 @ 0x180031D30 (sub_180031D30.c)
 *     sub_18003EDE0 @ 0x18003EDE0 (sub_18003EDE0.c)
 *     sub_18003F150 @ 0x18003F150 (sub_18003F150.c)
 *     sub_180040FD0 @ 0x180040FD0 (sub_180040FD0.c)
 *     sub_180046B64 @ 0x180046B64 (sub_180046B64.c)
 *     sub_180047058 @ 0x180047058 (sub_180047058.c)
 *     sub_18005ABE8 @ 0x18005ABE8 (sub_18005ABE8.c)
 *     sub_1800618F0 @ 0x1800618F0 (sub_1800618F0.c)
 *     sub_180061CF8 @ 0x180061CF8 (sub_180061CF8.c)
 *     sub_180062194 @ 0x180062194 (sub_180062194.c)
 *     sub_180064394 @ 0x180064394 (sub_180064394.c)
 *     sub_1800695CC @ 0x1800695CC (sub_1800695CC.c)
 *     sub_18006BF54 @ 0x18006BF54 (sub_18006BF54.c)
 *     sub_1800995B8 @ 0x1800995B8 (sub_1800995B8.c)
 *     sub_18009C450 @ 0x18009C450 (sub_18009C450.c)
 *     sub_1800A1588 @ 0x1800A1588 (sub_1800A1588.c)
 *     sub_1800A6E2C @ 0x1800A6E2C (sub_1800A6E2C.c)
 *     sub_1800AAE44 @ 0x1800AAE44 (sub_1800AAE44.c)
 *     sub_1800DDC68 @ 0x1800DDC68 (sub_1800DDC68.c)
 *     sub_1800F87B8 @ 0x1800F87B8 (sub_1800F87B8.c)
 *     sub_18010A840 @ 0x18010A840 (sub_18010A840.c)
 *     sub_180113810 @ 0x180113810 (sub_180113810.c)
 * Callees:
 *     sub_180012C60 @ 0x180012C60 (sub_180012C60.c)
 *     memmove @ 0x180123982 (memmove.c)
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
    return sub_180012C60(Src, Size, 0LL, a2, Size);
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
