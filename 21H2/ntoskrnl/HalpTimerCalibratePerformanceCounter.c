/*
 * XREFs of HalpTimerCalibratePerformanceCounter @ 0x1403A5DB4
 * Callers:
 *     HalCalibratePerformanceCounter @ 0x1403840B0 (HalCalibratePerformanceCounter.c)
 *     HalpTimerRestorePerformanceCounter @ 0x140386E28 (HalpTimerRestorePerformanceCounter.c)
 *     HalpTimerInitialize @ 0x1403AADC4 (HalpTimerInitialize.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1404BFEE0 (HalpTimerPerformanceCounterPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403A5EBC (HalpTimerPropagateQpcBiasUpdate.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerCalibratePerformanceCounter(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r11
  signed __int64 v8; // rax
  int v9; // r10d
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  signed __int64 v12; // rdx
  __int64 InternalData; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // r8
  signed __int32 v19[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 220) == 64 )
  {
    InternalData = HalpTimerGetInternalData(a1);
    v15 = (*(__int64 (__fastcall **)(__int64))(a1 + 112))(InternalData);
    v4 = *(_QWORD *)(a1 + 208);
    v12 = v15;
  }
  else
  {
    do
    {
      v4 = *(_QWORD *)(a1 + 208);
      do
      {
        v5 = *(_QWORD *)(a1 + 200);
        v6 = HalpTimerGetInternalData(a1);
        v7 = (*(__int64 (__fastcall **)(__int64))(a1 + 112))(v6);
        _InterlockedOr(v19, 0);
        v8 = *(_QWORD *)(a1 + 200);
      }
      while ( v5 != v8 );
    }
    while ( v4 != *(_QWORD *)(a1 + 208) );
    v9 = *(_DWORD *)(a1 + 220);
    v10 = v5 ^ v7;
    if ( _bittest64((const __int64 *)&v10, (unsigned __int8)(v9 - 1)) )
    {
      v16 = 1LL;
      if ( v9 == 64 )
        v17 = -1LL;
      else
        v17 = (1LL << v9) - 1;
      if ( v9 != 64 )
        v16 = 1LL << v9;
      v18 = v5 & v17;
      v12 = v7 | v5 ^ v18;
      if ( v7 < v18 )
        v12 += v16;
      _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 200), v12, v8);
    }
    else
    {
      if ( v9 == 64 )
        v11 = -1LL;
      else
        v11 = (1LL << v9) - 1;
      v12 = v7 | v5 & ~v11;
    }
  }
  *(_QWORD *)(a1 + 208) = a2 + *(_QWORD *)(a1 + 208) - v4 - v12;
  HalpTimerPropagateQpcBiasUpdate(a1);
  return 0LL;
}
