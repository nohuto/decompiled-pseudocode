/*
 * XREFs of PiDmaGuardProcessPostRemove @ 0x1407415D0
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14036F2E0 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14076AA54 (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CBE58 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x14050EAB8 (PiDmaGuardQueueRemoveEntry.c)
 *     PipDmgDestroyIommuExtension @ 0x140762BF4 (PipDmgDestroyIommuExtension.c)
 *     PipDmgReevaluateQueue @ 0x1408B3F5C (PipDmgReevaluateQueue.c)
 *     PiIommuBlockDevice @ 0x1408B6E70 (PiIommuBlockDevice.c)
 *     PiDmaGuardQueueInsertEntry @ 0x1408BBD10 (PiDmaGuardQueueInsertEntry.c)
 */

_QWORD *__fastcall PiDmaGuardProcessPostRemove(ULONG_PTR MaxDataSize, int a2, char a3)
{
  _QWORD *result; // rax
  int v7; // eax
  ULONG_PTR v8; // rbp
  __int64 v9; // rax
  void *v10; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(_QWORD *)(MaxDataSize + 720) )
  {
    if ( PipHalIommuSecurityEnabled )
    {
      v7 = PiIommuBlockDevice();
      v8 = v7;
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
        v9 = *(_QWORD *)(MaxDataSize + 16);
        if ( v9 && *(_WORD *)(v9 + 56) )
        {
          IoAddTriageDumpDataBlock(v9 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
        }
        KeBugCheckEx(0xCAu, 0x13uLL, 0x1001uLL, v8, MaxDataSize);
      }
    }
    result = (_QWORD *)PipDmgDestroyIommuExtension(MaxDataSize);
  }
  if ( a3 && PipDmaGuardPolicy )
  {
    v10 = *(void **)(MaxDataSize + 32);
    if ( a2 == 55 )
    {
      PiDmaGuardQueueInsertEntry(v10);
      return (_QWORD *)PipDmgReevaluateQueue();
    }
    else
    {
      return PiDmaGuardQueueRemoveEntry(v10);
    }
  }
  return result;
}
