/*
 * XREFs of RaidUnitSendSrbIoControlSynchronously @ 0x1C001C094
 * Callers:
 *     RaUnitStreamsIoctl @ 0x1C001BD70 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001BEF0 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C00480A0 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C00490D0 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C00492BC (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C004940C (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C00495D0 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1C0049770 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C000BDD4 (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x1C0010DE0 (RaSendIrpSynchronous.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C001C268 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C001C2B4 (StorBuildSynchronousScsiRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C0059458 (PortSrbTranslateSrbToNtStatus.c)
 */

__int64 __fastcall RaidUnitSendSrbIoControlSynchronously(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 (__fastcall *a5)(_QWORD),
        __int64 a6,
        int a7)
{
  __int64 v7; // r14
  __int64 v12; // rcx
  _BYTE *v13; // rbp
  _BYTE *Srb; // rax
  __int64 v15; // r8
  _BYTE *v16; // rbx
  int v17; // edx
  IRP *v18; // rax
  IRP *v19; // rsi
  __int64 v20; // rcx
  int Status; // edi
  __int64 v23; // rcx
  __int128 v24; // [rsp+20h] [rbp-28h] BYREF

  v7 = *(_QWORD *)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 8);
  v13 = 0LL;
  v24 = 0LL;
  Srb = RaidAllocateSrb(v12, 2u, *(_BYTE *)(v7 + 426), 0);
  v16 = Srb;
  if ( Srb )
  {
    v17 = a7 | 0x102;
    if ( Srb[2] == 40 )
      *((_WORD *)Srb + 19) = 32;
    else
      Srb[9] = 32;
    if ( *(_BYTE *)(v7 + 426) == 1 )
    {
      *((_DWORD *)Srb + 8) = -1;
      v13 = Srb;
      v23 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 5) = 2;
      *((_DWORD *)Srb + 6) = v17;
      *((_QWORD *)Srb + 8) = a3;
      *((_DWORD *)Srb + 15) = a4;
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 1264);
      Srb[v23 + 8] = *(_BYTE *)(a1 + 96);
      Srb[v23 + 9] = *(_BYTE *)(a1 + 97);
      Srb[v23 + 10] = *(_BYTE *)(a1 + 98);
    }
    else
    {
      Srb[2] = 2;
      *(_WORD *)Srb = 88;
      *((_DWORD *)Srb + 3) = v17;
      Srb[8] = -1;
      *((_QWORD *)Srb + 3) = a3;
      *((_DWORD *)Srb + 4) = a4;
      *((_QWORD *)Srb + 6) = a2;
      *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 1264);
      Srb[5] = *(_BYTE *)(a1 + 96);
      Srb[6] = *(_BYTE *)(a1 + 97);
      Srb[7] = *(_BYTE *)(a1 + 98);
    }
    v18 = (IRP *)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64, __int128 *))StorBuildSynchronousScsiRequest)(
                   *(_QWORD *)(a1 + 8),
                   Srb,
                   v15,
                   &v24);
    v19 = v18;
    if ( v18 )
    {
      if ( *(_BYTE *)(v7 + 426) == 1 )
      {
        v13 = v16;
        *((_QWORD *)v16 + 10) = v18;
      }
      else
      {
        *((_QWORD *)v16 + 6) = v18;
      }
      Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v18);
      if ( Status >= 0 )
      {
        Status = v19->IoStatus.Status;
        if ( Status >= 0 )
        {
          if ( a5 )
            Status = a5(*(unsigned int *)(a3 + 20));
          if ( Status >= 0 )
          {
            LOBYTE(v20) = v16[3];
            Status = PortSrbTranslateSrbToNtStatus(v20);
          }
        }
      }
      StorFreeSynchronousScsiRequest(v19);
    }
    else
    {
      Status = -1073741801;
    }
    if ( *(_BYTE *)(v7 + 426) == 1 )
    {
      if ( !v13 )
        v13 = v16;
      *((_QWORD *)v13 + 10) = 0LL;
      *((_QWORD *)v13 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)v16 + 6) = 0LL;
      *((_QWORD *)v16 + 7) = 0LL;
    }
    ExFreePoolWithTag(v16, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
