/*
 * XREFs of ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClientOwner@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1400067F0
 * Callers:
 *     ??$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z @ 0x140005674 (--$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClientOwner@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140005B90 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClientOwne.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IHotKeyClientOwner>::InternalAddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
}
