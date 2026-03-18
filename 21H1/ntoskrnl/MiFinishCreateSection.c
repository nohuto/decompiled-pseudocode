/*
 * XREFs of MiFinishCreateSection @ 0x1406304C0
 * Callers:
 *     MiCreateSection @ 0x14062FFB0 (MiCreateSection.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x1402A2C20 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x1406BC9AC (MiFindEmptyAddressRangeDownTree.c)
 *     ObCheckActiveHandles @ 0x1406DF63C (ObCheckActiveHandles.c)
 *     MiDereferencePerSessionProtos @ 0x1406E678C (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406E68A4 (MiCreatePerSessionProtos.c)
 *     MiDereferenceFailedControlArea @ 0x1406ED434 (MiDereferenceFailedControlArea.c)
 */

__int64 __fastcall MiFinishCreateSection(int *a1)
{
  __int64 *v1; // rsi
  __int64 v3; // rbp
  unsigned int v4; // edx
  int v5; // ecx
  bool v6; // zf
  int v7; // r8d
  struct _DMA_ADAPTER *v8; // rdx
  char v9; // r14
  int v10; // r9d
  int v11; // r10d
  int v12; // ebp
  PADAPTER_OBJECT v13; // rdi
  int v14; // eax
  int DmaOperations; // ecx
  __int64 *v17; // rax
  int v18; // r8d
  int v19; // eax
  int PerSessionProtos; // edi
  _DMA_OPERATIONS *v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  struct _KTHREAD *CurrentThread; // r14
  int EmptyAddressRangeDownTree; // r15d
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  PADAPTER_OBJECT v29; // r10
  bool v30; // r8
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // [rsp+20h] [rbp-58h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v40; // [rsp+88h] [rbp+10h] BYREF

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v40 = 0LL;
  DmaAdapter = 0LL;
  v3 = *v1;
  *((_QWORD *)a1 + 15) = v1;
  v4 = v1[7] & 0xFFF7FFFF;
  v5 = a1[35] & 0x7FFFFFFF;
  a1[34] = v4;
  v6 = (a1[4] & 0x1000000) == 0;
  a1[35] = v5;
  if ( !v6 )
  {
    v18 = *a1;
    v19 = v4;
    if ( (*a1 & 0x400) == 0 )
    {
      v19 = v4 | 0x80000;
      a1[34] = v4 | 0x80000;
    }
    v4 = v19;
    if ( *((_BYTE *)a1 + 24) <= 1u && (v18 & 0x80000) == 0 )
      a1[35] = v5 | 0x80000000;
  }
  v7 = *((_DWORD *)v1 + 14);
  if ( (v7 & 0x4000000) != 0 )
  {
    PerSessionProtos = MiCreatePerSessionProtos(v1, (unsigned int)a1[42]);
    if ( PerSessionProtos < 0 )
    {
      HalPutDmaAdapter(*((PADAPTER_OBJECT *)a1 + 7));
      MiDereferenceFailedControlArea(a1);
      return (unsigned int)PerSessionProtos;
    }
    a1[35] ^= (a1[35] ^ (a1[42] << 12)) & 0x7FFFF000;
  }
  else if ( !*((_QWORD *)a1 + 6) && (a1[7] & 0x44) != 0 && (v7 & 0x20) == 0 )
  {
    if ( v1[8] )
    {
      a1[34] = v4 | 0x8000000;
      _InterlockedIncrement((volatile signed __int32 *)v1 + 23);
      if ( !(unsigned __int8)ObCheckActiveHandles(*((_QWORD *)a1 + 7)) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v1 + 23);
        HalPutDmaAdapter(*((PADAPTER_OBJECT *)a1 + 7));
        MiDereferenceFailedControlArea(a1);
        return 3221225508LL;
      }
    }
  }
  v8 = (struct _DMA_ADAPTER *)*((_QWORD *)a1 + 7);
  v9 = 0;
  if ( v8 )
  {
    if ( (HIDWORD(v8->DmaOperations->FreeAdapterChannel) & 0x10) != 0 )
      v9 = 1;
    else
      HalPutDmaAdapter(v8);
  }
  v10 = 128;
  if ( (v1[7] & 0x20) != 0 || !v1[8] )
  {
    v11 = 8 * *(_DWORD *)(v3 + 8) + 64;
    v17 = v1 + 16;
    do
    {
      v17 = (__int64 *)v17[2];
      v10 += 56;
    }
    while ( v17 );
  }
  else
  {
    v11 = 0;
    v10 = 144 * *((_DWORD *)v1 + 70) + 152;
  }
  v12 = ObCreateObjectEx(
          *((_BYTE *)a1 + 72),
          MmSectionObjectType,
          *((_QWORD *)a1 + 1),
          *((_BYTE *)a1 + 72),
          v38,
          64,
          v11,
          v10,
          &DmaAdapter,
          0LL);
  if ( v12 < 0 )
  {
    if ( (a1[34] & 0x8000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v1 + 23);
    }
    else if ( (v1[7] & 0x4000000) != 0 )
    {
      MiDereferencePerSessionProtos(v1, ((unsigned int)a1[35] >> 12) & 0x7FFFF);
    }
    if ( v9 == 1 )
      HalPutDmaAdapter(*((PADAPTER_OBJECT *)a1 + 7));
    MiDereferenceFailedControlArea(a1);
    return (unsigned int)v12;
  }
  v13 = DmaAdapter;
  *DmaAdapter = *((PADAPTER_OBJECT)a1 + 5);
  v13[1] = *((PADAPTER_OBJECT)a1 + 6);
  v13[2] = *((PADAPTER_OBJECT)a1 + 7);
  v13[3] = *((PADAPTER_OBJECT)a1 + 8);
  v13[1].DmaOperations = 0LL;
  if ( v9 == 1 )
  {
    v21 = (_DMA_OPERATIONS *)*((_QWORD *)a1 + 7);
    v13[2].DmaOperations = v21;
    if ( (v1[7] & 0x20) != 0 )
      v22 = (unsigned __int64)v21 | 1;
    else
      v22 = (unsigned __int64)v21 | 2;
    v13[2].DmaOperations = (_DMA_OPERATIONS *)v22;
  }
  if ( (*a1 & 1) != 0 )
    goto LABEL_17;
  LODWORD(v13[3].DmaOperations) |= 0x10000u;
  v14 = a1[4];
  DmaOperations = (int)v13[3].DmaOperations;
  if ( (v14 & 0x400000) != 0 )
  {
    DmaOperations |= 0x4000u;
    LODWORD(v13[3].DmaOperations) = DmaOperations;
    v14 = a1[4];
  }
  if ( (v14 & 0x200000) == 0 )
    goto LABEL_17;
  LODWORD(v13[3].DmaOperations) = DmaOperations | 0x40;
  v23 = *(_QWORD *)&v13[3].Version;
  if ( v23 > qword_140C4C8E8 )
  {
    HalPutDmaAdapter(v13);
    return 3221225495LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C8D0, 0LL);
  EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree(
                                (unsigned int)&qword_140C4C8C8,
                                v23,
                                0x10000,
                                0,
                                0x10000LL,
                                qword_140C4C8E8,
                                (__int64)&v40);
  if ( EmptyAddressRangeDownTree < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C8D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4C8D0);
    KeAbPostRelease((ULONG_PTR)&qword_140C4C8D0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v26, v27, v28);
    HalPutDmaAdapter(DmaAdapter);
    return (unsigned int)EmptyAddressRangeDownTree;
  }
  v29 = DmaAdapter;
  v30 = 0;
  v31 = v40 >> 12;
  v13[1].DmaOperations = (_DMA_OPERATIONS *)(v40 >> 12);
  *(_QWORD *)&v29[2].Version = ((v23 + 4095) >> 12) + v31 - 1;
  v32 = qword_140C4C8C8;
  v33 = (unsigned __int64)v13[1].DmaOperations;
  if ( !qword_140C4C8C8 )
    goto LABEL_55;
  while ( v33 <= (*(unsigned int *)(v32 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v32 + 33) << 32))
       && v33 < (*(unsigned int *)(v32 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v32 + 32) << 32)) )
  {
    v34 = *(_QWORD *)v32;
    if ( !*(_QWORD *)v32 )
      goto LABEL_55;
LABEL_60:
    v32 = v34;
  }
  v34 = *(_QWORD *)(v32 + 8);
  if ( v34 )
    goto LABEL_60;
  v30 = 1;
LABEL_55:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C4C8C8, v32, v30, v29);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C8D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4C8D0);
  KeAbPostRelease((ULONG_PTR)&qword_140C4C8D0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v35, v36, v37);
  v13 = DmaAdapter;
LABEL_17:
  *((_QWORD *)a1 + 18) = v13;
  return (unsigned int)v12;
}
