/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x1405FE100
 * Callers:
 *     IopDeleteFile @ 0x1405FE150 (IopDeleteFile.c)
 * Callees:
 *     IoGetFileObjectFilterContext @ 0x14020B550 (IoGetFileObjectFilterContext.c)
 *     IoChangeFileObjectFilterContext @ 0x14029F890 (IoChangeFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlPTeardownPerFileObjectContexts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  IoGetFileObjectFilterContext(a1, &P, 0LL, a4);
  if ( P )
  {
    IoChangeFileObjectFilterContext(a1, (__int64)P);
    ExFreePoolWithTag(P, 0);
  }
}
