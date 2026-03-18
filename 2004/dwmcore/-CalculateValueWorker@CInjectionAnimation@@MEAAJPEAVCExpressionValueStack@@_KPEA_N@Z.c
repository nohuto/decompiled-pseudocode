/*
 * XREFs of ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801C6050
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18008C494 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1801D5768 (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 */

__int64 __fastcall CInjectionAnimation::CalculateValueWorker(
        CInjectionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v4; // rax
  CManipulation *v7; // rsi
  int v8; // ecx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi

  v4 = *((_QWORD *)this + 22);
  if ( v4 )
    v7 = *(CManipulation **)(v4 + 16);
  else
    v7 = 0LL;
  *a4 = 1;
  v8 = *((_DWORD *)this + 80);
  if ( v8 < *((_DWORD *)this + 81) )
  {
    v9 = v8;
    do
    {
      v10 = *((_QWORD *)this + 39);
      v11 = 132LL * v9;
      if ( *(_DWORD *)(v11 + v10) != *((_DWORD *)this + 82) )
        break;
      v12 = CManipulation::InjectManipulation(v7, (const struct InjectManipulationArgs *)(v10 + 4 + v11));
      v14 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x9Bu, 0LL);
        return v14;
      }
      v8 = *((_DWORD *)this + 80) + 1;
      *((_DWORD *)this + 80) = v8;
      v9 = v8;
    }
    while ( v8 < *((_DWORD *)this + 81) );
  }
  ++*((_DWORD *)this + 82);
  if ( v8 == *((_DWORD *)this + 81) )
  {
    *((_BYTE *)this + 208) &= ~1u;
    CBaseExpression::NotifyAnimationCompleted(this);
    *a4 = 0;
  }
  return 1;
}
