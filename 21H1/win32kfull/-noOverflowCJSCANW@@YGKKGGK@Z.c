/*
 * XREFs of ?noOverflowCJSCANW@@YGKKGGK@Z @ 0x9BC5E
 * Callers:
 *     _NtGdiCreateBitmap@20 @ 0x9BB9E (_NtGdiCreateBitmap@20.c)
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 */

unsigned int __userpurge noOverflowCJSCANW@<eax>(
        unsigned __int16 a1@<dx>,
        unsigned int a2@<ecx>,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 v6; // rax
  int v7; // edi
  unsigned __int64 v8; // rax
  int v9; // edi
  unsigned int result; // eax
  unsigned __int64 v11; // kr00_8

  v6 = a1;
  v7 = a2 * HIDWORD(v6);
  v8 = a2 * (unsigned __int64)(unsigned int)v6;
  v9 = HIDWORD(v8) + v7;
  if ( (unsigned int)((__PAIR64__(v9, v8) * a3 + 15) >> 32) >> 3 )
    return 0;
  v11 = ((__PAIR64__(v9, v8) * a3 + 15) >> 3) & 0xFFFFFFFE;
  result = a4 * v11;
  if ( !is_mul_ok(a4, v11) )
    return 0;
  return result;
}
