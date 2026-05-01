/*
 * XREFs of ?Attach@?$ComPtr@VLegacyViewWrapper@@@WRL@Microsoft@@QEAAXPEAVLegacyViewWrapper@@@Z @ 0x1802805E8
 * Callers:
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@IPEAUIUnknown@@PEBGPEBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@$$QEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18027C528 (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@IPEAUIUnknown@@PEBGPEBGW4ViewLif.c)
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@I$$TPEBGAEAY0DF@$$CBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@$$QEAI$$QEA$$T$$QEAPEBGAEAY0DF@$$CBG$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18027C688 (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@I$$TPEBGAEAY0DF@$$CBGW4ViewLifet.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802840C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VView_ea_1802840C0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<LegacyViewWrapper>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,ILegacyViewWrapper>::Release(v4);
  *a1 = a2;
  return result;
}
