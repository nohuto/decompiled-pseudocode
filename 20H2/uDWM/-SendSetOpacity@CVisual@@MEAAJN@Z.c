/*
 * XREFs of ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x18003B8A0
 * Callers:
 *     ?SetOpacity@CImage@@UEAAXN@Z @ 0x18008A240 (-SetOpacity@CImage@@UEAAXN@Z.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x180094DC4 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800A6B60 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x1800230D0 (--$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SendSetOpacity(CVisual *this, double a2)
{
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rbx
  unsigned int v6; // edi
  int v7; // eax
  int v8; // eax
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = CCompositor::CreateProxy<CEffectGroupProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), &v10);
  v5 = v10;
  v6 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x357u);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _DWORD))(**(_QWORD **)(*(_QWORD *)(v10 + 16) + 16LL)
                                                                            + 824LL))(
           *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL),
           *(unsigned int *)(*(_QWORD *)(v10 + 16) + 24LL),
           v4,
           0LL,
           0);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x35Au);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                           + 16LL)
                                                             + 384LL))(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
             *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
             *(unsigned int *)(*(_QWORD *)(v5 + 16) + 24LL));
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x35Du);
    }
  }
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v10)(v10, 1LL);
  return v6;
}
