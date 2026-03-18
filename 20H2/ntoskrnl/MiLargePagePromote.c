/*
 * XREFs of MiLargePagePromote @ 0x1403F55FC
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x14034D440 (MiCoalesceFreeLargePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402312D0 (MiUnlinkNodeLargePageHelper.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140296D60 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiInsertLargePageInNodeList @ 0x1402F1DC0 (MiInsertLargePageInNodeList.c)
 *     MiPageToNode @ 0x14032E6F4 (MiPageToNode.c)
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
 *     MiIsFreeZeroPfnCold @ 0x14034D3C0 (MiIsFreeZeroPfnCold.c)
 *     MiGetPfnChannel @ 0x14034E084 (MiGetPfnChannel.c)
 *     MiColdPageSizeSupported @ 0x1403F65BC (MiColdPageSizeSupported.c)
 *     MiDetermineNewPfnHeatState @ 0x1403F65E4 (MiDetermineNewPfnHeatState.c)
 */

__int64 __fastcall MiLargePagePromote(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r13
  char v7; // di
  char v8; // si
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v14; // r14d
  unsigned __int64 v15; // r13
  __int64 v16; // r15
  unsigned int PfnChannel; // eax
  int v18; // eax
  char v19; // cl
  char v20; // al
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // [rsp+38h] [rbp-39h]
  _QWORD *v27; // [rsp+40h] [rbp-31h]
  unsigned __int64 v28; // [rsp+48h] [rbp-29h]
  __int64 v29; // [rsp+50h] [rbp-21h] BYREF
  int v30; // [rsp+58h] [rbp-19h]
  int v31; // [rsp+5Ch] [rbp-15h]
  __int16 v32; // [rsp+60h] [rbp-11h]
  int v33; // [rsp+62h] [rbp-Fh]
  __int16 v34; // [rsp+66h] [rbp-Bh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-9h] BYREF
  int v38; // [rsp+E8h] [rbp+77h]

  v4 = a2 - 1;
  v33 = 0;
  v34 = 0;
  v5 = MiLargePageSizes[a2];
  v6 = MiLargePageSizes[v4];
  v7 = 0;
  v28 = v6;
  v8 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *a4 = 0;
  v38 = 0;
  v9 = 48 * a1 - 0x58000000000LL;
  v26 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL));
  v10 = 4544LL * (unsigned int)MiPageToNode(48 * a1 / 48);
  v27 = (_QWORD *)(v10 + *(_QWORD *)(v26 + 16));
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v27 + 541, &LockHandle);
  v12 = 0LL;
  if ( v27[544] )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  ++*(_DWORD *)(v10 + *(_QWORD *)(v26 + 16) + 4284);
  v14 = 0;
  v15 = v6 / v5;
  if ( v15 )
  {
    v16 = 48 * v5;
    do
    {
      PfnChannel = MiGetPfnChannel(v9);
      MiUnlinkNodeLargePageHelper(v27, (__int64 *)v9, a2, PfnChannel, 10);
      v8 |= ((*(_DWORD *)(v9 + 16) & 0x3E0) != 0LL) + 1;
      LOBYTE(v18) = MiIsFreeZeroPfnCold(v9);
      v12 = 0LL;
      v7 |= 2 - (v18 != 0);
      v19 = *(_BYTE *)(v9 + 39) & 0xFC;
      if ( v14 )
      {
        v20 = *(_BYTE *)(v9 + 34) & 0xFE;
        *(_BYTE *)(v9 + 39) = v19;
        *(_BYTE *)(v9 + 34) = v20 | 6;
      }
      else
      {
        *(_BYTE *)(v9 + 39) = v19 | ~(_BYTE)v4 & 3;
      }
      ++v14;
      v9 += v16;
    }
    while ( v14 < v15 );
  }
  v21 = -48LL * v28 + v9;
  if ( (v8 & 2) == 0 )
  {
    if ( (v7 & 2) != 0 && (unsigned int)MiColdPageSizeSupported((unsigned int)v4) )
    {
      *a4 = 1;
    }
    else
    {
      if ( !(unsigned int)MiDetermineNewPfnHeatState(0LL, (unsigned int)v4, v11, v12) )
        goto LABEL_11;
      if ( (v7 & 1) == 0 )
        goto LABEL_13;
    }
    v22 = 4294967293LL;
    goto LABEL_12;
  }
  v38 = 1;
LABEL_11:
  v22 = 0LL;
LABEL_12:
  *(_QWORD *)(v21 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v21 + 16), v22);
LABEL_13:
  v29 = a1;
  v30 = v38;
  v33 = v25;
  v34 = v25;
  v31 = 6;
  v32 = 258;
  MiInsertLargePageInNodeList((__int64)&v29, v23, v24, v25);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  return 1LL;
}
