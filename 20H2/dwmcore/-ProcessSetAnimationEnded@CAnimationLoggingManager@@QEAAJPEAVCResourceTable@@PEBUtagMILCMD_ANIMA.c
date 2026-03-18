/*
 * XREFs of ?ProcessSetAnimationEnded@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED@@@Z @ 0x1801B09AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AB870 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x1801AFB58 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetAnimationEnded(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED *a3)
{
  struct CResource *ResourceWithoutType; // rax
  __int64 v4; // r8
  unsigned int v5; // r9d
  wchar_t *v6; // r11

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(
                          *(CResourceTable **)(*((_QWORD *)this + 6) + 24LL),
                          *((_DWORD *)a3 + 2));
  CAnimationLoggingManager::LogAnimationEnded(
    v6,
    *(_QWORD *)(*((_QWORD *)v6 + 2) + 352LL),
    ResourceWithoutType,
    v5,
    *(_DWORD *)(v4 + 12),
    *(_DWORD *)(v4 + 16));
  return 0LL;
}
