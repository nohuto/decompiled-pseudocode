/*
 * XREFs of MiCoalesceFreePages @ 0x1402DA4F0
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExfTryAcquirePushLockShared @ 0x140208080 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     MiReleasePushLockUnordered @ 0x140235604 (MiReleasePushLockUnordered.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402DAC10 (MiUnlinkFreeOrZeroedPage.c)
 *     MiPfnZeroingNeeded @ 0x1402DD3B0 (MiPfnZeroingNeeded.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiReturnFreeZeroPage @ 0x14030DDA0 (MiReturnFreeZeroPage.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiCreateInitialLargeLeafPfns @ 0x1403F63D4 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403F6BC8 (MiInitializeAllResidentPageBasePfns.c)
 *     MiChangePageHeatImmediate @ 0x1403F7CB0 (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x1403F7D58 (MiColdPageSizeSupported.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCoalesceFreePages(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v2; // rdi
  signed __int64 v3; // r14
  __int64 v4; // r11
  unsigned __int64 v5; // r13
  unsigned int v6; // r12d
  __int64 v7; // r15
  unsigned __int64 v8; // r10
  int v9; // edx
  ULONG_PTR v10; // r8
  char *v11; // rax
  int v12; // r9d
  int v13; // ecx
  unsigned __int64 v14; // rdx
  _QWORD *v15; // r8
  unsigned __int64 v16; // r9
  ULONG_PTR v17; // rsi
  ULONG_PTR v18; // rdi
  __int64 v19; // rdx
  unsigned __int64 v21; // rdi
  _QWORD *v22; // r14
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned int v25; // r13d
  unsigned int v26; // ebx
  __int64 v27; // r14
  unsigned int v28; // r9d
  __int64 v29; // r10
  unsigned int v30; // edx
  __int64 v31; // rcx
  unsigned int v32; // r8d
  unsigned int v33; // r11d
  unsigned int v34; // ebp
  unsigned int v35; // esi
  unsigned int v36; // eax
  unsigned int v37; // r15d
  bool v38; // cf
  int v39; // r9d
  unsigned int v40; // r12d
  signed __int64 v41; // r13
  unsigned int v42; // r14d
  BOOL v43; // r8d
  signed __int64 v44; // rdi
  int v45; // ebp
  signed __int64 v46; // rsi
  unsigned int i; // r15d
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // r15
  __int64 v50; // rbx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rbx
  int v54; // [rsp+40h] [rbp-A8h]
  unsigned int v55; // [rsp+44h] [rbp-A4h]
  unsigned int v56; // [rsp+48h] [rbp-A0h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+50h] [rbp-98h]
  __int64 v58; // [rsp+58h] [rbp-90h]
  unsigned __int64 v59; // [rsp+60h] [rbp-88h] BYREF
  __int64 v60; // [rsp+68h] [rbp-80h]
  __int64 v61; // [rsp+70h] [rbp-78h]
  signed __int64 v62; // [rsp+78h] [rbp-70h]
  unsigned __int64 v63; // [rsp+80h] [rbp-68h]
  __int64 v64; // [rsp+88h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-58h] BYREF
  __int128 v66; // [rsp+A8h] [rbp-40h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !MmPhysicalMemoryBlock )
    return 0LL;
  v1 = 48 * a1 - 0x58000000000LL;
  v2 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v64 = v1;
  v63 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v55 = *(_BYTE *)(v1 + 34) & 7;
  v3 = 48 * (a1 & 0xFFFFFFFFFFFFFFF0uLL);
  v4 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v1 + 40) >> 39) & 0x3FFLL));
  v58 = v4;
  v5 = v3 - 0x58000000000LL;
  v62 = v3 - 0x58000000000LL;
  v6 = 0;
  v7 = v3 - 0x58000000000LL + 768;
  v8 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = dword_140C4DEC8;
  v10 = v3 / 48;
  if ( dword_140C4DEC4 > (unsigned int)dword_140C4DEC8
    || (v11 = (char *)qword_140C4DF08 + 16 * dword_140C4DEC4, v10 < *(_QWORD *)v11)
    || dword_140C4DEC4 != dword_140C4DEC8 && v10 >= *((_QWORD *)v11 + 2) )
  {
    v12 = 0;
    if ( dword_140C4DEC8 < 0 )
LABEL_101:
      KeBugCheckEx(0x1Au, 0x6201uLL, v10, 0LL, 0LL);
    while ( 1 )
    {
      v13 = (v12 + v9) >> 1;
      v11 = (char *)qword_140C4DF08 + 16 * v13;
      if ( v10 >= *(_QWORD *)v11 )
      {
        if ( v13 == dword_140C4DEC8 || v10 < *((_QWORD *)v11 + 2) )
        {
          dword_140C4DEC4 = (v12 + v9) >> 1;
          break;
        }
        v12 = v13 + 1;
      }
      else
      {
        if ( !v13 )
          KeBugCheckEx(0x1Au, 0x6200uLL, v10, (ULONG_PTR)qword_140C4DF08, 0LL);
        v9 = v13 - 1;
      }
      if ( v9 < v12 )
        goto LABEL_101;
    }
  }
  v56 = *((_DWORD *)v11 + 2);
  if ( v5 != v7 )
  {
    v14 = v5 + 34;
    v15 = (_QWORD *)(v3 - 0x57FFFFFFFD8LL);
    do
    {
      if ( v8 > 0xFFFFFFFFFLL )
        return 0LL;
      if ( ((*v15 >> 50) & 1) == 0 )
        return 0LL;
      v16 = *(_QWORD *)(v14 + 6);
      if ( *(_QWORD *)(qword_140C4E688 + 8 * ((v16 >> 39) & 0x3FF)) != v4
        || (*(_BYTE *)v14 & 7u) > 1
        || (v16 & 0x1000000000LL) != 0 )
      {
        return 0LL;
      }
      v14 += 48LL;
      ++v8;
      v15 += 6;
    }
    while ( v14 - 34 != v7 );
  }
  BugCheckParameter2 = (volatile signed __int64 *)(v4 + 192);
  v17 = v2;
  v66 = 0LL;
  v18 = KeAbPreAcquire(v4 + 192, 0LL);
  v19 = 17LL;
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL)
    && !ExfTryAcquirePushLockShared((unsigned __int64 *)BugCheckParameter2) )
  {
    if ( v18 )
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v18);
    return 0LL;
  }
  if ( v18 )
    *(_BYTE *)(v18 + 26) |= 1u;
  v21 = v3 - 0x58000000000LL;
  if ( v5 == v7 )
    goto LABEL_49;
  v22 = (_QWORD *)(v3 - 0x57FFFFFFFD8LL);
  while ( 1 )
  {
    if ( v21 == v1 )
    {
      v23 = (_QWORD *)(v21 + 16);
      if ( (*(_BYTE *)(v21 + 34) & 7) != 0 )
        MiSetOriginalPtePfnFromFreeList(v23, v19);
      else
        *v23 &= 0xFFFFFFFFFFFFFC1FuLL;
      goto LABEL_48;
    }
    if ( v17 > 0xFFFFFFFFFLL
      || ((*v22 >> 50) & 1) == 0
      || *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v21 + 40) >> 39) & 0x3FFLL)) != v58
      || (*(_BYTE *)(v21 + 34) & 7u) > 1
      || _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
    {
      goto LABEL_73;
    }
    if ( (*(_BYTE *)(v21 + 34) & 7u) > 1 )
      goto LABEL_72;
    v24 = *(_QWORD *)(v21 + 40);
    if ( *(_QWORD *)(qword_140C4E688 + 8 * ((v24 >> 39) & 0x3FF)) != v58
      || (*(_BYTE *)(v21 + 35) & 0x40) != 0
      || (v24 & 0x1000000000LL) != 0 )
    {
      goto LABEL_72;
    }
    if ( !(unsigned int)MiUnlinkFreeOrZeroedPage(v17) )
      break;
    ++*((_DWORD *)&v66 + ((unsigned __int64)*(unsigned __int8 *)(v21 + 34) >> 6));
LABEL_48:
    v21 += 48LL;
    ++v17;
    v22 += 6;
    if ( v21 == v7 )
      goto LABEL_49;
  }
  MiReturnFreeZeroPage(v21, 512LL);
LABEL_72:
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_73:
  if ( v21 == v7 )
  {
LABEL_49:
    v25 = 0;
    v26 = 1;
    do
    {
      v27 = v6 + 1;
      v28 = *((_DWORD *)&v66 + v27);
      v29 = v6 + 2;
      v30 = *((_DWORD *)&v66 + v29);
      v31 = v6 + 3;
      v32 = *((_DWORD *)&v66 + v31);
      v33 = v28;
      v34 = *((_DWORD *)&v66 + v6);
      v35 = v30;
      v36 = v6;
      v37 = v34;
      if ( v25 >= v34 )
        v37 = v25;
      if ( v37 >= v28 )
        v33 = v37;
      if ( v33 >= v30 )
        v35 = v33;
      v38 = v25 < v34;
      v25 = *((_DWORD *)&v66 + v31);
      if ( !v38 )
        v36 = v26;
      v26 = v6 + 3;
      if ( v37 >= v28 )
        LODWORD(v27) = v36;
      if ( v33 >= v30 )
        LODWORD(v29) = v27;
      if ( v35 >= v32 )
        v26 = v29;
      v6 += 4;
      if ( v35 >= v32 )
        v25 = v35;
    }
    while ( v6 < 4 );
    v39 = v55;
    v40 = 0;
    v41 = v62;
    v42 = v26;
    if ( v55 != 1 )
    {
      while ( 1 )
      {
        v21 -= 48LL;
        if ( (unsigned int)MiPfnZeroingNeeded(v21, v26) )
          break;
        if ( v21 == v62 )
          goto LABEL_80;
      }
      v55 = 1;
      v39 = 1;
    }
LABEL_80:
    v43 = 1;
    v54 = 1;
    if ( v39 != 1 )
    {
      v43 = MiColdPageSizeSupported(2LL) == 0;
      v54 = v43;
    }
    v44 = v62 + 720;
    v45 = 0;
    v46 = v62 + 720;
    for ( i = 0; i < 0x10; ++i )
    {
      if ( *(unsigned __int8 *)(v46 + 34) >> 6 != v26 )
      {
        MiChangePageAttribute(v46, v26, 1LL);
        v43 = v54;
      }
      if ( !v43 )
      {
        v48 = *(_QWORD *)(v46 + 16);
        if ( qword_140C4DF80 && (v48 & 0x10) == 0 )
          v48 &= ~qword_140C4DF80;
        if ( HIDWORD(v48) != 4294967293 )
          v45 = 1;
      }
      *(_QWORD *)(v46 + 16) = 0LL;
      v46 -= 48LL;
    }
    v49 = v63;
    v61 = 0LL;
    v60 = v55;
    v59 = v63;
    v50 = *(_QWORD *)(v58 + 16) + 4544LL * v56;
    HIDWORD(v60) = 2;
    LOBYTE(v61) = 17;
    MiInitializeAllResidentPageBasePfns(v58, v63, 16, 2, v42, v43, 1);
    MiCreateInitialLargeLeafPfns(v63, 16, 2, v42, *(_WORD *)v58, 1);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v50 + 4328);
    KxAcquireQueuedSpinLock(&LockHandle, v50 + 4328, v51, v52);
    v53 = v64;
    do
    {
      if ( v44 == v41 )
        MiInsertLargePageInNodeList(&v59);
      if ( v44 != v53 )
        _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++v40;
      v44 -= 48LL;
    }
    while ( v40 < 0x10 );
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v45 )
      MiChangePageHeatImmediate(v49, 2LL, 0LL);
    MiReleasePushLockUnordered((volatile signed __int64 *)(v58 + 192));
    return 1LL;
  }
  for ( ; v5 < v21; v5 += 48LL )
  {
    if ( v5 != v1 )
    {
      MiReturnFreeZeroPage(v5, 512LL);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  MiReleasePushLockUnordered(BugCheckParameter2);
  return 0LL;
}
