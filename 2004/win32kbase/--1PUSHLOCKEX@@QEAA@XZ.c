/*
 * XREFs of ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0071CB4
 * Callers:
 *     EngAllocUserMemEx @ 0x1C003E848 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C003FF60 (EngFreeUserMem.c)
 *     ?AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0049CF0 (-AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C004BC50 (-RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0078F74 (DestroyProcessInfo.c)
 *     GreSetDCOwnerEx @ 0x1C0090550 (GreSetDCOwnerEx.c)
 *     GreSfmGetNotificationTokens @ 0x1C00A48C0 (GreSfmGetNotificationTokens.c)
 * Callees:
 *     <none>
 */

void __fastcall PUSHLOCKEX::~PUSHLOCKEX(PUSHLOCKEX *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
}
