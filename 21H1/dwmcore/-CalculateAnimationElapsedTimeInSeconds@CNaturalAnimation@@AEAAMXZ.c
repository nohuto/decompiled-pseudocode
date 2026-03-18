/*
 * XREFs of ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x1801DB15C
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801DB1CC (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?ToSeconds@TimeDelta@@QEBAMXZ @ 0x1801DD1D8 (-ToSeconds@TimeDelta@@QEBAMXZ.c)
 */

float __fastcall CNaturalAnimation::CalculateAnimationElapsedTimeInSeconds(CNaturalAnimation *this)
{
  LONGLONG v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 456LL)
     - 1000 * Time::s_luFreq.QuadPart * *((int *)this + 98) / 1000000
     - *((_QWORD *)this + 47)
     - Time::s_luBegin.QuadPart;
  return TimeDelta::ToSeconds((TimeDelta *)&v2);
}
