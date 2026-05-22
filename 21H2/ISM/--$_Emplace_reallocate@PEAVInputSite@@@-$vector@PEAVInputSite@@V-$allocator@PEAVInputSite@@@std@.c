/*
 * XREFs of ??$_Emplace_reallocate@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAAPEAPEAVInputSite@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180012640
 * Callers:
 *     ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180004DC4 (-CreateInputSiteFromId@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSite.c)
 *     ?UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180015300 (-UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180012E00 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180068408 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

char *__fastcall std::vector<InputSite *>::_Emplace_reallocate<InputSite *>(const void **a1, _BYTE *a2, _QWORD *a3)
{
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 size_of; // rax
  char *v13; // rsi
  char *v14; // r15
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  void *v17; // rcx
  size_t v18; // r8
  _BYTE *v19; // rcx
  const struct std::nothrow_t *v20; // rdx
  unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  void *v23; // [rsp+58h] [rbp+10h] BYREF

  v6 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v8;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v22 = v11;
  size_of = std::_Get_size_of_n<8>(v11);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v23 = v13;
  v14 = &v13[8 * v6];
  *(_QWORD *)v14 = *a3;
  v15 = a1[1];
  v16 = *a1;
  v17 = v13;
  if ( a2 == v15 )
  {
    v18 = v15 - v16;
  }
  else
  {
    memmove_0(v13, v16, a2 - (_BYTE *)*a1);
    v17 = v14 + 8;
    v18 = (_BYTE *)a1[1] - a2;
    v16 = a2;
  }
  memmove_0(v17, v16, v18);
  v19 = *a1;
  if ( *a1 )
  {
    v20 = (const struct std::nothrow_t *)(((_BYTE *)a1[2] - v19) & 0xFFFFFFFFFFFFFFF8uLL);
    v22 = (unsigned __int64)v20;
    v23 = v19;
    if ( (unsigned __int64)v20 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v23, &v22);
      v20 = (const struct std::nothrow_t *)v22;
      v19 = v23;
    }
    operator delete(v19, v20);
  }
  *a1 = v13;
  a1[1] = &v13[8 * v8];
  a1[2] = &v13[8 * v11];
  return v14;
}
