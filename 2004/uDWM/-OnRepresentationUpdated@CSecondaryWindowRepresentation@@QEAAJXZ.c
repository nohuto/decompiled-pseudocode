/*
 * XREFs of ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180027A38
 * Callers:
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800145CC (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001DE40 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800271F4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800268C4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x180027CFC (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x180027D68 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180027EA8 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x1800282D8 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x180028310 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800285D4 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18002867C (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x1800287CC (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x18008AA08 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnRepresentationUpdated(CSecondaryWindowRepresentation *this)
{
  unsigned int v2; // ebp
  CWindowData *v3; // rcx
  CWindowData **v4; // rsi
  char v5; // r14
  char v6; // r12
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  char v10; // r15
  CWindowData *v11; // rdx
  CWindowData *v12; // rdi
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rdx
  CWindowData *v16; // rcx
  CWindowData *v17; // rdi
  __int64 v18; // rcx
  CWindowData *v19; // rcx
  CWindowData *v20; // rdi
  __int64 v21; // rcx
  CVisual *v22; // rcx
  CBaseObject *v24; // rcx
  CBaseObject *v25; // rcx
  int v26; // eax
  __int128 v27; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (CWindowData *)*((_QWORD *)this + 4);
  if ( !v3 || *((_BYTE *)this + 160) )
    return v2;
  v4 = (CWindowData **)((char *)this + 64);
  v5 = 1;
  v27 = *((_OWORD *)this + 4);
  if ( (*((_DWORD *)this + 10) & 0x800) != 0 )
  {
    *((_DWORD *)this + 18) = 3;
    *v4 = v3;
  }
  else
  {
    CWindowData::GetIdealWindowRepresentation(
      v3,
      (*((_DWORD *)this + 10) & 0x20) != 0,
      (CSecondaryWindowRepresentation *)((char *)this + 64));
  }
  v6 = 0;
  if ( (CWindowData *)v27 != *v4 || (v7 = *((_DWORD *)this + 18), DWORD2(v27) != v7) )
  {
    CSecondaryWindowRepresentation::ReleaseAllResources(this);
    v6 = 1;
    if ( *((_DWORD *)this + 18) == 3 && CWindowData::IsImmersiveWindow(*((CWindowData **)this + 4)) )
    {
      v25 = (CBaseObject *)*((_QWORD *)this + 47);
      if ( v25 )
      {
        CBaseObject::Release(v25);
        *((_QWORD *)this + 47) = 0LL;
      }
      v26 = CImmersiveWindowIconic::Create(
              *((struct CWindowData **)this + 4),
              *((_DWORD *)this + 41),
              (enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 30),
              (*((_DWORD *)this + 10) & 0x1000) != 0,
              (struct CImmersiveWindowIconic **)this + 47);
      v2 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x1C4u);
        return v2;
      }
    }
    v8 = CWindowData::ChangeSecondaryWindowRepresentation(
           *((CWindowData **)this + 4),
           this,
           (struct CWindowRepresentation *)&v27);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1C7u);
      return v2;
    }
    v9 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(this);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1C8u);
      return v2;
    }
    v7 = *((_DWORD *)this + 18);
  }
  v10 = *((_BYTE *)this + 336);
  v11 = 0LL;
  v12 = *v4;
  v13 = v7 - 1;
  if ( !v13 )
    goto LABEL_33;
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 != 1 )
      goto LABEL_15;
    if ( !CWindowData::IsImmersiveWindow(*v4) )
    {
      v11 = *(CWindowData **)(*((_QWORD *)v12 + 53) + 80LL);
      goto LABEL_15;
    }
    goto LABEL_33;
  }
  v15 = *((_QWORD *)v12 + 52);
  if ( !v15 )
  {
LABEL_33:
    v11 = v12;
    goto LABEL_15;
  }
  v11 = *(CWindowData **)(v15 + 32);
LABEL_15:
  if ( !CWindowData::IsSimpleClientArea(v11) || *((_QWORD *)this + 6) )
    goto LABEL_39;
  v16 = 0LL;
  v17 = *v4;
  switch ( *((_DWORD *)this + 18) )
  {
    case 1:
      goto LABEL_38;
    case 2:
      v18 = *((_QWORD *)v17 + 52);
      if ( v18 )
      {
        v16 = *(CWindowData **)(v18 + 32);
        break;
      }
      goto LABEL_38;
    case 3:
      if ( !CWindowData::IsImmersiveWindow(*v4) )
      {
        v16 = *(CWindowData **)(*((_QWORD *)v17 + 53) + 80LL);
        break;
      }
LABEL_38:
      v16 = v17;
      break;
  }
  if ( CWindowData::IsImmersiveWindow(v16) )
LABEL_39:
    v5 = 0;
  *((_BYTE *)this + 336) = v5;
  if ( !v6 )
  {
    if ( !v10 && !v5 )
      return v2;
    v24 = (CBaseObject *)*((_QWORD *)this + 38);
    if ( v24 )
    {
      CBaseObject::Release(v24);
      *((_QWORD *)this + 38) = 0LL;
    }
  }
  if ( (*((_BYTE *)this + 40) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, CSecondaryWindowRepresentation *))(**((_QWORD **)this + 21) + 16LL))(
      *((_QWORD *)this + 21),
      this);
  CSecondaryWindowRepresentation::SetDirtyFlags(this, 4u);
  v19 = 0LL;
  v20 = *v4;
  if ( *((_DWORD *)this + 18) == 1 )
    goto LABEL_34;
  if ( *((_DWORD *)this + 18) != 2 )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_29;
    if ( !CWindowData::IsImmersiveWindow(*v4) )
    {
      v19 = *(CWindowData **)(*((_QWORD *)v20 + 53) + 80LL);
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v21 = *((_QWORD *)v20 + 52);
  if ( !v21 )
  {
LABEL_34:
    v19 = v20;
    goto LABEL_29;
  }
  v19 = *(CWindowData **)(v21 + 32);
LABEL_29:
  v22 = (CVisual *)*((_QWORD *)v19 + 48);
  if ( v22 )
    CVisual::PropagateDirtyChildren(v22);
  CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(this);
  return v2;
}
