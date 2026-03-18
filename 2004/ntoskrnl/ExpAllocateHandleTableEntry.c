/*
 * XREFs of ExpAllocateHandleTableEntry @ 0x1405E84B0
 * Callers:
 *     ExCreateHandleEx @ 0x1405E83C0 (ExCreateHandleEx.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1405D0C04 (ExpAllocateHandleTableEntrySlow.c)
 */

__int64 __fastcall ExpAllocateHandleTableEntry(__int64 a1, _QWORD *a2)
{
  char v2; // al
  unsigned int Number; // r12d
  unsigned int v6; // ebp
  unsigned int v7; // esi
  unsigned int v8; // edi
  __int64 v9; // rbx
  unsigned int v10; // eax
  char HandleTableEntrySlow; // di
  __int64 result; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // [rsp+50h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 44);
  if ( (v2 & 4) == 0 )
  {
    if ( (v2 & 1) != 0 )
      Number = 0;
    else
      Number = KeGetPcr()->Prcb.Number;
    v6 = ExpFreeListCount;
    do
    {
      v7 = 0;
      v16 = *(_DWORD *)a1;
      v8 = Number;
      do
      {
        v9 = a1 + ((v8 + 1LL) << 6);
        if ( *(_QWORD *)(v9 + 8) )
        {
          ExAcquirePushLockExclusiveEx(a1 + ((v8 + 1LL) << 6), 0LL);
          v13 = *(_QWORD *)(v9 + 8);
          if ( v13 )
          {
            v14 = *(_QWORD *)(v13 + 8);
            *(_QWORD *)(v9 + 8) = v14;
            if ( !v14 )
              *(_QWORD *)(v9 + 16) = 0LL;
            v15 = ++*(_DWORD *)(v9 + 24);
            if ( v15 > *(_DWORD *)(v9 + 28) )
              *(_DWORD *)(v9 + 28) = v15;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + ((v8 + 1LL) << 6)));
          KeAbPostRelease(a1 + ((v8 + 1LL) << 6));
          if ( v13 )
          {
            result = v13;
            *a2 = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFF000uLL) + 8)
                + 4 * ((__int64)(v13 - (v13 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
            return result;
          }
        }
        v10 = v8 + 1;
        ++v7;
        v8 = 0;
        if ( v10 != v6 )
          v8 = v10;
      }
      while ( v7 < v6 );
      HandleTableEntrySlow = 1;
      ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
      if ( v16 == *(_DWORD *)a1 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow((unsigned int *)a1, a1 + ((Number + 1LL) << 6));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
      KeAbPostRelease(a1 + 56);
    }
    while ( HandleTableEntrySlow );
  }
  return 0LL;
}
