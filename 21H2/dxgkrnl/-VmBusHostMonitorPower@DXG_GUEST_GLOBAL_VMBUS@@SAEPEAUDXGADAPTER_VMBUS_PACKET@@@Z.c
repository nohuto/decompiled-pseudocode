/*
 * XREFs of ?VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036EE30
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?FindMappingFromHostId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1C033D77C (-FindMappingFromHostId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER.c)
 *     ?NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z @ 0x1C03BC644 (-NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z.c)
 */

unsigned __int8 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusHostMonitorPower(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // r14
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v3; // rax
  DWORD LowPart; // ebx
  struct DXGADAPTER *v5; // rax
  DXGADAPTER *v6; // rsi
  __int64 v7; // rdi
  int v8; // edi
  __int64 HighPart; // rdi
  DXGDODPRESENT *v10; // rcx
  struct _LUID v12[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+68h] [rbp-98h]
  _BYTE v15[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = *((_QWORD *)a1 + 17);
  *(_OWORD *)&v12[0].LowPart = 0LL;
  v13 = *(_QWORD *)(v1 + 24);
  v14 = *(_DWORD *)(v1 + 32);
  Global = DXGGLOBAL_GetGlobal();
  if ( (int)REMOTEMONITORMAPPING::FindMappingFromHostId(
              (struct _KTHREAD **)Global + 38108,
              (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v13,
              (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)v12) >= 0 )
  {
    v3 = DXGGLOBAL_GetGlobal();
    LowPart = v12[0].LowPart;
    v5 = DXGGLOBAL::ReferenceAdapterByLuid(v3, v12[0], &v13);
    v6 = v5;
    if ( v5 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, v5, 0LL);
      v8 = COREADAPTERACCESS::AcquireExclusive((__int64)v15);
      DXGADAPTER::ReleaseReference(v6);
      if ( v8 >= 0 )
      {
        if ( !*((_QWORD *)v6 + 350) )
        {
          v10 = *(DXGDODPRESENT **)(*((_QWORD *)v6 + 349) + 448LL);
          if ( v10 )
            DXGDODPRESENT::NotifyHostMonitorPowerState(v10, v12[1].HighPart, *(_BYTE *)(v1 + 36) & 1);
        }
      }
      else
      {
        HighPart = v12[0].HighPart;
        WdLogSingleEntry2(2LL, v12[0].HighPart, LowPart);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid adapter specified, AdapterLuid = 0x%08I64x%08I64x",
          HighPart,
          LowPart,
          0LL,
          0LL,
          0LL);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v15);
    }
    else
    {
      v7 = v12[0].HighPart;
      WdLogSingleEntry2(2LL, v12[0].HighPart, LowPart);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid adapter specified, GuestAdapterLuid = 0x%08I64x%08I64x",
        v7,
        LowPart,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, *(int *)(v1 + 28), *(unsigned int *)(v1 + 24));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Could not find guest adapter info, HostAdapterLuid = 0x%08I64x%08I64x",
      *(int *)(v1 + 28),
      *(unsigned int *)(v1 + 24),
      0LL,
      0LL,
      0LL);
  }
  return 0;
}
