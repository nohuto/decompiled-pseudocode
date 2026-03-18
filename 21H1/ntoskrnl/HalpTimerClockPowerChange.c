/*
 * XREFs of HalpTimerClockPowerChange @ 0x1404B9F40
 * Callers:
 *     HalpTimerPowerChange @ 0x1404BAD04 (HalpTimerPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402785B0 (HalpTimerGetInternalData.c)
 *     HalpTimerClockStop @ 0x14031B420 (HalpTimerClockStop.c)
 *     HalpTimerClockInitialize @ 0x14031CA20 (HalpTimerClockInitialize.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalpSetTimerAnyMode @ 0x1404BA3EC (HalpSetTimerAnyMode.c)
 *     KeGetNextClockTickDuration @ 0x14050E220 (KeGetNextClockTickDuration.c)
 */

__int64 __fastcall HalpTimerClockPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  char v3; // di
  ULONG_PTR v4; // rbx
  __int64 result; // rax
  ULONG_PTR NextClockTickDuration; // rdi
  signed __int64 v7; // rax
  __int64 InternalData; // rax
  int v9; // eax
  __int64 v10; // r8
  char v11; // [rsp+40h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *(_BYTE *)(BugCheckParameter3 + 224) & 1;
  if ( a2 )
  {
    result = HalpTimerClockInitialize();
    if ( !v3 )
      ++KiClockStats;
  }
  else
  {
    v4 = HalpAlwaysOnTimer;
    if ( !HalpAlwaysOnTimer )
      KeBugCheckEx(0x5Cu, 0x113uLL, 0x21uLL, BugCheckParameter3, 0LL);
    if ( v3 )
    {
      result = (unsigned int)KiClockTimerOwner;
      if ( KeGetCurrentPrcb()->Number != (_DWORD)KiClockTimerOwner )
        return result;
    }
    else
    {
      ++KiClockStats;
    }
    HalpTimerClockStop();
    NextClockTickDuration = KeGetNextClockTickDuration();
    v7 = 0x989680uLL / *(_QWORD *)(v4 + 192);
    if ( v7 < 5000 )
      v7 = 5000LL;
    if ( (__int64)NextClockTickDuration < v7 )
    {
      ++HalpTimerClockSwapViolationCount;
      NextClockTickDuration = v7;
    }
    if ( NextClockTickDuration > HalpTimerMaxIncrement )
      KeBugCheckEx(0x5Cu, 0x113uLL, 0x25uLL, NextClockTickDuration, 0LL);
    InternalData = HalpTimerGetInternalData(v4);
    v9 = (*(__int64 (__fastcall **)(__int64))(v4 + 104))(InternalData);
    if ( v9 < 0 )
      KeBugCheckEx(0x5Cu, 0x113uLL, 0xFuLL, v4, v9);
    result = HalpSetTimerAnyMode(v4, (unsigned int)NextClockTickDuration, v10, &v11);
    if ( (int)result < 0 )
      KeBugCheckEx(0x5Cu, 0x113uLL, 0x23uLL, v4, (int)result);
    CurrentPrcb->PendingTickFlags |= 2u;
  }
  return result;
}
