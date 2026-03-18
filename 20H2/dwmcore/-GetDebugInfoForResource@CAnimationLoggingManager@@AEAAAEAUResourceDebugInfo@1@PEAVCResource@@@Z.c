/*
 * XREFs of ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180041F08
 * Callers:
 *     ?ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x180041BE4 (-ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOG.c)
 *     ?ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETDIAGNOSTICITEMID@@@Z @ 0x1801B0A00 (-ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANI.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEAVCResource@@$$V@?$unordered_map@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@5@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVCResource@@@Z @ 0x180040D48 (--$_Try_emplace@AEBQEAVCResource@@$$V@-$unordered_map@PEAVCResource@@UResourceDebugInfo@CAnimati.c)
 *     ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180041F68 (-TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@.c)
 */

struct CAnimationLoggingManager::ResourceDebugInfo *__fastcall CAnimationLoggingManager::GetDebugInfoForResource(
        CAnimationLoggingManager *this,
        struct CResource *a2)
{
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rdx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  struct CResource *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  DebugInfoForResource = CAnimationLoggingManager::TryGetDebugInfoForResource(this, a2);
  if ( !DebugInfoForResource )
  {
    std::unordered_map<CResource *,CAnimationLoggingManager::ResourceDebugInfo>::_Try_emplace<CResource * const &,>(
      (_QWORD *)this + 11,
      (__int64)v5,
      &v6);
    ++*((_DWORD *)this + 46);
    DebugInfoForResource = (struct CAnimationLoggingManager::ResourceDebugInfo *)(v5[0] + 24LL);
    *(_DWORD *)(v5[0] + 24LL) = *((_DWORD *)this + 46);
    *((_DWORD *)v6 + 8) |= 0x10u;
  }
  return DebugInfoForResource;
}
