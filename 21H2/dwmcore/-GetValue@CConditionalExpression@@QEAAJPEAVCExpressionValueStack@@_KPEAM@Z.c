/*
 * XREFs of ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801BDC74
 * Callers:
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x1801BE214 (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801CB230 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x180214F30 (-Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x1801B08B8 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 *     ?GetDebugTargetInfo@CConditionalExpression@@AEBA?AUDebugTargetInfo@1@XZ @ 0x1801BDBA4 (-GetDebugTargetInfo@CConditionalExpression@@AEBA-AUDebugTargetInfo@1@XZ.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x1801D9EAC (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

__int64 __fastcall CConditionalExpression::GetValue(
        MatrixSubchannelMaskInfo **this,
        struct CExpressionValueStack *a2,
        wchar_t *a3,
        float *a4)
{
  MatrixSubchannelMaskInfo *v4; // rax
  float *v6; // rbx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  int v13; // ecx
  __int64 v14; // rax
  CExpressionValue *v15; // rax
  wchar_t *AnimationLoggingManagerNoRef; // rax
  unsigned int v18[4]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v19[80]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v20; // [rsp+D0h] [rbp+8h] BYREF

  v4 = *this;
  v6 = 0LL;
  *a4 = 0.0;
  v10 = (*((__int64 (__fastcall **)(MatrixSubchannelMaskInfo **, struct CExpressionValueStack *, wchar_t *, __int64 *))v4
         + 32))(
          this,
          a2,
          a3,
          &v20);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1F7u, 0LL);
  }
  else
  {
    if ( v10 != 1 )
    {
      v13 = *((_DWORD *)a2 + 4);
      v14 = (unsigned int)(v13 - 1);
      if ( (unsigned int)v14 < *((_DWORD *)a2 + 12) )
      {
        v6 = (float *)(*((_QWORD *)a2 + 3) + 80 * v14);
      }
      else
      {
        v15 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
        v6 = (float *)&CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v15);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
        v13 = *((_DWORD *)a2 + 4);
      }
      *((_DWORD *)a2 + 4) = v13 - 1;
      *a4 = *v6;
    }
    if ( (*((_DWORD *)this[38] + 1) & 0x40000000) != 0 )
    {
      CConditionalExpression::GetDebugTargetInfo((__int64)this, (__int64)v18);
      AnimationLoggingManagerNoRef = (wchar_t *)CBaseExpression::GetAnimationLoggingManagerNoRef((CBaseExpression *)this);
      CAnimationLoggingManager::LogDebugPropertyUpdate(
        AnimationLoggingManagerNoRef,
        (struct CResource *)this,
        2,
        a3,
        88,
        v18[0],
        v18[1],
        this[24],
        (__int64)v6);
    }
  }
  return v12;
}
