/*
 * XREFs of ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18000F970
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000F780 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18000F810 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180012510 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x180041430 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x1800930B0 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x1800A7590 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x1800B6FF0 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800B9910 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180095AAC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CRenderDataVisual::ValidateVisual(CRenderDataVisual *this)
{
  int v1; // eax
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v6; // edi
  int v8; // eax
  int v9; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int updated; // eax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 2) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(CRenderDataVisual *, _QWORD))(*(_QWORD *)this + 88LL))(this, 0LL);
    v4 = v3;
    if ( v3 < 0 )
    {
      v10 = (unsigned int)v3;
      v11 = 129LL;
      goto LABEL_25;
    }
    *((_DWORD *)this + 20) &= ~2u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 8) != 0 )
  {
    v9 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 176LL))(this);
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = (unsigned int)v9;
      v11 = 136LL;
      goto LABEL_25;
    }
    *((_DWORD *)this + 20) &= ~8u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x10) != 0 )
  {
    updated = CVisual::UpdateTransform(this);
    v4 = updated;
    if ( updated < 0 )
    {
      v10 = (unsigned int)updated;
      v11 = 143LL;
      goto LABEL_25;
    }
    *((_DWORD *)this + 20) &= ~0x10u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x20) != 0 )
  {
    v13 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 160LL))(this);
    v4 = v13;
    if ( v13 < 0 )
    {
      v10 = (unsigned int)v13;
      v11 = 150LL;
      goto LABEL_25;
    }
    *((_DWORD *)this + 20) &= ~0x20u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x40) == 0 )
    goto LABEL_8;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
                                                         + 400LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
         (char *)this + 196);
  v4 = v8;
  if ( v8 >= 0 )
  {
    *((_DWORD *)this + 20) &= ~0x40u;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3ABu);
  v10 = v4;
  v11 = 157LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)v10);
  if ( (v4 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)v4);
    return v4;
  }
LABEL_8:
  if ( (*((_BYTE *)this + 80) & 4) == 0 )
    return 0LL;
  v5 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 192LL))(this);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_DWORD *)this + 20) &= ~4u;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x94,
    (__int64)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
