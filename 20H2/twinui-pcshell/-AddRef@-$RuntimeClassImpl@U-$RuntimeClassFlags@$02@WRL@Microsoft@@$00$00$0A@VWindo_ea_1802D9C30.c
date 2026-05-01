/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802D9C30
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800F8A10 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindo_ea_1800F8A10.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800F8A20 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindo_ea_1800F8A20.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800F8A30 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindo_ea_1800F8A30.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800F8A40 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindo_ea_1800F8A40.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCFA@EAAKXZ @ 0x1800F8A50 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindo_ea_1800F8A50.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCFI@EAAKXZ @ 0x1800F8A60 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindo_ea_1800F8A60.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800F8A70 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindo_ea_1800F8A70.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x1800F8A80 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindo_ea_1800F8A80.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x1800F8A90 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindo_ea_1800F8A90.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x1800F8AA0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindo_ea_1800F8AA0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WEI@EAAKXZ @ 0x1800F8AB0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindo_ea_1800F8AB0.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801409F0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,ILegacyViewWrapper>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 616);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 616), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
