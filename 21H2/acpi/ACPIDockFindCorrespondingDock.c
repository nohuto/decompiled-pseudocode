/*
 * XREFs of ACPIDockFindCorrespondingDock @ 0x1C0048FA8
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C004B044 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C0051370 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00AC5AC (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     ACPIExtListStartEnum @ 0x1C000990C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C000A7D4 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C000C1AC (ACPIExtListEnumNext.c)
 */

__int64 __fastcall ACPIDockFindCorrespondingDock(__int64 a1)
{
  __int64 i; // rax
  __int64 v3; // rbx
  _QWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-18h]
  int v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+54h] [rbp-Ch]

  v10 = 0;
  v5[1] = 0LL;
  v5[0] = RootDeviceExtension + 800;
  v8 = 816LL;
  SpinLock = &AcpiDeviceTreeLock;
  *(_OWORD *)NewIrql = 0LL;
  v9 = 2;
  for ( i = ACPIExtListStartEnum((__int64)v5); ; i = (__int64)ACPIExtListEnumNext((__int64)v5) )
  {
    v3 = i;
    if ( !ACPIExtListTestElement((__int64)v5, 1) )
      break;
    if ( !v3 || _bittest64((const signed __int64 *)(v3 + 8), 0x39u) && *(_QWORD *)(v3 + 184) == a1 )
    {
      if ( v9 == 2 )
        KeReleaseSpinLock(SpinLock, NewIrql[0]);
      return v3;
    }
  }
  return v3;
}
