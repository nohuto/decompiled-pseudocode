/*
 * XREFs of EtwpTiQueryVad @ 0x1406BAEFC
 * Callers:
 *     EtwpTiVadQueryEventWriteCallback @ 0x1406BAE00 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1403FA800 (ZwQueryVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpTiQueryVad(__int64 a1, _KPROCESS *a2, PVOID *a3, _DWORD *a4, char a5)
{
  unsigned int v5; // r12d
  int v8; // ebp
  unsigned int v9; // esi
  unsigned int v10; // edi
  PVOID *v11; // rbx
  char *v12; // r15
  NTSTATUS VirtualMemory; // eax
  PVOID PoolWithTag; // rax
  _OWORD v16[3]; // [rsp+30h] [rbp-78h] BYREF

  v5 = (unsigned int)a4;
  memset(v16, 0, sizeof(v16));
  if ( a2 == KeGetCurrentThread()->ApcState.Process )
  {
    v8 = 0;
  }
  else
  {
    KiStackAttachProcess(a2, 0LL, (__int64)v16, a4);
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
                        *a3,
                        (MEMORY_INFORMATION_CLASS)3,
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
                 (MEMORY_INFORMATION_CLASS)2,
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
    while ( v10 < v5 );
  }
  if ( v8 )
    KiUnstackDetachProcess((__int64)v16, 0);
  return v9;
}
