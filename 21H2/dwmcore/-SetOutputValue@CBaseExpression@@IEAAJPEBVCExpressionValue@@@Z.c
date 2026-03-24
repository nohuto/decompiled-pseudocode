/*
 * XREFs of ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800E2CF0
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800AB728 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800ACF70 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801D8A00 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180074090 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180074830 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800ABEB8 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800B20C4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800CC6C4 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_84144442@@@details@wil@@QEAA_NXZ @ 0x1800F0388 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_84144442@@@details@wil@@QEAA_NXZ.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1801D9F08 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValue(CBaseExpression *this, const struct CExpressionValue *a2)
{
  bool v4; // bl
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebx
  int v8; // r9d
  unsigned int TracingCookie; // eax
  int v10; // eax
  __int64 v11; // rcx
  HANDLE EventW; // rbx
  char v13; // al
  struct CResource *v14; // rdx
  int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-B8h]
  WCHAR Name[64]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_84144442>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_84144442>::GetImpl'::`2'::impl)
    || *((_DWORD *)a2 + 18) == *((_DWORD *)this + 36) )
  {
    if ( *(int *)(*((_QWORD *)this + 38) + 4LL) < 0 )
      v4 = (unsigned __int8)CExpressionValue::operator==((_DWORD *)this + 16, a2, v6) == 0;
    CExpressionValue::CopyFrom((CBaseExpression *)((char *)this + 64), a2);
    if ( v4 )
    {
      CBaseExpression::LogSetOutputValue(this);
      TracingCookie = CBaseExpression::GetTracingCookie(this);
      v10 = StringCchPrintfW(Name, 0x3CuLL, (size_t *)L"DwmExpression_SetValue_%d", TracingCookie);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x212u, 0LL);
        return v7;
      }
      EventW = CreateEventW(0LL, 1, 0, Name);
      SetEvent(EventW);
      CloseHandle(EventW);
    }
    v13 = *((_BYTE *)this + 208);
    if ( (v13 & 2) != 0 && (v13 & 1) != 0 )
    {
      v14 = (struct CResource *)*((_QWORD *)this + 22);
      if ( v14 )
        v14 = (struct CResource *)*((_QWORD *)v14 + 2);
      if ( !v14 )
      {
        v7 = -2147024890;
        v17 = 547;
        goto LABEL_4;
      }
      v15 = CBaseExpression::SetOutputValueOnTarget((unsigned __int64)this, v14);
      v7 = v15;
      if ( v15 < 0 )
      {
        v8 = v15;
        v17 = 548;
        goto LABEL_5;
      }
    }
    return 0;
  }
  v7 = -2147024809;
  v17 = 491;
LABEL_4:
  v8 = v7;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v8, v17, 0LL);
  return v7;
}
