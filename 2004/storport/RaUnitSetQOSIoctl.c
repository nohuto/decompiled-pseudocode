/*
 * XREFs of RaUnitSetQOSIoctl @ 0x1C0046D44
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000BEE8 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 *     RaidAdapterEnableQosWaitTimeoutCheck @ 0x1C002B8C4 (RaidAdapterEnableQosWaitTimeoutCheck.c)
 *     WPP_SF_q @ 0x1C00324E8 (WPP_SF_q.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x1C0045594 (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x1C0049850 (RaidUnitDisableWaitCheckTimer.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C0054414 (StorpTelemetryMarkUnitResponsive.c)
 */

__int64 __fastcall RaUnitSetQOSIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rcx
  unsigned int v5; // ebx
  _BYTE *v6; // rax
  char v7; // al
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // dx
  _DWORD *v10; // rax
  bool v11; // zf
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned int IrpCount; // r8d
  unsigned int Flags; // r8d
  PDEVICE_OBJECT v16; // rcx
  unsigned __int16 v17; // dx
  unsigned int SystemBuffer_high; // r8d
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  __int64 v23; // rax

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 916) || *(_DWORD *)(a1 + 924) || *(_DWORD *)(a1 + 920) || (*(_BYTE *)(a1 + 450) & 1) != 0 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_84;
    }
    v9 = 39;
    goto LABEL_83;
  }
  v6 = *(_BYTE **)(a1 + 104);
  if ( v6 )
  {
    v7 = *v6 & 0x1F;
    if ( v7 )
    {
      if ( v7 != 20 )
      {
        v8 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          goto LABEL_84;
        }
        v9 = 40;
LABEL_83:
        WPP_SF_q((__int64)v8->AttachedDevice, v9, (__int64)&WPP_315ac634f457316aea96af95ee1292c6_Traceguids, a1);
LABEL_84:
        v5 = -1073741637;
        goto LABEL_85;
      }
    }
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x24 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x29u,
        (__int64)&WPP_315ac634f457316aea96af95ee1292c6_Traceguids,
        a1);
    }
    v5 = -1073741820;
    goto LABEL_85;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 36 || *(_DWORD *)(&MasterIrp->Size + 1) != 36 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v17 = 42;
    goto LABEL_77;
  }
  if ( !LOBYTE(MasterIrp->MdlAddress) )
  {
    if ( *(_BYTE *)(a1 + 3216) )
    {
      v10 = *(_DWORD **)(a1 + 504);
      *v10 &= ~2u;
      if ( (*v10 & 4) == 0 )
        *v10 &= ~1u;
      *(_QWORD *)(a1 + 3256) = -1LL;
      v11 = (*(_BYTE *)(a1 + 450) & 2) == 0;
      *(_BYTE *)(a1 + 3216) = 0;
      *(_QWORD *)(a1 + 3228) = 0LL;
      *(_QWORD *)(a1 + 3236) = 0LL;
      *(_DWORD *)(a1 + 3224) = 0;
      if ( !v11 )
      {
        if ( (byte_1C0068844 & 1) != 0 )
        {
          v12 = *(_DWORD *)(a1 + 96);
          McTemplateK0zqjuuujsssq_EtwWriteTransfer(
            v12 >> 8,
            &EventUnitResponsive,
            a1 + 186,
            *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4864LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
            *(_QWORD *)(a1 + 24) + 5192LL,
            v12,
            SBYTE1(v12),
            SBYTE2(v12),
            a1 + 1976,
            (const char *)(a1 + 160),
            (const char *)(a1 + 169),
            (const char *)(a1 + 186),
            3);
        }
        StorpTelemetryMarkUnitResponsive(a1);
        *(_BYTE *)(a1 + 450) &= ~2u;
      }
      RaidUnitDisableWaitCheckTimer(a1);
      *(_BYTE *)(a1 + 3244) = 1;
      v5 = 0;
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Bu,
        (__int64)&WPP_315ac634f457316aea96af95ee1292c6_Traceguids,
        a1);
    }
    goto LABEL_85;
  }
  v13 = *(&MasterIrp->Flags + 1);
  if ( v13 < 0x3E8 || v13 != 1000 * (v13 / 0x3E8) )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v17 = 44;
    goto LABEL_77;
  }
  IrpCount = MasterIrp->AssociatedIrp.IrpCount;
  if ( IrpCount < 0x3E8 || IrpCount != 1000 * (IrpCount / 0x3E8) )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v17 = 45;
    goto LABEL_77;
  }
  Flags = MasterIrp->Flags;
  if ( Flags != -1 && Flags != 500 * (Flags / 0x1F4) )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v17 = 46;
LABEL_77:
    WPP_SF_q((__int64)v16->AttachedDevice, v17, (__int64)&WPP_315ac634f457316aea96af95ee1292c6_Traceguids, a1);
LABEL_78:
    v5 = -1073741811;
    goto LABEL_85;
  }
  SystemBuffer_high = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
  if ( SystemBuffer_high != -1 && SystemBuffer_high != 500 * (SystemBuffer_high / 0x1F4) )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v17 = 47;
    goto LABEL_77;
  }
  *(_DWORD *)(a1 + 3220) = HIDWORD(MasterIrp->MdlAddress);
  *(_DWORD *)(a1 + 3232) = *(&MasterIrp->Flags + 1) / 0x3E8;
  v19 = MasterIrp->Flags;
  if ( v19 == -1 )
    v20 = -1;
  else
    v20 = v19 / 0x1F4;
  *(_DWORD *)(a1 + 3240) = v20;
  *(_DWORD *)(a1 + 3236) = MasterIrp->AssociatedIrp.IrpCount / 0x3E8u;
  *(_DWORD *)(a1 + 3228) = MasterIrp->ThreadListEntry.Flink;
  v21 = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
  if ( v21 == -1 )
    v22 = -1;
  else
    v22 = v21 / 0x1F4;
  *(_DWORD *)(a1 + 3224) = v22;
  if ( *(_DWORD *)(a1 + 3240) == -1 && !*(_DWORD *)(a1 + 3228) && v22 == -1 )
  {
    RaidUnitDisableWaitCheckTimer(a1);
  }
  else if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3248), 1, 0) )
  {
    RaidAdapterEnableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  v23 = 10000000 * (*(_DWORD *)(a1 + 3232) + 1 + ((unsigned int)(*(_DWORD *)(a1 + 3224) + *(_DWORD *)(a1 + 3240)) >> 1));
  if ( (unsigned int)v23 > 0x11E1A300 )
    v23 = 300000000LL;
  *(_QWORD *)(a1 + 3256) = v23;
  if ( !*(_BYTE *)(a1 + 3216) )
  {
    **(_DWORD **)(a1 + 504) |= 3u;
    *(_BYTE *)(a1 + 3216) = 1;
    *(_BYTE *)(a1 + 3244) = 1;
  }
LABEL_85:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v5);
}
