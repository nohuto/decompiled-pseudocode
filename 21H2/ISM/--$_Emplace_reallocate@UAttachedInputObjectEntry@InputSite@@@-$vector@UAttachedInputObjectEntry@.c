/*
 * XREFs of ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x18000A440
 * Callers:
 *     ?OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000A230 (-OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActivationControllerChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000A330 (-OnActivationControllerChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnUIAHitTestInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000BCA0 (-OnUIAHitTestInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnSystemButtonEventControllerChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000BDC0 (-OnSystemButtonEventControllerChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnShellGesturesClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000BEE0 (-OnShellGesturesClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnResizeControllerClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C000 (-OnResizeControllerClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C120 (-OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnMagnifierControllerChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C240 (-OnMagnifierControllerChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnInputForwardTargetInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C360 (-OnInputForwardTargetInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnInputForwardAreaInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C480 (-OnInputForwardAreaInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C5A0 (-OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C6B0 (-OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C7C0 (-OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C8D0 (-OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnCursorSuppressionPolicyObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C9E0 (-OnCursorSuppressionPolicyObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnContainerInfoInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CAF0 (-OnContainerInfoInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CC00 (-OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CD10 (-OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActivationListenerInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180013A20 (-OnActivationListenerInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedInputObjectEntry@InputSite@@0AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x180001F08 (--$_Destroy_range@V-$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedI.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@QEAU12@0PEAU12@AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x1800F2204 (--$_Uninitialized_move@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@V-$allocator@UAttachedInpu.c)
 */

_QWORD *__fastcall std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // r10
  __int64 v6; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rsi
  _QWORD *v15; // r14
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // r9
  size_t v20; // rcx
  void *v21; // rax
  _QWORD *v22; // r10
  _QWORD *v23; // rdx

  v4 = a2;
  v6 = (__int64)a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 > 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) || (v11 = v10 + v9, v10 + v9 < v8) )
    v11 = v8;
  v12 = 2 * v11;
  v13 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
  {
    v13 = -1LL;
  }
  else if ( v13 < 0x1000 )
  {
    if ( v13 )
    {
      v14 = operator new(16 * v11);
      v4 = a2;
      goto LABEL_9;
    }
    goto LABEL_23;
  }
  v20 = v13 + 39;
  if ( v13 + 39 < v13 )
    v20 = -1LL;
  v21 = operator new(v20);
  if ( v21 )
  {
    v14 = (_QWORD *)(((unsigned __int64)v21 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v14 - 1) = v21;
    v4 = a2;
    goto LABEL_9;
  }
  _o__invalid_parameter_noinfo_noreturn();
  __debugbreak();
LABEL_23:
  v14 = 0LL;
LABEL_9:
  v15 = (_QWORD *)((char *)v14 + (v6 & 0xFFFFFFFFFFFFFFF0uLL));
  *v15 = *a3;
  v16 = a3 + 1;
  v15[1] = 0LL;
  if ( v15 + 1 != a3 + 1 )
  {
    v15[1] = *v16;
    *v16 = 0LL;
  }
  v17 = (_QWORD *)a1[1];
  v18 = (_QWORD *)*a1;
  if ( v4 == v17 )
  {
    if ( v18 != v17 )
    {
      v22 = v18 + 1;
      v23 = v14 + 1;
      do
      {
        *(v23 - 1) = *v18;
        *v23 = 0LL;
        if ( v23 != v22 )
        {
          *v23 = *v22;
          *v22 = 0LL;
        }
        v23 += 2;
        v18 += 2;
        v22 += 2;
      }
      while ( v18 != v17 );
    }
  }
  else
  {
    std::_Uninitialized_move<InputSite::AttachedInputObjectEntry *,InputSite::AttachedInputObjectEntry *,std::allocator<InputSite::AttachedInputObjectEntry>>(
      *a1,
      v4,
      v14);
    std::_Uninitialized_move<InputSite::AttachedInputObjectEntry *,InputSite::AttachedInputObjectEntry *,std::allocator<InputSite::AttachedInputObjectEntry>>(
      a2,
      a1[1],
      v15 + 2);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<InputSite::AttachedInputObjectEntry>>(*a1, a1[1]);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = (__int64)v14;
  a1[1] = (__int64)&v14[2 * v8];
  a1[2] = (__int64)&v14[v12];
  return v15;
}
