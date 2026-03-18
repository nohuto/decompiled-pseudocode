/*
 * XREFs of HalpSetTimer @ 0x1402FE504
 * Callers:
 *     HalpTimerClockArm @ 0x1402FE470 (HalpTimerClockArm.c)
 *     HalpTimerWatchdogResetCountdown @ 0x140391130 (HalpTimerWatchdogResetCountdown.c)
 *     HalpTimerInitializeClock @ 0x1403ABEA8 (HalpTimerInitializeClock.c)
 *     HalpSetTimerAnyMode @ 0x1404BAACC (HalpSetTimerAnyMode.c)
 *     HalpTimerRestartProfileInterrupt @ 0x1404BC9C8 (HalpTimerRestartProfileInterrupt.c)
 *     HalpTimerSetTimerBackedProfileInterval @ 0x1404BCAC4 (HalpTimerSetTimerBackedProfileInterval.c)
 *     HalpTimerStartProfileInterrupt @ 0x1404BCB58 (HalpTimerStartProfileInterrupt.c)
 *     HalpTimerTestHypervisorTimer @ 0x1404BCC3C (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerWatchdogStart @ 0x1404BD780 (HalpTimerWatchdogStart.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1404BD870 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpWatchdogDelayExpiration @ 0x1404BDA70 (HalpWatchdogDelayExpiration.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14021F560 (HalpTimerGetInternalData.c)
 *     RtlULongLongMult @ 0x1402FE7AC (RtlULongLongMult.c)
 *     HalpTimerScaleCounter @ 0x1403939C0 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpSetTimer(__int64 a1, unsigned int a2, ULONGLONG a3, char a4, unsigned __int64 *a5)
{
  unsigned __int64 v5; // rsi
  unsigned int v8; // edi
  NTSTATUS v9; // ecx
  ULONGLONG v10; // rdx
  unsigned int v11; // ecx
  ULONGLONG v12; // rbp
  __int64 v13; // r10
  ULONGLONG v14; // rax
  __int64 InternalData; // rax
  ULONGLONG pullResult; // [rsp+20h] [rbp-28h] BYREF
  ULONGLONG v18[4]; // [rsp+28h] [rbp-20h] BYREF

  v18[0] = 0LL;
  v5 = 0LL;
  pullResult = 0LL;
  v8 = a2;
  switch ( a2 )
  {
    case 1u:
      if ( (*(_DWORD *)(a1 + 224) & 0x10) == 0 )
      {
        *(_DWORD *)(a1 + 256) = 0;
        HalpTimerLastProblem = 17;
        v9 = -1073741637;
        *(_DWORD *)(a1 + 252) = 17;
        *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
        *(_DWORD *)(a1 + 272) = 692;
        goto LABEL_18;
      }
      break;
    case 2u:
      if ( (*(_DWORD *)(a1 + 224) & 0x50) == 0 )
      {
        *(_DWORD *)(a1 + 256) = 0;
        HalpTimerLastProblem = 17;
        v9 = -1073741637;
        *(_DWORD *)(a1 + 252) = 17;
        *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
        *(_DWORD *)(a1 + 272) = 683;
        goto LABEL_18;
      }
      break;
    case 3u:
      if ( (*(_DWORD *)(a1 + 224) & 0x20) == 0 )
      {
        *(_DWORD *)(a1 + 256) = 0;
        HalpTimerLastProblem = 17;
        v9 = -1073741637;
        *(_DWORD *)(a1 + 252) = 17;
        *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
        *(_DWORD *)(a1 + 272) = 671;
        goto LABEL_18;
      }
      break;
    default:
      goto LABEL_27;
  }
  v9 = RtlULongLongMult(*(_QWORD *)(a1 + 192), a3, &pullResult);
  if ( v9 < 0 )
    goto LABEL_18;
  if ( v8 == 3 )
  {
    v10 = pullResult + 9999999;
    if ( pullResult + 9999999 < pullResult )
    {
      v9 = -1073741675;
      v10 = -1LL;
    }
    else
    {
      v9 = 0;
    }
    if ( v9 < 0 )
      goto LABEL_18;
  }
  else
  {
    v10 = pullResult;
  }
  v11 = *(_DWORD *)(a1 + 220);
  v12 = v10 / 0x989680;
  if ( v11 < 0x40 && v12 >= 1LL << v11 )
  {
LABEL_27:
    v9 = -1073741811;
    goto LABEL_18;
  }
  if ( RtlULongLongMult(v12, 0x2540BE400uLL, v18) < 0 )
    v14 = HalpTimerScaleCounter(v12, *(_QWORD *)(a1 + 192), v13);
  else
    v14 = v18[0] / *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 16) = v12;
  *(_DWORD *)(a1 + 52) = 1;
  v5 = v14 / 0x3E8;
  if ( v8 == 2 && (*(_BYTE *)(a1 + 224) & 0x40) == 0 )
    v8 = 1;
  if ( a4 )
  {
    InternalData = HalpTimerGetInternalData(a1);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, ULONGLONG))(a1 + 128))(InternalData, v8, v12);
    if ( v9 < 0 )
    {
      *(_DWORD *)(a1 + 256) = v9;
      HalpTimerLastProblem = 18;
      *(_DWORD *)(a1 + 252) = 18;
      *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
      *(_DWORD *)(a1 + 272) = 782;
    }
  }
  else
  {
    v9 = 0;
  }
LABEL_18:
  *a5 = v5;
  return (unsigned int)v9;
}
