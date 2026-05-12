/*
 * XREFs of RaidUnitHierarchicalReset @ 0x1C004A914
 * Callers:
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0030114 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0049AF0 (RaidHierarchicalResetWorkRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BD70 (RaidAllocatePool.c)
 *     memmove @ 0x1C001F600 (memmove.c)
 *     RaidAdapterResetBus @ 0x1C002E120 (RaidAdapterResetBus.c)
 *     McTemplateK0zqjuuujsssudxx_EtwWriteTransfer @ 0x1C0046854 (McTemplateK0zqjuuujsssudxx_EtwWriteTransfer.c)
 *     RaUnitSetHierarchicalResetSrbTimeoutCountdown @ 0x1C0047AF4 (RaUnitSetHierarchicalResetSrbTimeoutCountdown.c)
 *     RaidUnitResetTarget @ 0x1C004B168 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C004B420 (RaidUnitResetUnit.c)
 *     StorIsEventQueueEmpty @ 0x1C004C0D0 (StorIsEventQueueEmpty.c)
 */

__int64 __fastcall RaidUnitHierarchicalReset(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  unsigned int v4; // eax
  int v5; // ebp
  char v6; // r15
  int v7; // edi
  char *Pool; // rax
  char *v9; // rbp
  unsigned int i; // ecx
  __int64 v11; // rdx
  char *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax

  LOBYTE(v1) = -1;
  LOBYTE(v3) = -1;
  if ( *(_BYTE *)(a1 + 3216) )
  {
    v4 = *(_DWORD *)(a1 + 3236);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 1264);
    if ( v4 < 0x1E )
      v4 = 30;
  }
  v5 = 2 * v4;
  RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 2 * v4);
  v6 = 1;
  v7 = RaidUnitResetUnit(a1);
  if ( v7 < 0 )
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, v5);
    v6 = 2;
    v7 = RaidUnitResetTarget(a1);
    if ( v7 < 0 )
    {
      RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
      v6 = 3;
      if ( *(_BYTE *)(a1 + 3216) && (unsigned __int8)StorIsEventQueueEmpty(*(_QWORD *)(a1 + 504)) )
      {
        v7 = 0;
      }
      else
      {
        v7 = RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
        if ( v7 < 0 )
          goto LABEL_26;
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 1272));
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4832LL));
      }
    }
    else
    {
      RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 1272));
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4836LL));
    }
  }
  else
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1272));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4840LL));
  }
  if ( *(_QWORD *)(a1 + 2248) )
  {
    if ( *(_QWORD *)(a1 + 2264) )
    {
      Pool = (char *)RaidAllocatePool(NonPagedPoolNx, (unsigned int)Size, 0x65546152u, *(_QWORD *)(a1 + 8));
      v9 = Pool;
      if ( Pool )
      {
        v1 = 0LL;
        v3 = 0LL;
        memmove(Pool, *(const void **)(a1 + 2248), (unsigned int)Size);
        for ( i = 0; i < g_RaidNumberProcessors; ++i )
        {
          v11 = (unsigned int)qword_1C0069440;
          if ( (_DWORD)qword_1C0069440 )
          {
            v12 = &v9[i * HIDWORD(qword_1C0069440) + 8];
            do
            {
              v1 += *((_QWORD *)v12 + 1);
              v3 += *(_QWORD *)v12;
              v12 += 24;
              --v11;
            }
            while ( v11 );
          }
        }
        v13 = (unsigned int)qword_1C0069440;
        v14 = *(_QWORD **)(a1 + 2264);
        if ( (_DWORD)qword_1C0069440 )
        {
          do
          {
            v1 -= *v14;
            v3 -= v14[1];
            v14 += 3;
            --v13;
          }
          while ( v13 );
        }
        ExFreePoolWithTag(v9, 0x65546152u);
      }
    }
  }
LABEL_26:
  if ( (byte_1C0069845 & 0x10) != 0 )
    McTemplateK0zqjuuujsssudxx_EtwWriteTransfer(
      a1 + 169,
      a1 + 160,
      a1 + 1976,
      *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4864LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_QWORD *)(a1 + 24) + 5192LL,
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 1976,
      (const char *)(a1 + 160),
      (const char *)(a1 + 169),
      (const char *)(a1 + 186),
      v6,
      v7,
      v1,
      v3);
  *(_QWORD *)(a1 + 1280) = KeQueryUnbiasedInterruptTime();
  return (unsigned int)v7;
}
