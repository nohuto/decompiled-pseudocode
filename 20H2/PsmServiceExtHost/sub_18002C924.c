/*
 * XREFs of sub_18002C924 @ 0x18002C924
 * Callers:
 *     sub_18002C7DC @ 0x18002C7DC (sub_18002C7DC.c)
 * Callees:
 *     sub_180002738 @ 0x180002738 (sub_180002738.c)
 *     sub_18002DFB0 @ 0x18002DFB0 (sub_18002DFB0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall sub_18002C924(__int64 a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, _QWORD *a5)
{
  char v5; // di
  _QWORD *i; // rbx
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  _QWORD *v13; // rcx
  char result; // al
  _QWORD *v15; // rsi
  void *v16; // r10
  bool v17; // zf
  __int64 v18; // r10

  v5 = 0;
  i = 0LL;
  v10 = *(_QWORD *)(a1 + 16);
  v11 = 8LL << *(_BYTE *)(a1 + 32);
  v12 = a4 & (v11 - 1);
  if ( v10 )
  {
    v13 = *(_QWORD **)(v10 + 16 * v12);
    if ( v13 )
    {
      if ( a2 && a2 != (_QWORD *)a1 && ((v11 - 1) & a2[2]) == v12 )
      {
        for ( i = a2; i != v13; i = (_QWORD *)i[1] )
        {
          if ( a4 > i[2] )
            break;
        }
      }
      else
      {
        i = *(_QWORD **)(v10 + 16 * v12);
      }
      v15 = **(_QWORD ***)(v10 + 16 * v12 + 8);
      while ( i != v15 )
      {
        if ( i[2] >= a4 )
        {
          if ( i[2] > a4 )
            break;
          if ( (unsigned __int8)sub_18002DFB0(v13, a3, i + 3) )
          {
            v5 = 1;
            break;
          }
        }
        i = (_QWORD *)*i;
      }
    }
  }
  else
  {
    if ( v11 > 0xFFFFFFFFFFFFFFFLL )
      v16 = 0LL;
    else
      v16 = operator new(16 * v11, (const struct std::nothrow_t *)&unk_1800967D8);
    *(_QWORD *)(a1 + 16) = v16;
    v17 = v16 == 0LL;
    if ( v16 )
    {
      sub_180002738(a1);
      v17 = v18 == 0;
    }
    v5 = v17;
  }
  result = v5;
  *a5 = i;
  return result;
}
