/*
 * XREFs of RaidLunQueueWaitForQuiescence @ 0x1C0015318
 * Callers:
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C00152A0 (RaidUnitQuiesceDeviceWorkRoutine.c)
 * Callees:
 *     WPP_SF_D @ 0x1C0033278 (WPP_SF_D.c)
 */

__int64 __fastcall RaidLunQueueWaitForQuiescence(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebp
  KIRQL v5; // bl
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
  if ( *(int *)(a1 + 76) > 0 )
  {
    if ( a2 )
    {
      Timeout.QuadPart = -10000000LL * a2;
      v4 = KeWaitForSingleObject((PVOID)(a1 + 48), Executive, 0, 0, &Timeout);
      if ( v4 == 258
        && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_8b02d11292aa33fe882393334494a07b_Traceguids, a2);
      }
    }
    else
    {
      v4 = KeWaitForSingleObject((PVOID)(a1 + 48), Executive, 0, 0, 0LL);
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 40), 0xFFFFFFFF) == 1 && v4 != 258 )
  {
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    KeClearEvent((PRKEVENT)(a1 + 48));
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v5);
  }
  return v4;
}
