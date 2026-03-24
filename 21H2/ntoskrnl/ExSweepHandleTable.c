/*
 * XREFs of ExSweepHandleTable @ 0x1406045D0
 * Callers:
 *     ObKillProcess @ 0x1406034EC (ObKillProcess.c)
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x140607644 (ObInitProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140685788 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1406F11F0 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x1406F5660 (ObCloseHandleTableEntry.c)
 */

_QWORD *__fastcall ExSweepHandleTable(_KPROCESS *a1, __int64 a2, char a3, _DWORD *a4)
{
  char v4; // r13
  struct _KTHREAD *CurrentThread; // rbp
  int v9; // esi
  __int64 v10; // rbx
  signed __int64 *v11; // rdi
  signed __int64 v12; // r8
  bool v13; // al
  _QWORD *result; // rax
  int v15; // [rsp+20h] [rbp-88h]
  int v16; // [rsp+28h] [rbp-80h]
  __int128 v17; // [rsp+30h] [rbp-78h] BYREF
  __int128 v18; // [rsp+40h] [rbp-68h]
  __int128 v19; // [rsp+50h] [rbp-58h]

  v4 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    KiStackAttachProcess(a1, 0LL, (__int64)&v17, a4);
    v4 = 1;
  }
  v9 = 0;
  v10 = 4LL;
  --CurrentThread->KernelApcDisable;
LABEL_4:
  v11 = (signed __int64 *)ExpLookupHandleTableEntry(a2, v10);
  if ( v11 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        _m_prefetchw(v11);
        v12 = *v11;
        if ( (*v11 & 1) != 0 )
          break;
        if ( v12 )
        {
          ExpBlockOnLockedHandleEntry(a2, v11);
        }
        else
        {
LABEL_7:
          v10 += 4LL;
          v11 += 2;
          if ( (v10 & 0x3FF) == 0 )
          {
            v10 += 4LL;
            goto LABEL_4;
          }
        }
      }
      if ( v12 == _InterlockedCompareExchange64(v11, v12 - 1, v12) )
      {
        LOBYTE(v16) = 1;
        LOBYTE(v15) = a3;
        v13 = (int)ObCloseHandleTableEntry(
                     a2,
                     v11,
                     a1,
                     v10,
                     v15,
                     v16,
                     v17,
                     *((_QWORD *)&v17 + 1),
                     v18,
                     *((_QWORD *)&v18 + 1),
                     v19,
                     *((_QWORD *)&v19 + 1)) >= 0;
        --CurrentThread->KernelApcDisable;
        if ( v13 )
          ++v9;
        goto LABEL_7;
      }
    }
  }
  ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
  *(_DWORD *)(a2 + 88) -= v9;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 64);
  KeAbPostRelease(a2 + 64);
  *(_BYTE *)(a2 + 44) |= 4u;
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v4 == 1 )
    return (_QWORD *)KiUnstackDetachProcess((__int64)&v17, 0);
  return result;
}
