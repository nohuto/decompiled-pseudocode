/*
 * XREFs of ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801DD130
 * Callers:
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801DB530 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1801DBB5C (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1801DBF4C (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801DC970 (-SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ?SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z @ 0x1801DCEA8 (-SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetupAnimationIfNecessary(CNaturalAnimation *this)
{
  int v1; // edi
  int v3; // eax
  __int64 v4; // rcx
  int v5; // ecx

  v1 = 0;
  if ( (*((_BYTE *)this + 564) & 1) == 0 )
  {
    v3 = CNaturalAnimation::SampleInitialValueAndFinalValueIfNecessary(this);
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x28Cu, 0LL);
    }
    else
    {
      v5 = *((_DWORD *)this + 80);
      *(_QWORD *)((char *)this + 324) = *((_QWORD *)this + 39);
      *((_DWORD *)this + 83) = v5;
      CNaturalAnimation::InitializeForces(this);
      CNaturalAnimation::SetStartTimeIfNecessary(this, *(_QWORD *)(*((_QWORD *)this + 2) + 456LL));
      *((_BYTE *)this + 564) = *((_BYTE *)this + 564) & 0xF6 | 1;
    }
    if ( v1 < 0 )
      *((_BYTE *)this + 564) &= ~1u;
  }
  return (unsigned int)v1;
}
