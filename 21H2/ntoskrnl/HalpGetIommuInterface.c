/*
 * XREFs of HalpGetIommuInterface @ 0x1407D2EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpGetIommuInterface(int a1, __int64 a2)
{
  if ( a1 != 1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = IommuDomainCreate;
  *(_QWORD *)(a2 + 16) = IommuDomainDelete;
  *(_QWORD *)(a2 + 24) = IommuDomainAttachDevice;
  *(_QWORD *)(a2 + 32) = IommuDomainDetachDevice;
  *(_QWORD *)(a2 + 96) = IommuSetDeviceFaultReporting;
  *(_QWORD *)(a2 + 104) = IommuDomainConfigure;
  *(_QWORD *)(a2 + 40) = IommuFlushDomain;
  *(_QWORD *)(a2 + 48) = IommuFlushDomainVaList;
  *(_QWORD *)(a2 + 56) = xHalUnmaskInterrupt;
  *(_QWORD *)(a2 + 64) = IommuMapLogicalRange;
  *(_QWORD *)(a2 + 72) = IommuUnmapLogicalRange;
  *(_QWORD *)(a2 + 80) = IommuMapIdentityRange;
  *(_QWORD *)(a2 + 88) = IommuUnmapIdentityRange;
  return 0LL;
}
