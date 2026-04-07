/*
 * XREFs of ?ValidateVisual@CButton@@UEAAJXZ @ 0x180027550
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x180007AA4 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180024BA4 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180095AAC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CButton::ValidateVisual(CButton *this)
{
  int v1; // eax
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  int v7; // eax
  unsigned int v8; // edi
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int updated; // eax
  int v12; // eax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0x10000) != 0 )
  {
    if ( (v1 & 0x8000) == 0 )
    {
      CButton::UpdateCrossfade(this);
      v1 = *((_DWORD *)this + 20);
    }
    v1 &= ~0x10000u;
    *((_DWORD *)this + 20) = v1;
  }
  if ( (v1 & 0x8000) != 0 )
  {
    v7 = CButton::RedrawVisual(this);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB2,
        (__int64)"clientcore\\windows\\dwm\\udwm\\button.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    *((_DWORD *)this + 20) &= ~0x8000u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 2) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(CButton *, _QWORD))(*(_QWORD *)this + 88LL))(this, 0LL);
    v4 = v3;
    if ( v3 < 0 )
    {
      v9 = (unsigned int)v3;
      v10 = 129LL;
      goto LABEL_30;
    }
    *((_DWORD *)this + 20) &= ~2u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 8) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(CButton *))(*(_QWORD *)this + 176LL))(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      v9 = (unsigned int)v5;
      v10 = 136LL;
      goto LABEL_30;
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
      v9 = (unsigned int)updated;
      v10 = 143LL;
      goto LABEL_30;
    }
    *((_DWORD *)this + 20) &= ~0x10u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x20) != 0 )
  {
    v12 = (*(__int64 (__fastcall **)(CButton *))(*(_QWORD *)this + 160LL))(this);
    v4 = v12;
    if ( v12 < 0 )
    {
      v9 = (unsigned int)v12;
      v10 = 150LL;
      goto LABEL_30;
    }
    *((_DWORD *)this + 20) &= ~0x20u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x40) == 0 )
    return 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 16LL)
                                                          + 400LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
          (char *)this + 196);
  v4 = v13;
  if ( v13 >= 0 )
  {
    *((_DWORD *)this + 20) &= ~0x40u;
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x3ABu);
  v9 = v4;
  v10 = 157LL;
LABEL_30:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)v9);
  if ( (v4 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB6,
      (__int64)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)v4);
    return v4;
  }
  return 0LL;
}
