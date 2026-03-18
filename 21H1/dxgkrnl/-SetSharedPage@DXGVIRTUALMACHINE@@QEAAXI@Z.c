/*
 * XREFs of ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z @ 0x1C028193C
 * Callers:
 *     ?VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024A7D0 (-VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     MapGpadl @ 0x1C024D080 (MapGpadl.c)
 */

void __fastcall DXGVIRTUALMACHINE::SetSharedPage(DXGVIRTUALMACHINE *this, unsigned int a2)
{
  char *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _MDL *v7; // rcx
  PVOID MappedSystemVa; // rax
  __int64 v9; // rax

  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 64));
  v4 = (char *)this + 272;
  if ( !*((_QWORD *)this + 34) )
  {
    if ( (int)MapGpadl(*((_QWORD *)this + 7), a2, 0x1000uLL) < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v9 + 24) = 5824LL;
      goto LABEL_10;
    }
    v7 = *(struct _MDL **)v4;
    if ( (*(_BYTE *)(*(_QWORD *)v4 + 10LL) & 5) != 0 )
      MappedSystemVa = v7->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v7, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 35) = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      v9 = WdLogNewEntry5_WdError(v7, v5);
      *(_QWORD *)(v9 + 24) = 5815LL;
LABEL_10:
      WdLogEvent5_WdError(v9);
      goto LABEL_11;
    }
    *((_DWORD *)this + 66) = a2;
  }
LABEL_11:
  *((_QWORD *)this + 9) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 64, 0LL);
  KeLeaveCriticalRegion();
}
