/*
 * XREFs of ?CompleteTransaction@DXGVIRTUALMACHINE@@QEAAJ_KJPEAXI@Z @ 0x1C0384884
 * Callers:
 *     ?VmBusCompleteTransaction@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03688F0 (-VmBusCompleteTransaction@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::CompleteTransaction(
        DXGVIRTUALMACHINE *this,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5)
{
  DXGPUSHLOCK *v9; // rsi
  char *v10; // rax
  char *i; // rbx
  unsigned int v13; // eax

  v9 = (DXGVIRTUALMACHINE *)((char *)this + 344);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = a2;
  DXGPUSHLOCK::AcquireExclusive(v9);
  v10 = (char *)this + 376;
  for ( i = (char *)*((_QWORD *)this + 47); ; i = *(char **)i )
  {
    if ( i == v10 )
    {
      WdLogSingleEntry1(3LL, 88LL);
      a3 = -1073741823;
      goto LABEL_6;
    }
    if ( *((_QWORD *)i + 2) == a2 )
      break;
  }
  v13 = *((_DWORD *)i + 16);
  if ( v13 > a5 )
  {
    WdLogSingleEntry1(2LL, 80LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Transaction result from guest exceeds the buffer size provided by the transaction object. Cannot copy result.",
      80LL,
      0LL,
      0LL,
      0LL,
      0LL);
    a3 = -2147483643;
  }
  else if ( v13 )
  {
    memmove(*((void **)i + 7), a4, v13);
  }
  *((_DWORD *)i + 12) = a3;
  KeSetEvent((PRKEVENT)i + 1, 0, 0);
LABEL_6:
  *((_QWORD *)v9 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
  return a3;
}
