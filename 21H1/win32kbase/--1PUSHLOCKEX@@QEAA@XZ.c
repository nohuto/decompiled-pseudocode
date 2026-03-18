/*
 * XREFs of ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C006E5D0
 * Callers:
 *     GreSfmGetNotificationTokens @ 0x1C002E8F0 (GreSfmGetNotificationTokens.c)
 *     EngAllocUserMemEx @ 0x1C0030108 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C00313A0 (EngFreeUserMem.c)
 *     ?AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C003CB10 (-AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C003E750 (-RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     DestroyProcessInfo @ 0x1C006B620 (DestroyProcessInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
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
