/*
 * XREFs of HalpInitializeTimers @ 0x1403A9638
 * Callers:
 *     HalpTimerInitSystem @ 0x1403A85B0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022AA30 (HalpTimerGetInternalData.c)
 *     HalpFindTimer @ 0x14039D458 (HalpFindTimer.c)
 *     HalpTimerCreateReferencePage @ 0x1403A97D4 (HalpTimerCreateReferencePage.c)
 *     HalpTimerSelectRoles @ 0x1403A9D9C (HalpTimerSelectRoles.c)
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1403AA588 (HalpTimerRegisterBuiltinPluginsCommon.c)
 *     HalpTimerBuildKnownResourceIdString @ 0x1403ABF14 (HalpTimerBuildKnownResourceIdString.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x1404BFA60 (HalpTimerCalculateMaximumAllowableDrift.c)
 */

__int64 __fastcall HalpInitializeTimers(__int64 a1)
{
  __int64 v2; // rbx
  __int64 InternalData; // rax
  int v4; // r9d
  ULONG_PTR *Timer; // rax
  ULONG_PTR v6; // r8
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int ReferencePage; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _BYTE v20[136]; // [rsp+30h] [rbp-98h] BYREF
  int v21; // [rsp+B8h] [rbp-10h]
  int v22; // [rsp+BCh] [rbp-Ch]

  memset(v20, 0, sizeof(v20));
  HalpTimerLoaderBlock = a1;
  v2 = HalpStallCounter;
  HalpOriginalStallTimer = HalpStallCounter;
  InternalData = HalpTimerGetInternalData(HalpStallCounter);
  v4 = (*(__int64 (__fastcall **)(__int64))(v2 + 104))(InternalData);
  if ( v4 < 0 )
  {
    *(_DWORD *)(v2 + 256) = v4;
    HalpTimerLastProblem = 15;
    *(_DWORD *)(v2 + 252) = 15;
    *(_QWORD *)(v2 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
    *(_DWORD *)(v2 + 272) = 1552;
  }
  else
  {
    v4 = HalpTimerRegisterBuiltinPluginsCommon(1LL);
    if ( v4 < 0 )
    {
      HalpTimerLastProblem = 14;
    }
    else
    {
      Timer = HalpFindTimer(5, 0, 0, 0, 1);
      if ( Timer )
      {
        v6 = Timer[36];
        v7 = *((_DWORD *)Timer + 57);
        v8 = *((_DWORD *)Timer + 71);
        v21 = v7;
        v9 = *(unsigned __int16 *)(v6 + 24);
        v10 = *(_QWORD *)(v6 + 32);
        v22 = v8;
        HalpTimerBuildKnownResourceIdString(v20, v9 >> 1, v10);
      }
      v11 = HalpTimerSelectRoles();
      v4 = v11;
      if ( v11 < 0
        || (ReferencePage = HalpTimerCreateReferencePage(v13, v12, v14, (unsigned int)v11),
            v4 = ReferencePage,
            ReferencePage < 0) )
      {
LABEL_13:
        KeBugCheckEx(0x5Cu, 0x110uLL, 0x5250631uLL, HalpTimerLastProblem, v4);
      }
      HalpOriginalPerformanceCounter = HalpPerformanceCounter;
      qword_140C4C0D8 = (__int64)HalpTimerDpcRoutine;
      qword_140C4C030 = (__int64)&qword_140C4C028;
      qword_140C4C028 = (__int64)&qword_140C4C028;
      off_140C006A8[0] = HalpTimerReportIdleStateUsage;
      HalpTimerPeriodicTimer = 8LL;
      off_140C006A0[0] = (__int64 (__fastcall *)())HalpTimerQueryWakeTime;
      HalpTimerDpc = 275;
      qword_140C4C0E0 = 0LL;
      qword_140C4C0F8 = 0LL;
      qword_140C4C0D0 = 0LL;
      qword_140C4C038 = 0LL;
      dword_140C4C05C = 0;
      word_140C4C058 = 0;
      if ( HalpAlwaysOnCounter )
        HalpTimerMaximumAllowableDrift = HalpTimerCalculateMaximumAllowableDrift(
                                           v17,
                                           v16,
                                           v18,
                                           (unsigned int)ReferencePage);
    }
  }
  if ( v4 < 0 )
    goto LABEL_13;
  return (unsigned int)v4;
}
