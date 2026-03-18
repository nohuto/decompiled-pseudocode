/*
 * XREFs of ?ProcessSetCompositorComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@PEBXI@Z @ 0x180041268
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@PEBXI@Z @ 0x1800412A4 (--$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@@@YAJAEAV-$basi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetCompositorComment(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT *a3,
        const void *a4,
        unsigned int a5)
{
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx

  v5 = SetCommentHelper<tagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT const>((char *)this + 152, a3, a4, a5);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x114u, 0LL);
  return v7;
}
