/*
 * XREFs of ??$_Emplace_reallocate@UDDisplayPrimaryBufferResources@@@?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@QEAAPEAUDDisplayPrimaryBufferResources@@QEAU2@$$QEAU2@@Z @ 0x1802425D0
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180244534 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUDDisplayPrimaryBufferResources@@PEAU1@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAPEAUDDisplayPrimaryBufferResources@@QEAU1@0PEAU1@AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x180242800 (--$_Uninitialized_move@PEAUDDisplayPrimaryBufferResources@@PEAU1@V-$allocator@UDDisplayPrimaryBu.c)
 *     ?_Change_array@?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@AEAAXQEAUDDisplayPrimaryBufferResources@@_K1@Z @ 0x180248B9C (-_Change_array@-$vector@UDDisplayPrimaryBufferResources@@V-$allocator@UDDisplayPrimaryBufferReso.c)
 */

unsigned __int64 __fastcall std::vector<DDisplayPrimaryBufferResources>::_Emplace_reallocate<DDisplayPrimaryBufferResources>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx

  v4 = a2 - *a1;
  v5 = (a1[1] - *a1) >> 5;
  if ( v5 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v5 + 1;
  v9 = (a1[2] - *a1) >> 5;
  v10 = v9 >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  else
  {
    v11 = v5 + 1;
  }
  v12 = 32 * v11;
  if ( v11 > 0x7FFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = *a3;
  v15 = v4 & 0xFFFFFFFFFFFFFFE0uLL;
  v16 = v13;
  *a3 = 0LL;
  v17 = v13;
  *(_QWORD *)(v15 + v13) = v14;
  *(_QWORD *)(v15 + v13 + 8) = a3[1];
  a3[1] = 0LL;
  v18 = a3[2];
  a3[2] = 0LL;
  *(_QWORD *)(v15 + v17 + 16) = v18;
  *(_BYTE *)(v15 + v17 + 24) = *((_BYTE *)a3 + 24);
  v19 = a1[1];
  v20 = *a1;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<DDisplayPrimaryBufferResources *,DDisplayPrimaryBufferResources *,std::allocator<DDisplayPrimaryBufferResources>>(
      v20,
      a2);
    v19 = a1[1];
    v20 = a2;
  }
  std::_Uninitialized_move<DDisplayPrimaryBufferResources *,DDisplayPrimaryBufferResources *,std::allocator<DDisplayPrimaryBufferResources>>(
    v20,
    v19);
  std::vector<DDisplayPrimaryBufferResources>::_Change_array(a1, v16, v8, v11);
  return v15 + *a1;
}
