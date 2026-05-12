/*
 * XREFs of StorPortAdapterPoFxWaitWakeCompletion @ 0x1C003FB60
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C002C5C4 (RaidAdapterPoFxActivateComponent.c)
 *     WPP_SF_D @ 0x1C00323F8 (WPP_SF_D.c)
 */

void __fastcall StorPortAdapterPoFxWaitWakeCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // ebx
  __int64 v6; // rcx

  Status = IoStatus->Status;
  *(_QWORD *)(Context[636] + 72LL) = 0LL;
  v6 = Context[636];
  if ( v6
    && (*((_DWORD *)Context + 69) != 1 || (*((_BYTE *)Context + 108) & 2) != 0)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 1, 0) )
  {
    RaidAdapterPoFxActivateComponent((__int64)Context, 0LL, 0LL);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x42u,
      (__int64)&WPP_e3909ed325cf3aaa071da1dbc70c911f_Traceguids,
      Status);
  }
}
