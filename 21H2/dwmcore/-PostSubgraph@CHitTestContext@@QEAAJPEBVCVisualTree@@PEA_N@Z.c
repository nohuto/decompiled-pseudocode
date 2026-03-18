/*
 * XREFs of ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B314
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18004B070 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 * Callees:
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180049050 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180049214 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180049584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004AFB8 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004D434 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800D6240 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800E2128 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBQEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@AEBQEAV2@@Z @ 0x180181A78 (--$_Emplace_reallocate@AEBQEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 *     ?ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ @ 0x18018FB14 (-ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ.c)
 *     ?MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x18018FD2C (-MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180260928 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 */

__int64 __fastcall CHitTestContext::PostSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  bool *v5; // rsi
  __int64 v7; // rax
  unsigned int v9; // r12d
  struct _LIST_ENTRY *v10; // r14
  int v11; // ebp
  bool v12; // si
  bool v13; // al
  int v14; // eax
  CVisual *v15; // r10
  int WorldTransform; // eax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // ecx
  struct CEffect *EffectInternal; // rax
  _DWORD *v23; // r8
  __int64 v24; // rcx
  _BYTE *v25; // rdx
  unsigned int v26; // eax
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  struct CInteraction *v30; // rax
  __int64 v31; // r10
  __int64 v32; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  CTransform3D *Transform3DEffectNoRef; // rax
  CMILMatrix *Matrix; // rax
  int v38; // eax
  _QWORD *v39; // rdx
  const struct CInteraction *InteractionInternal; // rax
  bool v41; // dl
  _BYTE v42[64]; // [rsp+30h] [rbp-98h] BYREF
  int v43; // [rsp+70h] [rbp-58h]
  char v44; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v45; // [rsp+D8h] [rbp+10h] BYREF
  bool *v46; // [rsp+E0h] [rbp+18h]
  struct D2D_POINT_2F v47; // [rsp+E8h] [rbp+20h] BYREF

  v46 = a3;
  v3 = *((_QWORD *)this + 2);
  v4 = *((_QWORD *)this + 3);
  v5 = a3;
  v45 = v3;
  v7 = *(_QWORD *)a2;
  v9 = 0;
  *a3 = 1;
  v10 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v7 + 184))(a2) )
  {
    v10 = (struct _LIST_ENTRY *)(v3 + 336);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v3);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        if ( (const struct CVisualTree *)i[2].Flink == a2 )
        {
          v10 = i - 24;
          break;
        }
      }
    }
  }
  if ( !*((_QWORD *)this + 14) )
  {
    v11 = *(_DWORD *)(v3 + 108);
    v12 = v4 && *(_DWORD *)(v4 + 108) == 1;
    v13 = 1;
    if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 216LL))(v3) )
    {
      if ( (**(_DWORD **)(v3 + 232) & 0x400000) == 0
        || (EffectInternal = CVisual::GetEffectInternal((CVisual *)v3),
            !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
               EffectInternal,
               59LL)) )
      {
        v13 = 0;
      }
    }
    if ( v11 == 1 && !(v12 ? !v13 : (unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v3 + 80)) == 0) )
      goto LABEL_12;
    if ( (*(_BYTE *)(v3 + 101) & 2) == 0 )
      goto LABEL_12;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 248LL))(v3) )
      goto LABEL_12;
    if ( *(_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((char *)this + 176) == 1 )
    {
      Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)v3);
      if ( Transform3DEffectNoRef )
      {
        Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)(v3 + 140));
        if ( !CMILMatrix::IsFacingUser(Matrix) )
          goto LABEL_12;
      }
    }
    v43 = 0;
    WorldTransform = CVisual::GetWorldTransform((CVisual *)v3, a2, 4, (__int64)v42, 0LL, 0LL);
    v9 = WorldTransform;
    if ( WorldTransform < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, WorldTransform, 0x10Fu, 0LL);
      return v9;
    }
    if ( CHitTestContext::GetPointInLocalSpace(
           (const struct D2D_POINT_2F *)this + 11,
           (const struct CMILMatrix *)v42,
           &v47) )
    {
      LOBYTE(v19) = *((_BYTE *)this + 240);
      v44 = 0;
      LOBYTE(v19) = v19 & 1;
      v20 = (*(__int64 (__fastcall **)(__int64, __int64, struct D2D_POINT_2F *, char *))(*(_QWORD *)v3 + 296LL))(
              v3,
              v19,
              &v47,
              &v44);
      v9 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x117u, 0LL);
        return v9;
      }
      v5 = v46;
      if ( v44 )
        *((_QWORD *)this + 14) = v3;
    }
    else
    {
LABEL_12:
      v5 = v46;
    }
  }
  if ( *(_DWORD *)(v3 + 208) != -1 )
  {
    v14 = *((_DWORD *)this + 44);
    if ( v14 )
      *((_DWORD *)this + 44) = v14 - 1;
  }
  if ( LOBYTE(v10[24].Flink) )
  {
    v38 = *((_DWORD *)this + 52);
    if ( v38 )
      *((_DWORD *)this + 52) = v38 - 1;
  }
  if ( !*((_QWORD *)this + 15) )
  {
    v15 = (CVisual *)*((_QWORD *)this + 14);
    if ( v15 != (CVisual *)v3 )
    {
LABEL_19:
      if ( v3 == *((_QWORD *)this + 21) )
      {
        if ( v3 == *((_QWORD *)this + 20) )
        {
          InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v3);
          v41 = 0;
        }
        else
        {
          v39 = (_QWORD *)*((_QWORD *)this + 18);
          if ( v39 == *((_QWORD **)this + 19) )
          {
            std::vector<CVisual *>::_Emplace_reallocate<CVisual * const &>((char *)this + 136, v39, &v45);
            v3 = v45;
          }
          else
          {
            *v39 = v3;
            *((_QWORD *)this + 18) += 8LL;
          }
          *((_QWORD *)this + 20) = v3;
          InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v3);
          v41 = 1;
        }
        InputTraceLogging::DWM::MarkForFurtherEvaluation(InteractionInternal, v41);
        *((_QWORD *)this + 21) = 0LL;
      }
      if ( *((_QWORD *)this + 20) == v3 )
        *((_QWORD *)this + 20) = v4;
      goto LABEL_22;
    }
    while ( 1 )
    {
      if ( v15 == *(CVisual **)(*((_QWORD *)a2 + 8) + 88LL) )
        goto LABEL_19;
      v23 = (_DWORD *)*((_QWORD *)v15 + 29);
      if ( (*v23 & 0x800000) != 0 )
        break;
LABEL_39:
      v15 = (CVisual *)*((_QWORD *)v15 + 11);
    }
    v24 = (unsigned int)v23[1];
    v25 = v23 + 2;
    v26 = 0;
    if ( (_DWORD)v24 )
    {
      while ( *v25 != 9 )
      {
        ++v26;
        ++v25;
        if ( v26 >= (unsigned int)v24 )
          goto LABEL_52;
      }
    }
    else
    {
LABEL_52:
      if ( v26 >= (unsigned int)v24 )
      {
        v27 = 0LL;
        goto LABEL_43;
      }
    }
    v27 = (__int64 *)((char *)v23 + 8LL * v26 - (((_BYTE)v24 + 15) & 7) + v24 + 15);
LABEL_43:
    v28 = *v27;
    if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 104);
      if ( v29 )
      {
        if ( *(_QWORD *)(v29 + 64) )
        {
          v30 = CVisual::GetInteractionInternal(v15);
          if ( v30 && (v32 = *((_QWORD *)v30 + 13)) != 0 && *(_QWORD *)(v32 + 64) && (*((_BYTE *)v30 + 192) & 4) != 0 )
          {
            *((_QWORD *)this + 14) = 0LL;
            *((_QWORD *)this + 21) = v31;
          }
          else
          {
            *((_QWORD *)this + 21) = 0LL;
          }
          goto LABEL_19;
        }
      }
    }
    goto LABEL_39;
  }
LABEL_22:
  if ( *((_QWORD *)this + 14) )
  {
    if ( *((_QWORD *)this + 15) == v3 )
    {
      *((_QWORD *)this + 14) = 0LL;
      *((_BYTE *)this + 128) = 1;
      InputTraceLogging::GestureTargeting::ForcePalmRejection();
    }
    else
    {
      *v5 = 0;
    }
  }
  if ( *((_QWORD *)this + 15) == v3 )
    *((_QWORD *)this + 15) = 0LL;
  return v9;
}
