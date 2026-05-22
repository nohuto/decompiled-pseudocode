/*
 * XREFs of ?GetForegroundManager@ISMStatics@@SAPEAUIForegroundManager@@XZ @ 0x180012104
 * Callers:
 *     ?OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x180005330 (-OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18001F1C8 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?DeliverToInputService@NonBamoInputDeliveryServer@@UEAAJPEBUKeyboardEvent@@@Z @ 0x1801037C0 (-DeliverToInputService@NonBamoInputDeliveryServer@@UEAAJPEBUKeyboardEvent@@@Z.c)
 *     ?OnAutoForwardIdChanged@ActivationControllerBamoProxy@@MEAAJXZ @ 0x1801051A0 (-OnAutoForwardIdChanged@ActivationControllerBamoProxy@@MEAAJXZ.c)
 *     ?Activate@ActivatableEntityBamoPrincipal@@UEAAJPEAVBamoActivatableEntityStub@@@Z @ 0x180105890 (-Activate@ActivatableEntityBamoPrincipal@@UEAAJPEAVBamoActivatableEntityStub@@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VForegroundManager@@UIForegroundManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIForegroundManager@@@Z @ 0x180033574 (--$MakeAndInitialize@VForegroundManager@@UIForegroundManager@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

struct IForegroundManager *ISMStatics::GetForegroundManager(void)
{
  struct IForegroundManager *result; // rax
  int v1; // eax
  int v2; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IForegroundManager *v4; // [rsp+30h] [rbp+8h] BYREF

  result = ISMStatics::s_foregroundManager;
  if ( !ISMStatics::s_foregroundManager )
  {
    v4 = 0LL;
    v1 = Microsoft::WRL::Details::MakeAndInitialize<ForegroundManager,IForegroundManager,>(&v4);
    if ( v1 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x15,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
        (const char *)(unsigned int)v1,
        v2);
      __debugbreak();
    }
    result = v4;
    ISMStatics::s_foregroundManager = v4;
  }
  return result;
}
