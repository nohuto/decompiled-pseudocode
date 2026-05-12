/*
 * XREFs of RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015F54
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0015DB4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1C000B974 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000B9A8 (RaidAdapterAcquireStartIoLock.c)
 *     RaForwardIrp @ 0x1C0014EBC (RaForwardIrp.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C00160FC (RaidpBuildAdapterBusRelations.c)
 *     RaidAdapterRescanBus @ 0x1C0016410 (RaidAdapterRescanBus.c)
 *     RaidNtStatusToStorStatus @ 0x1C001BD0C (RaidNtStatusToStorStatus.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C002A294 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x1C00334D0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0033520 (WPP_SF_qqD.c)
 */

NTSTATUS __fastcall RaidAdapterQueryDeviceRelationsIrp(__int64 a1, IRP *a2)
{
  unsigned __int16 v4; // r12
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  signed int v6; // esi
  __int64 v7; // rcx
  _IO_STACK_LOCATION *v8; // rax
  int v9; // eax
  int v10; // esi
  __int64 v12; // rcx
  unsigned __int16 *v13; // r14
  __int64 v14; // r13
  void (__fastcall *v15)(__int64, __int64, _QWORD, unsigned __int16 *, int); // r15
  int v16; // eax
  signed __int32 v17[8]; // [rsp+0h] [rbp-80h] BYREF
  _BYTE v18[4]; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v21; // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+58h] [rbp-28h] BYREF
  __int128 v23; // [rsp+68h] [rbp-18h] BYREF

  v19 = 0;
  v18[0] = 0;
  memset(&v21, 0, sizeof(v21));
  v4 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_7de55442f8f2316906ef02cf8f2423cb_Traceguids, a1, a2);
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v20 = 0LL;
  if ( CurrentStackLocation->Parameters.Read.Length )
  {
    if ( StorEtwLoggingEnabled )
    {
      v22 = 0LL;
      IoGetActivityIdIrp(a2, &v22);
      if ( (byte_1C0069842 & 0x20) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v12, &EventPnpRequestComplete, &v22, a2, a2->IoStatus.Status);
    }
    return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0
      && (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 4408)) > 300000000 )
    {
      *(_BYTE *)(a1 + 106) = 1;
    }
    v6 = RaidAdapterRescanBus(a1, &v19, v18);
    if ( v6 >= 0 )
    {
      v6 = RaidpBuildAdapterBusRelations(a1, &v20);
      v19 = v6;
    }
    if ( v18[0] )
    {
      v13 = *(unsigned __int16 **)(a1 + 4984);
      *(_BYTE *)(a1 + 104) &= ~0x40u;
      *(_QWORD *)(a1 + 4984) = 0LL;
      if ( v13 )
        v4 = *v13;
      v14 = *(_QWORD *)(a1 + 5000);
      *(_QWORD *)(a1 + 5000) = 0LL;
      v15 = *(void (__fastcall **)(__int64, __int64, _QWORD, unsigned __int16 *, int))(a1 + 4992);
      *(_QWORD *)(a1 + 4992) = 0LL;
      *(_QWORD *)(a1 + 4972) = 0LL;
      _InterlockedOr(v17, 0);
      _InterlockedExchange((volatile __int32 *)(a1 + 4968), 0);
      if ( v15 )
      {
        RaidAdapterAcquireStartIoLock(a1, &v21);
        v16 = RaidNtStatusToStorStatus(v19);
        v15(*(_QWORD *)(a1 + 560) + 16LL, v14, v4, v13, v16);
        RaidAdapterReleaseStartIoLock(a1, &v21);
      }
    }
    a2->IoStatus.Information = v20;
    a2->IoStatus.Status = v6;
    if ( v6 < 0 )
    {
      v9 = RaidCompleteRequestEx(a2, 0, v6);
    }
    else
    {
      if ( StorEtwLoggingEnabled )
      {
        v23 = 0LL;
        IoGetActivityIdIrp(a2, &v23);
        if ( (byte_1C0069842 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v7, &EventPnpRequestComplete, &v23, a2, v6);
      }
      v8 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
      *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
      v8[-1].FileObject = v8->FileObject;
      v8[-1].Control = 0;
      v9 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
    }
    v10 = v9;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_7de55442f8f2316906ef02cf8f2423cb_Traceguids, a1, a2, v9);
    }
    return v10;
  }
}
