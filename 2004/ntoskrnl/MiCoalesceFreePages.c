/*
 * XREFs of MiCoalesceFreePages @ 0x14023EE10
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14023F530 (MiUnlinkFreeOrZeroedPage.c)
 *     KeAbPostReleaseEx @ 0x140272DF0 (KeAbPostReleaseEx.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiInsertLargePageInNodeList @ 0x140316B80 (MiInsertLargePageInNodeList.c)
 *     MiPfnZeroingNeeded @ 0x14031A050 (MiPfnZeroingNeeded.c)
 *     MiReturnFreeZeroPage @ 0x14031C568 (MiReturnFreeZeroPage.c)
 *     ExfTryAcquirePushLockShared @ 0x140323F40 (ExfTryAcquirePushLockShared.c)
 *     MiReleasePushLockUnordered @ 0x140343214 (MiReleasePushLockUnordered.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiCreateInitialLargeLeafPfns @ 0x1403F0724 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403F0F18 (MiInitializeAllResidentPageBasePfns.c)
 *     MiChangePageHeatImmediate @ 0x1403F2000 (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x1403F20A8 (MiColdPageSizeSupported.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
  __int64 v18; // rdi
  unsigned __int64 v20; // rdi
  _QWORD *v21; // r14
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned int v24; // r13d
  unsigned int v25; // ebx
  __int64 v26; // r14
  unsigned int v27; // r9d
  __int64 v28; // r10
  unsigned int v29; // edx
  __int64 v30; // rcx
  unsigned int v31; // r8d
  unsigned int v32; // r11d
  unsigned int v33; // ebp
  unsigned int v34; // esi
  unsigned int v35; // eax
  unsigned int v36; // r15d
  bool v37; // cf
  int v38; // r9d
  unsigned int v39; // r12d
  signed __int64 v40; // r13
  unsigned int v41; // r14d
  BOOL v42; // r8d
  signed __int64 v43; // rdi
  int v44; // ebp
  signed __int64 v45; // rsi
  unsigned int i; // r15d
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r15
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rbx
  int v53; // [rsp+40h] [rbp-A8h]
  unsigned int v54; // [rsp+44h] [rbp-A4h]
  unsigned int v55; // [rsp+48h] [rbp-A0h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+50h] [rbp-98h]
  __int64 v57; // [rsp+58h] [rbp-90h]
  unsigned __int64 v58; // [rsp+60h] [rbp-88h] BYREF
  __int64 v59; // [rsp+68h] [rbp-80h]
  __int64 v60; // [rsp+70h] [rbp-78h]
  signed __int64 v61; // [rsp+78h] [rbp-70h]
  unsigned __int64 v62; // [rsp+80h] [rbp-68h]
  __int64 v63; // [rsp+88h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-58h] BYREF
  __int128 v65; // [rsp+A8h] [rbp-40h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !MmPhysicalMemoryBlock )
    return 0LL;
  v1 = 48 * a1 - 0x58000000000LL;
  v2 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v63 = v1;
  v62 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v54 = *(_BYTE *)(v1 + 34) & 7;
  v3 = 48 * (a1 & 0xFFFFFFFFFFFFFFF0uLL);
  v4 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v1 + 40) >> 39) & 0x3FFLL));
  v57 = v4;
  v5 = v3 - 0x58000000000LL;
  v61 = v3 - 0x58000000000LL;
  v6 = 0;
  v7 = v3 - 0x58000000000LL + 768;
  v8 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = dword_140C4DC88;
  v10 = v3 / 48;
  if ( dword_140C4DC84 > (unsigned int)dword_140C4DC88
    || (v11 = (char *)qword_140C4DCC8 + 16 * dword_140C4DC84, v10 < *(_QWORD *)v11)
    || dword_140C4DC84 != dword_140C4DC88 && v10 >= *((_QWORD *)v11 + 2) )
  {
    v12 = 0;
    if ( dword_140C4DC88 < 0 )
LABEL_101:
      KeBugCheckEx(0x1Au, 0x6201uLL, v10, 0LL, 0LL);
    while ( 1 )
    {
      v13 = (v12 + v9) >> 1;
      v11 = (char *)qword_140C4DCC8 + 16 * v13;
      if ( v10 >= *(_QWORD *)v11 )
      {
        if ( v13 == dword_140C4DC88 || v10 < *((_QWORD *)v11 + 2) )
        {
          dword_140C4DC84 = (v12 + v9) >> 1;
          break;
        }
        v12 = v13 + 1;
      }
      else
      {
        if ( !v13 )
          KeBugCheckEx(0x1Au, 0x6200uLL, v10, (ULONG_PTR)qword_140C4DCC8, 0LL);
        v9 = v13 - 1;
      }
      if ( v9 < v12 )
        goto LABEL_101;
    }
  }
  v55 = *((_DWORD *)v11 + 2);
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
      if ( *(_QWORD *)(qword_140C4E448 + 8 * ((v16 >> 39) & 0x3FF)) != v4
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
  v65 = 0LL;
  v18 = KeAbPreAcquire(v4 + 192, 0LL, 1);
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL)
    && !(unsigned __int8)ExfTryAcquirePushLockShared(BugCheckParameter2) )
  {
    if ( v18 )
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2);
    return 0LL;
  }
  if ( v18 )
    *(_BYTE *)(v18 + 26) |= 1u;
  v20 = v3 - 0x58000000000LL;
  if ( v5 == v7 )
    goto LABEL_49;
  v21 = (_QWORD *)(v3 - 0x57FFFFFFFD8LL);
  while ( 1 )
  {
    if ( v20 == v1 )
    {
      v22 = (_QWORD *)(v20 + 16);
      if ( (*(_BYTE *)(v20 + 34) & 7) != 0 )
        MiSetOriginalPtePfnFromFreeList(v22);
      else
        *v22 &= 0xFFFFFFFFFFFFFC1FuLL;
      goto LABEL_48;
    }
    if ( v17 > 0xFFFFFFFFFLL
      || ((*v21 >> 50) & 1) == 0
      || *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v20 + 40) >> 39) & 0x3FFLL)) != v57
      || (*(_BYTE *)(v20 + 34) & 7u) > 1
      || _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      goto LABEL_73;
    }
    if ( (*(_BYTE *)(v20 + 34) & 7u) > 1 )
      goto LABEL_72;
    v23 = *(_QWORD *)(v20 + 40);
    if ( *(_QWORD *)(qword_140C4E448 + 8 * ((v23 >> 39) & 0x3FF)) != v57
      || (*(_BYTE *)(v20 + 35) & 0x40) != 0
      || (v23 & 0x1000000000LL) != 0 )
    {
      goto LABEL_72;
    }
    if ( !(unsigned int)MiUnlinkFreeOrZeroedPage(v17) )
      break;
    ++*((_DWORD *)&v65 + ((unsigned __int64)*(unsigned __int8 *)(v20 + 34) >> 6));
LABEL_48:
    v20 += 48LL;
    ++v17;
    v21 += 6;
    if ( v20 == v7 )
      goto LABEL_49;
  }
  MiReturnFreeZeroPage(v20, 512LL);
LABEL_72:
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_73:
  if ( v20 == v7 )
  {
LABEL_49:
    v24 = 0;
    v25 = 1;
    do
    {
      v26 = v6 + 1;
      v27 = *((_DWORD *)&v65 + v26);
      v28 = v6 + 2;
      v29 = *((_DWORD *)&v65 + v28);
      v30 = v6 + 3;
      v31 = *((_DWORD *)&v65 + v30);
      v32 = v27;
      v33 = *((_DWORD *)&v65 + v6);
      v34 = v29;
      v35 = v6;
      v36 = v33;
      if ( v24 >= v33 )
        v36 = v24;
      if ( v36 >= v27 )
        v32 = v36;
      if ( v32 >= v29 )
        v34 = v32;
      v37 = v24 < v33;
      v24 = *((_DWORD *)&v65 + v30);
      if ( !v37 )
        v35 = v25;
      v25 = v6 + 3;
      if ( v36 >= v27 )
        LODWORD(v26) = v35;
      if ( v32 >= v29 )
        LODWORD(v28) = v26;
      if ( v34 >= v31 )
        v25 = v28;
      v6 += 4;
      if ( v34 >= v31 )
        v24 = v34;
    }
    while ( v6 < 4 );
    v38 = v54;
    v39 = 0;
    v40 = v61;
    v41 = v25;
    if ( v54 != 1 )
    {
      while ( 1 )
      {
        v20 -= 48LL;
        if ( (unsigned int)MiPfnZeroingNeeded(v20, v25) )
          break;
        if ( v20 == v61 )
          goto LABEL_80;
      }
      v54 = 1;
      v38 = 1;
    }
LABEL_80:
    v42 = 1;
    v53 = 1;
    if ( v38 != 1 )
    {
      v42 = MiColdPageSizeSupported(2LL) == 0;
      v53 = v42;
    }
    v43 = v61 + 720;
    v44 = 0;
    v45 = v61 + 720;
    for ( i = 0; i < 0x10; ++i )
    {
      if ( *(unsigned __int8 *)(v45 + 34) >> 6 != v25 )
      {
        MiChangePageAttribute(v45, v25, 1LL);
        v42 = v53;
      }
      if ( !v42 )
      {
        v47 = *(_QWORD *)(v45 + 16);
        if ( qword_140C4DD40 && (v47 & 0x10) == 0 )
          v47 &= ~qword_140C4DD40;
        if ( HIDWORD(v47) != 4294967293 )
          v44 = 1;
      }
      *(_QWORD *)(v45 + 16) = 0LL;
      v45 -= 48LL;
    }
    v48 = v62;
    v60 = 0LL;
    v59 = v54;
    v58 = v62;
    v49 = *(_QWORD *)(v57 + 16) + 4544LL * v55;
    HIDWORD(v59) = 2;
    LOBYTE(v60) = 17;
    MiInitializeAllResidentPageBasePfns(v57, v62, 16, 2, v41, v42, 1);
    MiCreateInitialLargeLeafPfns(v62, 16, 2, v41, *(_WORD *)v57, 1);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v49 + 4328);
    KxAcquireQueuedSpinLock(&LockHandle);
    v52 = v63;
    do
    {
      if ( v43 == v40 )
        MiInsertLargePageInNodeList(&v58, v50, v51);
      if ( v43 != v52 )
        _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++v39;
      v43 -= 48LL;
    }
    while ( v39 < 0x10 );
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v44 )
      MiChangePageHeatImmediate(v48, 2LL, 0LL);
    MiReleasePushLockUnordered(v57 + 192);
    return 1LL;
  }
  for ( ; v5 < v20; v5 += 48LL )
  {
    if ( v5 != v1 )
    {
      MiReturnFreeZeroPage(v5, 512LL);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  MiReleasePushLockUnordered((ULONG_PTR)BugCheckParameter2);
  return 0LL;
}
