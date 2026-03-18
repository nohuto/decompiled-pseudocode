/*
 * XREFs of ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C006D874
 * Callers:
 *     ?PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C006C258 (-PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipP.c)
 * Callees:
 *     ?FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z @ 0x1C006B778 (-FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z.c)
 *     ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PEAVCFlipContentToken@@@Z @ 0x1C006D490 (-ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PE.c)
 *     ?CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C006EDC4 (-CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CContentResourceState::CreateUpdateTokens(
        CContentResourceState *this,
        CEndpointResourceStateManager **a2,
        struct CFlipPropertySet *a3,
        struct _LIST_ENTRY *a4)
{
  int v4; // ebp
  struct CompositionSurfaceObject *v9; // rbx
  __int64 v10; // rdx
  int PoolBufferIndex; // eax
  int v12; // r15d
  unsigned __int64 v13; // r11
  struct CFlipContentToken *v14; // rbx
  struct CFlipContentToken *v15; // r8
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v17; // rbx
  struct CFlipContentToken *v19; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v9 = *(struct CompositionSurfaceObject **)(*((_QWORD *)this + 3) + 48LL);
  if ( v9 )
  {
    if ( (*((_BYTE *)this + 56) & 1) != 0 )
    {
      v10 = *((_QWORD *)this + 6);
      if ( v10 )
      {
        PoolBufferIndex = CEndpointResourceStateManager::FindPoolBufferIndex(a2, *(_QWORD *)(v10 + 40));
        v19 = 0LL;
        v12 = PoolBufferIndex;
        v4 = CFlipContentToken::CreateCompleted(v13, v9, &v19);
        if ( v4 >= 0 )
        {
          v14 = v19;
          v15 = v19;
          *((_DWORD *)v19 + 24) = v12;
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
    }
  }
  return (unsigned int)v4;
}
