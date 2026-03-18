/*
 * XREFs of HalpSetTimer @ 0x140354420
 * Callers:
 *     HalpTimerClockArm @ 0x140354380 (HalpTimerClockArm.c)
 *     HalpTimerWatchdogResetCountdown @ 0x14039FE90 (HalpTimerWatchdogResetCountdown.c)
 *     HalpTimerInitializeClock @ 0x1403BAF00 (HalpTimerInitializeClock.c)
 *     HalpSetTimerAnyMode @ 0x14050C47C (HalpSetTimerAnyMode.c)
 *     HalpTimerRestartProfileInterrupt @ 0x14050DE34 (HalpTimerRestartProfileInterrupt.c)
 *     HalpTimerSetTimerBackedProfileInterval @ 0x14050DF10 (HalpTimerSetTimerBackedProfileInterval.c)
 *     HalpTimerStartProfileInterrupt @ 0x14050DFA4 (HalpTimerStartProfileInterrupt.c)
 *     HalpTimerTestHypervisorTimer @ 0x14050E088 (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerWatchdogStart @ 0x14050EA90 (HalpTimerWatchdogStart.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14050EB80 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpWatchdogDelayExpiration @ 0x14050ED80 (HalpWatchdogDelayExpiration.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x1403A572C (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpSetTimer(__int64 a1, unsigned int a2, unsigned __int64 a3, char a4, unsigned __int64 *a5)
{
  unsigned int v6; // esi
  unsigned __int64 v8; // rbx
  int v9; // r14d
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int128 v12; // rax
  unsigned int v13; // ecx
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rax
  __int64 InternalData; // rax
  __int64 v17; // r11
  int v18; // eax
  unsigned int v19; // ecx

  v6 = a2;
  v8 = 0LL;
  switch ( a2 )
  {
    case 1u:
      v9 = *(_DWORD *)(a1 + 224);
      if ( (v9 & 0x10) == 0 )
      {
        HalpTimerLastProblem = 17;
        *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
        v19 = -1073741637;
        *(_QWORD *)(a1 + 252) = 17LL;
        *(_DWORD *)(a1 + 272) = 692;
        goto LABEL_17;
      }
      break;
    case 2u:
      v9 = *(_DWORD *)(a1 + 224);
      if ( (v9 & 0x50) == 0 )
      {
        HalpTimerLastProblem = 17;
        *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
        v19 = -1073741637;
        *(_QWORD *)(a1 + 252) = 17LL;
        *(_DWORD *)(a1 + 272) = 683;
        goto LABEL_17;
      }
      break;
    case 3u:
      v9 = *(_DWORD *)(a1 + 224);
      if ( (v9 & 0x20) == 0 )
      {
        *(_QWORD *)(a1 + 252) = 17LL;
        *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
        *(_DWORD *)(a1 + 272) = 671;
        v19 = -1073741637;
        HalpTimerLastProblem = 17;
        goto LABEL_17;
      }
      break;
    default:
LABEL_24:
      v19 = -1073741811;
      goto LABEL_17;
  }
  v10 = *(_QWORD *)(a1 + 192);
  v11 = v10 * a3;
  if ( !is_mul_ok(v10, a3) )
    goto LABEL_28;
  if ( a2 == 3 )
  {
    if ( v10 * a3 + 9999999 >= v11 )
    {
      v11 = v10 * a3 + 9999999;
      goto LABEL_9;
    }
LABEL_28:
    v19 = -1073741675;
    goto LABEL_17;
  }
LABEL_9:
  v12 = v11 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  v13 = *(_DWORD *)(a1 + 220);
  v14 = *((_QWORD *)&v12 + 1) >> 23;
  if ( v13 < 0x40 && v14 >= 1LL << v13 )
    goto LABEL_24;
  if ( is_mul_ok(v14, 0x2540BE400uLL) )
    v15 = v14 * (unsigned __int128)0x2540BE400uLL / v10;
  else
    v15 = HalpTimerScaleCounter(v14, v10, 10000000000LL);
  *(_QWORD *)(a1 + 16) = v14;
  *(_DWORD *)(a1 + 52) = 1;
  v8 = v15 / 0x3E8;
  if ( v6 == 2 && (v9 & 0x40) == 0 )
    v6 = 1;
  if ( a4 )
  {
    InternalData = HalpTimerGetInternalData(a1);
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 128))(InternalData, v6, v17);
    v19 = v18;
    if ( v18 < 0 )
    {
      *(_DWORD *)(a1 + 256) = v18;
      *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
      HalpTimerLastProblem = 18;
      *(_DWORD *)(a1 + 252) = 18;
      *(_DWORD *)(a1 + 272) = 782;
    }
  }
  else
  {
    v19 = 0;
  }
LABEL_17:
  *a5 = v8;
  return v19;
}
