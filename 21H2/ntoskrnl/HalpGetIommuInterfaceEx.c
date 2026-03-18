/*
 * XREFs of HalpGetIommuInterfaceEx @ 0x14085F410
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall HalpGetIommuInterfaceEx(int a1, __int64 a2, __int64 a3)
{
  int v5; // edi

  if ( (unsigned int)(a1 - 1) <= 1 )
  {
    if ( !a3 )
      return 3221225712LL;
    memset((void *)(a3 + 12), 0, 0xB4uLL);
    *(_DWORD *)(a3 + 8) = a1;
    *(_QWORD *)a3 = 192LL;
    v5 = a1 - 1;
    if ( !v5 )
    {
      *(_QWORD *)(a3 + 16) = IommuDomainCreate;
      *(_QWORD *)(a3 + 24) = IommuDomainDelete;
      *(_QWORD *)(a3 + 32) = IommuDomainAttachDevice;
      *(_QWORD *)(a3 + 40) = IommuDomainDetachDevice;
      *(_QWORD *)(a3 + 48) = IommuFlushDomain;
      *(_QWORD *)(a3 + 56) = IommuFlushDomainVaList;
      *(_QWORD *)(a3 + 64) = xHalUnmaskInterrupt;
      *(_QWORD *)(a3 + 72) = IommuMapLogicalRange;
      *(_QWORD *)(a3 + 80) = IommuUnmapLogicalRange;
      *(_QWORD *)(a3 + 88) = IommuMapIdentityRange;
      *(_QWORD *)(a3 + 96) = IommuUnmapIdentityRange;
      *(_QWORD *)(a3 + 104) = IommuSetDeviceFaultReporting;
      *(_QWORD *)(a3 + 112) = IommuDomainConfigure;
      return 0LL;
    }
    if ( v5 == 1 )
    {
      *(_QWORD *)(a3 + 16) = IommuDomainCreateEx;
      *(_QWORD *)(a3 + 24) = IommuDomainDelete;
      *(_QWORD *)(a3 + 32) = IommuDomainAttachDeviceEx;
      *(_QWORD *)(a3 + 40) = IommuDomainDetachDeviceEx;
      *(_QWORD *)(a3 + 48) = IommuFlushDomain;
      *(_QWORD *)(a3 + 56) = IommuFlushDomainVaList;
      *(_QWORD *)(a3 + 64) = xHalUnmaskInterrupt;
      *(_QWORD *)(a3 + 72) = IommuMapLogicalRangeEx;
      *(_QWORD *)(a3 + 80) = IommuUnmapLogicalRange;
      *(_QWORD *)(a3 + 88) = IommuMapIdentityRangeEx;
      *(_QWORD *)(a3 + 96) = IommuUnmapIdentityRangeEx;
      *(_QWORD *)(a3 + 104) = xKdEnumerateDebuggingDevices;
      *(_QWORD *)(a3 + 112) = IommuDomainConfigure;
      *(_QWORD *)(a3 + 120) = IommuDeviceQueryDomainTypes;
      *(_QWORD *)(a3 + 128) = IommuRegisterInterfaceStateChangeCallback;
      *(_QWORD *)(a3 + 136) = IommuUnregisterInterfaceStateChangeCallback;
      *(_QWORD *)(a3 + 144) = IommuReserveLogicalAddressRange;
      *(_QWORD *)(a3 + 152) = IommuFreeReservedLogicalAddressRange;
      *(_QWORD *)(a3 + 160) = IommuMapReservedLogicalRange;
      *(_QWORD *)(a3 + 168) = IommuUnmapReservedLogicalRange;
      *(_QWORD *)(a3 + 176) = IommuDeviceCreate;
      *(_QWORD *)(a3 + 184) = IommuDeviceDelete;
      return 0LL;
    }
  }
  return 3221225711LL;
}
