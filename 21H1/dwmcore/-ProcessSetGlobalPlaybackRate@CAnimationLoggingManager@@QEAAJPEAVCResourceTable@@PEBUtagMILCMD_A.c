/*
 * XREFs of ?ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETGLOBALPLAYBACKRATE@@@Z @ 0x1800CBD10
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEAVCChannelContext@@$$V@?$unordered_map@PEAVCChannelContext@@MU?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@_N@1@AEBQEAVCChannelContext@@@Z @ 0x1800B38A0 (--$_Try_emplace@AEBQEAVCChannelContext@@$$V@-$unordered_map@PEAVCChannelContext@@MU-$hash@PEAVCC.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetGlobalPlaybackRate(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_SETGLOBALPLAYBACKRATE *a3)
{
  int v3; // xmm6_4
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  struct CResourceTable *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  v6 = (struct CResourceTable *)*((_QWORD *)this + 6);
  v3 = *((_DWORD *)a3 + 2);
  std::unordered_map<CChannelContext *,float>::_Try_emplace<CChannelContext * const &,>(
    (_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 272LL) + 432LL),
    (__int64)&v5,
    &v6);
  *(_DWORD *)(v5 + 24) = v3;
  return 0LL;
}
