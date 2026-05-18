/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180100348
 * Callers:
 *     sub_1800FF27C @ 0x1800FF27C (sub_1800FF27C.c)
 *     sub_1800FF83C @ 0x1800FF83C (sub_1800FF83C.c)
 *     sub_1801166B8 @ 0x1801166B8 (sub_1801166B8.c)
 * Callees:
 *     sub_1800FD528 @ 0x1800FD528 (sub_1800FD528.c)
 *     memset @ 0x18011E09A (memset.c)
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
    return sub_1800FD528(Src, Size, 0LL, Size, a3);
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
