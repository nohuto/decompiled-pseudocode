/*
 * XREFs of _lambda_ca1dd57b0795afeb4485e1a66ba69688_::operator() @ 0x1800752EC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ca1dd57b0795afeb4485e1a66ba69688__void_IMPCInputProviderBase___::_Do_call @ 0x1800791B0 (std--_Func_impl_no_alloc__lambda_ca1dd57b0795afeb4485e1a66ba69688__void_IMPCInputPr_ea_1800791B0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180074EC0 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 *     ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x1800764B4 (-IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@.c)
 */

__int64 __fastcall lambda_ca1dd57b0795afeb4485e1a66ba69688_::operator()(_QWORD *a1, struct IMPCInputProviderBase *a2)
{
  MPCHolographicInputManager *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbp
  __int64 v7; // rbx
  int v8; // eax
  __int64 result; // rax

  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD, __int64))(*(_QWORD *)a2 + 104LL))(
    a2,
    *a1,
    *a1 + 2696LL);
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 2704LL);
  v7 = *(_QWORD *)(*a1 + 2696LL);
  if ( v7 != v6 )
  {
    do
    {
      if ( MPCHolographicInputManager::IsMultiplePrimariesWithGazeCommit(v4, a2) )
        v8 = 1;
      else
        v8 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 320LL))(a2);
      *(_DWORD *)(v7 + 176) = v8;
      std::vector<PointData3D>::emplace_back<PointData3D const &>(*a1 + 2672LL, (_OWORD *)v7);
      v7 += 184LL;
    }
    while ( v7 != v6 );
    v5 = *a1;
  }
  result = *(_QWORD *)(v5 + 2696);
  *(_QWORD *)(v5 + 2704) = result;
  return result;
}
