/*
 * XREFs of sub_18000F01C @ 0x18000F01C
 * Callers:
 *     sub_18000BA80 @ 0x18000BA80 (sub_18000BA80.c)
 *     sub_18000BD50 @ 0x18000BD50 (sub_18000BD50.c)
 *     sub_18000BF18 @ 0x18000BF18 (sub_18000BF18.c)
 *     sub_18000C088 @ 0x18000C088 (sub_18000C088.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F01C(_WORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  signed int v4; // r9d
  unsigned __int64 v5; // r10
  __int64 v6; // r8
  __int16 v7; // ax
  _WORD *v8; // rax

  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( v3 )
      *a1 = 0;
  }
  else
  {
    if ( v3 )
    {
      v5 = 2147483646 - v3;
      v6 = a3 - (_QWORD)a1;
      do
      {
        if ( !(v5 + v3) )
          break;
        v7 = *(_WORD *)((char *)a1 + v6);
        if ( !v7 )
          break;
        *a1++ = v7;
        --v3;
      }
      while ( v3 );
    }
    v8 = a1 - 1;
    if ( v3 )
      v8 = a1;
    v4 = v3 == 0 ? 0x8007007A : 0;
    *v8 = 0;
  }
  return (unsigned int)v4;
}
