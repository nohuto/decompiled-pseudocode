/*
 * XREFs of ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180004EA8
 * Callers:
 *     ?DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x180004F70 (-DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z.c)
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180004FE0 (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x18024852C (-DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?DisableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x1802485E0 (-DisableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z.c)
 *     ?PreventIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z @ 0x180248E60 (-PreventIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z.c)
 * Callees:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18006604C (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x18024956C (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::DisableIndependentFlip(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  int v2; // ecx
  unsigned int v3; // edi
  int v4; // eax
  unsigned int v5; // ecx
  bool v6; // zf
  int v8; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 52);
  v3 = 0;
  v8 = 0;
  v4 = NtSetCompositionSurfaceIndependentFlipInfo(
         *(_QWORD *)(*(_QWORD *)this + 32LL),
         (char *)this + 24,
         0LL,
         *((_BYTE *)this + 189) != 0,
         *((_DWORD *)this + 54),
         1 << v2,
         (char *)this + 212,
         &v8);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4 | 0x10000000, 0x417u, 0LL);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    McTemplateU0xxqqqqq_EventWriteTransfer(
      *(_DWORD *)(*(_QWORD *)this + 40LL),
      *((_BYTE *)this + 188) != 0,
      *(_DWORD *)(*(_QWORD *)this + 40LL),
      *((_QWORD *)this + 3),
      *((_DWORD *)this + 53),
      *((_BYTE *)this + 188) != 0,
      *((_BYTE *)this + 189) != 0,
      *((_DWORD *)this + 54),
      v8);
  }
  v6 = *((_BYTE *)this + 189) == 0;
  *((_BYTE *)this + 188) = 0;
  if ( v6 )
  {
    CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(*(CGlobalCompositionSurfaceInfo **)this);
    *((_BYTE *)this + 189) = 1;
  }
  return v3;
}
