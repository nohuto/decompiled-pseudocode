/*
 * XREFs of ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0020EC4
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012BDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C01431B0 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C00042F0 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C00059D0 (NdisReleaseRWLock.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C0028C98 (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00A2DC4 (ndisKillReceiveWorkerThreadPool.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00A3F10 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C00A4080 (ndisTracePeriodicRcvOnOff.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisConfigurePeriodicReceives(struct _NDIS_SET_RECEIVE_RATE *a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  ndisWaitForKernelObject(&ndisPeriodicReceivesMutex);
  if ( a1 )
  {
    if ( *((_DWORD *)a1 + 1) == -1 )
    {
      if ( byte_1C00E4101 == 1 )
      {
        NdisAcquireRWLockWrite(Lock, &LockState, 0);
        qword_1C00E4128 = 0LL;
        dword_1C00E4104 = -1;
        if ( dword_1C00E410C )
          byte_1C00E4101 = 0;
        ndisSwitchMiniportReceiveFunction(7LL);
        NdisReleaseRWLock(Lock, &LockState);
        if ( dword_1C00E410C )
          ndisKillReceiveWorkerThreadPool();
      }
    }
    else if ( byte_1C00E4101 || !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      if ( BYTE2(dword_1C00E6180) )
      {
        LOBYTE(v2) = 1;
        ndisTracePeriodicRcvOnOff(0LL, v2, *((unsigned int *)a1 + 1), qword_1C00E4128);
      }
      NdisAcquireRWLockWrite(Lock, &LockState, 0);
      v3 = dword_1C00E4104;
      qword_1C00E4128 = *((_QWORD *)a1 + 1);
      dword_1C00E4104 = *((_DWORD *)a1 + 1);
      byte_1C00E4101 = 1;
      if ( v3 == -1 )
        ndisSwitchMiniportReceiveFunction(6LL);
      goto LABEL_5;
    }
  }
  else
  {
    qword_1C00E4128 = 0LL;
    dword_1C00E4104 = -1;
    if ( !dword_1C00E410C && !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      NdisAcquireRWLockWrite(Lock, &LockState, 0);
      byte_1C00E4101 = 1;
LABEL_5:
      NdisReleaseRWLock(Lock, &LockState);
    }
  }
  KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
