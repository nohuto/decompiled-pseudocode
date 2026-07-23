/*
 * XREFs of MiLargePageFreeToZero @ 0x14030EA90
 * Callers:
 *     MiZeroPage @ 0x1402D7B60 (MiZeroPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiSetFreeZeroPfnCold @ 0x1403B1600 (MiSetFreeZeroPfnCold.c)
 *     MiArePageContentsZero @ 0x14054EE08 (MiArePageContentsZero.c)
 */

void __fastcall MiLargePageFreeToZero(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, char a4)
{
  ULONG_PTR v7; // r14
  __int64 v8; // r13
  unsigned __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // r9
  __int64 v13; // rax
  ULONG_PTR v14; // r9
  volatile signed __int32 *v15; // rdx
  int v16; // r15d
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // r8
  ULONG_PTR v25; // r10
  unsigned __int64 v26; // r9
  volatile signed __int32 *v27; // rdx
  unsigned int v28; // ebx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r11
  ULONG_PTR v31; // rcx
  ULONG_PTR *v32; // rdx
  __int64 *v33; // [rsp+20h] [rbp-68h]
  ULONG_PTR v34; // [rsp+20h] [rbp-68h]
  __int64 v35; // [rsp+28h] [rbp-60h]
  __int64 v36; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  __int64 v38; // [rsp+90h] [rbp+8h]
  __int64 v39; // [rsp+90h] [rbp+8h]
  unsigned int PfnChannel; // [rsp+A8h] [rbp+20h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v7 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v8 = a2;
  v38 = a2;
  v9 = MiLargePageSizes[a2];
  v33 = &MiLargePageSizes[a2];
  v10 = *(unsigned int *)(MiSearchNumaNodeTable((__int64)(48 * BugCheckParameter2) / 48) + 8);
  PfnChannel = MiGetPfnChannel(v7);
  v35 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL));
  v11 = *(_QWORD *)(v35 + 16) + 4544 * v10;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v11 + 4328);
  KxAcquireQueuedSpinLock(&LockHandle, v11 + 4328, v35, v12);
  *(_BYTE *)(v7 + 34) &= ~8u;
  v13 = *(_QWORD *)(v7 + 16);
  *(_QWORD *)(v13 + 24) = 0LL;
  *(_BYTE *)(v13 + 69) = 1;
  *(_QWORD *)(v7 + 16) = MiSwizzleInvalidPte(128LL);
  if ( !a4 )
  {
    v18 = *(_QWORD *)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_39;
    v19 = *(_QWORD **)(v7 + 8);
    if ( *v19 != v7 )
      goto LABEL_39;
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    if ( a3 )
      MiSetFreeZeroPfnCold(v7, 1LL);
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E80C & MmPageValidationFrequency) == 0 )
      MiArePageContentsZero(BugCheckParameter2);
    v36 = 1072 * v8;
    --*(_QWORD *)(1072 * v8 + v11 + 8);
    v20 = 1072 * v8 + (BugCheckParameter2 < 0x100000 ? 0x10 : 0) + v11;
    v21 = v38;
    --*(_QWORD *)(v20 + 24);
    v22 = 4LL;
    v39 = 134 * v38;
    if ( BugCheckParameter2 < 0x100000 )
      v22 = 12LL;
    v23 = (unsigned __int64)*(unsigned __int8 *)(v7 + 34) >> 6;
    v24 = v23 + 134 * v21 + 4 * (PfnChannel + v22);
    v34 = 24 * (BugCheckParameter2 / *v33 % (unsigned int)dword_140C4DFC0[v21]);
    --*(_QWORD *)(v34 + *(_QWORD *)(v11 + 8 * v24 + 560) + 16);
    --*(_QWORD *)(v11 + 8 * v24 + 48);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 2304), -(__int64)v9);
    if ( dword_140C4E70C == 1 )
    {
      v25 = BugCheckParameter2 & 0x1F;
      v26 = v9;
      v27 = (volatile signed __int32 *)(qword_140C4E768 + 4 * (BugCheckParameter2 >> 5));
      if ( v25 + v9 <= 0x20 )
      {
        if ( v9 == 32 )
        {
          *v27 = -1;
          goto LABEL_37;
        }
        v28 = ((1 << v9) - 1) << v25;
        goto LABEL_36;
      }
      if ( (BugCheckParameter2 & 0x1F) != 0 )
      {
        _InterlockedOr(v27, ((1 << (32 - (BugCheckParameter2 & 0x1F))) - 1) << v25);
        v26 = v9 - (32 - (unsigned int)(BugCheckParameter2 & 0x1F));
        ++v27;
      }
      if ( v26 >= 0x20 )
      {
        v29 = v26 >> 5;
        v26 += -32LL * (v26 >> 5);
        do
        {
          *v27++ = -1;
          --v29;
        }
        while ( v29 );
      }
      if ( v26 )
      {
        v28 = (1 << v26) - 1;
LABEL_36:
        _InterlockedOr(v27, v28);
      }
    }
LABEL_37:
    *(_BYTE *)(v7 + 34) &= 0xF8u;
    v30 = v39 + v23 + 4 * (PfnChannel + (unsigned __int64)(BugCheckParameter2 < 0x100000 ? 8 : 0));
    v31 = *(_QWORD *)(v11 + 8 * v30 + 560) + v34;
    v32 = *(ULONG_PTR **)(v31 + 8);
    if ( *v32 == v31 )
    {
      *(_QWORD *)v7 = v31;
      *(_QWORD *)(v7 + 8) = v32;
      *v32 = v7;
      *(_QWORD *)(v31 + 8) = v7;
      ++*(_QWORD *)(v31 + 16);
      ++*(_QWORD *)(v11 + 8 * v30 + 48);
      ++*(_QWORD *)(v36 + v11);
      ++*(_QWORD *)(v20 + 16);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 2240), v9);
      goto LABEL_6;
    }
LABEL_39:
    __fastfail(3u);
  }
  if ( dword_140C4E70C == 1 )
  {
    v14 = BugCheckParameter2 & 0x1F;
    v15 = (volatile signed __int32 *)(qword_140C4E768 + 4 * (BugCheckParameter2 >> 5));
    if ( v14 + v9 > 0x20 )
    {
      if ( (BugCheckParameter2 & 0x1F) != 0 )
      {
        v16 = BugCheckParameter2 & 0x1F;
        _InterlockedOr(v15, ((1 << (32 - v16)) - 1) << v14);
        v9 -= (unsigned int)(32 - v16);
        ++v15;
      }
      if ( v9 >= 0x20 )
      {
        v17 = v9 >> 5;
        v9 += -32LL * (v9 >> 5);
        do
        {
          *v15++ = -1;
          --v17;
        }
        while ( v17 );
      }
      if ( v9 )
        _InterlockedOr(v15, (1 << v9) - 1);
    }
    else if ( v9 == 32 )
    {
      *v15 = -1;
    }
    else
    {
      _InterlockedOr(v15, ((1 << v9) - 1) << v14);
    }
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
