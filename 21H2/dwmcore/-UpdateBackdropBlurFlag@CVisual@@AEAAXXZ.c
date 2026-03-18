/*
 * XREFs of ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18008C4FC
 * Callers:
 *     ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x18008C488 (-UpdateContentFlags@CVisual@@AEAAXXZ.c)
 * Callees:
 *     ?UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z @ 0x18008C6E4 (-UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18008E708 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800D52C4 (-GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::UpdateBackdropBlurFlag(CVisual *this)
{
  const struct CBackdropBrush *v2; // r15
  __int64 v3; // rcx
  unsigned __int8 v4; // si
  char v5; // r14
  unsigned __int8 v6; // bp
  CBrush *v7; // rbx
  struct CBrushRenderingGraph *BrushGraph; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  char v13; // [rsp+50h] [rbp+8h] BYREF
  char v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = *((_QWORD *)this + 32);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, 15LL) )
  {
    v7 = (CBrush *)*((_QWORD *)this + 32);
    if ( (*(unsigned __int8 (__fastcall **)(CBrush *, __int64))(*(_QWORD *)v7 + 56LL))(v7, 203LL) )
    {
      v5 = 1;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(CBrush *, __int64))(*(_QWORD *)v7 + 56LL))(v7, 13LL) )
    {
      v4 = 1;
    }
    else
    {
      BrushGraph = CBrush::GetBrushGraph(v7);
      if ( BrushGraph )
      {
        v6 = *((_BYTE *)BrushGraph + 196);
        v2 = (const struct CBackdropBrush *)*((_QWORD *)BrushGraph + 26);
        v5 = *((_BYTE *)BrushGraph + 198);
        v4 = *((_BYTE *)BrushGraph + 197);
      }
    }
  }
  if ( dword_1803D0F60 )
  {
    if ( v6 != ((*((_BYTE *)this + 102) & 8) != 0) )
    {
      v9 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v13, "m_fIsBackdropBlur=%d", v6);
      v10 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v14, "Visual-IsBackdropBlurFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v10, this, v9);
    }
    if ( v4 != ((*((_BYTE *)this + 272) & 2) != 0) )
    {
      v11 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v13, "m_fHasBlurredWallpaperBackdropInput=%d", v4);
      v12 = DwmDbg::DbgString::DbgString(
              (DwmDbg::DbgString *)&v14,
              "Visual-HasBlurredWallpaperBackdropInputFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v12, this, v11);
    }
  }
  *((_BYTE *)this + 102) &= ~8u;
  *((_BYTE *)this + 272) &= ~2u;
  *((_BYTE *)this + 102) |= 8 * (v6 & 1);
  *((_BYTE *)this + 272) |= 2 * (v4 & 1);
  CVisual::UpdateHasBackdropInputFlag(this, v2);
  CVisual::UpdateHasWindowBackdropInputFlag(this, v5);
}
