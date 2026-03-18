/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x14071CD2C
 * Callers:
 *     IopDeleteFile @ 0x14072B630 (IopDeleteFile.c)
 * Callees:
 *     IoGetFileObjectFilterContext @ 0x1402A3610 (IoGetFileObjectFilterContext.c)
 *     IoChangeFileObjectFilterContext @ 0x1402A3984 (IoChangeFileObjectFilterContext.c)
 *     ExCleanupAutoExpandPushLock @ 0x1402A3D50 (ExCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlPTeardownPerFileObjectContexts(__int64 a1)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  IoGetFileObjectFilterContext(a1, &P, 0);
  if ( P )
  {
    IoChangeFileObjectFilterContext(a1);
    ExCleanupAutoExpandPushLock((__int64)P);
    ExFreePoolWithTag(P, 0);
  }
}
