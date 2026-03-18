/*
 * XREFs of ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1800EF78C
 * Callers:
 *     _lambda_193e8a4e6d1693db3d1863bd3aa4b00f_::_lambda_invoker_cdecl_ @ 0x1800F87E0 (_lambda_193e8a4e6d1693db3d1863bd3aa4b00f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18001A4E4 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5C3C (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x1800D9D58 (-OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z.c)
 *     ??0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z @ 0x1800EF874 (--0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x180180BF8 (McTemplateU0p_EventWriteTransfer.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x1801BF6E0 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 */

void __fastcall CEffectCompilationTask::Compile_WorkerThread(CEffectCompilationTask *this)
{
  __int64 v2; // rcx
  int v3; // esi
  CCompiledEffectCache *v4; // rax
  CCompiledEffectCache *v5; // rcx
  CEffectCompilationService *v6; // rcx
  OLECHAR *v7; // rbp
  DWORD LastError; // ebx
  struct Windows::UI::Composition::ICompiledEffect *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  SetRestrictedErrorInfo(0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0p_EventWriteTransfer(v2, &EVTDESC_COMPILE_EFFECT_Start, this);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v9);
  v3 = CompileEffectDescription(*((_QWORD *)this + 6), &v9);
  if ( v3 < 0 )
  {
    v7 = (OLECHAR *)*((_QWORD *)this + 10);
    if ( v7 )
    {
      LastError = GetLastError();
      SysFreeString(v7);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 10) = 0LL;
    CEffectCompilationTask::GetRestrictedErrorDescription((unsigned __int16 **)this + 10);
  }
  else
  {
    v4 = (CCompiledEffectCache *)DefaultHeap::Alloc(0x28uLL);
    if ( v4 )
      v4 = CCompiledEffectCache::CCompiledEffectCache(v4, v9, this);
    v5 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v4;
    if ( v5 )
    {
      CCompiledEffectCache::`scalar deleting destructor'(v5);
      v4 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
    }
    if ( !v4 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0LL, -2147024882, 0xB8u);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0p_EventWriteTransfer(v5, &EVTDESC_COMPILE_EFFECT_Stop, this);
  v6 = (CEffectCompilationService *)*((_QWORD *)this + 1);
  *((_DWORD *)this + 22) = v3;
  *((_DWORD *)this + 16) = (v3 >> 31) + 3;
  CEffectCompilationService::OnTaskCompleted_AnyThread(v6, this, 0);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v9);
}
