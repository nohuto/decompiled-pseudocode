/*
 * XREFs of HalpSetResumeTime @ 0x140386890
 * Callers:
 *     HalpEfiInitializeOnResume @ 0x1404C4324 (HalpEfiInitializeOnResume.c)
 *     HalpPostSleepMP @ 0x140996864 (HalpPostSleepMP.c)
 * Callees:
 *     HalpSetVirtualRtc @ 0x14023435C (HalpSetVirtualRtc.c)
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     HalpQueryVirtualRtc @ 0x14038417C (HalpQueryVirtualRtc.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __fastcall HalpSetResumeTime(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  NTSTATUS v3; // ecx
  unsigned __int64 v4; // r10
  ULONGLONG v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  bool v9; // [rsp+48h] [rbp+10h] BYREF
  ULONGLONG pullResult; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v8[0] = 0LL;
  v11 = 0LL;
  pullResult = 0LL;
  if ( (_DWORD)a2 )
  {
    if ( HalpResumeFromHibernate )
    {
      if ( (_DWORD)a2 == 1 )
      {
        if ( (HalpResumeFlags & 1) == 0 && HalpResumeTime )
        {
          if ( (HalpResumeFlags & 2) == 0 && !ExpRealTimeIsUniversal )
            HalpResumeTime += *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals((__int64)a1, a2) + 133) + 440LL);
          v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140C007F0)(&v11);
          v3 = RtlULongLongMult(v2 - HalpTimeStampAtResume, 0x989680uLL, &pullResult);
          v5 = pullResult / v11;
          if ( v3 < 0 )
            v5 = 10000000 * (v4 / v11) + 10000000 * (v4 % v11) / v11;
          HalpResumeTime += v5;
        }
      }
      else if ( (_DWORD)a2 == 2 )
      {
        if ( (HalpResumeFlags & 1) != 0 || !HalpResumeTime || HalpQueryVirtualRtc(v8, &v9) && HalpResumeTime < v8[0] )
        {
          HalpVrtcTimeStale = 1;
        }
        else
        {
          HalpSetVirtualRtc((LARGE_INTEGER *)&HalpResumeTime, v6, v7);
          HalpResumeTime = 0LL;
        }
      }
    }
  }
  else if ( a1 )
  {
    HalpResumeTime = a1[15];
    HalpTimeStampAtResume = a1[16];
    HalpResumeFlags = a1[17];
  }
}
