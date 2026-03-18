/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x1406BAB70
 * Callers:
 *     IopDeleteFile @ 0x140600E60 (IopDeleteFile.c)
 * Callees:
 *     IoChangeFileObjectFilterContext @ 0x1402819BC (IoChangeFileObjectFilterContext.c)
 *     IoGetFileObjectFilterContext @ 0x1402F63AC (IoGetFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
