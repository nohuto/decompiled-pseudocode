/*
 * XREFs of RaidAdapterRemoveDeviceIrp @ 0x1C0077C38
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0013AB4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     RaForwardIrpSynchronous @ 0x1C0011DF0 (RaForwardIrpSynchronous.c)
 *     RaidAdapterDeleteChildren @ 0x1C002AE00 (RaidAdapterDeleteChildren.c)
 *     RaidAdapterDisableDeviceInterface @ 0x1C002B188 (RaidAdapterDisableDeviceInterface.c)
 *     RaidAdapterDisableNonPoFxMiniportInterface @ 0x1C002B248 (RaidAdapterDisableNonPoFxMiniportInterface.c)
 *     RaidAdapterDisableRpmbInterface @ 0x1C002B2F4 (RaidAdapterDisableRpmbInterface.c)
 *     RaidDeleteAdapter @ 0x1C002F794 (RaidDeleteAdapter.c)
 *     RaidReleaseAdapterRemoveLockAndWait @ 0x1C003173C (RaidReleaseAdapterRemoveLockAndWait.c)
 *     RaCallMiniportCompleteServiceIrp @ 0x1C003556C (RaCallMiniportCompleteServiceIrp.c)
 *     RaidAdapterReleaseResources @ 0x1C0077A4C (RaidAdapterReleaseResources.c)
 */

__int64 __fastcall RaidAdapterRemoveDeviceIrp(__int64 a1, IRP *a2)
{
  struct _DEVICE_OBJECT *v4; // rbp
  unsigned int v5; // eax
  struct _DEVICE_OBJECT *v6; // rsi
  char v7; // r8
  unsigned int v8; // ebx

  RaCallMiniportCompleteServiceIrp(a1);
  v4 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 88) - 5;
  v6 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  *(_DWORD *)(a1 + 88) = 6;
  if ( v5 > 1 )
  {
    RaidAdapterDisableDeviceInterface(a1);
    RaidAdapterDisableNonPoFxMiniportInterface((struct _UNICODE_STRING *)a1);
    RaidAdapterDisableRpmbInterface((struct _UNICODE_STRING *)a1);
    RaidReleaseAdapterRemoveLockAndWait(a1);
    RaidAdapterReleaseResources(a1, (__int64)a2, v7);
  }
  RaidAdapterDeleteChildren(a1);
  RaidDeleteAdapter(a1);
  RaForwardIrpSynchronous(v6, a2);
  v8 = RaidCompleteRequestEx(a2, 0, 0);
  IoDetachDevice(v6);
  IoDeleteDevice(v4);
  return v8;
}
