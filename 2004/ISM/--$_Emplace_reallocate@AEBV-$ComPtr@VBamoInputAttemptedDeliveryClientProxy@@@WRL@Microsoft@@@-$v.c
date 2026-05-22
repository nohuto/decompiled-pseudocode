/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180004CC8
 * Callers:
 *     ?RegisterInputAttemptedClient@InputDeliveryServer@@MEAAJPEAVBamoInputDeliveryServerStub@@PEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x180004C30 (-RegisterInputAttemptedClient@InputDeliveryServer@@MEAAJPEAVBamoInputDeliveryServerStub@@PEAVBam.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E60 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180013120 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall std::vector<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy> const &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r15
  __int64 size_of; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r12
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  __int64 *v19; // rbx
  __int64 *v21; // r14
  __int64 v22; // rcx

  v4 = a2;
  v6 = (unsigned __int64)a2 - *a1;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
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
  size_of = std::_Get_size_of_n<8>(v11);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(v14 + v13) = *a3;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))(v14 + v13));
  v15 = v14 + v13;
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  v18 = (_QWORD *)v13;
  if ( v4 == v16 )
  {
    while ( v17 != v16 )
    {
      *v18 = 0LL;
      if ( v18 != v17 )
      {
        *v18 = *v17;
        *v17 = 0LL;
      }
      ++v18;
      ++v17;
    }
  }
  else
  {
    if ( v17 != v4 )
    {
      do
      {
        *v18 = 0LL;
        if ( v18 != v17 )
        {
          *v18 = *v17;
          *v17 = 0LL;
        }
        ++v18;
        ++v17;
      }
      while ( v17 != v4 );
      v16 = (_QWORD *)a1[1];
    }
    if ( v4 != v16 )
    {
      v18 = (_QWORD *)(v13 + v14 - (_QWORD)v4 + 8);
      do
      {
        *(_QWORD *)((char *)v18 + (_QWORD)v4) = 0LL;
        if ( (_QWORD *)((char *)v18 + (_QWORD)v4) != v4 )
        {
          *(_QWORD *)((char *)v18 + (_QWORD)v4) = *v4;
          *v4 = 0LL;
        }
        ++v4;
      }
      while ( v4 != v16 );
    }
  }
  v19 = (__int64 *)*a1;
  if ( *a1 )
  {
    v21 = (__int64 *)a1[1];
    if ( v19 != v21 )
    {
      do
      {
        v22 = *v19;
        if ( *v19 )
        {
          *v19 = 0LL;
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v22 + 8LL))(v22, v18);
        }
        ++v19;
      }
      while ( v19 != v21 );
      v19 = (__int64 *)*a1;
    }
    std::_Deallocate<16,0>(v19, (a1[2] - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v13;
  a1[1] = v13 + 8 * v8;
  a1[2] = v13 + 8 * v11;
  return v15;
}
