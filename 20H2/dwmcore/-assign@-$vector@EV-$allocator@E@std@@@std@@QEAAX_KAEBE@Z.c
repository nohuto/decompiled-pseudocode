/*
 * XREFs of ?assign@?$vector@EV?$allocator@E@std@@@std@@QEAAX_KAEBE@Z @ 0x1801EF8C8
 * Callers:
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x1801EEE60 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     ?_Clear_and_reserve_geometric@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x1801EF4A8 (-_Clear_and_reserve_geometric@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 */

char *__fastcall std::vector<unsigned char>::assign(__int64 *a1, size_t a2, unsigned __int8 *a3)
{
  char *v5; // rcx
  unsigned __int64 v7; // rbx
  size_t v8; // rdi
  char *v9; // rbx
  char *result; // rax
  char *v11; // rbx

  v5 = (char *)*a1;
  v7 = a1[1] - (_QWORD)v5;
  if ( a2 <= v7 )
  {
    v11 = &v5[a2];
    result = (char *)memset_0(v5, *a3, a2);
    a1[1] = (__int64)v11;
  }
  else
  {
    if ( a2 <= a1[2] - (__int64)v5 )
    {
      memset_0(v5, *a3, a1[1] - (_QWORD)v5);
    }
    else
    {
      std::vector<unsigned char>::_Clear_and_reserve_geometric(a1, a2);
      v7 = 0LL;
    }
    v8 = a2 - v7;
    v9 = (char *)a1[1];
    memset_0(v9, *a3, v8);
    result = &v9[v8];
    a1[1] = (__int64)&v9[v8];
  }
  return result;
}
