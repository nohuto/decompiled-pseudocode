/*
 * XREFs of sub_18002C890 @ 0x18002C890
 * Callers:
 *     sub_18002C7DC @ 0x18002C7DC (sub_18002C7DC.c)
 * Callees:
 *     sub_180067AF0 @ 0x180067AF0 (sub_180067AF0.c)
 */

_QWORD *__fastcall sub_18002C890(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v5; // r11
  _QWORD *v7; // r10
  _QWORD *v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax

  v5 = a1;
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * (a5 & ((8LL << *(_BYTE *)(a1 + 32)) - 1)));
  if ( !a3 )
  {
    *v7 = a4;
    a3 = a1;
LABEL_3:
    v7[1] = a4;
    goto LABEL_4;
  }
  if ( *v7 == a3 )
  {
    *v7 = a4;
  }
  else if ( *(_QWORD *)v7[1] == a3 )
  {
    goto LABEL_3;
  }
LABEL_4:
  v8 = *(_QWORD **)(a3 + 8);
  *a4 = a3;
  a4[1] = v8;
  *a2 = a4;
  *v8 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  LOBYTE(a1) = *(_BYTE *)(a1 + 32);
  v9 = *(_QWORD *)(v5 + 24) + 1LL;
  v10 = *(unsigned __int8 *)(v5 + 33);
  *(_QWORD *)(v5 + 24) = v9;
  if ( v10 < v9 >> a1 )
    sub_180067AF0(v5, (unsigned int)(a1 + 1));
  return a2;
}
