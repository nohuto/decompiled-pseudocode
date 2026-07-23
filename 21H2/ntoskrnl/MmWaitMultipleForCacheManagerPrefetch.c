/*
 * XREFs of MmWaitMultipleForCacheManagerPrefetch @ 0x1403046D0
 * Callers:
 *     CcAsyncReadWorker @ 0x1403B7AC0 (CcAsyncReadWorker.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1403062D8 (MmWaitForCacheManagerPrefetch.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmWaitMultipleForCacheManagerPrefetch(__int64 a1, unsigned int a2, void *a3)
{
  __int64 v3; // rbp
  unsigned int v5; // esi
  PVOID *Pool; // rbx
  struct _KWAIT_BLOCK *WaitBlockArray; // r15
  __int64 v9; // rdi
  PVOID *v10; // r8
  __int64 *v11; // rcx
  __int64 *v12; // r11
  __int64 *v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // r10
  __int64 **v16; // r10
  _QWORD *v18; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-118h] BYREF
  __int128 v20; // [rsp+50h] [rbp-108h]
  struct _KWAIT_BLOCK v21; // [rsp+60h] [rbp-F8h] BYREF

  v3 = a2 + 1;
  if ( !a3 )
    v3 = a2;
  v5 = a2;
  *(_OWORD *)Object = 0LL;
  v20 = 0LL;
  if ( a2 > 3 )
    Pool = (PVOID *)MiAllocatePool(64, 56LL * (unsigned int)v3, 0x6157694Du);
  else
    Pool = 0LL;
  if ( Pool )
  {
    WaitBlockArray = (struct _KWAIT_BLOCK *)&Pool[v3];
  }
  else
  {
    Pool = Object;
    WaitBlockArray = &v21;
    if ( v5 > 3 )
      v5 = 3;
  }
  do
  {
    v9 = 0LL;
    if ( v5 )
    {
      v10 = Pool;
      while ( 2 )
      {
        v11 = *(__int64 **)((char *)v10 + a1 - (_QWORD)Pool);
        while ( 1 )
        {
          v12 = (__int64 *)*v11;
          if ( *((_DWORD *)v11 + 28) != *((_DWORD *)v11 + 27) )
          {
            v13 = v11 + 15;
            while ( 1 )
            {
              v14 = (__int64 *)*v13;
              if ( !*(_DWORD *)(*v13 + 36) )
                break;
              if ( (__int64 *)v14[1] != v13
                || (v15 = *v14, *(__int64 **)(*v14 + 8) != v14)
                || (*v13 = v15, *(_QWORD *)(v15 + 8) = v13, v16 = (__int64 **)v11[16], *v16 != v13) )
              {
                __fastfail(3u);
              }
              *v14 = (__int64)v13;
              v14[1] = (__int64)v16;
              *v16 = v14;
              v11[16] = (__int64)v14;
              if ( ++*((_DWORD *)v11 + 28) == *((_DWORD *)v11 + 27) )
                goto LABEL_18;
            }
            v18 = v14 + 4;
            if ( v18 )
              break;
          }
LABEL_18:
          v11 = v12;
          if ( !v12 )
          {
            MmWaitForCacheManagerPrefetch(*(PVOID *)(a1 + 8 * v9));
            if ( Pool != Object )
              ExFreePoolWithTag(Pool, 0);
            return (unsigned int)v9;
          }
        }
        *v10 = v18;
        v9 = (unsigned int)(v9 + 1);
        ++v10;
        if ( (unsigned int)v9 < v5 )
          continue;
        break;
      }
    }
    if ( a3 )
    {
      Pool[v9] = a3;
      LODWORD(v9) = v9 + 1;
    }
  }
  while ( KeWaitForMultipleObjects(v9, Pool, WaitAny, WrVirtualMemory, 0, 0, 0LL, WaitBlockArray) != (_DWORD)v9 - 1
       || !a3 );
  if ( Pool != Object )
    ExFreePoolWithTag(Pool, 0);
  return (unsigned int)(v3 - 1);
}
