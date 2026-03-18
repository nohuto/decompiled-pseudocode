/*
 * XREFs of ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C00815B4
 * Callers:
 *     ?PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C00809E0 (-PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropert.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z @ 0x1C007F998 (-FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z.c)
 *     ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PEAVCFlipContentToken@@@Z @ 0x1C0081454 (-ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PE.c)
 *     ?CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C0082C54 (-CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CContentResourceState::CreateUpdateTokens(
        CContentResourceState *this,
        CEndpointResourceStateManager **a2,
        struct CFlipPropertySet *a3,
        struct _LIST_ENTRY *a4)
{
  int v4; // r14d
  struct CompositionSurfaceObject *v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // ebp
  unsigned __int64 v12; // rcx
  struct DXGGLOBAL *Global; // rax
  struct CFlipContentToken *v14; // rbx
  struct CFlipContentToken *v15; // r8
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v17; // rbx
  struct CFlipContentToken *v19; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v9 = *(struct CompositionSurfaceObject **)(*((_QWORD *)this + 3) + 48LL);
  if ( v9 && (*((_BYTE *)this + 64) & 1) != 0 )
  {
    v10 = *((_QWORD *)this + 6);
    v11 = v10 ? CEndpointResourceStateManager::FindPoolBufferIndex(a2, *(_QWORD *)(v10 + 40)) : -1;
    v12 = *((_QWORD *)this + 7);
    v19 = 0LL;
    v4 = CFlipContentToken::CreateCompleted(v12, v9, &v19);
    Global = DXGGLOBAL_GetGlobal();
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)Global + 38073) + 256LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)v9 + 3),
      *((_QWORD *)this + 7),
      v11);
    if ( v4 >= 0 )
    {
      v14 = v19;
      v15 = v19;
      *((_DWORD *)v19 + 24) = v11;
      CContentResourceState::ApplyPresentAttributeMetadataToUpdateToken(this, a3, v15);
      Blink = a4->Blink;
      v17 = (struct _LIST_ENTRY *)((char *)v14 + 8);
      if ( Blink->Flink != a4 )
        __fastfail(3u);
      v17->Flink = a4;
      v17->Blink = Blink;
      Blink->Flink = v17;
      a4->Blink = v17;
    }
  }
  return (unsigned int)v4;
}
