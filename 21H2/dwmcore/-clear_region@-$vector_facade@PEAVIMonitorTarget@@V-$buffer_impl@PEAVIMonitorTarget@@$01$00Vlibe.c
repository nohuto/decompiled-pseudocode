/*
 * XREFs of ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801941BC
 * Callers:
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x18004C450 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@0@@Z @ 0x1801BF8E8 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@.c)
 *     ??_GCParallelModeGroup@@QEAAPEAXI@Z @ 0x1801BFB60 (--_GCParallelModeGroup@@QEAAPEAXI@Z.c)
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x1801BFD68 (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 * Callees:
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180111B30 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 */

__int64 __fastcall detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  bool v10; // zf
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v5 = *a1;
  v6 = v3 - *a1;
  v7 = a2 + a3;
  v8 = v6 >> 3;
  v10 = a2 + a3 == v8;
  if ( a2 + a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  if ( !v10 )
  {
    *(_QWORD *)&v12 = v5;
    *((_QWORD *)&v12 + 1) = v8;
    if ( a2 && (!v5 || a2 < 0 || v8 < a2) )
    {
      _o__invalid_parameter_noinfo_noreturn(v7);
      __debugbreak();
      JUMPOUT(0x180194282LL);
    }
    v13 = a2;
    v14 = v12;
    v15 = a2;
    std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>(
      (__int64)&v12,
      (const void *)(v5 + 8 * v7),
      v5 + 8 * v8,
      (__int64 *)&v14);
    v3 = a1[1];
  }
  result = 8 * a3;
  a1[1] = v3 - 8 * a3;
  return result;
}
