/*
 * XREFs of sub_180072294 @ 0x180072294
 * Callers:
 *     sub_18007233C @ 0x18007233C (sub_18007233C.c)
 * Callees:
 *     sub_180075B70 @ 0x180075B70 (sub_180075B70.c)
 *     sub_180077934 @ 0x180077934 (sub_180077934.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180072294(_QWORD *Src, char *a2, unsigned __int64 a3)
{
  char *v3; // rdi
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  char v7; // r9
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v11; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  v11 = Src;
  v5 = 0LL;
  v6 = (a3 - (unsigned __int64)a2 + 1) >> 1;
  if ( (unsigned __int64)a2 > a3 )
    v6 = 0LL;
  if ( v6 )
  {
    do
    {
      v7 = *v3;
      v8 = Src[2];
      if ( v8 >= Src[3] )
      {
        sub_180075B70(Src);
      }
      else
      {
        Src[2] = v8 + 1;
        v9 = Src;
        if ( Src[3] >= 0x10uLL )
          v9 = (_QWORD *)*Src;
        *((_BYTE *)v9 + v8) = v7;
        *((_BYTE *)v9 + v8 + 1) = 0;
      }
      v3 += 2;
      ++v5;
    }
    while ( v5 != v6 );
  }
  v11 = 0LL;
  return sub_180077934(&v11);
}
