/*
 * XREFs of WbAllocateUserMemory @ 0x14065BCCC
 * Callers:
 *     WbCreateHeapExecutedBlock @ 0x14065CA04 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     WbFreeMemoryBlock @ 0x14065BC4C (WbFreeMemoryBlock.c)
 *     sub_14065BF18 @ 0x14065BF18 (sub_14065BF18.c)
 *     sub_1406D6C54 @ 0x1406D6C54 (sub_1406D6C54.c)
 *     WbAllocateMemoryBlock @ 0x1406EB6D4 (WbAllocateMemoryBlock.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  struct _KTHREAD *v18; // rax
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // rdi
  char v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  PVOID *BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v27[3]; // [rsp+38h] [rbp-18h] BYREF

  BaseAddress = 0LL;
  v27[0] = 0LL;
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
      v8 = sub_14065BF18(v6, a2, v27);
      if ( v8 < 0 )
        goto LABEL_29;
      if ( !v27[0] && (unsigned int)++v12 < *(_DWORD *)(a1 + 188) )
        continue;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  v16 = v27[0];
  if ( v27[0] )
  {
    v7 = BaseAddress;
  }
  else
  {
    v8 = WbAllocateMemoryBlock(0LL, &BaseAddress);
    if ( v8 < 0 )
      goto LABEL_29;
    v7 = BaseAddress;
    v8 = sub_14065BF18(BaseAddress, a2, v27);
    if ( v8 < 0 )
      goto LABEL_17;
    v18 = KeGetCurrentThread();
    --v18->SpecialApcDisable;
    v19 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
    v21 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v19, (ULONG_PTR)v10);
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
    v8 = sub_1406D6C54((int)a1 + 184, (_DWORD)BaseAddress, v20, (unsigned int)BaseAddress[4], 8, -1);
    v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v22 & 2) != 0 && (v22 & 4) == 0 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v23, v24, v25);
    if ( v8 < 0 )
    {
LABEL_29:
      v7 = BaseAddress;
      goto LABEL_17;
    }
    v6 = BaseAddress;
    v7 = 0LL;
    v16 = v27[0];
  }
  if ( a3 )
    *a3 = v16;
  if ( a4 )
    *a4 = v16 + (_BYTE *)*v6 - (_BYTE *)v6[4];
LABEL_17:
  WbFreeMemoryBlock(v7);
  return (unsigned int)v8;
}
