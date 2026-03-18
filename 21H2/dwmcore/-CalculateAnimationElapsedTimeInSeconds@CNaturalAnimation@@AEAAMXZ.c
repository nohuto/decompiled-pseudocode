/*
 * XREFs of ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x180225B1C
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180225B8C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?ToSeconds@TimeDelta@@QEBAMXZ @ 0x180227E7C (-ToSeconds@TimeDelta@@QEBAMXZ.c)
 */

float __fastcall CNaturalAnimation::CalculateAnimationElapsedTimeInSeconds(CNaturalAnimation *this)
{
  LONGLONG v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL)
     - 1000 * Time::s_luFreq.QuadPart * *((int *)this + 104) / 1000000
     - *((_QWORD *)this + 50)
     - Time::s_luBegin.QuadPart;
  return TimeDelta::ToSeconds((TimeDelta *)&v2);
}
