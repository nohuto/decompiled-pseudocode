/*
 * XREFs of DpiRequestIoPowerState @ 0x1C0171B90
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0170A00 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleDevicePower @ 0x1C01717A0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoInitializeFdo @ 0x1C017FE94 (DpiFdoInitializeFdo.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C02C88A0 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1C02C92B0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoResetFdo @ 0x1C02CA904 (DpiFdoResetFdo.c)
 * Callees:
 *     ?DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z @ 0x1C001FA78 (-DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z.c)
 *     memset @ 0x1C0027400 (memset.c)
 */

__int64 __fastcall DpiRequestIoPowerState(__int64 a1, LONG a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  __int64 v11; // rax
  struct _KEVENT v12[4]; // [rsp+30h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  memset(v12, 0, 0x58uLL);
  v12[1].Header.WaitListHead.Flink = 0LL;
  v12[3].Header.WaitListHead.Flink = 0LL;
  v12[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)0xB74727044LL;
  v12[1].Header.LockNV = a2;
  LODWORD(v12[1].Header.WaitListHead.Blink) = a4;
  KeInitializeEvent(&v12[2], SynchronizationEvent, 0);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 4280));
  DpiInsertEntryToPowerActionQueue((KSPIN_LOCK *)v4, (struct _DPI_POWER_ACTION *)v12);
  KeSetEvent((PRKEVENT)(v4 + 3928), 0, 0);
  if ( a2 == 7 )
  {
    v9 = KeWaitForSingleObject(*(PVOID *)(v4 + 3920), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v4 + 3920));
  }
  else
  {
    v9 = KeWaitForSingleObject(&v12[2], Executive, 0, 0, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 4280));
  if ( v9 )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v11 + 24) = v9;
    WdLogEvent5_WdError(v11);
  }
  else
  {
    return (unsigned int)v12[3].Header.Lock;
  }
  return (unsigned int)v9;
}
