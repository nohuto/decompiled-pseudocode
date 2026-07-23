/*
 * XREFs of PoFxReportDevicePoweredOn @ 0x14039FDD0
 * Callers:
 *     <none>
 * Callees:
 *     PoFxIdleComponent @ 0x140282670 (PoFxIdleComponent.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140283C14 (PopFxCompleteDevicePowerRequired.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x140346A40 (ExReleaseSpinLockExclusive.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14039FF3C (PopDiagTraceFxDevicePowerState.c)
 *     PopPepDeviceDState @ 0x1403A0370 (PopPepDeviceDState.c)
 *     PopFxGetDeviceDStateReason @ 0x1403A0664 (PopFxGetDeviceDStateReason.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x14056A9F4 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 *     PopSystemIrpCompletion @ 0x140998040 (PopSystemIrpCompletion.c)
 */

char __fastcall PoFxReportDevicePoweredOn(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rsi
  unsigned int DeviceDStateReason; // eax
  __int64 v4; // r8
  volatile LONG *v5; // r14
  KIRQL v6; // al
  __int64 v7; // rbp
  int v8; // edi
  KIRQL v9; // r15
  int v10; // edx
  __int64 v11; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  unsigned int v14; // eax
  __int64 v15; // rbp
  unsigned int i; // esi
  signed __int32 v17; // eax
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  signed __int32 v20; // ett

  v1 = *(_QWORD *)(BugCheckParameter2 + 48);
  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  if ( (_InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFFD) & 2) != 0 )
  {
    DeviceDStateReason = PopFxGetDeviceDStateReason();
    LOBYTE(v4) = 1;
    PopPepDeviceDState(*(_QWORD *)(BugCheckParameter2 + 56), 1LL, v4, DeviceDStateReason);
    PopDiagTraceFxDevicePowerState(v1, 1LL);
  }
  v5 = (volatile LONG *)(v1 + 88);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
  v7 = 0LL;
  v8 = _InterlockedExchange((volatile __int32 *)(v1 + 124), 0);
  v9 = v6;
  if ( v8 > 0 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL);
    if ( v8 > v10 )
      PopFxBugCheck(0x602uLL, v1, v8, 0LL);
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFF7FE);
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL) = v10 - v8;
    v11 = *(_QWORD *)(BugCheckParameter2 + 48);
    _m_prefetchw((const void *)(v11 + 296));
    v12 = *(_DWORD *)(v11 + 296);
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 296), v12, v12);
    }
    while ( v13 != v12 );
    if ( (v12 & 4) != 0 )
    {
      v14 = *(_DWORD *)(BugCheckParameter2 + 828);
      v15 = (unsigned int)v8;
      do
      {
        for ( i = 0; i < v14; ++i )
        {
          PoFxIdleComponent(BugCheckParameter2, i);
          v14 = *(_DWORD *)(BugCheckParameter2 + 828);
        }
        --v15;
      }
      while ( v15 );
    }
    v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 280LL);
  }
  ExReleaseSpinLockExclusive(v5, v9);
  if ( PopPoFxSystemIrpWaitForReportDevicePoweredReg
    || (v17 = *(_DWORD *)(BugCheckParameter2 + 824), (v17 & 0x80u) != 0) )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 32));
    v17 = *(_DWORD *)(BugCheckParameter2 + 32);
    do
    {
      v20 = v17;
      v17 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v17, v17);
    }
    while ( v20 != v17 );
    if ( (v17 & 0x400) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFBFF);
      LOBYTE(v17) = PopSystemIrpCompletion(0LL, v7, *(_QWORD *)(v7 + 72LL * *(char *)(v7 + 66) + 200));
    }
  }
  if ( !v8 )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 32));
    v18 = *(_DWORD *)(BugCheckParameter2 + 32);
    do
    {
      v19 = v18;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v18, v18);
    }
    while ( v19 != v18 );
    if ( (v18 & 0x2000) != 0 )
      LOBYTE(v17) = PopFxDerefAndCompleteDirectedPowerTransition(BugCheckParameter2);
    else
      LOBYTE(v17) = PopFxCompleteDevicePowerRequired(BugCheckParameter2, 0LL);
  }
  return v17;
}
