/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1802FFC90
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800D6690 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800D66A0 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800D66B0 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800D66C0 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800D66D0 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WDA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800D66E0 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WDA@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WJA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800D66F0 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WJA@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WJI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800D6700 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WJI@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 * Callees:
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x18016EB04 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x1802CC4DC (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802CCE38 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1802FB910 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__XamlAltTabViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        _QWORD *a1,
        Platform::Guid *a2,
        void **a3)
{
  Platform::Guid *v6; // rcx
  Platform::Guid *v7; // rcx
  Platform::Guid *v8; // rcx
  Platform::Guid *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  Platform::Guid *v13; // rcx
  unsigned __int64 v14; // rcx
  Platform::Guid *v15; // rcx

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90)
    || Platform::Guid::Equals(v7, &_uuidof__AU__IXamlAltTabViewControllerPublicNonVirtuals__)
    || a1[16] && Platform::Guid::Equals(v8, &_uuidof__AUIAgileObject_Details_Platform__) )
  {
    *a3 = a1;
    v12 = (__int64)(a1 + 15);
    goto LABEL_20;
  }
  if ( Platform::Guid::Equals(a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    v11 = (unsigned __int64)(a1 + 18) & -(__int64)(a1 != 0LL);
LABEL_8:
    *a3 = (void *)v11;
    v12 = v10;
LABEL_20:
    __abi_FTMWeakRefData::Increment(v12);
    return 0LL;
  }
  if ( Platform::Guid::Equals(v9, &_uuidof__AUIXamlMultitaskingViewController__) )
  {
    v14 = (unsigned __int64)(a1 + 2);
LABEL_11:
    v11 = v14 & -(__int64)(a1 != 0LL);
    goto LABEL_8;
  }
  if ( Platform::Guid::Equals(v13, &_uuidof__AUIXamlSwitcherWindowInteractionEvents__) )
  {
    v14 = (unsigned __int64)(a1 + 3);
    goto LABEL_11;
  }
  if ( Platform::Guid::Equals(v15, &_uuidof__AU__IXamlBaseViewControllerPublicNonVirtuals__) )
  {
    v14 = (unsigned __int64)(a1 + 1);
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(v10 + 8)
    || (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                       (__abi_FTMWeakRefData *)(v10 & -(__int64)(*(_QWORD *)(v10 + 8) != 0LL)),
                       a2,
                       a3) )
  {
    return ___abi_QueryInterface__QObject_Platform__XamlBaseViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
             (__int64)(a1 + 1),
             a2);
  }
  return 0LL;
}
