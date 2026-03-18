/*
 * XREFs of ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x180227D6C
 * Callers:
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180225EF0 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18022656C (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x180226998 (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x180227558 (-SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ?SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z @ 0x180227AD0 (-SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetupAnimationIfNecessary(CNaturalAnimation *this)
{
  unsigned int v1; // edi
  int v3; // eax
  __int64 v4; // rcx
  int v5; // ecx

  v1 = 0;
  if ( (*((_BYTE *)this + 588) & 1) == 0 )
  {
    v3 = CNaturalAnimation::SampleInitialValueAndFinalValueIfNecessary(this);
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, v3, 0x292u);
      *((_BYTE *)this + 588) &= ~1u;
    }
    else
    {
      v5 = *((_DWORD *)this + 86);
      *(_QWORD *)((char *)this + 348) = *((_QWORD *)this + 42);
      *((_DWORD *)this + 89) = v5;
      CNaturalAnimation::InitializeForces(this);
      CNaturalAnimation::SetStartTimeIfNecessary(this, *(_QWORD *)(*((_QWORD *)this + 2) + 608LL));
      *((_BYTE *)this + 588) = *((_BYTE *)this + 588) & 0xF6 | 1;
    }
  }
  return v1;
}
