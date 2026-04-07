/*
 * XREFs of ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800A66F0
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009E03C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x1800201C0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180025084 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18003B400 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003CF38 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18003E0C0 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18003F1BC (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x1800478B8 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800563EA (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084818 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800A6AA0 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800A6E4C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPressTapVisual::Start(
        CPressTapVisual *this,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        const struct tagPOINT *a4)
{
  struct tagPOINT v8; // r8
  int v9; // edx
  int BoundedContactWidth; // eax
  struct tagPOINT v11; // r8
  int v12; // edx
  CContactManager *v13; // rcx
  int v14; // eax
  float v15; // xmm2_4
  float v16; // xmm0_4
  LONG v17; // r14d
  LONG v18; // ebp
  float v19; // xmm2_4
  LONG v20; // esi
  LONG v21; // edi
  int v22; // ebp
  int v23; // edi
  int v24; // r14d
  int v25; // esi
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  __int64 v29; // rax
  bool v30; // zf
  char v31; // al
  __int64 v32; // rax
  _QWORD *v33; // r8
  int v34; // edi
  int v35; // eax
  struct tagSIZE v37; // [rsp+30h] [rbp-38h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmPressTapVisual_Start,
      (__int64)a3,
      1LL,
      (__int64)&v37);
  v8 = *a2;
  *((struct tagPOINT *)this + 38) = *a2;
  *((struct tagPOINT *)this + 39) = *a4;
  v9 = a3->right - a3->left;
  *((_DWORD *)this + 82) = v9;
  *((_DWORD *)this + 83) = a3->bottom - a3->top;
  BoundedContactWidth = CContactManager::GetBoundedContactWidth(this, v9, v8);
  v11 = (struct tagPOINT)*((_QWORD *)this + 38);
  v12 = *((_DWORD *)this + 83);
  *((_DWORD *)this + 82) = BoundedContactWidth;
  v14 = CContactManager::GetBoundedContactWidth(v13, v12, v11);
  v15 = *((float *)this + 93);
  v16 = (float)*((int *)this + 82);
  *((_DWORD *)this + 83) = v14;
  v17 = (int)(float)(v16 * v15);
  v18 = (int)(float)((float)v14 * v15);
  v37.cx = v17;
  v37.cy = v18;
  if ( v17 < 1 )
  {
    v37.cx = 1;
    v17 = 1;
  }
  if ( v18 < 1 )
  {
    v37.cy = 1;
    v18 = 1;
  }
  CVisual::SetSize(*((CVisual **)this + 43), &v37);
  v19 = *((float *)this + 95);
  v20 = (int)(float)((float)*((int *)this + 84) * v19);
  v21 = (int)(float)((float)*((int *)this + 85) * v19);
  v37.cx = v20;
  v37.cy = v21;
  if ( v20 < 1 )
  {
    v37.cx = 1;
    v20 = 1;
  }
  if ( v21 < 1 )
  {
    v37.cy = 1;
    v21 = 1;
  }
  CVisual::SetSize(*((CVisual **)this + 44), &v37);
  CImage::SetBitmapSource(*((CImage **)this + 43), *((struct CBitmapSource **)this + 37));
  CImage::SetBitmapSource(*((CImage **)this + 44), *((struct CBitmapSource **)this + 37));
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 43), *((_DWORD *)this + 76) - v17 / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 43), *((_DWORD *)this + 77) - v18 / 2);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 44), *((_DWORD *)this + 78) - v20 / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 44), *((_DWORD *)this + 79) - v21 / 2);
  v22 = *((_DWORD *)this + 78);
  v23 = *((_DWORD *)this + 76) - v22;
  v24 = *((_DWORD *)this + 79);
  v25 = *((_DWORD *)this + 77) - v24;
  v26 = sqrtf_0((float)(v23 * v23 + v25 * v25));
  *((_QWORD *)this + 40) = *((_QWORD *)this + 38);
  v27 = (float)*((int *)this + 99);
  if ( v26 > v27 )
  {
    v28 = v27 / v26;
    *((_DWORD *)this + 80) = v22 + (int)(float)((float)v23 * v28);
    *((_DWORD *)this + 81) = v24 + (int)(float)((float)v25 * v28);
  }
  v29 = *((_QWORD *)this + 50);
  if ( v29 )
  {
    v30 = (*(_DWORD *)(v29 + 8))-- == 1;
    v31 = CDesktopManager::s_fTimelineDirty;
    if ( v30 )
      v31 = 1;
    *((_QWORD *)this + 50) = 0LL;
    CDesktopManager::s_fTimelineDirty = v31;
  }
  v32 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          80LL);
  if ( v32 )
  {
    CTimelineBase::CTimelineBase(v32, *((float *)this + 90), 0.0, 1.0, 0);
    *v33 = &CTimeline<float>::`vftable';
  }
  else
  {
    v33 = 0LL;
  }
  *((_QWORD *)this + 50) = v33;
  if ( !v33 )
  {
    v34 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x93u);
LABEL_26:
    CPressTapVisual::Stop(this);
    return (unsigned int)v34;
  }
  v35 = CTouchVisual::RegisterGlobalTimer(this);
  v34 = v35;
  if ( v35 >= 0 )
    CVisual::SetOpacity(this, 1.0);
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x94u);
  if ( v34 < 0 )
    goto LABEL_26;
  return (unsigned int)v34;
}
