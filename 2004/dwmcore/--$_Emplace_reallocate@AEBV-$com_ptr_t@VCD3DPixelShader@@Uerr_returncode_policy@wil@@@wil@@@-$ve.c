/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800D3F64
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x18004C100 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800B9FB4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> const &>(
        __int64 a1,
        __int64 *a2,
        void (__fastcall ****a3)(_QWORD))
{
  __int64 v4; // rbp
  __int64 *v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  SIZE_T v13; // rcx
  __int64 v14; // rax
  void (__fastcall ***v15)(_QWORD); // rcx
  __int64 *v16; // rsi
  _QWORD *v17; // rbp
  __int64 *v18; // r8
  __int64 *v19; // rcx
  __int64 *v20; // rdx
  _QWORD *result; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 *v24; // rdx
  __int64 v25; // rax

  v4 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
  v5 = a2;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v6 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v6 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v12 = v11;
  v13 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v13 = -1LL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = *a3;
  v16 = (__int64 *)v14;
  v17 = (_QWORD *)(v14 + 8 * v4);
  *v17 = *a3;
  if ( v15 )
    (**v15)(v15);
  v18 = *(__int64 **)(a1 + 8);
  v19 = v16;
  v20 = *(__int64 **)a1;
  if ( v5 == v18 )
  {
    while ( v20 != v18 )
    {
      v22 = *v20;
      *v20 = 0LL;
      *v19++ = v22;
      ++v20;
    }
  }
  else
  {
    while ( v20 != v5 )
    {
      v23 = *v20;
      *v20 = 0LL;
      *v19++ = v23;
      ++v20;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>>(v19, v19);
    v24 = *(__int64 **)(a1 + 8);
    v19 = v17 + 1;
    while ( v5 != v24 )
    {
      v25 = *v5;
      *v5 = 0LL;
      *v19++ = v25;
      ++v5;
    }
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>>(v19, v19);
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>>(
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)(a1 + 8) = &v16[v8];
  result = v17;
  *(_QWORD *)a1 = v16;
  *(_QWORD *)(a1 + 16) = &v16[v12];
  return result;
}
