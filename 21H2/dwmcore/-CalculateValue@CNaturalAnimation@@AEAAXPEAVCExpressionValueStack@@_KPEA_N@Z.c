/*
 * XREFs of ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180225B8C
 * Callers:
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180225EF0 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x180042190 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800D933C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180225750 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemp.c)
 *     ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x180225B1C (-CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x180226294 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ @ 0x180226920 (-GetStopValue@CNaturalAnimation@@AEAA-ATInternalValue@1@XZ.c)
 *     ?PeekStackValue@CNaturalAnimation@@AEAA?ATInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x180226F90 (-PeekStackValue@CNaturalAnimation@@AEAA-ATInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x180227470 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x180266AE0 (-IsInMotion@CScalarForceEvaluator@@QEBA_NXZ.c)
 *     ?Update@CVector3Force@@QEAA?AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z @ 0x180266C70 (-Update@CVector3Force@@QEAA-AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z.c)
 *     ?ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z @ 0x180266E54 (-ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18026E788 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

void __fastcall CNaturalAnimation::CalculateValue(
        CNaturalAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // xmm0_8
  int v15; // eax
  __int64 StopValue; // rax
  __int64 v17; // xmm0_8
  char v18; // al
  int *v19; // r9
  char v20; // cl
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  int v26; // eax
  _BYTE v27[4]; // [rsp+70h] [rbp-29h] BYREF
  float v28[3]; // [rsp+74h] [rbp-25h] BYREF
  __int64 v29; // [rsp+80h] [rbp-19h] BYREF
  int v30; // [rsp+88h] [rbp-11h]
  int v31; // [rsp+90h] [rbp-9h] BYREF
  int v32; // [rsp+94h] [rbp-5h] BYREF
  int v33; // [rsp+98h] [rbp-1h] BYREF
  int v34; // [rsp+9Ch] [rbp+3h] BYREF
  int v35; // [rsp+A0h] [rbp+7h] BYREF
  int v36; // [rsp+A4h] [rbp+Bh] BYREF
  int TracingCookie; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v38; // [rsp+B0h] [rbp+17h] BYREF
  int v39; // [rsp+B8h] [rbp+1Fh]
  _BYTE v40[16]; // [rsp+C0h] [rbp+27h] BYREF

  *a4 = 0;
  if ( a3 == *((_QWORD *)this + 54) )
  {
    *a4 = (*((_BYTE *)this + 588) & 0x40) != 0;
    v7 = *((_DWORD *)this + 89);
    v38 = *(_QWORD *)((char *)this + 348);
    v39 = v7;
    CNaturalAnimation::PushValueToStack(this, &v38, a2);
    return;
  }
  v8 = *((_DWORD *)this + 38);
  if ( v8 == 18 || v8 == 35 || v8 == 52 )
  {
    if ( CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(*((_QWORD *)this + 55) + 16LL))
      || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v9 + 84)) )
    {
      *((_BYTE *)this + 588) |= 4u;
    }
    if ( CNaturalAnimation::GenerateVector3Basis(this) )
      CVector3ForceEvaluator::ChangeBasis(
        (CVector3ForceEvaluator *)(*((_QWORD *)this + 55) + 16LL),
        (CNaturalAnimation *)((char *)this + 460));
    v10 = CNaturalAnimation::CalculateAnimationElapsedTimeInSeconds(this);
    v11 = *((_QWORD *)this + 55);
    v28[0] = v10;
    CVector3Force::Update(v11, &v38);
    if ( CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(*((_QWORD *)this + 55) + 16LL))
      || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v12 + 84))
      || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v13 + 152)) )
    {
      *a4 = 1;
      if ( (*((_BYTE *)this + 588) & 8) == 0 )
      {
        D3DXVec3TransformCoord(
          (struct D2DVector3 *)&v29,
          (const struct D2DVector3 *)&v38,
          (CNaturalAnimation *)((char *)this + 524));
        v25 = v30;
        *(_QWORD *)((char *)this + 348) = v29;
        *((_DWORD *)this + 89) = v25;
        *((float *)this + 87) = *((float *)this + 90) + *((float *)this + 87);
        *((float *)this + 88) = *((float *)this + 91) + *((float *)this + 88);
        *((float *)this + 89) = *((float *)this + 92) + *((float *)this + 89);
        v26 = *((_DWORD *)this + 89);
        v29 = *(_QWORD *)((char *)this + 348);
        v30 = v26;
        CNaturalAnimation::PushValueToStack(this, &v29, a2);
LABEL_18:
        if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 4LL) & 0x20000000) != 0 )
        {
          CNaturalAnimation::PeekStackValue(this, v40, a2);
          if ( (unsigned int)dword_1803D0EF0 > 4 )
          {
            if ( tlgKeywordOn((__int64)&dword_1803D0EF0, 4LL) )
            {
              v20 = *a4;
              v32 = v19[1];
              v33 = *v19;
              v34 = v39;
              v35 = HIDWORD(v38);
              v27[0] = v20;
              v21 = v19[2];
              v36 = v38;
              v31 = v21;
              TracingCookie = CBaseExpression::GetTracingCookie(this);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
                v22,
                byte_1803716E5,
                v23,
                v24,
                (__int64)&TracingCookie,
                (__int64)v28,
                (__int64)&v36,
                (__int64)&v35,
                (__int64)&v34,
                (__int64)&v33,
                (__int64)&v32,
                (__int64)&v31,
                (__int64)v27);
            }
          }
        }
        return;
      }
    }
    else
    {
      *a4 = 0;
    }
    v14 = *((_QWORD *)this + 45);
    v15 = *((_DWORD *)this + 92);
    *((_BYTE *)this + 588) |= 8u;
    *(_QWORD *)((char *)this + 348) = v14;
    *((_DWORD *)this + 89) = v15;
    StopValue = CNaturalAnimation::GetStopValue(this, v40);
    v17 = *(_QWORD *)StopValue;
    LODWORD(StopValue) = *(_DWORD *)(StopValue + 8);
    v29 = v17;
    v30 = StopValue;
    CNaturalAnimation::PushValueToStack(this, &v29, a2);
    v18 = *((_BYTE *)this + 216);
    if ( (v18 & 2) != 0 )
    {
      CBaseExpression::NotifyAnimationCompleted(this);
      v18 = *((_BYTE *)this + 216);
    }
    *((_BYTE *)this + 216) = v18 & 0xFE;
    goto LABEL_18;
  }
}
