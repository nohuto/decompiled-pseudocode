/*
 * XREFs of ?CompleteTransaction@DXGVIRTUALMACHINE@@QEAAJ_KJPEAXI@Z @ 0x1C02BD540
 * Callers:
 *     ?VmBusCompleteTransaction@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023C510 (-VmBusCompleteTransaction@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::CompleteTransaction(
        DXGVIRTUALMACHINE *this,
        __int64 a2,
        __int64 a3,
        void *a4,
        unsigned int a5)
{
  unsigned int v6; // edi
  DXGPUSHLOCK *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char *v13; // rax
  char *i; // rbx
  __int64 v15; // rax
  unsigned int v17; // eax
  __int64 v18; // rax

  v6 = a3;
  v9 = (DXGVIRTUALMACHINE *)((char *)this + 304);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  DXGPUSHLOCK::AcquireExclusive(v9);
  v13 = (char *)this + 336;
  for ( i = (char *)*((_QWORD *)this + 42); ; i = *(char **)i )
  {
    if ( i == v13 )
    {
      v15 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v15 + 24) = 88LL;
      WdLogEvent5_WdWarning(v15);
      v6 = -1073741823;
      goto LABEL_6;
    }
    if ( *((_QWORD *)i + 2) == a2 )
      break;
  }
  v17 = *((_DWORD *)i + 16);
  if ( v17 > a5 )
  {
    v18 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v18 + 24) = 80LL;
    WdLogEvent5_WdError(v18);
    v6 = -2147483643;
  }
  else if ( v17 )
  {
    memmove(*((void **)i + 7), a4, v17);
  }
  *((_DWORD *)i + 12) = v6;
  KeSetEvent((PRKEVENT)i + 1, 0, 0);
LABEL_6:
  *((_QWORD *)v9 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
