/*
 * XREFs of sub_180026FF4 @ 0x180026FF4
 * Callers:
 *     sub_180026694 @ 0x180026694 (sub_180026694.c)
 * Callees:
 *     sub_180032190 @ 0x180032190 (sub_180032190.c)
 */

__int64 __fastcall sub_180026FF4(int a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h]

  v3 = a2;
  result = sub_180032190(a1 + 40, (int)a2 + 96, (unsigned int)sub_180036D30, a2);
  if ( v6 != v3 )
    v3 = v6;
  *a3 = v3;
  return result;
}
