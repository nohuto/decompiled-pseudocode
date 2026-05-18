/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180105C18
 * Callers:
 *     sub_180104B4C @ 0x180104B4C (sub_180104B4C.c)
 *     sub_18010510C @ 0x18010510C (sub_18010510C.c)
 *     sub_18011BF88 @ 0x18011BF88 (sub_18011BF88.c)
 * Callees:
 *     sub_180102DF8 @ 0x180102DF8 (sub_180102DF8.c)
 *     memset @ 0x18012396A (memset.c)
 */

_QWORD *__fastcall std::string::append(_QWORD *Src, size_t Size, char a3)
{
  __int64 v5; // rcx
  bool v6; // cf
  _QWORD *v7; // rax
  char *v8; // rbx
  _QWORD *result; // rax

  v5 = Src[2];
  if ( Size > Src[3] - v5 )
    return sub_180102DF8(Src, Size, 0LL, Size, a3);
  v6 = Src[3] < 0x10uLL;
  Src[2] = v5 + Size;
  v7 = Src;
  if ( !v6 )
    v7 = (_QWORD *)*Src;
  v8 = (char *)v7 + v5;
  memset((char *)v7 + v5, a3, Size);
  result = Src;
  v8[Size] = 0;
  return result;
}
