/*
 * XREFs of ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180045BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x180045C7C (-SetProgress@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x1800D8C0C (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800D933C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z @ 0x1800E3F48 (-SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800FFAA8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x1802222D8 (-AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z @ 0x180222850 (-SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  int updated; // eax
  int v9; // r9d
  unsigned int TracingCookie; // eax
  int v11; // r8d
  int v12; // r9d
  void *v13; // rdx
  unsigned int v14; // [rsp+20h] [rbp-28h]
  unsigned int v15[6]; // [rsp+30h] [rbp-18h] BYREF
  float v16; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 == 18 )
  {
    switch ( a2 )
    {
      case 24:
        v5 = *(_QWORD *)(a1 + 440);
        *(float *)(a1 + 548) = fminf(fmaxf(*a4, 0.0), 1.0);
        if ( (*(_BYTE *)(v5 + 120) & 4) != 0 )
        {
          if ( *(_DWORD *)(a1 + 552) )
          {
            updated = CKeyframeAnimation::UpdatePlaybackState(a1, 0LL, 0LL, 0LL);
            v6 = updated;
            if ( updated < 0 )
            {
              v14 = 2111;
LABEL_13:
              v9 = updated;
LABEL_31:
              MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v9, v14, 0LL);
              return v6;
            }
          }
        }
        return 0;
      case 31:
        CKeyframeAnimation::SetPlaybackRate((CKeyframeAnimation *)a1, *a4);
        return 0;
      case 33:
        CKeyframeAnimation::SetProgress((CKeyframeAnimation *)a1, *a4);
        return 0;
    }
LABEL_30:
    v6 = -2147024809;
    v9 = -2147024809;
    v14 = 2168;
    goto LABEL_31;
  }
  if ( a3 != 42 )
    goto LABEL_30;
  if ( a2 != 16 )
  {
    if ( a2 != 30 )
      goto LABEL_30;
    v16 = *a4;
    if ( v16 < 1.0 )
      return 0;
    CKeyframeAnimation::AdjustAllKeyframeTime((CKeyframeAnimation *)a1, v16);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 328) + 4LL) & 0x20000000) == 0
      || (unsigned int)dword_1803D0EF0 <= 4
      || !(unsigned __int8)tlgKeywordOn(&dword_1803D0EF0, 4LL) )
    {
      return 0;
    }
    TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
    v13 = &unk_18037154B;
LABEL_29:
    v15[0] = TracingCookie;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1803D0EF0,
      (_DWORD)v13,
      v11,
      v12,
      (__int64)v15,
      (__int64)&v16);
    return 0;
  }
  v16 = *a4;
  if ( v16 > 0.0 )
  {
    updated = CKeyframeAnimation::SetInitialDelay((CKeyframeAnimation *)a1, v16);
    v6 = updated;
    if ( updated < 0 )
    {
      v14 = 2120;
      goto LABEL_13;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 328) + 4LL) & 0x20000000) != 0
      && (unsigned int)dword_1803D0EF0 > 4
      && (unsigned __int8)tlgKeywordOn(&dword_1803D0EF0, 4LL) )
    {
      TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
      v13 = &unk_180371509;
      goto LABEL_29;
    }
  }
  return 0;
}
