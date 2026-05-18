/*
 * XREFs of sub_1800A78C8 @ 0x1800A78C8
 * Callers:
 *     sub_1800A8930 @ 0x1800A8930 (sub_1800A8930.c)
 *     sub_1800A9380 @ 0x1800A9380 (sub_1800A9380.c)
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800EB050 @ 0x1800EB050 (sub_1800EB050.c)
 *     sub_1800ED8D0 @ 0x1800ED8D0 (sub_1800ED8D0.c)
 *     sub_1800EE230 @ 0x1800EE230 (sub_1800EE230.c)
 *     sub_1800EE3D4 @ 0x1800EE3D4 (sub_1800EE3D4.c)
 *     sub_1800FED34 @ 0x1800FED34 (sub_1800FED34.c)
 *     sub_18010D480 @ 0x18010D480 (sub_18010D480.c)
 * Callees:
 *     sub_1800A7A00 @ 0x1800A7A00 (sub_1800A7A00.c)
 */

__int64 __fastcall sub_1800A78C8(_QWORD *a1, _QWORD *a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v7; // rdx
  __int64 **v8; // r8
  __int64 *i; // rcx
  __int64 result; // rax
  __int64 j; // rcx

  v4 = *a1;
  LOBYTE(a4) = a3;
  *(_QWORD *)(v4 + 8) = sub_1800A7A00(a1, *(_QWORD *)(*a2 + 8LL), *a1, a4);
  v7 = (_QWORD *)*a1;
  a1[1] = a2[1];
  v8 = (__int64 **)v7[1];
  if ( *((_BYTE *)v8 + 25) )
  {
    *v7 = v7;
    result = *a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
  }
  else
  {
    for ( i = *v8; !*((_BYTE *)i + 25); i = (__int64 *)*i )
      v8 = (__int64 **)i;
    *v7 = v8;
    result = *(_QWORD *)(*a1 + 8LL);
    for ( j = *(_QWORD *)(result + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
      result = j;
    *(_QWORD *)(*a1 + 16LL) = result;
  }
  return result;
}
