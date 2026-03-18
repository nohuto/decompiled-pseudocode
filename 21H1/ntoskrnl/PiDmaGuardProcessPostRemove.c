/*
 * XREFs of PiDmaGuardProcessPostRemove @ 0x140733F10
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14036C538 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736D5C (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403C8408 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x14050AB38 (PiDmaGuardQueueRemoveEntry.c)
 *     PipDmgDestroyIommuExtension @ 0x14074F990 (PipDmgDestroyIommuExtension.c)
 *     PipDmgReevaluateQueue @ 0x1408AD10C (PipDmgReevaluateQueue.c)
 *     PiDmaGuardQueueInsertEntry @ 0x1408B4DD0 (PiDmaGuardQueueInsertEntry.c)
 */

void __fastcall PiDmaGuardProcessPostRemove(ULONG_PTR MaxDataSize, int a2, char a3)
{
  __int64 v3; // rdi
  int v7; // esi
  __int64 v8; // rax
  void *v9; // rcx

  v3 = *(_QWORD *)(MaxDataSize + 720);
  if ( v3 )
  {
    if ( PipHalIommuSecurityEnabled )
    {
      if ( (*(_BYTE *)(v3 + 16) & 2) != 0 )
      {
        v7 = ((__int64 (__fastcall *)(_QWORD))off_140C009C0[0])(*(_QWORD *)(v3 + 8));
        if ( v7 >= 0 )
          *(_BYTE *)(v3 + 16) &= ~2u;
        *(_QWORD *)(v3 + 8) = 0LL;
      }
      else
      {
        v7 = 0;
      }
      if ( v7 < 0 )
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
      PiDmaGuardQueueRemoveEntry(v9);
    }
  }
}
