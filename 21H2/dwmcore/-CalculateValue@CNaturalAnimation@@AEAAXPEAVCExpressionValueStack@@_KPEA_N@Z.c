/*
 * XREFs of ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801D754C
 * Callers:
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801D78B0 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800ACC34 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800CC6C4 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1801D7180 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemp.c)
 *     ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x1801D74DC (-CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801D7C08 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ @ 0x1801D8254 (-GetStopValue@CNaturalAnimation@@AEAA-ATInternalValue@1@XZ.c)
 *     ?PeekStackValue@CNaturalAnimation@@AEAA?ATInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801D88BC (-PeekStackValue@CNaturalAnimation@@AEAA-ATInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801D8D34 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x180215A48 (-IsInMotion@CScalarForceEvaluator@@QEBA_NXZ.c)
 *     ?Update@CVector3Force@@QEAA?AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z @ 0x180215BB8 (-Update@CVector3Force@@QEAA-AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z.c)
 *     ?ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z @ 0x180215D9C (-ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18021E218 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
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
  bool v14; // cl
  int v15; // eax
  int v16; // eax
  __int64 v17; // xmm0_8
  int v18; // eax
  __int64 StopValue; // rax
  __int64 v20; // xmm0_8
  char v21; // al
  int *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _BYTE v26[4]; // [rsp+70h] [rbp-29h] BYREF
  float v27[3]; // [rsp+74h] [rbp-25h] BYREF
  __int64 v28; // [rsp+80h] [rbp-19h] BYREF
  int v29; // [rsp+88h] [rbp-11h]
  int v30; // [rsp+90h] [rbp-9h] BYREF
  int v31; // [rsp+94h] [rbp-5h] BYREF
  int v32; // [rsp+98h] [rbp-1h] BYREF
  int v33; // [rsp+9Ch] [rbp+3h] BYREF
  int v34; // [rsp+A0h] [rbp+7h] BYREF
  int v35; // [rsp+A4h] [rbp+Bh] BYREF
  int TracingCookie; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v37; // [rsp+B0h] [rbp+17h] BYREF
  int v38; // [rsp+B8h] [rbp+1Fh]
  _BYTE v39[16]; // [rsp+C0h] [rbp+27h] BYREF

  *a4 = 0;
  if ( a3 == *((_QWORD *)this + 51) )
  {
    *a4 = (*((_BYTE *)this + 564) & 0x40) != 0;
    v7 = *((_DWORD *)this + 83);
    v37 = *(_QWORD *)((char *)this + 324);
    v38 = v7;
    CNaturalAnimation::PushValueToStack(this, &v37, a2);
  }
  else
  {
    v8 = *((_DWORD *)this + 36);
    if ( v8 == 18 || v8 == 35 || v8 == 52 )
    {
      if ( CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(*((_QWORD *)this + 52) + 16LL))
        || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v9 + 84)) )
      {
        *((_BYTE *)this + 564) |= 4u;
      }
      if ( CNaturalAnimation::GenerateVector3Basis(this) )
        CVector3ForceEvaluator::ChangeBasis(
          (CVector3ForceEvaluator *)(*((_QWORD *)this + 52) + 16LL),
          (CNaturalAnimation *)((char *)this + 436));
      v10 = CNaturalAnimation::CalculateAnimationElapsedTimeInSeconds(this);
      v11 = *((_QWORD *)this + 52);
      v27[0] = v10;
      CVector3Force::Update(v11, &v37);
      v14 = CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(*((_QWORD *)this + 52) + 16LL))
         || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v12 + 84))
         || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v13 + 152));
      *a4 = v14;
      if ( !v14 || (*((_BYTE *)this + 564) & 8) != 0 )
      {
        v17 = *((_QWORD *)this + 42);
        v18 = *((_DWORD *)this + 86);
        *((_BYTE *)this + 564) |= 8u;
        *(_QWORD *)((char *)this + 324) = v17;
        *((_DWORD *)this + 83) = v18;
        StopValue = CNaturalAnimation::GetStopValue(this, v39);
        v20 = *(_QWORD *)StopValue;
        LODWORD(StopValue) = *(_DWORD *)(StopValue + 8);
        v28 = v20;
        v29 = StopValue;
        CNaturalAnimation::PushValueToStack(this, &v28, a2);
        v21 = *((_BYTE *)this + 208);
        if ( (v21 & 2) != 0 )
        {
          CBaseExpression::NotifyAnimationCompleted(this);
          v21 = *((_BYTE *)this + 208);
        }
        *((_BYTE *)this + 208) = v21 & 0xFE;
      }
      else
      {
        D3DXVec3TransformCoord(
          (struct D2DVector3 *)&v28,
          (const struct D2DVector3 *)&v37,
          (CNaturalAnimation *)((char *)this + 500));
        v15 = v29;
        *(_QWORD *)((char *)this + 324) = v28;
        *((_DWORD *)this + 83) = v15;
        *((float *)this + 81) = *((float *)this + 84) + *((float *)this + 81);
        *((float *)this + 82) = *((float *)this + 85) + *((float *)this + 82);
        *((float *)this + 83) = *((float *)this + 86) + *((float *)this + 83);
        v16 = *((_DWORD *)this + 83);
        v28 = *(_QWORD *)((char *)this + 324);
        v29 = v16;
        CNaturalAnimation::PushValueToStack(this, &v28, a2);
      }
      if ( *(int *)(*((_QWORD *)this + 38) + 4LL) < 0 )
      {
        v22 = (int *)CNaturalAnimation::PeekStackValue(this, v39, a2);
        if ( (unsigned int)dword_180344EF0 > 4 && (qword_180344F00 & 4) != 0 && (qword_180344F08 & 4) == qword_180344F08 )
        {
          v26[0] = *a4;
          v30 = v22[2];
          v31 = v22[1];
          v32 = *v22;
          v33 = v38;
          v34 = HIDWORD(v37);
          v35 = v37;
          TracingCookie = CBaseExpression::GetTracingCookie(this);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
            v23,
            byte_1802E924A,
            v24,
            v25,
            (__int64)&TracingCookie,
            (__int64)v27,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)v26);
        }
      }
    }
  }
}
