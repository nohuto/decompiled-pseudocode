/*
 * XREFs of ??$_Copy_unchecked@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@PEAV12@@std@@YAPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@PEAV10@00@Z @ 0x18045103C
 * Callers:
 *     ??$_Assign_range@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180450F00 (--$_Assign_range@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@-$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EEED3 (memmove_0.c)
 *     ?_Buy_raw@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x180450EAC (-_Buy_raw@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z.c)
 */

void **__fastcall std::_Copy_unchecked<std::vector<Windows::UI::Color> *,std::vector<Windows::UI::Color> *>(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  __int64 i; // rsi
  char *v6; // r15
  signed __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  char *v12; // rbx

  for ( i = a1; i != a2; i += 24LL )
  {
    if ( a3 != (void **)i )
    {
      v6 = *(char **)i;
      v7 = *(_QWORD *)(i + 8) - *(_QWORD *)i;
      v8 = v7 >> 2;
      v9 = ((_BYTE *)a3[2] - (_BYTE *)*a3) >> 2;
      if ( v7 >> 2 > v9 )
      {
        if ( v8 > 0x3FFFFFFFFFFFFFFFLL )
          std::_Xlength_error("vector<T> too long");
        v10 = v9 >> 1;
        if ( v9 <= 0x3FFFFFFFFFFFFFFFLL - (v9 >> 1) )
        {
          v11 = v10 + v9;
          if ( v10 + v9 < v8 )
            v11 = (__int64)(*(_QWORD *)(i + 8) - *(_QWORD *)i) >> 2;
          v8 = v11;
        }
        if ( *a3 )
        {
          std::_Deallocate<16,0>(*a3, (const struct std::nothrow_t *)(4 * v9));
          *a3 = 0LL;
          a3[1] = 0LL;
          a3[2] = 0LL;
        }
        std::vector<Windows::UI::Color>::_Buy_raw(a3, v8);
      }
      v12 = (char *)*a3;
      memmove_0(*a3, v6, v7);
      a3[1] = &v12[v7];
    }
    a3 += 3;
  }
  return a3;
}
