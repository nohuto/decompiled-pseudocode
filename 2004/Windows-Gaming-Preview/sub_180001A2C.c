/*
 * XREFs of sub_180001A2C @ 0x180001A2C
 * Callers:
 *     sub_1800034C8 @ 0x1800034C8 (sub_1800034C8.c)
 *     sub_180008FFC @ 0x180008FFC (sub_180008FFC.c)
 *     sub_18003EE0C @ 0x18003EE0C (sub_18003EE0C.c)
 *     sub_18003F4AC @ 0x18003F4AC (sub_18003F4AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180001A2C(_WORD *a1, __int64 a2, __int64 a3)
{
  signed int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r8
  __int16 v6; // ax
  _WORD *v7; // rax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    if ( a2 )
    {
      v4 = 2147483646 - a2;
      v5 = a3 - (_QWORD)a1;
      do
      {
        if ( !(v4 + a2) )
          break;
        v6 = *(_WORD *)((char *)a1 + v5);
        if ( !v6 )
          break;
        *a1++ = v6;
        --a2;
      }
      while ( a2 );
    }
    v7 = a1 - 1;
    if ( a2 )
      v7 = a1;
    v3 = a2 == 0 ? 0x8007007A : 0;
    *v7 = 0;
  }
  return (unsigned int)v3;
}
