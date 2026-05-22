/*
 * XREFs of ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18002C2EC
 * Callers:
 *     ?FeedPositionAnimationData@DWMCursor@@AEAAJXZ @ 0x180021054 (-FeedPositionAnimationData@DWMCursor@@AEAAJXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180027504 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@@Z @ 0x1800F8F9C (-FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@@Z.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1800FAC38 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z @ 0x1800FDB00 (-FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z.c)
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FE980 (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     _lambda_ba6101031141f0d6e8e74a4c358feff2_::operator() @ 0x18013E39C (_lambda_ba6101031141f0d6e8e74a4c358feff2_--operator().c)
 *     _lambda_e899d24a1372ab43d53191ccbd314951_::operator() @ 0x18013E538 (_lambda_e899d24a1372ab43d53191ccbd314951_--operator().c)
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x18013EE30 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x18013EFD8 (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 *     ?FeedAnimationData@SystemCursorShape@@AEAAJXZ @ 0x18013F8C4 (-FeedAnimationData@SystemCursorShape@@AEAAJXZ.c)
 *     ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x18019B6D4 (-CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     ?CreateAnimationForProcess@DWMCursor@@QEAAJKPEA_K0@Z @ 0x18019C5B8 (-CreateAnimationForProcess@DWMCursor@@QEAAJKPEA_K0@Z.c)
 *     ?FeedOrientationAnimationData@DWMCursor@@AEAAJXZ @ 0x18019C934 (-FeedOrientationAnimationData@DWMCursor@@AEAAJXZ.c)
 * Callees:
 *     ?Create@AnimationDataProvider@@SA?AV?$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ @ 0x18002C334 (-Create@AnimationDataProvider@@SA-AV-$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

struct IAnimationDataProvider *ISMStatics::GetAnimationDataProvider(void)
{
  struct IAnimationDataProvider *v0; // rcx
  struct IAnimationDataProvider **v1; // rax
  __int64 v2; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = ISMStatics::s_animationDataProvider;
  if ( !ISMStatics::s_animationDataProvider )
  {
    v1 = (struct IAnimationDataProvider **)AnimationDataProvider::Create(&v4);
    v0 = *v1;
    *v1 = 0LL;
    v2 = v4;
    ISMStatics::s_animationDataProvider = v0;
    if ( v4 )
    {
      v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      return ISMStatics::s_animationDataProvider;
    }
  }
  return v0;
}
