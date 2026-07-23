/*
 * XREFs of HalpRtcArmTimer @ 0x1404D5C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalSetTimerProblem @ 0x1404D5840 (HalSetTimerProblem.c)
 */

__int64 __fastcall HalpRtcArmTimer(__int64 *a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF
  char v8; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0;
  v8 = 0;
  v6[0] = 0;
  if ( ((a2 - 1) & 0xFFFFFFFD) != 0 )
  {
    HalSetTimerProblem((__int64)a1, 3, 0);
    return 3221225485LL;
  }
  else
  {
    v5 = 1LL;
    if ( a3 )
      v5 = a3;
    *a1 = v5;
    if ( a2 != 1 )
      v5 = 0LL;
    a1[1] = v5;
    ((void (__fastcall *)(_QWORD, __int64, char *, __int64))HalpTimerRtcApi)(0LL, 11LL, &v7, 1LL);
    v7 = v7 & 1 | 0x42;
    ((void (__fastcall *)(_QWORD, __int64, char *, __int64))qword_140CF45A8)(0LL, 11LL, &v7, 1LL);
    ((void (__fastcall *)(_QWORD, __int64, char *, __int64))HalpTimerRtcApi)(0LL, 12LL, &v8, 1LL);
    ((void (__fastcall *)(_QWORD, __int64, _BYTE *, __int64))HalpTimerRtcApi)(0LL, 13LL, v6, 1LL);
    do
    {
      ((void (__fastcall *)(_QWORD, __int64, char *, __int64))HalpTimerRtcApi)(0LL, 12LL, &v8, 1LL);
      if ( v8 >= 0 )
        break;
      ++v3;
    }
    while ( v3 < 0xA );
    return 0LL;
  }
}
