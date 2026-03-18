/*
 * XREFs of ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180048940
 * Callers:
 *     ?OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800F1920 (-OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180048DDC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180048E38 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180049050 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180085064 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18008B4E4 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18008C294 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x18008C488 (-UpdateContentFlags@CVisual@@AEAAXXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3118 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800B4B40 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D2754 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ @ 0x1800D49B0 (-UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800DEB38 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800E8734 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::OnChanged(__int64 a1, int a2, int (__fastcall ***a3)(_QWORD, GUID *, __int64 *))
{
  int v5; // r15d
  unsigned int v6; // edi
  bool v7; // cl
  int v8; // r14d
  struct TransformParentData *TransformParentDataInternal; // rax
  __int64 v11; // rcx
  FastRegion::Internal::CRgnData **v12; // rax
  __int64 v13; // rdx
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v15; // rcx
  struct CTransform3D *Transform3DEffectNoRef; // rdi
  int (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-39h] BYREF
  float v18; // [rsp+28h] [rbp-31h] BYREF
  float v19; // [rsp+2Ch] [rbp-2Dh] BYREF
  char v20[8]; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-21h]
  _DWORD *v22; // [rsp+40h] [rbp-19h]
  __int64 v23; // [rsp+48h] [rbp-11h]
  int v24; // [rsp+50h] [rbp-9h]
  _DWORD v25[8]; // [rsp+60h] [rbp+7h]

  v5 = a2;
  if ( a2 != 1 )
  {
    if ( a2 == 3 )
    {
      v6 = 1;
      goto LABEL_8;
    }
    v6 = 5;
    if ( a2 == 4 )
    {
      CVisual::OnClipChanged((CVisual *)a1);
      goto LABEL_8;
    }
    if ( a2 == 5 )
    {
      CVisual::ClearContentTreeDataCaches((CVisual *)a1);
      return 0LL;
    }
    if ( a2 != 6 )
    {
      if ( a2 == 11 )
      {
        v6 = 2;
      }
      else if ( a2 == 15 )
      {
        CVisual::UpdateBackdropVisualImageForWindowBackgroundTreatment((CVisual *)a1);
        return 0LL;
      }
      goto LABEL_8;
    }
    CVisual::ClearContentTreeDataCaches((CVisual *)a1);
    v5 = 1;
  }
  v6 = 4;
LABEL_8:
  if ( *(_QWORD *)(a1 + 256) )
  {
    CVisual::UpdateContentFlags((CVisual *)a1);
    v7 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 256) + 192LL))(*(_QWORD *)(a1 + 256)) == 0;
    v8 = v6 | 0x10;
    if ( (BYTE1(*(_DWORD *)(a1 + 96)) & 1) == v7 )
      v8 = v6;
    v6 = v8;
    if ( *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 256) == a3 && v7 && v5 == 1 )
    {
      v17 = 0LL;
      if ( (**a3)(a3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27, (__int64 *)&v17) >= 0 )
      {
        CVisual::GetEffectiveSize((CVisual *)a1, &v18, &v19);
        v12 = (FastRegion::Internal::CRgnData **)((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), float *))(*v17)[3])(
                                                   v17,
                                                   &v18);
        if ( v12 )
        {
          FastRegion::Internal::CRgnData::BeginIterator(*v12, (struct FastRegion::CRegion::Iterator *)v20);
          while ( (unsigned __int64)v22 < v21 )
          {
            v25[1] = *v22;
            v25[3] = v22[2];
            v13 = 2 * v24;
            v25[0] = *(_DWORD *)(v23 + 4 * v13);
            v25[2] = *(_DWORD *)(v23 + 4 * v13 + 4);
            for ( i = 0LL; i < 4; ++i )
              *(float *)&v25[i + 4] = (float)(int)v25[i];
            CVisual::AddAdditionalDirtyRect((CVisual *)a1);
            FastRegion::Internal::CRgnData::StepIterator(v15, (struct FastRegion::CRegion::Iterator *)v20);
          }
          v6 = v8 & 0xFFFFFFFB;
        }
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
    }
  }
  if ( v6 )
    CVisual::PropagateFlags(a1, v6);
  if ( v5 == 2 )
  {
    v11 = *(_QWORD *)(a1 + 240);
    if ( v11 )
    {
      v17 = 0LL;
      if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v11, &GUID_00000000_0000_0000_c000_000000000046, &v17) >= 0
        && a3 == v17 )
      {
        CVisual::OnOuterTransformChanged((CVisual *)a1);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
    }
    if ( CVisual::GetTransform3DEffectNoRef((CVisual *)a1) )
    {
      v17 = 0LL;
      Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)a1);
      if ( v17 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v17)[2])(v17);
      if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(
                  Transform3DEffectNoRef,
                  &GUID_00000000_0000_0000_c000_000000000046,
                  &v17) >= 0
        && a3 == v17 )
      {
        CVisual::OnInnerTransformChanged((CVisual *)a1);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
    }
  }
  else if ( a3 )
  {
    TransformParentDataInternal = CVisual::GetTransformParentDataInternal((CVisual *)a1);
    if ( TransformParentDataInternal )
    {
      if ( a3 == *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))TransformParentDataInternal )
        CVisual::OnOuterTransformChanged((CVisual *)a1);
    }
  }
  return 0LL;
}
