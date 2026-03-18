/*
 * XREFs of DpiFdoConnectInterrupt @ 0x1C016F8B4
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C0026840 (memset.c)
 *     DpiFdoGetInterruptIrql @ 0x1C016F9E8 (DpiFdoGetInterruptIrql.c)
 *     DpiLdaGetInterruptIrqlForChain @ 0x1C02D3104 (DpiLdaGetInterruptIrqlForChain.c)
 */

__int64 __fastcall DpiFdoConnectInterrupt(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  int InterruptIrqlForChain; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int8 v12; // bl
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v20; // [rsp+90h] [rbp+20h] BYREF

  v1 = a1[8];
  v20 = 0;
  v3 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v1 + 504) )
    InterruptIrqlForChain = DpiLdaGetInterruptIrqlForChain(a1, &v20);
  else
    InterruptIrqlForChain = DpiFdoGetInterruptIrql(*(_QWORD *)(v1 + 1288), &v20);
  LODWORD(v7) = InterruptIrqlForChain;
  if ( InterruptIrqlForChain < 0 )
  {
    if ( !*(_BYTE *)(v1 + 480)
      && !*(_BYTE *)(v1 + 2695)
      && !*(_BYTE *)(v1 + 1158)
      && !*(_BYTE *)(v1 + 2696)
      && !*(_BYTE *)(v1 + 2692)
      && !*(_BYTE *)(v1 + 2697) )
    {
      v16 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v16 + 24) = (int)v7;
      WdLogEvent5_WdError(v16);
    }
    return (unsigned int)v7;
  }
  memset(&Parameters, 0, sizeof(Parameters));
  if ( *(_QWORD *)(v3 + 184) )
  {
    v11 = WdLogNewEntry5_WdEvent(v10, v9);
    v12 = v20;
    *(_QWORD *)(v11 + 24) = v20;
    WdLogEvent5_WdEvent(v11);
    Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(v1 + 152);
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(v1 + 1368);
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoMessageInterruptRoutine;
    Parameters.FullySpecified.SpinLock = *(PKSPIN_LOCK *)(v1 + 1456);
    Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoLineInterruptRoutine;
    Parameters.Version = 3;
    Parameters.FullySpecified.ServiceContext = a1;
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = v12;
    v13 = IoConnectInterruptEx(&Parameters);
    v7 = v13;
    if ( v13 < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v18 + 24) = v7;
      WdLogEvent5_WdError(v18);
      if ( (_DWORD)v7 == -1073741275 )
        LODWORD(v7) = -1073741823;
    }
    else
    {
      *(_DWORD *)(v1 + 1360) = Parameters.Version;
      *(_QWORD *)(v1 + 1376) = *Parameters.FullySpecified.InterruptObject;
    }
    return (unsigned int)v7;
  }
  if ( *(_BYTE *)(v1 + 1154) )
    return 3221226021LL;
  v17 = WdLogNewEntry5_WdError(v10, v9);
  *(_QWORD *)(v17 + 24) = (int)v7;
  WdLogEvent5_WdError(v17);
  return 3221225473LL;
}
