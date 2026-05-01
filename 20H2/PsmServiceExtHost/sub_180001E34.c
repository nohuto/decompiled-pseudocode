/*
 * XREFs of sub_180001E34 @ 0x180001E34
 * Callers:
 *     sub_180001CD8 @ 0x180001CD8 (sub_180001CD8.c)
 * Callees:
 *     sub_180002738 @ 0x180002738 (sub_180002738.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall sub_180001E34(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, _QWORD *a5)
{
  char v5; // di
  _QWORD *i; // rbx
  __int64 v8; // r11
  unsigned __int64 v9; // rax
  __int64 v10; // r10
  void *v11; // r10
  bool v12; // zf
  __int64 v13; // r10
  char result; // al
  _QWORD *v15; // rcx

  v5 = 0;
  i = 0LL;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 8LL << *(_BYTE *)(a1 + 32);
  v10 = a4 & (v9 - 1);
  if ( v8 )
  {
    v15 = *(_QWORD **)(v8 + 16 * v10);
    if ( v15 )
    {
      if ( a2 && a2 != (_QWORD *)a1 && ((v9 - 1) & a2[2]) == v10 )
      {
        for ( i = a2; i != v15; i = (_QWORD *)i[1] )
        {
          if ( a4 > i[2] )
            break;
        }
      }
      else
      {
        i = *(_QWORD **)(v8 + 16 * v10);
      }
      while ( i != **(_QWORD ***)(v8 + 16 * v10 + 8) )
      {
        if ( i[2] >= a4 )
        {
          if ( i[2] > a4 )
            break;
          if ( *a3 == i[3] )
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
    if ( v9 > 0xFFFFFFFFFFFFFFFLL )
      v11 = 0LL;
    else
      v11 = operator new(16 * v9, (const struct std::nothrow_t *)&unk_1800967D8);
    *(_QWORD *)(a1 + 16) = v11;
    v12 = v11 == 0LL;
    if ( v11 )
    {
      sub_180002738(a1);
      v12 = v13 == 0;
    }
    v5 = v12;
  }
  result = v5;
  *a5 = i;
  return result;
}
