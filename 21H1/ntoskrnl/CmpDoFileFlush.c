/*
 * XREFs of CmpDoFileFlush @ 0x1402E0A00
 * Callers:
 *     CmpFileFlush @ 0x14068582C (CmpFileFlush.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x1403F2C90 (ZwFlushBuffersFile.c)
 */

NTSTATUS __fastcall CmpDoFileFlush(void *a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  if ( BYTE1(NlsMbCodePageTag) )
    return 0;
  result = ZwFlushBuffersFile(a1, &IoStatusBlock);
  if ( result < 0 )
  {
    CmRegistryIODebug = 4;
    qword_140D2DAA8 = (__int64)a1;
    dword_140D2DAB0 = result;
  }
  return result;
}
