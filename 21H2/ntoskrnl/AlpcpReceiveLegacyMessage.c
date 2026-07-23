/*
 * XREFs of AlpcpReceiveLegacyMessage @ 0x1406D9F00
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1406DA1C0 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x140212AE0 (ObReferenceObjectSafe.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     AlpcpCancelMessage @ 0x1406D277C (AlpcpCancelMessage.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406D31BC (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpReadMessageData @ 0x1406D6F60 (AlpcpReadMessageData.c)
 *     AlpcpReceiveMessagePort @ 0x1406D8320 (AlpcpReceiveMessagePort.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpReceiveLegacyMessage(__int64 *a1, unsigned __int64 a2, LARGE_INTEGER *a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 v7; // r13
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _DMA_ADAPTER *v12; // r15
  unsigned int v13; // r14d
  ULONG_PTR v14; // rdi
  void *v15; // rdx
  struct _DMA_ADAPTER **v17; // rdi
  __int64 v18; // [rsp+30h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  struct _DMA_ADAPTER *v21; // [rsp+48h] [rbp-50h]
  __int64 v22; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *v23; // [rsp+58h] [rbp-40h]
  __int64 *v24; // [rsp+A0h] [rbp+8h]

  v24 = a1;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v23 = CurrentThread;
  v7 = CurrentThread->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  v20 = 0LL;
  v8 = *a1;
  v18 = *a1;
  v22 = *a1;
  if ( v7 )
  {
    if ( a3 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a3;
      v20 = *(_QWORD *)v11;
      a3 = (LARGE_INTEGER *)&v20;
    }
    if ( a2 )
    {
      v9 = a2;
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a2 >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v9 = *(_BYTE *)v9;
      *(_BYTE *)(v9 + 39) = *(_BYTE *)(v9 + 39);
    }
    if ( a4 )
    {
      v10 = (__int64)a4;
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
    a1 = v24;
  }
  else
  {
    v7 = (CurrentThread->MiscFlags & 0x400) != 0;
  }
  v12 = 0LL;
  v21 = 0LL;
  if ( (*(_BYTE *)(v8 + 416) & 6) == 6 )
  {
    v17 = *(struct _DMA_ADAPTER ***)(v8 + 16);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v17 - 2), 0LL);
    v12 = *v17;
    v21 = v12;
    if ( v12 && ObReferenceObjectSafe((__int64)v12) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v17 - 2);
      KeAbPostRelease((ULONG_PTR)(v17 - 2));
      v18 = (__int64)v12;
      v22 = (__int64)v12;
      a1 = v24;
      *v24 = (__int64)v12;
      goto LABEL_18;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v17 - 2);
    KeAbPostRelease((ULONG_PTR)(v17 - 2));
    return 3221225527LL;
  }
  else
  {
LABEL_18:
    while ( 1 )
    {
      v13 = AlpcpReceiveMessagePort(a1, v7, a3, &BugCheckParameter2, 0);
      if ( v13 )
        break;
      v14 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
      {
        *(_QWORD *)(BugCheckParameter2 + 200) = v23;
        if ( a2 )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v14 + 240);
          *(_OWORD *)(a2 + 16) = *(_OWORD *)(v14 + 256);
          *(_QWORD *)(a2 + 32) = *(_QWORD *)(v14 + 272);
          if ( (*(_DWORD *)(v18 + 256) & 0x1000) != 0 )
            *(_WORD *)(a2 + 4) &= 0xC00Fu;
          v15 = (void *)(a2 + 40);
          if ( *(_QWORD *)(v14 + 176) )
            AlpcpGetDataFromUserVaSafe(v14, v15);
          else
            AlpcpReadMessageData(v14, (char *)v15);
        }
        if ( a4 )
          *a4 = *(_QWORD *)(v14 + 120);
        if ( a2 )
        {
          AlpcpUnlockMessage(v14);
        }
        else
        {
          *(_QWORD *)(v14 + 200) = 0LL;
          AlpcpCancelMessage(v18, v14, 0x10000);
        }
        break;
      }
      if ( *(_QWORD *)(BugCheckParameter2 + 64) == v18 )
      {
        *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
        *(_QWORD *)(v14 + 56) = 0LL;
      }
      AlpcpCancelMessage(v18, v14, 0x10000);
      BugCheckParameter2 = 0LL;
      a1 = v24;
    }
    if ( v12 )
      HalPutDmaAdapter(v12);
    return v13;
  }
}
