/*
 * XREFs of WbAllocateUserMemory @ 0x14065D5D8
 * Callers:
 *     WbCreateHeapExecutedBlock @ 0x14065E314 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140241E40 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     sub_14065D248 @ 0x14065D248 (sub_14065D248.c)
 *     WbFreeMemoryBlock @ 0x14065D558 (WbFreeMemoryBlock.c)
 *     sub_14065D824 @ 0x14065D824 (sub_14065D824.c)
 *     WbAllocateMemoryBlock @ 0x1406E1924 (WbAllocateMemoryBlock.c)
 */

__int64 __fastcall WbAllocateUserMemory(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  PVOID *v6; // r14
  PVOID *v7; // rdi
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // rbx
  __int64 v11; // rdi
  int v12; // edi
  __int64 v13; // rcx
  struct _KTHREAD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdi
  char v19; // r15
  PVOID *BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v21[3]; // [rsp+38h] [rbp-18h] BYREF

  BaseAddress = 0LL;
  v21[0] = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( a2 > 0x10000 )
  {
    v8 = -1073741811;
    goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v10 = (unsigned __int64 *)(a1 + 224);
  v11 = KeAbPreAcquire(a1 + 224, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, v11, (ULONG_PTR)v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = 0;
  if ( *(_DWORD *)(a1 + 188) )
  {
    while ( 1 )
    {
      v6 = *(PVOID **)((unsigned int)(v12 * *(_DWORD *)(a1 + 184)) + *(_QWORD *)(a1 + 200));
      v8 = sub_14065D824(v6, a2, v21);
      if ( v8 < 0 )
        goto LABEL_29;
      if ( !v21[0] && (unsigned int)++v12 < *(_DWORD *)(a1 + 188) )
        continue;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v13 = v21[0];
  if ( v21[0] )
  {
    v7 = BaseAddress;
  }
  else
  {
    v8 = WbAllocateMemoryBlock(0LL, &BaseAddress);
    if ( v8 < 0 )
      goto LABEL_29;
    v7 = BaseAddress;
    v8 = sub_14065D824(BaseAddress, a2, v21);
    if ( v8 < 0 )
      goto LABEL_17;
    v15 = KeGetCurrentThread();
    --v15->SpecialApcDisable;
    v16 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v16, (ULONG_PTR)v10);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    v8 = sub_14065D248(a1 + 184, (__int64)BaseAddress, v17, (int)BaseAddress[4], 8, -1);
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v8 < 0 )
    {
LABEL_29:
      v7 = BaseAddress;
      goto LABEL_17;
    }
    v6 = BaseAddress;
    v7 = 0LL;
    v13 = v21[0];
  }
  if ( a3 )
    *a3 = v13;
  if ( a4 )
    *a4 = v13 + (_BYTE *)*v6 - (_BYTE *)v6[4];
LABEL_17:
  WbFreeMemoryBlock(v7);
  return (unsigned int)v8;
}
