/*
 * XREFs of KeLoadMTRR @ 0x14099A760
 * Callers:
 *     HalpPostSleepMP @ 0x140996864 (HalpPostSleepMP.c)
 *     KiLoadMTRRTarget @ 0x1409A2980 (KiLoadMTRRTarget.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x1403A0BD0 (KeFlushCurrentTbImmediately.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiLockStepExecution @ 0x14099A944 (KiLockStepExecution.c)
 *     KiWriteFixedMtrr @ 0x14099A98C (KiWriteFixedMtrr.c)
 *     KiReadFixedMtrr @ 0x14099AA98 (KiReadFixedMtrr.c)
 *     KiCompareVarMtrr @ 0x14099ABA4 (KiCompareVarMtrr.c)
 */

__int64 __fastcall KeLoadMTRR(__int64 a1)
{
  __int64 v2; // rdx
  PVOID v3; // r8
  bool v4; // di
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned int v9; // r12d
  __int64 v10; // r9
  unsigned int v11; // r10d
  _QWORD *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v17; // rcx
  _BYTE v18[96]; // [rsp+20h] [rbp-98h] BYREF
  int v19; // [rsp+B0h] [rbp-8h]

  if ( byte_140C2B390 )
  {
    if ( !(unsigned __int8)KiCompareVarMtrr() )
      KeMtrrComparisonFailed = 1;
    if ( qword_140C2B3A0 )
    {
      KiReadFixedMtrr(v18);
      v3 = qword_140C2B3A0;
      if ( !KeGetCurrentPrcb()->Number )
      {
        v2 = 0LL;
        v3 = (PVOID)((_BYTE *)qword_140C2B3A0 - v18);
        v17 = v18;
        while ( *(_QWORD *)((char *)v17 + (_QWORD)v3) == *v17 )
        {
          v2 = (unsigned int)(v2 + 1);
          ++v17;
          if ( (unsigned int)v2 >= 0xB )
            goto LABEL_6;
        }
        KeMtrrComparisonFailed = 1;
      }
    }
LABEL_6:
    _disable();
    v4 = (v19 & 0x200) != 0;
    KiLockStepExecution(a1, v2, v3);
    v5 = __readcr0();
    __writecr0(v5 & 0xFFFFFFFF9FFFFFFFuLL | 0x40000000);
    __wbinvd();
    v6 = __readcr4();
    if ( (v6 & 0x80) != 0 )
      __writecr4(v6 & 0xFFFFFFFFFFFFFF7FuLL);
    else
      KeFlushCurrentTbImmediately();
    v7 = KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL;
    v8 = (KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL) >> 32;
    __writemsr(0x2FFu, KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL);
    v9 = 0;
    if ( (_BYTE)qword_140C2B388 )
    {
      v10 = 0LL;
      v11 = 513;
      do
      {
        v12 = qword_140C2B398;
        v13 = 2 * v10;
        __writemsr(v11 - 1, *((_QWORD *)qword_140C2B398 + v13));
        v8 = HIDWORD(v12[v13 + 1]);
        __writemsr(v11, v12[v13 + 1]);
        v10 = ++v9;
        v11 += 2;
      }
      while ( v9 < (unsigned __int64)(unsigned __int8)qword_140C2B388 );
    }
    if ( qword_140C2B3A0 )
      KiWriteFixedMtrr(qword_140C2B3A0, v8);
    __writemsr(0x2FFu, v7 | 0x800);
    __wbinvd();
    KeFlushCurrentTbImmediately();
    __writecr0(v5);
    if ( (v6 & 0x80) != 0 )
      __writecr4(v6);
    KiLockStepExecution(a1, v14, v15);
    if ( v4 )
      _enable();
  }
  return 0LL;
}
