/*
 * XREFs of EtwpTiQueryVad @ 0x14061A1CC
 * Callers:
 *     EtwpTiVadQueryEventWriteCallback @ 0x14061A0D0 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1403FA9E0 (ZwQueryVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpTiQueryVad(__int64 a1, _KPROCESS *a2, PVOID *a3, unsigned int a4, char a5)
{
  int v8; // ebp
  unsigned int v9; // esi
  unsigned int v10; // edi
  PVOID *v11; // rbx
  char *v12; // r15
  NTSTATUS VirtualMemory; // eax
  PVOID PoolWithTag; // rax
  _OWORD v16[3]; // [rsp+30h] [rbp-78h] BYREF

  memset(v16, 0, sizeof(v16));
  if ( a2 == KeGetCurrentThread()->ApcState.Process )
  {
    v8 = 0;
  }
  else
  {
    KiStackAttachProcess(a2, 0, (__int64)v16);
    v8 = 1;
  }
  v9 = 0;
  v10 = 0;
  if ( a4 )
  {
    v11 = (PVOID *)(a1 + 56);
    v12 = (char *)(a1 + 8);
    do
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        *a3,
                        MemoryRegionInformation,
                        v12,
                        0x30uLL,
                        0LL);
      *((_DWORD *)v11 - 14) = VirtualMemory;
      if ( VirtualMemory >= 0 )
      {
        v9 |= 1 << v10;
        if ( a5 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E734954u);
          *v11 = PoolWithTag;
          if ( !PoolWithTag
            || ZwQueryVirtualMemory(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 *a3,
                 MemoryMappedFilenameInformation,
                 PoolWithTag,
                 0x200uLL,
                 0LL) >= 0 )
          {
            goto LABEL_9;
          }
          ExFreePoolWithTag(*v11, 0);
        }
        *v11 = 0LL;
      }
LABEL_9:
      ++v10;
      v12 += 64;
      ++a3;
      v11 += 8;
    }
    while ( v10 < a4 );
  }
  if ( v8 )
    KiUnstackDetachProcess((__int64)v16, 0LL);
  return v9;
}
