/*
 * XREFs of ACPIFilterRemoveNonPresentDevices @ 0x1C000A564
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008E6C0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C00A0C78 (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIExtListStartEnum @ 0x1C000990C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C000A7D4 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C000C1AC (ACPIExtListEnumNext.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C002EF8C (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C004B044 (ACPIBuildSurpriseRemovedExtension.c)
 *     IsPciBus @ 0x1C0091898 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1C0094CC0 (EnableDisableRegions.c)
 *     ACPIInitStopDevice @ 0x1C00AEFEC (ACPIInitStopDevice.c)
 */

__int64 __fastcall ACPIFilterRemoveNonPresentDevices(__int64 a1, _DWORD *a2)
{
  __int64 i; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  bool v9; // si
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  _QWORD v13[3]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+38h] [rbp-30h]
  __int64 v15; // [rsp+48h] [rbp-20h]
  int v16; // [rsp+50h] [rbp-18h]
  int v17; // [rsp+54h] [rbp-14h]

  v17 = 0;
  v14 = 0LL;
  v13[1] = 0LL;
  v13[0] = a1 + 800;
  v13[2] = &AcpiDeviceTreeLock;
  v15 = 816LL;
  v16 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v13); ; i = ACPIExtListEnumNext(v13) )
  {
    LOBYTE(v4) = 1;
    v5 = i;
    result = ACPIExtListTestElement(v13, v4);
    if ( !(_BYTE)result )
      break;
    if ( (*(_BYTE *)(v5 + 8) & 0x60) == 0x40 )
    {
      v7 = 0LL;
      if ( *a2 )
      {
        while ( *(_QWORD *)(v5 + 784) != *(_QWORD *)&a2[2 * v7 + 2] )
        {
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= *a2 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        v8 = *(_QWORD *)(v5 + 1000) & 0x8000LL;
        v9 = (*(_QWORD *)(v5 + 1000) & 0x8000) != 0;
        if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v5 + 768)) || v8 )
        {
          LOBYTE(v11) = v9;
          EnableDisableRegions(*(_QWORD *)(v5 + 760), 0LL, v11);
        }
        v12 = *(_DWORD *)(v5 + 1000);
        *(_DWORD *)(v5 + 368) = 5;
        if ( (*(_QWORD *)&v12 & 0x800000LL) != 0 )
          _InterlockedAnd64((volatile signed __int64 *)(v5 + 8), 0xFFFFFFFFFFFFF7FFuLL);
        else
          _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x800uLL);
        LOBYTE(v10) = 1;
        ACPIInitStopDevice(v5, v10);
        ACPIThermalReleaseCoolingInterfaces(v5);
        ACPIBuildSurpriseRemovedExtension(v5);
      }
    }
  }
  return result;
}
