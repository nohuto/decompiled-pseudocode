/*
 * XREFs of ??$_Emplace_reallocate@AEBG@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAGAEBG@Z @ 0x180097090
 * Callers:
 *     ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x180098BA0 (-OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18004AC87 (memmove_0.c)
 *     ?_Change_array@?$vector@GV?$allocator@G@std@@@std@@AEAAXQEAG_K1@Z @ 0x180099000 (-_Change_array@-$vector@GV-$allocator@G@std@@@std@@AEAAXQEAG_K1@Z.c)
 */

__int64 __fastcall std::vector<unsigned short>::_Emplace_reallocate<unsigned short const &>(
        const void **a1,
        _BYTE *a2,
        _WORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  char *v17; // rcx
  size_t v18; // r8
  __int64 result; // rax
  void *v20; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) >> 1;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 1;
  if ( v7 == 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 1;
  v10 = v9 >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 2 * v11;
  if ( v11 > 0x7FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v20 = v13;
  try
  {
    *((_WORD *)v13 + v6) = *a3;
    v15 = a1[1];
    v16 = *a1;
    v17 = (char *)v13;
    if ( a2 == v15 )
    {
      v18 = v15 - v16;
    }
    else
    {
      memmove_0(v13, v16, a2 - (_BYTE *)*a1);
      v17 = (char *)v14 + 2 * v6 + 2;
      v18 = (_BYTE *)a1[1] - a2;
      v16 = a2;
    }
    memmove_0(v17, v16, v18);
    std::vector<unsigned short>::_Change_array(a1, v14, v8, v11);
    result = (__int64)*a1 + 2 * v6;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(2 * v11));
    throw;
  }
  return result;
}
