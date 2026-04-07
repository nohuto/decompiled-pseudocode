/*
 * XREFs of ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800BC54C
 * Callers:
 *     ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z @ 0x1800BB638 (-AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z.c)
 *     ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800BC230 (-RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003EF44 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800458CC (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?HasCasters@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA_NXZ @ 0x1800BBDBC (-HasCasters@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA_NXZ.c)
 *     ?SetReceiver@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z @ 0x1800BC410 (-SetReceiver@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUIVisual@Composition@U.c)
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800BC6B0 (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

__int64 __fastcall CProjectedShadowScene::UpdateProjectedShadowReceiverVisual(
        CProjectedShadowScene::CProjectedShadowSceneInstance **this)
{
  int v2; // eax
  int v3; // edi
  __int64 v4; // rdx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::IVisual *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(this[3])
    && !CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(this[4])
    || *((_BYTE *)this + 64) )
  {
    if ( CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(this[3])
      || CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(this[4])
      || !*((_BYTE *)this + 64) )
    {
      return 0LL;
    }
    v3 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(this[3], 0LL);
    if ( v3 >= 0 )
    {
      v3 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(this[4], 0LL);
      if ( v3 >= 0 )
      {
        v3 = CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual((CProjectedShadowScene *)this);
        if ( v3 >= 0 )
        {
          *((_BYTE *)this + 64) = 0;
          return 0LL;
        }
        v6 = 182LL;
      }
      else
      {
        v6 = 180LL;
      }
    }
    else
    {
      v6 = 179LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v8 = 0LL;
  v2 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
         this + 5,
         (__int64 *)&v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 168LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v2);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v8);
    return (unsigned int)v3;
  }
  v2 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(this[3], v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 169LL;
    goto LABEL_12;
  }
  v2 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(this[4], v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 170LL;
    goto LABEL_12;
  }
  *((_BYTE *)this + 64) = 1;
  v2 = CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual((CProjectedShadowScene *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 174LL;
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v8);
  return 0LL;
}
