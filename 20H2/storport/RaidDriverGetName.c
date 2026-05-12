/*
 * XREFs of RaidDriverGetName @ 0x1C0011B98
 * Callers:
 *     StorTickEventQueue @ 0x1C0010920 (StorTickEventQueue.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00112F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterCreateDevmapEntry @ 0x1C002BF28 (RaidAdapterCreateDevmapEntry.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002EBB4 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     StorEtwMiniportLogError @ 0x1C00384D0 (StorEtwMiniportLogError.c)
 *     StorpMarkDeviceFailed @ 0x1C003C5F8 (StorpMarkDeviceFailed.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C004A240 (RaidUnitAbortSrbCompletion.c)
 *     StorEtwMiniportEvent @ 0x1C00501F0 (StorEtwMiniportEvent.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0052B98 (StorpLogPhysicalTopologyInfo.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C00774F4 (RaidAdapterCreateDriverInfo.c)
 *     RaidInitializeAdapter @ 0x1C0079570 (RaidInitializeAdapter.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RaidDriverGetName(__int64 a1, __int64 a2)
{
  _WORD *v2; // r8
  unsigned int v5; // eax
  __int64 v6; // rdx
  _WORD *v7; // rcx
  _WORD *v8; // rcx
  __int16 v9; // ax
  __int16 result; // ax

  v2 = *(_WORD **)(a1 + 48);
  if ( v2 && (v5 = *(unsigned __int16 *)(a1 + 40), (_WORD)v5) )
  {
    LODWORD(v6) = v5 >> 1;
    if ( !(v5 >> 1) )
      goto LABEL_6;
    while ( 1 )
    {
      v6 = (unsigned int)(v6 - 1);
      v7 = &v2[v6];
      if ( *v7 == 92 )
        break;
      if ( !(_DWORD)v6 )
        goto LABEL_6;
    }
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = v7 + 1;
    goto LABEL_9;
  }
LABEL_6:
  v8 = v2;
LABEL_9:
  v9 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 40) - (_WORD)v8;
  *(_WORD *)a2 = v9;
  result = v9 + 2;
  *(_WORD *)(a2 + 2) = result;
  *(_QWORD *)(a2 + 8) = v8;
  return result;
}
