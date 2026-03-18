/*
 * XREFs of CmpDoFileFlush @ 0x140258000
 * Callers:
 *     CmpFileFlush @ 0x1406E10CC (CmpFileFlush.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x14041C0C0 (ZwFlushBuffersFile.c)
 */

NTSTATUS __fastcall CmpDoFileFlush(void *a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  if ( BYTE1(NlsMbOemCodePageTag) )
    return 0;
  result = ZwFlushBuffersFile(a1, &IoStatusBlock);
  if ( result < 0 )
  {
    CmRegistryIODebug = 4;
    qword_140D3CE08 = (__int64)a1;
    dword_140D3CE10 = result;
  }
  return result;
}
