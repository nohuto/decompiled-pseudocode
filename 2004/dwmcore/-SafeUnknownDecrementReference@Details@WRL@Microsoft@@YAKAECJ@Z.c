/*
 * XREFs of ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800EB568
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802456F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$II_ea_1802456F0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180245780 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IK_ea_180245780.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IMap@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180245810 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IM_ea_180245810.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IMapView@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802458A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IM_ea_1802458A0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180245930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$IReference@I@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180245990 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$IR_ea_180245990.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::SafeUnknownDecrementReference(
        Microsoft::WRL::Details *this,
        volatile int *a2)
{
  signed __int32 v2; // r8d

  do
    v2 = *(_DWORD *)this;
  while ( *(_DWORD *)this != 0x7FFFFFFF
       && v2 != _InterlockedCompareExchange((volatile signed __int32 *)this, v2 - 1, v2) );
  return (unsigned int)(v2 - 1);
}
