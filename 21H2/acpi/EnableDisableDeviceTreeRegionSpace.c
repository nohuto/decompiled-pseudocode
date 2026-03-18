/*
 * XREFs of EnableDisableDeviceTreeRegionSpace @ 0x1C002963C
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C002963C (EnableDisableDeviceTreeRegionSpace.c)
 *     RegisterOperationRegionHandler @ 0x1C009F5F8 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B0ED4 (UnRegisterOperationRegionHandler.c)
 * Callees:
 *     ACPIExtListStartEnum @ 0x1C000990C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C000A7D4 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C000C1AC (ACPIExtListEnumNext.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C002963C (EnableDisableDeviceTreeRegionSpace.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005D7A0 (EnableDisableDeviceRegionSpace.c)
 *     WPP_RECORDER_SF_sdqD @ 0x1C005DC40 (WPP_RECORDER_SF_sdqD.c)
 */

__int64 __fastcall EnableDisableDeviceTreeRegionSpace(__int64 a1, unsigned int a2, char a3)
{
  bool v3; // zf
  int v8; // edx
  __int64 i; // rax
  __int64 v10; // rbx
  __int64 v11; // r8
  int v12; // r8d
  _QWORD v13[3]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v14; // [rsp+68h] [rbp-30h]
  __int64 v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+80h] [rbp-18h]
  int v17; // [rsp+84h] [rbp-14h]

  v17 = 0;
  v3 = *(_DWORD *)(a1 + 368) == 3;
  v14 = 0LL;
  if ( v3 )
  {
    if ( a2 >= 0x1F )
      v8 = 0x80000000;
    else
      v8 = 1 << a2;
    if ( (v8 & *(_DWORD *)(a1 + 668)) != 0
      && (int)EnableDisableDeviceRegionSpace(a1, a2) < 0
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_sdqD(WPP_GLOBAL_Control->DeviceExtension, (unsigned int)"disable", v12, 14);
    }
    v13[1] = 0LL;
    v13[0] = a1 + 800;
    v15 = 816LL;
    v13[2] = &AcpiDeviceTreeLock;
    v16 = 1;
    for ( i = ACPIExtListStartEnum((__int64)v13); ; i = (__int64)ACPIExtListEnumNext((__int64)v13) )
    {
      v10 = i;
      if ( !ACPIExtListTestElement((__int64)v13, 1) )
        break;
      LOBYTE(v11) = a3;
      EnableDisableDeviceTreeRegionSpace(v10, a2, v11);
    }
  }
  return 0LL;
}
