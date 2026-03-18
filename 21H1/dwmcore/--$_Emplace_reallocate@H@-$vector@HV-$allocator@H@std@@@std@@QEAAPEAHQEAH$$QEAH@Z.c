/*
 * XREFs of ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z @ 0x180156238
 * Callers:
 *     std::_Invoker_functor::_Call__lambda_7073ea3a1159c22cf152f2e0fb8a80e9__&_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_ @ 0x1800E3CDC (std--_Invoker_functor--_Call__lambda_7073ea3a1159c22cf152f2e0fb8a80e9__-_void___unsigned_long_un.c)
 *     ?RemoveDeadParticles@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801E4A44 (-RemoveDeadParticles@CParticleEmitterVisual@@IEAAXM@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 *     ?_Change_array@?$vector@HV?$allocator@H@std@@@std@@AEAAXQEAH_K1@Z @ 0x18015644C (-_Change_array@-$vector@HV-$allocator@H@std@@@std@@AEAAXQEAH_K1@Z.c)
 */

__int64 __fastcall std::vector<int>::_Emplace_reallocate<int>(const void **a1, _BYTE *a2, _DWORD *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  char *v13; // r14
  char *v14; // rcx
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  size_t v17; // r8

  v4 = (a2 - (_BYTE *)*a1) >> 2;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v6 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v6 + 1;
  }
  else
  {
    v11 = v6 + 1;
  }
  v12 = 4 * v11;
  if ( v11 > 0x3FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  *(_DWORD *)&v13[4 * v4] = *a3;
  v14 = v13;
  v15 = a1[1];
  v16 = *a1;
  if ( a2 == v15 )
  {
    v17 = v15 - v16;
  }
  else
  {
    memmove_0(v13, v16, a2 - (_BYTE *)*a1);
    v17 = (_BYTE *)a1[1] - a2;
    v14 = &v13[4 * v4 + 4];
    v16 = a2;
  }
  memmove_0(v14, v16, v17);
  std::vector<int>::_Change_array(a1, v13, v8, v11);
  return (__int64)*a1 + 4 * v4;
}
