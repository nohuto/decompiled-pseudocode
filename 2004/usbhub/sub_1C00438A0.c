/*
 * XREFs of sub_1C00438A0 @ 0x1C00438A0
 * Callers:
 *     sub_1C0041468 @ 0x1C0041468 (sub_1C0041468.c)
 *     sub_1C0041990 @ 0x1C0041990 (sub_1C0041990.c)
 *     sub_1C0042560 @ 0x1C0042560 (sub_1C0042560.c)
 *     sub_1C0043F70 @ 0x1C0043F70 (sub_1C0043F70.c)
 *     sub_1C0044090 @ 0x1C0044090 (sub_1C0044090.c)
 *     sub_1C0044230 @ 0x1C0044230 (sub_1C0044230.c)
 *     sub_1C0044420 @ 0x1C0044420 (sub_1C0044420.c)
 *     sub_1C0044590 @ 0x1C0044590 (sub_1C0044590.c)
 *     sub_1C00446D4 @ 0x1C00446D4 (sub_1C00446D4.c)
 * Callees:
 *     sub_1C004227C @ 0x1C004227C (sub_1C004227C.c)
 */

__int64 __fastcall sub_1C00438A0(__int64 a1, __int64 a2, struct _LIST_ENTRY *a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // edi
  unsigned int v7; // ebp
  char v10; // r14
  unsigned int v11; // ebx
  int v12; // eax

  v6 = 0;
  v7 = 0;
  v10 = a1;
  v11 = (_BYTE)a1 == 0 ? 9 : 0;
  do
  {
    v12 = sub_1C004227C(a1, (__int64)&unk_1C006B010 + 56 * v11, (__int64)a3, a3, a4, a5, a6);
    if ( a4 == 1 )
    {
      if ( v12 < 0 )
        v6 = v12;
    }
    else if ( v12 < 0 )
    {
      break;
    }
    ++v7;
    a1 = v11++ - 1;
    if ( !v10 )
      v11 = a1;
  }
  while ( v7 < 0xA );
  if ( a4 != 1 )
    return (unsigned int)v12;
  return v6;
}
