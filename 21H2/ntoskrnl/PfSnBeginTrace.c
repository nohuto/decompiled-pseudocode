/*
 * XREFs of PfSnBeginTrace @ 0x1406C859C
 * Callers:
 *     PfSnBeginScenario @ 0x14067A4B4 (PfSnBeginScenario.c)
 * Callees:
 *     PsGetThreadId @ 0x1402344C0 (PsGetThreadId.c)
 *     KeInitializeTimerEx @ 0x140266A80 (KeInitializeTimerEx.c)
 *     ExInitializePushLock @ 0x140266E80 (ExInitializePushLock.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     PfSnActivateTrace @ 0x1402A56F0 (PfSnActivateTrace.c)
 *     PfSnTraceBufferAllocate @ 0x1402A5820 (PfSnTraceBufferAllocate.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x140414300 (memset.c)
 *     PfSnCleanupTrace @ 0x1406A6CAC (PfSnCleanupTrace.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginTrace(_OWORD *a1, int a2, void *a3, struct _KTHREAD *a4, int a5, __int64 *a6)
{
  __int64 v8; // r12
  PVOID PoolWithTag; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int16 v13; // ax
  __int128 v14; // xmm1
  char *v15; // rax
  int v16; // ecx
  __int64 *v17; // rax
  __int64 **v18; // rcx
  int v19; // ebx

  v8 = a2;
  if ( PfSnNumActiveTraces >= (unsigned int)dword_140C50188 )
  {
    return (unsigned int)-1073741618;
  }
  else if ( FsRtlpVolumeStartupApplicationsComplete )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x258uLL, 0x54506343u);
    v11 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x258uLL);
      *(_DWORD *)v11 = 1128485697;
      KeInitializeTimerEx((PKTIMER)(v11 + 136), NotificationTimer);
      v12 = v11 + 104;
      *(_QWORD *)(v11 + 112) = v11 + 104;
      *(_QWORD *)(v11 + 104) = v11 + 104;
      *(_QWORD *)(v11 + 128) = 0LL;
      *(_DWORD *)(v11 + 456) = -1073741779;
      *(_QWORD *)(v11 + 464) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v11 + 520) = 0LL;
      *(_QWORD *)(v11 + 528) = 0LL;
      *(_QWORD *)(v11 + 272) = 0LL;
      KeInitializeDpc((PRKDPC)(v11 + 208), (PKDEFERRED_ROUTINE)PfSnTraceTimerRoutine, (PVOID)v11);
      ExInitializePushLock((PKSPIN_LOCK)(v11 + 360));
      ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v11 + 360));
      ObfReferenceObjectWithTag(a3, 0x73576650u);
      *(_QWORD *)(v11 + 352) = a3;
      *(_QWORD *)(v11 + 368) = 0LL;
      *(_QWORD *)(v11 + 384) = PfSnEndTraceWorkerThreadRoutine;
      *(_QWORD *)(v11 + 392) = v11;
      *(_DWORD *)(v11 + 400) = 0;
      v13 = *(_WORD *)(v11 + 486);
      *(_OWORD *)(v11 + 24) = *a1;
      *(_OWORD *)(v11 + 40) = a1[1];
      *(_OWORD *)(v11 + 56) = a1[2];
      v14 = a1[3];
      *(_WORD *)(v11 + 486) = v13 & 0xFFFE | (a5 != 0);
      v15 = (char *)&unk_140C50168 + 16 * v8;
      *(_DWORD *)(v11 + 88) = v8;
      *(_OWORD *)(v11 + 72) = v14;
      v16 = *(_DWORD *)v15;
      *(_DWORD *)(v11 + 340) = *(_DWORD *)v15;
      *(_QWORD *)(v11 + 200) = *((_QWORD *)v15 + 1);
      if ( v16 )
      {
        if ( v16 > 0x100000 )
          *(_DWORD *)(v11 + 340) = 0x100000;
        *(_QWORD *)(v11 + 96) = PfSnTraceBufferAllocate();
        if ( *(_QWORD *)(v11 + 96) )
        {
          v17 = *(__int64 **)(v11 + 96);
          v18 = *(__int64 ***)(v11 + 112);
          if ( *v18 != (__int64 *)v12 )
            __fastfail(3u);
          *v17 = v12;
          v17[1] = (__int64)v18;
          *v18 = v17;
          *(_QWORD *)(v11 + 112) = v17;
          *(_QWORD *)(v11 + 424) = -1LL;
          *(_QWORD *)(v11 + 416) = -8LL;
          *(_DWORD *)(v11 + 120) = 1;
          *(_QWORD *)(v11 + 408) = v11 + 416;
          if ( a4 )
          {
            *(_QWORD *)(v11 + 432) = a4;
            *(_QWORD *)(v11 + 440) = PsGetThreadId(a4);
          }
          v19 = PfSnActivateTrace(v11);
          if ( v19 >= 0 )
          {
            *a6 = v11;
            v11 = 0LL;
            v19 = 0;
          }
        }
        else
        {
          v19 = -1073741670;
        }
      }
      else
      {
        v19 = -1073741811;
      }
      if ( v11 )
      {
        PfSnCleanupTrace(v11);
        ExFreePoolWithTag((PVOID)v11, 0);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741661;
  }
  return (unsigned int)v19;
}
