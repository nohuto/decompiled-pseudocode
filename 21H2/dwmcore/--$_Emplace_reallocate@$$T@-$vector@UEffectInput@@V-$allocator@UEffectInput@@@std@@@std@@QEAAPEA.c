/*
 * XREFs of ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x180202DA8
 * Callers:
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffectInput@@$$QEA$$T@Z @ 0x180058794 (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffect.c)
 * Callees:
 *     ?_Change_array@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInput@@_K1@Z @ 0x18004EDA8 (-_Change_array@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInpu.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@0AEAV?$allocator@UEffectInput@@@0@@Z @ 0x180058750 (--$_Destroy_range@V-$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@0AEAV-$allocator@UE.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180202F50 (--0EffectInput@@QEAA@AEBU0@@Z.c)
 */

unsigned __int64 __fastcall std::vector<EffectInput>::_Emplace_reallocate<std::nullptr_t>(
        const struct EffectInput **a1,
        const struct EffectInput *a2)
{
  signed __int64 v2; // r14
  const struct EffectInput *v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  SIZE_T v9; // rcx
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  const struct EffectInput *v12; // r12
  const struct EffectInput *v13; // rbx
  EffectInput *i; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  EffectInput *v17; // r12
  const struct EffectInput *v18; // r12
  EffectInput *j; // rbx
  __int64 v21; // [rsp+60h] [rbp+18h]

  v2 = a2 - *a1;
  v3 = a2;
  v4 = (a1[1] - *a1) >> 7;
  if ( v4 == 0x1FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v6 = (a1[2] - *a1) >> 7;
  v21 = v4 + 1;
  v7 = v6 >> 1;
  if ( v6 <= 0x1FFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v8 = v7 + v6;
    if ( v7 + v6 < v4 + 1 )
      v8 = v4 + 1;
  }
  else
  {
    v8 = v4 + 1;
  }
  v9 = v8 << 7;
  if ( v8 > 0x1FFFFFFFFFFFFFFLL )
    v9 = -1LL;
  v10 = v2 & 0xFFFFFFFFFFFFFF80uLL;
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
  *(_QWORD *)(v10 + v11) = 0LL;
  *(_QWORD *)(v10 + v11 + 8) = 0LL;
  *(_QWORD *)(v10 + v11 + 28) = 0LL;
  *(_DWORD *)(v10 + v11 + 36) = 0;
  *(_QWORD *)(v10 + v11 + 16) = 0LL;
  *(_DWORD *)(v10 + v11 + 24) = 0;
  *(_BYTE *)(v10 + v11 + 40) = 0;
  *(_OWORD *)(v10 + v11 + 72) = 0LL;
  v12 = a1[1];
  v13 = *a1;
  if ( v3 == v12 )
  {
    for ( i = (EffectInput *)v11; v13 != v12; v13 = (const struct EffectInput *)((char *)v13 + 128) )
    {
      EffectInput::EffectInput(i, v13);
      i = (EffectInput *)((char *)i + 128);
    }
    v15 = (__int64)i;
    v16 = (__int64)i;
  }
  else
  {
    v17 = (EffectInput *)v11;
    while ( v13 != v3 )
    {
      EffectInput::EffectInput(v17, v13);
      v17 = (EffectInput *)((char *)v17 + 128);
      v13 = (const struct EffectInput *)((char *)v13 + 128);
    }
    std::_Destroy_range<std::allocator<EffectInput>>((__int64)v17, (__int64)v17);
    v18 = a1[1];
    for ( j = (EffectInput *)(v11 + v10 + 128); ; j = (EffectInput *)((char *)j + 128) )
    {
      v16 = (__int64)j;
      if ( v3 == v18 )
        break;
      EffectInput::EffectInput(j, v3);
      v3 = (const struct EffectInput *)((char *)v3 + 128);
    }
    v15 = (__int64)j;
  }
  std::_Destroy_range<std::allocator<EffectInput>>(v16, v15);
  std::vector<EffectInput>::_Change_array(a1, v11, v21, v8);
  return (unsigned __int64)*a1 + v10;
}
