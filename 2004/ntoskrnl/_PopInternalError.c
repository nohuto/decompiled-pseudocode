/*
 * XREFs of _PopInternalError @ 0x14055FEC8
 * Callers:
 *     PopWriteHiberPages @ 0x14098DECC (PopWriteHiberPages.c)
 *     PopSaveHiberContext @ 0x140990730 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140990B44 (PopCreateDumpMdl.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
