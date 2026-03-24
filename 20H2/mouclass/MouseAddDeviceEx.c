/*
 * XREFs of MouseAddDeviceEx @ 0x1C000C720
 * Callers:
 *     MouseClassFindMorePorts @ 0x1C000C3F0 (MouseClassFindMorePorts.c)
 *     MouseAddDevice @ 0x1C000C5D0 (MouseAddDevice.c)
 *     DriverEntry @ 0x1C000F500 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002310 (WPP_RECORDER_SF_S.c)
 *     memmove @ 0x1C0002A80 (memmove.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     MouseClassLogError @ 0x1C00045F8 (MouseClassLogError.c)
 *     MouSendConnectRequest @ 0x1C000CA70 (MouSendConnectRequest.c)
 */

__int64 __fastcall MouseAddDeviceEx(__int64 a1, const WCHAR *a2, __int64 a3)
{
  NTSTATUS v6; // esi
  __int64 v7; // rdi
  __int64 v9; // r15
  PVOID PoolWithTag; // r12
  __int64 v11; // rcx
  char v12; // cl
  int ValueData; // [rsp+20h] [rbp-48h]

  v6 = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 72));
  v7 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    v7 = a1;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)v7;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == a1 )
    goto LABEL_7;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels != v7 )
  {
    if ( a1 != v7 )
      return (unsigned int)v6;
    v6 = MouSendConnectRequest(a1);
LABEL_7:
    if ( a1 == v7 )
    {
      v6 = RtlWriteRegistryValue(4u, DestinationString.Buffer, a2, 1u, P, (unsigned __int16)word_1C00092A0 + 2);
      if ( v6 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 1u, 0x13u, ValueData, a2);
        MouseClassLogError((void *)a1, -2147155963, 20014, v6, 0, 0LL, 0);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 1u, 0x14u, ValueData, a2);
      }
    }
    return (unsigned int)v6;
  }
  v6 = MouSendConnectRequest(a1);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  v9 = 0LL;
  if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v9 + 19) )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
        goto LABEL_17;
    }
    *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v9 + 19) = 0;
  }
LABEL_17:
  if ( (_DWORD)v9 != LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
LABEL_23:
    *(_DWORD *)(a1 + 180) = v9;
    v11 = 3 * v9;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v11 + 1) = a1;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v11) = a3;
    v12 = *(_BYTE *)(*(_QWORD *)a1 + 76LL);
    if ( *(char *)(*(_QWORD *)v7 + 76LL) >= v12 )
      v12 = *(_BYTE *)(*(_QWORD *)v7 + 76LL);
    *(_BYTE *)(*(_QWORD *)v7 + 76LL) = v12;
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    goto LABEL_7;
  }
  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)512,
                  24LL * (unsigned int)(LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 1),
                  0x43756F4Du);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 24LL * (unsigned int)(LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 1));
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      memmove(PoolWithTag, WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 24LL * LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext));
      ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
    }
    ++LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)PoolWithTag;
    goto LABEL_23;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  return 3221225626LL;
}
