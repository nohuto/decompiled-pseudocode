/*
 * XREFs of MiUnlockLoaderEntry @ 0x1402D94D8
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     MiSetPagingOfDriver @ 0x1402D8F30 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 *     MiFreeInitializationCode @ 0x14075F23C (MiFreeInitializationCode.c)
 *     MiLockdownSections @ 0x1407607D8 (MiLockdownSections.c)
 *     MiFindDriverNonPagedSections @ 0x140760A2C (MiFindDriverNonPagedSections.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockLoaderEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v3; // rdi
  struct _KTHREAD *v4; // rsi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r8d
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 104;
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 104);
      result = KeAbPostRelease(v3);
    }
    else
    {
      result = ExReleaseAutoExpandPushLockExclusive(a1 + 104, 0LL);
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 104);
    v4 = KeGetCurrentThread();
    if ( v3 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
    else
      SessionId = -1;
    _disable();
    p_Process = (char *)&v4[1].Process;
    v7 = 0LL;
    v8 = v3 & 0x7FFFFFFFFFFFFFFCLL;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v8
         || !p_Process[18]
         || (*(_DWORD *)p_Process & 1) != 0
         || *((_DWORD *)p_Process + 2) != SessionId )
    {
      v7 = (unsigned int)(v7 + 1);
      p_Process += 96;
      if ( (unsigned int)v7 >= 6 )
        goto LABEL_20;
    }
    p_Process[18] = 0;
    if ( p_Process )
    {
      if ( *(__int64 *)p_Process < 0 )
      {
        *p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process, v7, v8);
        _disable();
      }
      v9 = *((_DWORD *)p_Process + 22);
      *((_DWORD *)p_Process + 22) = 0;
      p_Process[17] = 0;
      *(_QWORD *)p_Process = 0LL;
      result = (unsigned __int8)p_Process[16];
      v4->AbEntrySummary |= 1 << result;
      _enable();
      if ( v9 )
        result = KiAbThreadRemoveBoostsSlow((ULONG_PTR)v4, v3, v9);
      goto LABEL_16;
    }
LABEL_20:
    result = *((unsigned int *)&v4->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v4, v3, SessionId, 0LL);
    _enable();
  }
LABEL_16:
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
