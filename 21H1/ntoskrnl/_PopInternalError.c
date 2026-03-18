/*
 * XREFs of _PopInternalError @ 0x14055F878
 * Callers:
 *     PopWriteHiberPages @ 0x14098D6B4 (PopWriteHiberPages.c)
 *     PopSaveHiberContext @ 0x14098F9E0 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x14098FDF4 (PopCreateDumpMdl.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
