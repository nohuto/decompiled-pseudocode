/*
 * XREFs of ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x1800A1570
 * Callers:
 *     <none>
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18001A7D4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001D170 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180045F0C (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x1800460C0 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180046110 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectTouchVisual::UpdateTransition(CDirectTouchVisual *this)
{
  float v2; // xmm7_4
  __int64 v3; // rax
  int v4; // ecx
  float v5; // xmm6_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rax
  bool v15; // zf
  bool v16; // al
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // r8

  v2 = FLOAT_1_0;
  if ( *((_QWORD *)this + 49) )
  {
LABEL_15:
    v5 = 0.0;
    goto LABEL_16;
  }
  v3 = *((_QWORD *)this + 47);
  v4 = *((_DWORD *)this + 92);
  if ( !v3 )
  {
    if ( (v4 & 8) != 0 )
    {
      v5 = FLOAT_1_0;
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if ( !*(_BYTE *)(v3 + 72) )
  {
    if ( (v4 & 1) != 0 )
    {
      v5 = (float)((float)*(double *)(v3 + 48) * (float)(1.0 - *((float *)this + 86))) + *((float *)this + 86);
      goto LABEL_9;
    }
LABEL_8:
    v5 = 0.0;
    goto LABEL_9;
  }
  if ( (v4 & 8) == 0 )
    goto LABEL_8;
  v5 = FLOAT_1_0;
LABEL_9:
  v6 = *((float *)this + 83);
  v7 = *((float *)this + 89);
  v8 = *(double *)(v3 + 48);
  if ( v6 < v8 )
    v9 = (float)((float)((float)(v8 - v6) / *((float *)this + 84)) * (float)(*((float *)this + 90) - v7)) + v7;
  else
    v9 = (float)((float)(v7 - *((float *)this + 88)) * (float)(v8 / v6)) + *((float *)this + 88);
  CDirectTouchVisual::UpdateLocationWithScalar(
    this,
    (const struct tagPOINT *)this + 37,
    (const struct tagRECT *)this + 19,
    v9);
LABEL_16:
  v10 = *((_QWORD *)this + 48);
  if ( v10 )
  {
    v2 = *(double *)(v10 + 48);
  }
  else if ( *((_BYTE *)this + 400) )
  {
    v2 = 0.0;
  }
  CVisual::SetOpacity(this, (float)(v2 * v5));
  v13 = *((_QWORD *)this + 47);
  if ( v13 && *(_BYTE *)(v13 + 72) )
    CDirectTouchVisual::StopDownTimeline(this, v11, v12);
  v14 = *((_QWORD *)this + 48);
  if ( v14 && *(_BYTE *)(v14 + 72) )
  {
    *((_BYTE *)this + 400) = 1;
    v15 = (*(_DWORD *)(v14 + 8))-- == 1;
    v16 = CDesktopManager::s_fTimelineDirty;
    if ( v15 )
      v16 = 1;
    *((_QWORD *)this + 48) = 0LL;
    CDesktopManager::s_fTimelineDirty = v16;
  }
  else
  {
    v16 = CDesktopManager::s_fTimelineDirty;
  }
  v17 = *((_QWORD *)this + 49);
  if ( v17 && *(_BYTE *)(v17 + 72) )
  {
    v15 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v15 )
      v16 = 1;
    *((_QWORD *)this + 49) = 0LL;
    CDesktopManager::s_fTimelineDirty = v16;
    v18 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            80LL);
    if ( v18 )
    {
      CTimelineBase::CTimelineBase(v18, *((float *)this + 82), 0.0, 1.0, 0);
      *v19 = &CTimeline<float>::`vftable';
    }
    else
    {
      v19 = 0LL;
    }
    *((_QWORD *)this + 47) = v19;
  }
  if ( !*((_QWORD *)this + 47) && !*((_QWORD *)this + 48) && !*((_QWORD *)this + 49) )
    CDirectTouchVisual::StopTimer(this);
  return 0LL;
}
