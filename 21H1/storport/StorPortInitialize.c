/*
 * XREFs of StorPortInitialize @ 0x1C0034850
 * Callers:
 *     StorPortInitializeVrfy @ 0x1C007A8C0 (StorPortInitializeVrfy.c)
 * Callees:
 *     RaidGetPortData @ 0x1C000C8C4 (RaidGetPortData.c)
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0dqddddddiiiii_EtwWriteTransfer @ 0x1C0033B6C (McTemplateK0dqddddddiiiii_EtwWriteTransfer.c)
 *     WPP_SF_qqqq @ 0x1C0034F70 (WPP_SF_qqqq.c)
 *     RaCreateDriver @ 0x1C0078D28 (RaCreateDriver.c)
 *     RaDeleteDriver @ 0x1C0078D7C (RaDeleteDriver.c)
 *     RaInitializeDriver @ 0x1C0078E70 (RaInitializeDriver.c)
 *     RaSaveDriverInitData @ 0x1C0078F80 (RaSaveDriverInitData.c)
 *     WppInitKm @ 0x1C007930C (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C00793A0 (WppLoadTracingSupport.c)
 *     __security_init_cookie @ 0x1C0080044 (__security_init_cookie.c)
 */

__int64 __fastcall StorPortInitialize(PDRIVER_OBJECT DriverObject, __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // r14
  int v9; // eax
  void (__fastcall *v10)(PDRIVER_OBJECT, __int64); // rax
  char *PortData; // r15
  NTSTATUS v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  int inited; // eax
  void (__fastcall *v18)(PDRIVER_OBJECT); // rax
  PVOID DriverObjectExtension; // [rsp+B0h] [rbp+8h] BYREF

  v8 = 0;
  if ( !InitSecurityCookie )
  {
    _security_init_cookie();
    InitSecurityCookie = 1;
  }
  if ( _InterlockedIncrement(&WPPInitCount) == 1 && DriverObject && a2 )
  {
    *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
    WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_wppCtlGuid;
    WPP_MAIN_CB.NextDevice = 0LL;
    WPP_MAIN_CB.CurrentIrp = 0LL;
    WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
    WppLoadTracingSupport();
    WPP_MAIN_CB.CurrentIrp = 0LL;
    WppInitKm();
  }
  DriverObjectExtension = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqqq(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_409ece23a875318e2a3b5ac826db135a_Traceguids,
      DriverObject,
      a2,
      a3,
      a4);
  }
  if ( !DriverObject || !a2 || !a3 )
    return 3221225485LL;
  v9 = *(_DWORD *)a3;
  if ( (*(_DWORD *)a3 == 208 || v9 == 176 || v9 == 136)
    && *(_QWORD *)(a3 + 8)
    && *(_QWORD *)(a3 + 32)
    && *(_QWORD *)(a3 + 16)
    && *(_QWORD *)(a3 + 40) )
  {
    if ( v9 == 176 || v9 == 208 && (*(_DWORD *)(a3 + 184) & 1) != 0 )
    {
      v10 = *(void (__fastcall **)(PDRIVER_OBJECT, __int64))(a3 + 160);
      if ( v10 )
      {
        v10(DriverObject, a2);
        v8 = 1;
      }
    }
    PortData = RaidGetPortData();
    if ( PortData )
    {
      DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverEntry);
      if ( DriverObjectExtension
        || (v12 = IoAllocateDriverObjectExtension(DriverObject, DriverEntry, 0x70u, &DriverObjectExtension), v12 >= 0)
        && (RaCreateDriver(DriverObjectExtension),
            v12 = RaInitializeDriver(DriverObjectExtension, DriverObject, PortData, a2),
            v12 >= 0) )
      {
        v16 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 == 208 )
        {
          if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
            McTemplateK0dqddddddiiiii_EtwWriteTransfer(
              v14,
              v13,
              v15,
              208,
              *(_DWORD *)(a3 + 4),
              *(_DWORD *)(a3 + 64),
              *(_DWORD *)(a3 + 68),
              *(_DWORD *)(a3 + 72),
              *(_DWORD *)(a3 + 184),
              *(_DWORD *)(a3 + 188),
              *(_DWORD *)(a3 + 192),
              *(_QWORD *)(a3 + 136),
              *(_QWORD *)(a3 + 144),
              *(_QWORD *)(a3 + 152),
              *(_QWORD *)(a3 + 160),
              *(_QWORD *)(a3 + 168));
        }
        else if ( v16 == 176 )
        {
          if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
            McTemplateK0dqddddddiiiii_EtwWriteTransfer(
              v14,
              v13,
              v15,
              176,
              *(_DWORD *)(a3 + 4),
              *(_DWORD *)(a3 + 64),
              *(_DWORD *)(a3 + 68),
              *(_DWORD *)(a3 + 72),
              0,
              0,
              0,
              *(_QWORD *)(a3 + 136),
              *(_QWORD *)(a3 + 144),
              *(_QWORD *)(a3 + 152),
              *(_QWORD *)(a3 + 160),
              *(_QWORD *)(a3 + 168));
        }
        else if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
        {
          McTemplateK0dqddddddiiiii_EtwWriteTransfer(
            v14,
            v13,
            v15,
            v16,
            *(_DWORD *)(a3 + 4),
            *(_DWORD *)(a3 + 64),
            *(_DWORD *)(a3 + 68),
            *(_DWORD *)(a3 + 72),
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0);
        }
        inited = RaSaveDriverInitData(DriverObjectExtension, a3);
        v12 = inited;
        if ( inited >= 0 )
          v8 = 0;
        *(_WORD *)(a3 + 104) |= 0x10u;
        if ( inited >= 0 )
          return (unsigned int)v12;
      }
    }
    else
    {
      v12 = -1073741801;
    }
    if ( DriverObjectExtension )
      RaDeleteDriver(DriverObjectExtension);
    DriverObjectExtension = 0LL;
    if ( v8 )
    {
      v18 = *(void (__fastcall **)(PDRIVER_OBJECT))(a3 + 168);
      if ( v18 )
        v18(DriverObject);
    }
    return (unsigned int)v12;
  }
  return 3221225561LL;
}
