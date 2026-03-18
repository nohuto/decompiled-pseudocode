/*
 * XREFs of ExSweepHandleTable @ 0x140631740
 * Callers:
 *     ObInitProcess @ 0x1406301EC (ObInitProcess.c)
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 *     ObKillProcess @ 0x140632108 (ObKillProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ExpLookupHandleTableEntry @ 0x140611EF0 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x1406160E0 (ObCloseHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406A5EF8 (ExpBlockOnLockedHandleEntry.c)
 */

_QWORD *__fastcall ExSweepHandleTable(_KPROCESS *a1, __int64 a2, unsigned __int8 a3)
{
  char v3; // r13
  struct _KTHREAD *CurrentThread; // rbp
  int v8; // esi
  ULONG_PTR v9; // rbx
  signed __int64 *v10; // rdi
  signed __int64 v11; // r8
  bool v12; // al
  _QWORD *result; // rax
  _OWORD v14[3]; // [rsp+30h] [rbp-78h] BYREF

  v3 = 0;
  memset(v14, 0, sizeof(v14));
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    KiStackAttachProcess(a1, 0, (__int64)v14);
    v3 = 1;
  }
  v8 = 0;
  v9 = 4LL;
  --CurrentThread->KernelApcDisable;
LABEL_4:
  v10 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a2, v9);
  if ( v10 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        _m_prefetchw(v10);
        v11 = *v10;
        if ( (*v10 & 1) != 0 )
          break;
        if ( v11 )
        {
          ExpBlockOnLockedHandleEntry(a2, v10);
        }
        else
        {
LABEL_7:
          v9 += 4LL;
          v10 += 2;
          if ( (v9 & 0x3FF) == 0 )
          {
            v9 += 4LL;
            goto LABEL_4;
          }
        }
      }
      if ( v11 == _InterlockedCompareExchange64(v10, v11 - 1, v11) )
      {
        v12 = (int)ObCloseHandleTableEntry(a2, v10, (ULONG_PTR)a1, v9, a3, 1) >= 0;
        --CurrentThread->KernelApcDisable;
        if ( v12 )
          ++v8;
        goto LABEL_7;
      }
    }
  }
  ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
  *(_DWORD *)(a2 + 88) -= v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 64));
  KeAbPostRelease(a2 + 64);
  *(_BYTE *)(a2 + 44) |= 4u;
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v3 == 1 )
    return (_QWORD *)KiUnstackDetachProcess((__int64)v14, 0);
  return result;
}
