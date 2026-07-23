/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x1405E9CA4
 * Callers:
 *     IopDeleteFile @ 0x14071AB40 (IopDeleteFile.c)
 * Callees:
 *     IoGetFileObjectFilterContext @ 0x14021FECC (IoGetFileObjectFilterContext.c)
 *     IoChangeFileObjectFilterContext @ 0x14036190C (IoChangeFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlPTeardownPerFileObjectContexts(__int64 a1)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  IoGetFileObjectFilterContext(a1, &P, 0);
  if ( P )
  {
    IoChangeFileObjectFilterContext(a1);
    ExFreePoolWithTag(P, 0);
  }
}
