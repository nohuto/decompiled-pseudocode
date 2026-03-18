/*
 * XREFs of PnpDetermineResourceListSize @ 0x14073AF4C
 * Callers:
 *     IoGetDeviceProperty @ 0x1405DCC50 (IoGetDeviceProperty.c)
 *     PnpBuildCmResourceLists @ 0x140739A7C (PnpBuildCmResourceLists.c)
 *     IopQueryDeviceResources @ 0x14073A99C (IopQueryDeviceResources.c)
 *     IopLegacyResourceAllocation @ 0x14073D9A4 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     IopCombineCmResourceList @ 0x1407A1A4C (IopCombineCmResourceList.c)
 *     IopChangeInterfaceType @ 0x14089D2DC (IopChangeInterfaceType.c)
 *     PnpSetRegistryResourceList @ 0x14089E878 (PnpSetRegistryResourceList.c)
 *     IopCombineLegacyResources @ 0x14089FCF0 (IopCombineLegacyResources.c)
 *     PnpCopyResourceList @ 0x1408AF4A0 (PnpCopyResourceList.c)
 *     PnpRestoreResourcesInternal @ 0x1408B0248 (PnpRestoreResourcesInternal.c)
 *     IopReportBootResources @ 0x140A62C90 (IopReportBootResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpDetermineResourceListSize(_DWORD *a1)
{
  _DWORD *v1; // r8
  __int64 result; // rax
  __int64 v3; // r10
  unsigned int v4; // ecx
  _DWORD *v5; // r9
  unsigned int v6; // edx
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( !a1 )
    return 0LL;
  v1 = a1 + 1;
  result = 4LL;
  if ( *a1 )
  {
    v3 = (unsigned int)*a1;
    do
    {
      v4 = v1[3];
      v5 = v1 + 4;
      v6 = 16;
      if ( v4 )
      {
        v7 = v4;
        do
        {
          v8 = 20LL;
          if ( *(_BYTE *)v5 == 5 )
            v8 = (unsigned int)(v5[1] + 20);
          v6 += v8;
          v5 = (_DWORD *)((char *)v5 + v8);
          --v7;
        }
        while ( v7 );
      }
      result = v6 + (unsigned int)result;
      v1 = (_DWORD *)((char *)v1 + v6);
      --v3;
    }
    while ( v3 );
  }
  return result;
}
