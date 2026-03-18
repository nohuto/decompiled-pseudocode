/*
 * XREFs of ??$_Emplace_reallocate@AEBU_LUID@@@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@QEAAPEAU_LUID@@QEAU2@AEBU2@@Z @ 0x18001D804
 * Callers:
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x18000EDF8 (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 *     ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x18000F2C0 (-ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHAD.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x18007A150 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800DB17C (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ??$emplace@AEBQEAVCRenderTarget@@@?$vector@PEAVCRenderTarget@@V?$allocator@PEAVCRenderTarget@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCRenderTarget@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCRenderTarget@@@std@@@std@@@1@AEBQEAVCRenderTarget@@@Z @ 0x1801635C0 (--$emplace@AEBQEAVCRenderTarget@@@-$vector@PEAVCRenderTarget@@V-$allocator@PEAVCRenderTarget@@@s.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 */

char *__fastcall std::vector<_LUID>::_Emplace_reallocate<_LUID const &>(_QWORD *a1, _BYTE *a2, _QWORD *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  SIZE_T v13; // rcx
  char *v14; // rdi
  char *v15; // r15
  void *v16; // rcx
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  size_t v19; // r8
  char *result; // rax

  v4 = (__int64)&a2[-*a1] >> 3;
  v6 = (__int64)(a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v6 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
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
  v12 = 8 * v11;
  v13 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v13 = -1LL;
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = &v14[8 * v4];
  *(_QWORD *)v15 = *a3;
  v16 = v14;
  v17 = (_BYTE *)a1[1];
  v18 = (_BYTE *)*a1;
  if ( a2 == v17 )
  {
    v19 = v17 - v18;
  }
  else
  {
    memmove_0(v14, v18, (size_t)&a2[-*a1]);
    v16 = v15 + 8;
    v19 = a1[1] - (_QWORD)a2;
    v18 = a2;
  }
  memmove_0(v16, v18, v19);
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  result = &v14[8 * v4];
  a1[1] = &v14[8 * v8];
  a1[2] = &v14[v12];
  *a1 = v14;
  return result;
}
