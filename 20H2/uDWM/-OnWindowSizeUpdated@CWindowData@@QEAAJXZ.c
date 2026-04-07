/*
 * XREFs of ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180018C60
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18000B6F0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001AC70 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001B090 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180009080 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x1800114E0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180015118 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180043CC8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18009290C (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowData::OnWindowSizeUpdated(CWindowData *this)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  _DWORD *v4; // rdx
  int v5; // eax
  int v6; // ecx
  bool v7; // zf
  CButton *v8; // rcx
  CBaseObject *v9; // r14
  CWindowIconic *v10; // rcx
  unsigned int v11; // edi
  CProjectionBorderVisual *v12; // rcx
  unsigned int i; // ebp
  __int64 v15; // rcx
  CSecondaryWindowRepresentation *v16; // rcx
  CThumbnailVisual *v17; // rcx
  CBaseObject *v18; // rcx
  int updated; // eax
  __int128 v20; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp+8h]

  v1 = *((_QWORD *)this + 48);
  v2 = 0;
  v4 = *(_DWORD **)(v1 + 728);
  v5 = v4[14] - v4[12];
  if ( v5 < 0 )
    v5 = 0;
  v6 = v4[15] - v4[13];
  LODWORD(v21) = v5;
  if ( v6 < 0 )
    v6 = 0;
  HIDWORD(v21) = v6;
  if ( *(_DWORD *)(v1 + 120) != v5 || *(_DWORD *)(v1 + 124) != v6 )
  {
    v7 = (*(_BYTE *)(v1 + 84) & 1) == 0;
    *(_QWORD *)(v1 + 120) = v21;
    if ( !v7 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 24LL))(v1, 16LL);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 24LL))(v1, 2LL);
  }
  v8 = *(CButton **)(v1 + 744);
  if ( v8 )
  {
    CButton::SetMouseCapture(v8, 0);
    v18 = *(CBaseObject **)(v1 + 744);
    if ( v18 )
    {
      CBaseObject::Release(v18);
      *(_QWORD *)(v1 + 744) = 0LL;
    }
  }
  v9 = *(CBaseObject **)(v1 + 736);
  if ( v9 )
  {
    *(_QWORD *)(v1 + 736) = 0LL;
    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v9 + 120LL))(v9);
    v15 = *(_QWORD *)(v1 + 736);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 112LL))(v15);
    CBaseObject::Release(v9);
  }
  v10 = (CWindowIconic *)*((_QWORD *)this + 53);
  v11 = 0;
  if ( v10 && (updated = CWindowIconic::UpdateSizeOrMargins(v10, 0), v11 = updated, updated < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1CD0u);
  }
  else
  {
    v12 = (CProjectionBorderVisual *)*((_QWORD *)this + 50);
    if ( v12 )
    {
      CProjectionBorderVisual::UpdateRectFromWindow(v12, this);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 48LL))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
        *((_QWORD *)this + 5));
    }
    for ( i = 0; i < *((_DWORD *)this + 114); ++i )
    {
      v16 = *(CSecondaryWindowRepresentation **)(*((_QWORD *)this + 54) + 8LL * i);
      v20 = *((_OWORD *)v16 + 4);
      if ( (CWindowData *)v20 == this && ((DWORD2(v20) - 1) & 0xFFFFFFFD) == 0 )
        CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(v16);
    }
    if ( *((_DWORD *)this + 124) )
    {
      do
      {
        v17 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)this + 59) + 8LL * v2) + 88LL);
        if ( v17 )
          CThumbnailVisual::SetDirtyFlags(v17, 4096);
        ++v2;
      }
      while ( v2 < *((_DWORD *)this + 124) );
    }
  }
  return v11;
}
