/*
 * XREFs of _PopInternalError @ 0x1405638A8
 * Callers:
 *     PopWriteHiberPages @ 0x140993EBC (PopWriteHiberPages.c)
 *     PopSaveHiberContext @ 0x1409967A0 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140996BB4 (PopCreateDumpMdl.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
