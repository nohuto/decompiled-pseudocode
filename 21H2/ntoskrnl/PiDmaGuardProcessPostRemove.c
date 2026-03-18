/*
 * XREFs of PiDmaGuardProcessPostRemove @ 0x1407669D4
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1402DDAE4 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14081059C (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     PiIommuUninitializeDeviceAts @ 0x1403DED30 (PiIommuUninitializeDeviceAts.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x140564DE8 (PiDmaGuardQueueRemoveEntry.c)
 *     PipDmgDestroyIommuExtension @ 0x140749814 (PipDmgDestroyIommuExtension.c)
 *     PiIommuBlockDevice @ 0x140864878 (PiIommuBlockDevice.c)
 *     PipDmgReevaluateQueue @ 0x140956BBC (PipDmgReevaluateQueue.c)
 *     PiDmaGuardQueueInsertEntry @ 0x14095EB98 (PiDmaGuardQueueInsertEntry.c)
 */

void __fastcall PiDmaGuardProcessPostRemove(ULONG_PTR MaxDataSize, int a2, char a3)
{
  int v6; // eax
  ULONG_PTR v7; // rbp
  __int64 v8; // rax
  void *v9; // rcx

  if ( *(_QWORD *)(MaxDataSize + 720) )
  {
    PiIommuUninitializeDeviceAts(MaxDataSize);
    v6 = PiIommuBlockDevice(*(_QWORD *)(MaxDataSize + 720));
    v7 = v6;
    if ( v6 < 0 )
    {
      IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x310);
      if ( *(_WORD *)(MaxDataSize + 40) )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 40, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 48), (PVOID)*(unsigned __int16 *)(MaxDataSize + 40));
      }
      if ( *(_WORD *)(MaxDataSize + 56) )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 64), (PVOID)*(unsigned __int16 *)(MaxDataSize + 56));
      }
      v8 = *(_QWORD *)(MaxDataSize + 16);
      if ( v8 && *(_WORD *)(v8 + 56) )
      {
        IoAddTriageDumpDataBlock(v8 + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
      }
      KeBugCheckEx(0xCAu, 0x13uLL, 0x1001uLL, v7, MaxDataSize);
    }
    PipDmgDestroyIommuExtension(MaxDataSize);
  }
  if ( a3 && PipDmaGuardPolicy )
  {
    v9 = *(void **)(MaxDataSize + 32);
    if ( a2 == 55 )
    {
      PiDmaGuardQueueInsertEntry(v9);
      PipDmgReevaluateQueue();
    }
    else
    {
      PiDmaGuardQueueRemoveEntry((__int64)v9);
    }
  }
}
