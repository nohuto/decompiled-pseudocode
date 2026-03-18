/*
 * XREFs of MiLargePageFreeToZero @ 0x14034DC00
 * Callers:
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MiGetPfnChannel @ 0x14034E084 (MiGetPfnChannel.c)
 *     MiSetFreeZeroPfnCold @ 0x1403AB590 (MiSetFreeZeroPfnCold.c)
 *     MiArePageContentsZero @ 0x14054D0C8 (MiArePageContentsZero.c)
 */

void __fastcall MiLargePageFreeToZero(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, char a4)
{
  ULONG_PTR v7; // r14
  __int64 v8; // r13
  unsigned __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rax
  ULONG_PTR v13; // r9
  volatile signed __int32 *v14; // rdx
  int v15; // r15d
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // r8
  ULONG_PTR v24; // r10
  unsigned __int64 v25; // r9
  volatile signed __int32 *v26; // rdx
  unsigned int v27; // ebx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r11
  ULONG_PTR v30; // rcx
  ULONG_PTR *v31; // rdx
  __int64 *v32; // [rsp+20h] [rbp-68h]
  ULONG_PTR v33; // [rsp+20h] [rbp-68h]
  __int64 v34; // [rsp+28h] [rbp-60h]
  __int64 v35; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  __int64 v37; // [rsp+90h] [rbp+8h]
  __int64 v38; // [rsp+90h] [rbp+8h]
  unsigned int PfnChannel; // [rsp+A8h] [rbp+20h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v7 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v8 = a2;
  v37 = a2;
  v9 = MiLargePageSizes[a2];
  v32 = &MiLargePageSizes[a2];
  v10 = *((unsigned int *)MiSearchNumaNodeTable((__int64)(48 * BugCheckParameter2) / 48) + 2);
  PfnChannel = MiGetPfnChannel(v7);
  v34 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL));
  v11 = *(_QWORD *)(v34 + 16) + 4544 * v10;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v11 + 4328);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v11 + 4328));
  *(_BYTE *)(v7 + 34) &= ~8u;
  v12 = *(_QWORD *)(v7 + 16);
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_BYTE *)(v12 + 69) = 1;
  *(_QWORD *)(v7 + 16) = MiSwizzleInvalidPte(128LL);
  if ( !a4 )
  {
    v17 = *(_QWORD *)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_39;
    v18 = *(_QWORD **)(v7 + 8);
    if ( *v18 != v7 )
      goto LABEL_39;
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    if ( a3 )
      MiSetFreeZeroPfnCold(v7, 1LL);
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E64C & MmPageValidationFrequency) == 0 )
      MiArePageContentsZero(BugCheckParameter2);
    v35 = 1072 * v8;
    --*(_QWORD *)(1072 * v8 + v11 + 8);
    v19 = 1072 * v8 + (BugCheckParameter2 < 0x100000 ? 0x10 : 0) + v11;
    v20 = v37;
    --*(_QWORD *)(v19 + 24);
    v21 = 4LL;
    v38 = 134 * v37;
    if ( BugCheckParameter2 < 0x100000 )
      v21 = 12LL;
    v22 = (unsigned __int64)*(unsigned __int8 *)(v7 + 34) >> 6;
    v23 = v22 + 134 * v20 + 4 * (PfnChannel + v21);
    v33 = 24 * (BugCheckParameter2 / *v32 % (unsigned int)dword_140C4DE00[v20]);
    --*(_QWORD *)(v33 + *(_QWORD *)(v11 + 8 * v23 + 560) + 16);
    --*(_QWORD *)(v11 + 8 * v23 + 48);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 2304), -(__int64)v9);
    if ( dword_140C4E54C == 1 )
    {
      v24 = BugCheckParameter2 & 0x1F;
      v25 = v9;
      v26 = (volatile signed __int32 *)(qword_140C4E5A8 + 4 * (BugCheckParameter2 >> 5));
      if ( v24 + v9 <= 0x20 )
      {
        if ( v9 == 32 )
        {
          *v26 = -1;
          goto LABEL_37;
        }
        v27 = ((1 << v9) - 1) << v24;
        goto LABEL_36;
      }
      if ( (BugCheckParameter2 & 0x1F) != 0 )
      {
        _InterlockedOr(v26, ((1 << (32 - (BugCheckParameter2 & 0x1F))) - 1) << v24);
        v25 = v9 - (32 - (unsigned int)(BugCheckParameter2 & 0x1F));
        ++v26;
      }
      if ( v25 >= 0x20 )
      {
        v28 = v25 >> 5;
        v25 += -32LL * (v25 >> 5);
        do
        {
          *v26++ = -1;
          --v28;
        }
        while ( v28 );
      }
      if ( v25 )
      {
        v27 = (1 << v25) - 1;
LABEL_36:
        _InterlockedOr(v26, v27);
      }
    }
LABEL_37:
    *(_BYTE *)(v7 + 34) &= 0xF8u;
    v29 = v38 + v22 + 4 * (PfnChannel + (unsigned __int64)(BugCheckParameter2 < 0x100000 ? 8 : 0));
    v30 = *(_QWORD *)(v11 + 8 * v29 + 560) + v33;
    v31 = *(ULONG_PTR **)(v30 + 8);
    if ( *v31 == v30 )
    {
      *(_QWORD *)v7 = v30;
      *(_QWORD *)(v7 + 8) = v31;
      *v31 = v7;
      *(_QWORD *)(v30 + 8) = v7;
      ++*(_QWORD *)(v30 + 16);
      ++*(_QWORD *)(v11 + 8 * v29 + 48);
      ++*(_QWORD *)(v35 + v11);
      ++*(_QWORD *)(v19 + 16);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 2240), v9);
      goto LABEL_6;
    }
LABEL_39:
    __fastfail(3u);
  }
  if ( dword_140C4E54C == 1 )
  {
    v13 = BugCheckParameter2 & 0x1F;
    v14 = (volatile signed __int32 *)(qword_140C4E5A8 + 4 * (BugCheckParameter2 >> 5));
    if ( v13 + v9 > 0x20 )
    {
      if ( (BugCheckParameter2 & 0x1F) != 0 )
      {
        v15 = BugCheckParameter2 & 0x1F;
        _InterlockedOr(v14, ((1 << (32 - v15)) - 1) << v13);
        v9 -= (unsigned int)(32 - v15);
        ++v14;
      }
      if ( v9 >= 0x20 )
      {
        v16 = v9 >> 5;
        v9 += -32LL * (v9 >> 5);
        do
        {
          *v14++ = -1;
          --v16;
        }
        while ( v16 );
      }
      if ( v9 )
        _InterlockedOr(v14, (1 << v9) - 1);
    }
    else if ( v9 == 32 )
    {
      *v14 = -1;
    }
    else
    {
      _InterlockedOr(v14, ((1 << v9) - 1) << v13);
    }
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
