/*
 * XREFs of ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18002C214
 * Callers:
 *     ?FeedPositionAnimationData@DWMCursor@@AEAAJXZ @ 0x180020DA4 (-FeedPositionAnimationData@DWMCursor@@AEAAJXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800272A4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@@Z @ 0x1800F93FC (-FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@@Z.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1800FB098 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z @ 0x1800FDF60 (-FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z.c)
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FEDE0 (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     _lambda_ba6101031141f0d6e8e74a4c358feff2_::operator() @ 0x18013E88C (_lambda_ba6101031141f0d6e8e74a4c358feff2_--operator().c)
 *     _lambda_e899d24a1372ab43d53191ccbd314951_::operator() @ 0x18013EA28 (_lambda_e899d24a1372ab43d53191ccbd314951_--operator().c)
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x18013F320 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x18013F4C8 (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 *     ?FeedAnimationData@SystemCursorShape@@AEAAJXZ @ 0x18013FDB4 (-FeedAnimationData@SystemCursorShape@@AEAAJXZ.c)
 *     ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x18019BB84 (-CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     ?CreateAnimationForProcess@DWMCursor@@QEAAJKPEA_K0@Z @ 0x18019CA68 (-CreateAnimationForProcess@DWMCursor@@QEAAJKPEA_K0@Z.c)
 *     ?FeedOrientationAnimationData@DWMCursor@@AEAAJXZ @ 0x18019CDE4 (-FeedOrientationAnimationData@DWMCursor@@AEAAJXZ.c)
 * Callees:
 *     ?Create@AnimationDataProvider@@SA?AV?$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ @ 0x18002C25C (-Create@AnimationDataProvider@@SA-AV-$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
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
