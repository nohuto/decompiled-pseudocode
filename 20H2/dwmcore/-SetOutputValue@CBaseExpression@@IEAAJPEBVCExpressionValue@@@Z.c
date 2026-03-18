/*
 * XREFs of ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1801D9BE8
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180023E40 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180026448 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801D7DD0 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180026A70 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800295A4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18007EE20 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18007F5C0 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800C8114 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1801D92D8 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValue(
        CBaseExpression *this,
        const struct CExpressionValue *a2,
        __int64 a3)
{
  bool v4; // bl
  __int64 v6; // rcx
  unsigned int TracingCookie; // eax
  int v8; // eax
  unsigned int v9; // ebx
  HANDLE EventW; // rbx
  char v11; // al
  struct CResource *v12; // rdx
  int v13; // r9d
  int v14; // eax
  unsigned int v16; // [rsp+20h] [rbp-B8h]
  WCHAR Name[64]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = 0;
  if ( *(int *)(*((_QWORD *)this + 38) + 4LL) < 0 )
    v4 = (unsigned __int8)CExpressionValue::operator==((_DWORD *)this + 16, a2, a3) == 0;
  CExpressionValue::CopyFrom((CBaseExpression *)((char *)this + 64), a2);
  if ( !v4 )
  {
LABEL_6:
    v11 = *((_BYTE *)this + 208);
    if ( (v11 & 2) != 0 && (v11 & 1) != 0 )
    {
      v12 = (struct CResource *)*((_QWORD *)this + 22);
      if ( v12 )
        v12 = (struct CResource *)*((_QWORD *)v12 + 2);
      if ( !v12 )
      {
        v9 = -2147024890;
        v13 = -2147024890;
        v16 = 532;
        goto LABEL_11;
      }
      v14 = CBaseExpression::SetOutputValueOnTarget((unsigned __int64)this, v12);
      v9 = v14;
      if ( v14 < 0 )
      {
        v13 = v14;
        v16 = 533;
        goto LABEL_11;
      }
    }
    return 0;
  }
  CBaseExpression::LogSetOutputValue(this);
  TracingCookie = CBaseExpression::GetTracingCookie(this);
  v8 = StringCchPrintfW(Name, 0x3CuLL, (size_t *)L"DwmExpression_SetValue_%d", TracingCookie);
  v9 = v8;
  if ( v8 >= 0 )
  {
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
    goto LABEL_6;
  }
  v13 = v8;
  v16 = 515;
LABEL_11:
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v13, v16, 0LL);
  return v9;
}
