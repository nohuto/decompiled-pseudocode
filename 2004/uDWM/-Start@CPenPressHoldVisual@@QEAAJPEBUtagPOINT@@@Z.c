/*
 * XREFs of ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800A6878
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009E71C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18001A7D4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001D170 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800258E8 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18002B984 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18003B3C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18003E480 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18003F334 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18004798C (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x1800850D8 (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x1800A6A50 (-Stop@CPenPressHoldVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800A752C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPenPressHoldVisual::Start(CPenPressHoldVisual *this, const struct tagPOINT *a2)
{
  struct CBitmapSource ***v4; // r14
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // ecx
  int v10; // edi
  int v11; // ebx
  __int64 v12; // rax
  _QWORD *v13; // r8
  unsigned int v15; // [rsp+20h] [rbp-28h]

  *((struct tagPOINT *)this + 37) = *a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0q_EtwEventWriteTransfer((__int64)this, (__int64)&UdwmPenPressHoldVisual_Start, 0LL);
  v4 = (struct CBitmapSource ***)((char *)this + 328);
  Theme = (void *)CDesktopManager::GetTheme(2);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 2,
                                 0xCu,
                                 0LL,
                                 (struct CBitmapSource ***)this + 41);
  v7 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v15 = 56;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, v15);
    goto LABEL_17;
  }
  v8 = *((_QWORD *)**v4 + 3);
  *((_QWORD *)this + 40) = v8;
  if ( (int)v8 < 1 )
  {
    *((_DWORD *)this + 80) = 1;
    LODWORD(v8) = 1;
  }
  v9 = *((_DWORD *)this + 81);
  if ( v9 < 1 )
  {
    *((_DWORD *)this + 81) = 1;
    v9 = 1;
  }
  v10 = a2->x - (int)v8 / 2;
  v11 = a2->y - v9 / 2;
  CVisual::SetSize(*((CVisual **)this + 39), (const struct tagSIZE *)this + 40);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 39), v10);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 39), v11);
  CImage::SetBitmapSource(*((CImage **)this + 39), **v4);
  CVisual::SetOpacity(this, 1.0);
  v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          80LL);
  if ( v12 )
  {
    CTimelineBase::CTimelineBase(v12, 0.300000011920929, 0.0, 1.0, 0);
    *v13 = &CTimeline<float>::`vftable';
  }
  else
  {
    v13 = 0LL;
  }
  *((_QWORD *)this + 38) = v13;
  if ( !v13 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x53u);
LABEL_17:
    CPenPressHoldVisual::Stop(this);
    return v7;
  }
  BitmapsFromAtlasImageStrip = CTouchVisual::RegisterGlobalTimer(this);
  v7 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v15 = 85;
    goto LABEL_16;
  }
  return v7;
}
