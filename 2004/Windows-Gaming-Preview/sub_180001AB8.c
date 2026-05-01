/*
 * XREFs of sub_180001AB8 @ 0x180001AB8
 * Callers:
 *     sub_1800034C8 @ 0x1800034C8 (sub_1800034C8.c)
 *     sub_180008FFC @ 0x180008FFC (sub_180008FFC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180001AB8(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  _WORD *v5; // rax
  __int64 result; // rax
  __int64 v7; // r8
  _WORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r10
  __int16 v12; // r8
  _WORD *v13; // rax

  v4 = 260LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
    v7 = 260 - v4;
  else
    v7 = 0LL;
  if ( v4 )
  {
    v8 = &a1[v7];
    v9 = 260 - v7;
    if ( 260 != v7 )
    {
      v10 = 2147483646LL;
      v11 = a3 - (_QWORD)v8;
      do
      {
        if ( !v10 )
          break;
        v12 = *(_WORD *)((char *)v8 + v11);
        if ( !v12 )
          break;
        *v8 = v12;
        --v10;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
    return v9 == 0 ? 0x8007007A : 0;
  }
  return result;
}
