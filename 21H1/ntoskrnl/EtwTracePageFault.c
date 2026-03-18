/*
 * XREFs of EtwTracePageFault @ 0x1405A1F6C
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14022BC80 (PsGetThreadServerSilo.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     EtwTraceSiloKernelEvent @ 0x1402A8CA4 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     EtwpCoverageSamplerPageFault @ 0x1405AA234 (EtwpCoverageSamplerPageFault.c)
 */

void __fastcall EtwTracePageFault(int a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int16 v5; // di
  struct _KTHREAD *CurrentThread; // rsi
  __int64 ThreadServerSilo; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h]
  __int64 *v16; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+48h] [rbp-30h]
  int v18; // [rsp+4Ch] [rbp-2Ch]

  switch ( a1 )
  {
    case 273:
      v5 = 523;
      break;
    case 272:
      v5 = 522;
      break;
    case 274:
      v5 = 524;
      break;
    case 276:
      v5 = 526;
      break;
    case 275:
      v5 = 525;
      break;
    case -1073741819:
      v5 = 527;
      break;
    default:
      return;
  }
  v15 = 0LL;
  v14 = a2;
  if ( a4 )
    v15 = *(_QWORD *)(a4 + 360);
  v18 = 0;
  v16 = &v14;
  v17 = 16;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x10) != 0 )
  {
    ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
    EtwTraceSiloKernelEvent(ThreadServerSilo, (__int64)&v16, 1u, 0x1000u, v5, 0x2000102u);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    LOBYTE(CurrentThread[1].Queue) |= 0x10u;
    v8 = a3 != 0 ? 33558786 : 50338050;
    v9 = PsGetThreadServerSilo((__int64)CurrentThread);
    EtwTraceSiloKernelEvent(v9, (__int64)&v16, 1u, 0x1000u, v5, v8);
    LOBYTE(CurrentThread[1].Queue) &= ~0x10u;
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v10, v11, v12);
    if ( EtwpHostSiloState != -4548 && (*(_DWORD *)(EtwpHostSiloState + 4548) & 0x1000) != 0 )
    {
      LOBYTE(v13) = a3;
      EtwpCoverageSamplerPageFault(v15, v14, v13);
    }
  }
}
