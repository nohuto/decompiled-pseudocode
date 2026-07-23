/*
 * XREFs of HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404B6950
 * Callers:
 *     <none>
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404B6790 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpTimerConvertAuxiliaryCounter @ 0x1404B6854 (HalpTimerConvertAuxiliaryCounter.c)
 */

__int64 __fastcall HalpTimerConvertAuxiliaryCounterToPerformanceCounter(unsigned __int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // r8
  ULONGLONG v7; // r15
  int v9; // ecx
  ULONGLONG v10; // rsi
  unsigned __int64 v11; // r14
  int v12; // eax
  ULONGLONG pullResult; // [rsp+40h] [rbp-30h] BYREF
  LARGE_INTEGER v15; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-18h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h] BYREF
  ULONGLONG ullMultiplicand; // [rsp+B8h] [rbp+48h] BYREF

  v16 = 0LL;
  v3 = 0LL;
  v15.QuadPart = 0LL;
  ullMultiplicand = 0LL;
  v5 = 0LL;
  pullResult = 0LL;
  v7 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  if ( !HalpAuxiliaryCounter )
  {
    v9 = -1073741637;
    goto LABEL_10;
  }
  v10 = HalpTimerQpcFreqForAuxQpcConversion;
  v11 = *(_QWORD *)(HalpAuxiliaryCounter + 192);
  if ( HalpTimerQpcFreqForAuxQpcConversion && v11 )
  {
    HalpTimerCaptureCurrentAuxiliaryQpcPair(&v15, (__int64 *)&v16, (LARGE_INTEGER *)&ullMultiplicand);
    if ( RtlULongLongMult(ullMultiplicand, 0x3B9ACA00uLL, &pullResult) < 0 )
    {
      v9 = -1073741823;
      goto LABEL_10;
    }
    v7 = pullResult / v10;
    v12 = HalpTimerConvertAuxiliaryCounter(v16, v11, v15.QuadPart, v10, a1, &v18, &v17);
    v5 = v18;
    v9 = v12;
    v3 = v17;
  }
  else
  {
    v9 = -1073741637;
  }
  if ( v9 < 0 )
  {
LABEL_10:
    *a2 = 0LL;
    if ( a3 )
      *a3 = 0LL;
    return (unsigned int)v9;
  }
  *a2 = v5;
  if ( a3 )
    *a3 = v7 + v3;
  return (unsigned int)v9;
}
