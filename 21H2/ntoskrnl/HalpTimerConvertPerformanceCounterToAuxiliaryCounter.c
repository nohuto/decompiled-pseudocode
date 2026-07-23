/*
 * XREFs of HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404B6A80
 * Callers:
 *     <none>
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404B6790 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpTimerConvertAuxiliaryCounter @ 0x1404B6854 (HalpTimerConvertAuxiliaryCounter.c)
 */

__int64 __fastcall HalpTimerConvertPerformanceCounterToAuxiliaryCounter(unsigned __int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // r8
  ULONGLONG v6; // r15
  int v9; // ecx
  unsigned __int64 v10; // rsi
  ULONGLONG v11; // r12
  int v12; // eax
  ULONGLONG pullResult; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h] BYREF
  LARGE_INTEGER v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-10h] BYREF
  ULONGLONG ullMultiplicand; // [rsp+B8h] [rbp+48h] BYREF

  v15 = 0LL;
  v3 = 0LL;
  v16.QuadPart = 0LL;
  ullMultiplicand = 0LL;
  v5 = 0LL;
  pullResult = 0LL;
  v6 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( !HalpAuxiliaryCounter )
  {
    v9 = -1073741637;
    goto LABEL_12;
  }
  v10 = HalpTimerQpcFreqForAuxQpcConversion;
  v11 = *(_QWORD *)(HalpAuxiliaryCounter + 192);
  if ( HalpTimerQpcFreqForAuxQpcConversion && v11 )
  {
    if ( a1 < HalpTimerEarliestQpcAllowedToConvert )
    {
      v9 = -1073741811;
      goto LABEL_12;
    }
    HalpTimerCaptureCurrentAuxiliaryQpcPair(&v16, &v15, (LARGE_INTEGER *)&ullMultiplicand);
    if ( RtlULongLongMult(ullMultiplicand, 0x3B9ACA00uLL, &pullResult) < 0 )
    {
      v9 = -1073741823;
      goto LABEL_12;
    }
    v6 = pullResult / v10;
    v12 = HalpTimerConvertAuxiliaryCounter(v16.QuadPart, v10, v15, v11, a1, &v17, &v18);
    v5 = v17;
    v9 = v12;
    v3 = v18;
  }
  else
  {
    v9 = -1073741637;
  }
  if ( v9 < 0 )
  {
LABEL_12:
    *a2 = 0LL;
    if ( a3 )
      *a3 = 0LL;
    return (unsigned int)v9;
  }
  *a2 = v5;
  if ( a3 )
    *a3 = v6 + v3;
  return (unsigned int)v9;
}
