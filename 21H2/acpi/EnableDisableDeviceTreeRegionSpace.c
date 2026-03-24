/*
 * XREFs of EnableDisableDeviceTreeRegionSpace @ 0x1C0018210
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0018210 (EnableDisableDeviceTreeRegionSpace.c)
 *     RegisterOperationRegionHandler @ 0x1C00A1CB0 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B1C74 (UnRegisterOperationRegionHandler.c)
 * Callees:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0018210 (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIExtListTestElement @ 0x1C001A904 (ACPIExtListTestElement.c)
 *     ACPIExtListStartEnum @ 0x1C001AD98 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C001B0F0 (ACPIExtListEnumNext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005C880 (EnableDisableDeviceRegionSpace.c)
 *     WPP_RECORDER_SF_sdqD @ 0x1C005CD3C (WPP_RECORDER_SF_sdqD.c)
 */

__int64 __fastcall EnableDisableDeviceTreeRegionSpace(__int64 a1, unsigned int a2, char a3)
{
  bool v3; // zf
  int v8; // edx
  __int64 i; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r8
  int v13; // r8d
  _QWORD v14[3]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v15; // [rsp+68h] [rbp-30h]
  __int64 v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+80h] [rbp-18h]
  int v18; // [rsp+84h] [rbp-14h]

  v18 = 0;
  v3 = *(_DWORD *)(a1 + 328) == 3;
  v15 = 0LL;
  if ( v3 )
  {
    if ( a2 >= 0x1F )
      v8 = 0x80000000;
    else
      v8 = 1 << a2;
    if ( (v8 & *(_DWORD *)(a1 + 628)) != 0
      && (int)EnableDisableDeviceRegionSpace(a1, a2) < 0
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_sdqD(WPP_GLOBAL_Control->DeviceExtension, (unsigned int)"disable", v13, 14);
    }
    v14[1] = 0LL;
    v14[0] = a1 + 760;
    v16 = 776LL;
    v14[2] = &AcpiDeviceTreeLock;
    v17 = 1;
    for ( i = ACPIExtListStartEnum(v14); ; i = ACPIExtListEnumNext(v14) )
    {
      LOBYTE(v10) = 1;
      v11 = i;
      if ( !(unsigned __int8)ACPIExtListTestElement(v14, v10) )
        break;
      LOBYTE(v12) = a3;
      EnableDisableDeviceTreeRegionSpace(v11, a2, v12);
    }
  }
  return 0LL;
}
