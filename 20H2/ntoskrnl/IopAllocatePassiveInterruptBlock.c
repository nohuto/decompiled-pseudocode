/*
 * XREFs of IopAllocatePassiveInterruptBlock @ 0x1408A3F70
 * Callers:
 *     IopConnectInterrupt @ 0x14075D9DC (IopConnectInterrupt.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x14033E040 (KeInitializeDpc.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     IopFindPassiveInterruptBlock @ 0x14050B878 (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x14050B964 (IopInsertPassiveInterruptBlock.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocatePassiveInterruptBlock(_DWORD *a1, _OWORD *a2)
{
  bool v2; // zf
  int v5; // eax
  unsigned int v6; // esi
  int inserted; // edi
  char *PoolWithTag; // rax
  __int64 v9; // rbx
  int v10; // eax
  char v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1 == 1;
  v12 = 0;
  if ( v2 && ((v5 = a1[2]) == 0 || v5 == 3) )
  {
    v6 = a1[3];
    if ( IopFindPassiveInterruptBlock(v6) )
    {
      return 0;
    }
    else
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xC8uLL, 0x6269704Bu);
      v9 = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag + 16, 0, 0xB8uLL);
        *(_QWORD *)(v9 + 8) = v9;
        *(_QWORD *)v9 = v9;
        *(_DWORD *)(v9 + 16) = a1[2];
        *(_DWORD *)(v9 + 20) = v6;
        *(_DWORD *)(v9 + 32) = a1[6];
        *(_OWORD *)(v9 + 40) = *a2;
        v10 = a1[2];
        if ( v10 )
        {
          if ( v10 == 3 )
            *(_BYTE *)(v9 + 28) = 0;
        }
        else
        {
          *(_DWORD *)(v9 + 24) = a1[16];
          *(_BYTE *)(v9 + 28) = ((__int64 (__fastcall *)(_QWORD))off_140C00780[0])(0LL);
        }
        KeInitializeEvent((PRKEVENT)(v9 + 168), SynchronizationEvent, 1u);
        KeInitializeDpc((PRKDPC)(v9 + 104), (PKDEFERRED_ROUTINE)IopPassiveInterruptDpc, (PVOID)v9);
        *(_QWORD *)(v9 + 56) = 0LL;
        *(_QWORD *)(v9 + 72) = 0LL;
        *(_QWORD *)(v9 + 88) = IopPassiveInterruptWorker;
        *(_QWORD *)(v9 + 96) = v9;
        *(_BYTE *)(v9 + 105) = 2;
        inserted = IopInsertPassiveInterruptBlock(v9, &v12);
        if ( inserted < 0 || !v12 )
          ExFreePoolWithTag((PVOID)v9, 0x6269704Bu);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)inserted;
}
