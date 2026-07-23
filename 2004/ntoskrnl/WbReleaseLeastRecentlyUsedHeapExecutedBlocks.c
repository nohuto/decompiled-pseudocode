/*
 * XREFs of WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406F8B48
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x140619C48 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     sub_140619DB0 @ 0x140619DB0 (sub_140619DB0.c)
 *     sub_1406F8CC4 @ 0x1406F8CC4 (sub_1406F8CC4.c)
 */

void __fastcall WbReleaseLeastRecentlyUsedHeapExecutedBlocks(__int64 a1, int a2)
{
  int v2; // r15d
  unsigned __int64 *v3; // rdi
  _QWORD *v5; // r14
  unsigned __int64 *v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  char v15; // al
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  if ( a2 > 0 )
  {
    v2 = a2;
    v3 = (unsigned __int64 *)(a1 + 80);
    v5 = (_QWORD *)(a1 + 64);
    v6 = (unsigned __int64 *)(a1 + 48);
    do
    {
      CurrentThread = KeGetCurrentThread();
      --v2;
      --CurrentThread->SpecialApcDisable;
      v8 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        ExfAcquirePushLockExclusiveEx(v6, v8, (ULONG_PTR)v6);
      if ( v9 )
        *(_BYTE *)(v9 + 26) |= 1u;
      v10 = KeAbPreAcquire((ULONG_PTR)v3, 0LL, 0);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        ExfAcquirePushLockExclusiveEx(v3, v10, (ULONG_PTR)v3);
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      v12 = (_QWORD *)*v5;
      if ( (_QWORD *)*v5 == v5 )
      {
        v12 = 0LL;
      }
      else
      {
        if ( (_QWORD *)v12[1] != v5 || (v13 = *v12, *(_QWORD **)(*v12 + 8LL) != v12) )
          __fastfail(3u);
        *v5 = v13;
        *(_QWORD *)(v13 + 8) = v5;
      }
      v14 = 0LL;
      if ( v12 )
      {
        *((_DWORD *)v12 + 4) &= ~1u;
        v14 = (__int64)v12;
      }
      v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v3);
      KeAbPostRelease((ULONG_PTR)v3);
      if ( v14 )
      {
        v16 = *(_QWORD *)(v14 + 48);
        v18 = 0LL;
        if ( (int)sub_1406F8CC4((int)a1 + 8, v16, 8, -1, (__int64)&v18) >= 0 )
          sub_140619DB0(a1, v18);
      }
      v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v6);
      KeAbPostRelease((ULONG_PTR)v6);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      if ( !v14 )
        break;
      sub_140619DB0(a1, v14);
    }
    while ( v2 > 0 );
  }
}
