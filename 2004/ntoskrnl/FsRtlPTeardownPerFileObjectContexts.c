/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x1406DBE80
 * Callers:
 *     IopDeleteFile @ 0x140678F40 (IopDeleteFile.c)
 * Callees:
 *     IoChangeFileObjectFilterContext @ 0x14022896C (IoChangeFileObjectFilterContext.c)
 *     IoGetFileObjectFilterContext @ 0x14033324C (IoGetFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
