/*
 * XREFs of CmpDoFileFlush @ 0x1402042CC
 * Callers:
 *     CmpFileFlush @ 0x1405DAEC8 (CmpFileFlush.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x1403F8AD0 (ZwFlushBuffersFile.c)
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
    qword_140D2EA98 = (__int64)a1;
    dword_140D2EAA0 = result;
  }
  return result;
}
