/*
 * XREFs of ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800D0F60
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180071284 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A8270 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800AA3B8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x1800AA6A4 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z @ 0x1800AA704 (-ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ADC94 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800C248C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x1800D10B4 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ??$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z @ 0x1800D8988 (--$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessSetTransformParent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETTRANSFORMPARENT *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  char v6; // bp
  struct CResource *Resource; // r14
  __int64 v10; // rcx
  struct TransformParentData *TransformParentDataInternal; // rax
  struct CResource *v12; // r12
  __int64 v13; // r13
  __int64 v14; // r15
  struct TransformParentData *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  struct TransformParentData *v18; // rax
  __int64 v19; // rcx
  _DWORD *v21; // r10
  __int64 v22; // rcx
  unsigned int Slot; // eax
  __int64 v24; // r10
  char v25; // [rsp+80h] [rbp+18h]
  struct TransformParentData *v26; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0;
  Resource = 0LL;
  if ( v5 && (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0xC6u)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0xA14u, 0LL);
  }
  else
  {
    v25 = *((_BYTE *)a3 + 12) != 0;
    TransformParentDataInternal = CVisual::GetTransformParentDataInternal(this);
    v12 = 0LL;
    v26 = TransformParentDataInternal;
    v13 = 0LL;
    v14 = 0LL;
    v15 = TransformParentDataInternal;
    if ( TransformParentDataInternal )
    {
      v12 = *(struct CResource **)TransformParentDataInternal;
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)TransformParentDataInternal + 200LL))(*(_QWORD *)TransformParentDataInternal);
    }
    if ( Resource == v12 )
    {
      v14 = v13;
    }
    else
    {
      if ( Resource )
      {
        v16 = CResource::RegisterNotifier(this, Resource);
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xA28u, 0LL);
          return v4;
        }
        if ( !v15 )
        {
          v18 = (struct TransformParentData *)DefaultHeap::Alloc(0x10uLL);
          v15 = v18;
          if ( v18 )
            *(_OWORD *)v18 = 0LL;
          else
            v15 = 0LL;
          if ( !v15 )
          {
            v4 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024882, 0xA2Du, 0LL);
            CResource::UnRegisterNotifierInternal(this, Resource);
            return v4;
          }
          CVisual::SetTransformParentDataInternal(this, v15);
        }
        v14 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)Resource + 200LL))(Resource);
        *(_QWORD *)v15 = Resource;
      }
      else if ( v15 )
      {
        SAFE_DELETE<TransformParentData>(&v26);
        v21 = (_DWORD *)*((_QWORD *)this + 28);
        if ( (*v21 & 0x1000000) != 0 )
        {
          v22 = *((_QWORD *)this + 28);
          *v21 &= ~0x1000000u;
          Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v22, 8);
          if ( Slot < *(_DWORD *)(v24 + 4) )
            *(_BYTE *)(Slot + v24 + 8) = 0;
        }
        v15 = v26;
      }
      CResource::UnRegisterNotifierInternal(this, v12);
      if ( v14 != v13 )
      {
        CVisual::ManageTransformParentChildList(this, v15);
        v6 = 1;
      }
    }
    if ( v15 )
    {
      if ( *((_BYTE *)v15 + 8) != v25 )
      {
        *((_BYTE *)v15 + 8) = v25;
        if ( v14 )
          v6 = 1;
      }
    }
    if ( v6 )
    {
      CVisual::PropagateFlags((__int64)this, 5u);
      CVisual::OnOuterTransformChanged(this);
    }
  }
  return v4;
}
