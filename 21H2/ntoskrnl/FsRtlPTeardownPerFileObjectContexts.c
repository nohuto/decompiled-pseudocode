/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x14068A814
 * Callers:
 *     IopDeleteFile @ 0x140703760 (IopDeleteFile.c)
 * Callees:
 *     IoGetFileObjectFilterContext @ 0x1402A2A8C (IoGetFileObjectFilterContext.c)
 *     IoChangeFileObjectFilterContext @ 0x140356BBC (IoChangeFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
