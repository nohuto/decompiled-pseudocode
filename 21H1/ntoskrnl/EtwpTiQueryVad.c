/*
 * XREFs of EtwpTiQueryVad @ 0x1406E523C
 * Callers:
 *     EtwpTiVadQueryEventWriteCallback @ 0x1406E5140 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1403F2790 (ZwQueryVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpTiQueryVad(__int64 a1, _KPROCESS *a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // r12d
  PVOID *v6; // r14
  int v8; // ebp
  unsigned int v9; // esi
  unsigned int v10; // edi
  PVOID *v11; // rbx
  char *v12; // r15
  NTSTATUS VirtualMemory; // eax
  PVOID PoolWithTag; // rax
  _OWORD v16[3]; // [rsp+30h] [rbp-78h] BYREF

  v5 = a4;
  memset(v16, 0, sizeof(v16));
  v6 = (PVOID *)a3;
  if ( a2 == KeGetCurrentThread()->ApcState.Process )
  {
    v8 = 0;
  }
  else
  {
    KiStackAttachProcess(a2, 0LL, (__int64)v16, (_DWORD *)a4);
    v8 = 1;
  }
  v9 = 0;
  v10 = 0;
  if ( v5 )
  {
    v11 = (PVOID *)(a1 + 56);
    v12 = (char *)(a1 + 8);
    do
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        *v6,
                        MemoryRegionInformation,
                        v12,
                        0x30uLL,
                        0LL);
      *((_DWORD *)v11 - 14) = VirtualMemory;
      if ( VirtualMemory >= 0 )
      {
        a4 = 1LL;
        v9 |= 1 << v10;
        if ( a5 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E734954u);
          *v11 = PoolWithTag;
          a4 = (__int64)PoolWithTag;
          if ( !PoolWithTag
            || ZwQueryVirtualMemory(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 *v6,
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
      ++v6;
      v11 += 8;
    }
    while ( v10 < v5 );
  }
  if ( v8 )
    KiUnstackDetachProcess((__int64)v16, 0LL, a3, (_DWORD *)a4);
  return v9;
}
