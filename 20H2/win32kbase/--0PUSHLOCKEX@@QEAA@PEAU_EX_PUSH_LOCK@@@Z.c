/*
 * XREFs of ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00626E0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C004A4E0 (GreSetDCOwnerEx.c)
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00620F8 (DestroyProcessInfo.c)
 *     EngFreeUserMem @ 0x1C0063C10 (EngFreeUserMem.c)
 *     EngAllocUserMemEx @ 0x1C0063CE8 (EngAllocUserMemEx.c)
 *     GreSfmGetNotificationTokens @ 0x1C0063E50 (GreSfmGetNotificationTokens.c)
 *     ?AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0065370 (-AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0065C40 (-RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

PUSHLOCKEX *__fastcall PUSHLOCKEX::PUSHLOCKEX(PUSHLOCKEX *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  }
  return this;
}
