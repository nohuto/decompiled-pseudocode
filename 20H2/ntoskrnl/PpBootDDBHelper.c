/*
 * XREFs of PpBootDDBHelper @ 0x140799A00
 * Callers:
 *     PpInitializeBootDDB @ 0x140A51A80 (PpInitializeBootDDB.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     SdbInitDatabaseInMemory @ 0x14074F350 (SdbInitDatabaseInMemory.c)
 *     PnpLogEvent @ 0x1408A492C (PnpLogEvent.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpBootDDBHelper(void *Src, size_t Size, _QWORD *a3, __int64 *a4)
{
  unsigned int v6; // ebp
  PVOID PoolWithTag; // rax
  void *v9; // rbx
  __int64 inited; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  v6 = Size;
  if ( !(_DWORD)Size || !Src )
  {
    if ( (PiLoggedErrorEventsMask & 1) == 0 )
      PiLoggedErrorEventsMask |= 1u;
    return 3221225473LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x20207050u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, Src, v6);
    inited = SdbInitDatabaseInMemory((__int64)v9, v6);
    if ( inited )
    {
      *a3 = v9;
      *a4 = inited;
      return 0LL;
    }
    ExFreePoolWithTag(v9, 0);
    if ( (PiLoggedErrorEventsMask & 4) == 0 )
    {
      PiLoggedErrorEventsMask |= 4u;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"INIT DATABASE FAILED");
      PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
    }
    return 3221225473LL;
  }
  if ( (PiLoggedErrorEventsMask & 2) == 0 )
  {
    PiLoggedErrorEventsMask |= 2u;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"OUT OF MEMORY");
    PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
  }
  return 3221225626LL;
}
