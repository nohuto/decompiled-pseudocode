/*
 * XREFs of PopEtEnergyTrackerCreate @ 0x1407CBBB8
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsEnumProcesses @ 0x1406A5350 (PsEnumProcesses.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

__int64 __fastcall PopEtEnergyTrackerCreate(int *a1, __int64 *a2)
{
  int v2; // eax
  bool v5; // cf
  int inserted; // edi
  PADAPTER_OBJECT v7; // rsi
  PADAPTER_OBJECT v8; // rbx
  unsigned __int64 UnbiasedInterruptTime; // rax
  ULONG_PTR v10; // rcx
  __int64 v11; // rcx
  _DMA_OPERATIONS *v12; // rax
  int v13; // edi
  void *v14; // rcx
  char *v16; // [rsp+20h] [rbp-49h]
  __int128 v17; // [rsp+50h] [rbp-19h] BYREF
  __int128 v18; // [rsp+60h] [rbp-9h]
  _DWORD v19[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v20; // [rsp+78h] [rbp+Fh]
  __int64 v21; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+88h] [rbp+1Fh]
  int v23; // [rsp+8Ch] [rbp+23h]
  __int128 v24; // [rsp+90h] [rbp+27h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v26; // [rsp+E0h] [rbp+77h] BYREF

  v2 = *a1;
  DmaAdapter = 0LL;
  v26 = 0LL;
  v19[1] = 0;
  v23 = 0;
  v17 = 0LL;
  v18 = 0LL;
  if ( (unsigned int)(v2 - 1) > 0x3FFFF )
    *a1 = 0x40000;
  if ( PopEtGlobals )
  {
    v19[0] = 48;
    v20 = 0LL;
    v5 = KeGetCurrentThread()->PreviousMode != 0;
    v21 = 0LL;
    v24 = 0LL;
    v22 = v5 ? 0 : 0x200;
    inserted = ObCreateObjectEx(
                 0,
                 *(_DWORD **)(PopEtGlobals + 32),
                 (__int64)v19,
                 KeGetCurrentThread()->PreviousMode,
                 v16,
                 640,
                 0,
                 0,
                 &DmaAdapter,
                 0LL);
    if ( inserted < 0 )
    {
      v8 = DmaAdapter;
    }
    else
    {
      v7 = DmaAdapter;
      memset(DmaAdapter, 0, 0x280uLL);
      v7[1] = 0LL;
      *(_QWORD *)&v7[1].Version = 0LL;
      *(_QWORD *)&v7[4].Version = 0LL;
      v7[4].DmaOperations = 0LL;
      *(_QWORD *)&v7[3].Version = 0LL;
      v7[3].DmaOperations = 0LL;
      memset(&v7[5], 0, 0x200uLL);
      *(_QWORD *)&v7[6].Version = PopEtGlobals + 848;
      *(_QWORD *)&v7[2].Version = *(_QWORD *)a1;
      LODWORD(v7[2].DmaOperations) = a1[2];
      HIDWORD(v7[39].DmaOperations) |= 1u;
      v8 = DmaAdapter;
      *(_DWORD *)&DmaAdapter[37].Version = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v10 = PopEtGlobals + 16;
      *(_DWORD *)(&v8[37].Size + 1) = UnbiasedInterruptTime / 0x2710;
      LODWORD(v8[37].DmaOperations) = 1;
      PopAcquireRwLockExclusive(v10);
      v11 = PopEtGlobals;
      v12 = *(_DMA_OPERATIONS **)(PopEtGlobals + 8);
      if ( *(_QWORD *)&v12->Size != PopEtGlobals )
        __fastfail(3u);
      *(_QWORD *)&v8->Version = PopEtGlobals;
      v8->DmaOperations = v12;
      *(_QWORD *)&v12->Size = v8;
      *(_QWORD *)(v11 + 8) = v8;
      PopReleaseRwLock(v11 + 16);
      v17 = 1uLL;
      v18 = (unsigned __int64)v8;
      inserted = PsEnumProcesses(
                   (__int64 (__fastcall *)(__int64, __int64))PopEtProcessEnumSnapshotCallback,
                   (__int64)&v17);
      if ( inserted >= 0 )
      {
        PopAcquireRwLockExclusive((ULONG_PTR)&v7[1]);
        v13 = *(_DWORD *)(&v8[38].Size + 1);
        if ( !v13 )
          HIDWORD(v7[39].DmaOperations) &= ~1u;
        PopReleaseRwLock((ULONG_PTR)&v7[1]);
        if ( v13 )
        {
          inserted = -1073741670;
        }
        else
        {
          inserted = ObInsertObjectEx((char *)v8, 0LL, 1u, 1, 0, 0LL, (unsigned __int64 *)&v26);
          if ( inserted < 0 )
          {
            v14 = (void *)v26;
            v8 = 0LL;
          }
          else
          {
            v14 = 0LL;
            *a2 = v26;
            inserted = 0;
          }
          if ( v14 )
            NtClose(v14);
        }
      }
    }
    if ( v8 )
      HalPutDmaAdapter(v8);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)inserted;
}
