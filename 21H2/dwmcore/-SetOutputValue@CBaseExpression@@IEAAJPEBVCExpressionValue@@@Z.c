/*
 * XREFs of ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180019498
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180041060 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004E930 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180227110 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180025E3C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18004F220 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180051C60 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180052380 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800D933C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x180228A1C (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValue(CBaseExpression *this, const struct CExpressionValue *a2)
{
  bool v2; // bl
  unsigned int v5; // ecx
  char v6; // al
  __int64 v7; // rax
  struct CResource *v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int TracingCookie; // eax
  int v13; // eax
  unsigned int v14; // ecx
  HANDLE EventW; // rbx
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-B8h]
  WCHAR Name[64]; // [rsp+30h] [rbp-A8h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 4LL) & 0x20000000) != 0 )
    v2 = (unsigned __int8)CExpressionValue::operator==((char *)this + 72) == 0;
  CExpressionValue::CopyFrom((CBaseExpression *)((char *)this + 72), a2);
  if ( v2 )
  {
    CBaseExpression::LogSetOutputValue(this);
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    v13 = StringCchPrintfW(Name, 0x3CuLL, L"DwmExpression_SetValue_%d", TracingCookie);
    v10 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x253u, 0LL);
      return v10;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  v6 = *((_BYTE *)this + 216);
  if ( (v6 & 2) != 0 && (v6 & 1) != 0 )
  {
    v7 = *((_QWORD *)this + 23);
    if ( v7 && (v8 = *(struct CResource **)(v7 + 16)) != 0LL )
    {
      v9 = CBaseExpression::SetOutputValueOnTarget(this, v8);
      v10 = v9;
      if ( v9 >= 0 )
        return 0;
      v16 = v9;
      v17 = 613;
    }
    else
    {
      v10 = -2147024890;
      v16 = -2147024890;
      v17 = 612;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v16, v17, 0LL);
    return v10;
  }
  return 0;
}
