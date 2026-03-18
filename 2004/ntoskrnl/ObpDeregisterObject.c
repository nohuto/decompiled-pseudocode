/*
 * XREFs of ObpDeregisterObject @ 0x1408DAD7C
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObpProcessRemoveObjectQueue @ 0x140698AB0 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     EtwTraceObject @ 0x140933024 (EtwTraceObject.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDeregisterObject(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbp
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  __int64 v6; // rax

  if ( (xmmword_140CFC490 & 0x80u) != 0LL )
    EtwTraceObject(4401LL, a1);
  if ( (*(_BYTE *)(a1 + 25) & 3) == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
    if ( (ObpTraceFlags & 0x73) == 0 )
      goto LABEL_15;
    v4 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
    v5 = (_QWORD *)*((_QWORD *)ObpObjectTable + v4);
    if ( !v5 )
      goto LABEL_15;
    do
    {
      if ( *v5 == a1 )
        break;
      v3 = v5;
      v5 = (_QWORD *)v5[1];
    }
    while ( v5 );
    if ( v5 )
    {
      v6 = v5[1];
      if ( v3 )
        v3[1] = v6;
      else
        *((_QWORD *)ObpObjectTable + v4) = v6;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(v5, 0x7452624Fu);
    }
    else
    {
LABEL_15:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
}
