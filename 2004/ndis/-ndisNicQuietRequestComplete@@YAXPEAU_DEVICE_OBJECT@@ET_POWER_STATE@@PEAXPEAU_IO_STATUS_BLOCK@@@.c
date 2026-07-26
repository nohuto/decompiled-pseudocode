/*
 * XREFs of ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C005C5B0
 * Callers:
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C003E87C (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0012BE8 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017B2C (WPP_RECORDER_SF_Lq.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008C374 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisNicQuietRequestComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rbx
  char v7; // bp
  int Status; // esi
  KIRQL v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rbx

  v6 = *((_QWORD *)Context + 557);
  if ( (*((_DWORD *)Context + 30) & 0x80u) == 0 )
  {
    v7 = 0;
    Status = IoStatus->Status;
  }
  else
  {
    v7 = 1;
    Status = 0;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(*((PKSPIN_LOCK *)Context + 557));
  if ( v7 )
  {
    if ( *(_DWORD *)(v6 + 376) == 1 )
      *(_DWORD *)(v6 + 376) = 2;
  }
  else
  {
    *(_DWORD *)(v6 + 376) = ((Status >> 31) & 2) + 2;
    KeSetEvent((PRKEVENT)(v6 + 392), 0, 0);
  }
  if ( *(_QWORD *)(v6 + 872) )
  {
    *(_QWORD *)(v6 + 856) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v6 + 872);
    *(_QWORD *)(v6 + 872) = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v6, v9);
  if ( Status >= 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        9u,
        0x2Eu,
        (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
        (char)Context,
        *((unsigned __int16 **)Context + 482));
  }
  else
  {
    v11 = *((_QWORD *)Context + 557);
    NdisTraceLoggingUnexpectedAoAcError((struct _NDIS_MINIPORT_BLOCK *)Context, 8u, Status);
    *(_WORD *)(v11 + 482) = *(_WORD *)(v11 + 480);
    *(_WORD *)(v11 + 480) = 8;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x2Du,
        (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
        Status,
        Context);
  }
}
