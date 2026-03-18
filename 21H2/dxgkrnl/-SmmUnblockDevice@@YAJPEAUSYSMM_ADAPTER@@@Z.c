/*
 * XREFs of ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C05BC
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C01F5A3C (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C0025FEC (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C01D4 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03C08B4 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 */

__int64 __fastcall SmmUnblockDevice(struct SYSMM_ADAPTER *a1)
{
  __int64 v2; // rcx
  unsigned int *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+68h] [rbp+10h] BYREF

  if ( SmmUseIommuV2Interface() && (*(_DWORD *)(v2 + 20) & 4) != 0 )
  {
    v3 = (unsigned int *)(v2 + 88);
    LODWORD(v4) = 0;
    v5 = **(_QWORD **)(v2 + 360);
    ((void (__fastcall *)(__int64, __int64))qword_1C0130AB8)(v5, v2 + 88);
    v6 = *v3;
    if ( *v3 != 2 )
    {
      if ( (v6 & 2) == 0 )
      {
        if ( (v6 & 1) == 0 )
        {
          WdLogSingleEntry1(2LL, *v3);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"QueryAvailableDomainTypes returned unexpected list of available types. No passthrough or translate "
                      "domains available. AvailableDomainTypes=0x%.8x",
            *v3,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v4) = -1073741823;
          return (unsigned int)v4;
        }
        v8 = SysMmEnableIommu(a1, 1LL);
        v4 = v8;
        if ( v8 >= 0 )
        {
          v11 = 1;
          v9 = ((__int64 (__fastcall *)(void (__fastcall *)(struct _IOMMU_INTERFACE_STATE_CHANGE *, _DWORD *), struct SYSMM_ADAPTER *, __int64, int *))qword_1C0130AC0)(
                 SmmDomainTypeStateChangeCallback,
                 a1,
                 v5,
                 &v11);
          v4 = v9;
          if ( v9 < 0 )
          {
            WdLogSingleEntry1(2LL, v9);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to register domain state callback. Status=0x%.8x",
              v4,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          return (unsigned int)v4;
        }
        goto LABEL_6;
      }
      v7 = SmmIommuSwitchToPassthrough(a1);
      v4 = v7;
      if ( v7 < 0 )
LABEL_6:
        WdLogSingleEntry1(4LL, v4);
    }
    return (unsigned int)v4;
  }
  return 0LL;
}
