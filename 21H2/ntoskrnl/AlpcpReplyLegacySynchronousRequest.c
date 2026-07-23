/*
 * XREFs of AlpcpReplyLegacySynchronousRequest @ 0x1406D133C
 * Callers:
 *     NtReplyPort @ 0x1406CDAE0 (NtReplyPort.c)
 *     NtReplyWaitReceivePortEx @ 0x1406DA1C0 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     AlpcpAvailableBufferSize @ 0x1405CF054 (AlpcpAvailableBufferSize.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1406CF9E4 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpCancelMessage @ 0x1406D277C (AlpcpCancelMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1406D3010 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x1406D309C (AlpcpClearOwnerPortMessage.c)
 *     AlpcpCaptureMessageData @ 0x1406D34DC (AlpcpCaptureMessageData.c)
 *     AlpcpValidateMessage @ 0x1406D3688 (AlpcpValidateMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x1406D57A0 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpLookupMessage @ 0x1406D5FD0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     AlpcpValidateDataInformation @ 0x1408C3138 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpReplyLegacySynchronousRequest(__int64 *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdx
  int v6; // ebx
  int v7; // r9d
  ULONG_PTR v8; // rsi
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r13
  _QWORD *v12; // rbx
  signed __int64 *v13; // rsi
  bool v14; // bl
  _QWORD *v15; // rax
  unsigned __int64 v16; // rax
  size_t v17; // rdx
  ULONG_PTR v18; // rbx
  __int64 v19; // r13
  ULONG_PTR v20; // r14
  unsigned int v21; // ecx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r9
  signed __int32 v27[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+38h] [rbp-60h]
  __int128 v30; // [rsp+48h] [rbp-50h] BYREF
  __int128 v31; // [rsp+58h] [rbp-40h]
  __int64 v32; // [rsp+68h] [rbp-30h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a2;
  v4 = *a1;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  BugCheckParameter2 = 0LL;
  v29 = v4;
  if ( a3 )
  {
    AlpcpProbeAndCaptureMessageHeader(a2, (__int64)&v30, 0);
    LOBYTE(v5) = 1;
    v6 = AlpcpValidateMessage(&v30, v5);
    v28 = v6;
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( WORD3(v30) )
    {
      v6 = AlpcpValidateDataInformation(v3, &v30);
      v28 = v6;
      if ( v6 < 0 )
        return (unsigned int)v6;
    }
  }
  else
  {
    v30 = *(_OWORD *)a2;
    v31 = *(_OWORD *)(a2 + 16);
    HIDWORD(v32) = HIDWORD(*(_QWORD *)(a2 + 32));
    LODWORD(v32) = 0;
    LOBYTE(a2) = 1;
    v6 = AlpcpValidateMessage(&v30, a2);
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  v6 = AlpcpLookupMessage(v4, DWORD2(v31), v32, v7, (__int64)&BugCheckParameter2);
  v28 = v6;
  if ( v6 < 0 )
    return (unsigned int)v6;
  v8 = BugCheckParameter2;
  v9 = *(_DWORD *)(BugCheckParameter2 + 40);
  if ( (v9 & 0x80u) != 0 )
  {
    AlpcpCancelMessage(v4, BugCheckParameter2, 0x10000LL);
    return (unsigned int)-1073741769;
  }
  if ( (v9 & 0x200) != 0 || !*(_QWORD *)(BugCheckParameter2 + 32) )
    goto LABEL_48;
  v10 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( v10 != v4 )
  {
    if ( (v9 & 7) == 0 )
    {
      v11 = *(_QWORD *)(BugCheckParameter2 + 24);
      if ( v11 )
      {
        v12 = *(_QWORD **)(v11 + 16);
        v13 = v12 - 2;
        ExAcquirePushLockSharedEx((ULONG_PTR)(v12 - 2), 0LL);
        if ( ((*(_DWORD *)(v11 + 416) >> 1) & 3) == 2 )
          v14 = *v12 == v4 || v12[1] == v4;
        else
          v14 = v12[2] == v4;
        if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v13);
        KeAbPostRelease((ULONG_PTR)v13);
        v8 = BugCheckParameter2;
        goto LABEL_30;
      }
LABEL_48:
      AlpcpUnlockMessage(v8);
      return (unsigned int)-1073741790;
    }
    if ( (*(_BYTE *)(v4 + 416) & 6) != 6 )
      goto LABEL_48;
    v15 = *(_QWORD **)(v4 + 16);
    if ( !v15 || *v15 != v10 )
      goto LABEL_48;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 7) != 3 || (v9 & 0x2000) != 0 )
    goto LABEL_48;
  v14 = 1;
LABEL_30:
  if ( !v14 )
    goto LABEL_48;
  v16 = AlpcpAvailableBufferSize(v8);
  if ( v17 > v16 )
  {
    v6 = AlpcpCaptureMessageData(v8, v17, v3 + 40);
    v28 = v6;
  }
  else
  {
    memmove((void *)(v8 + 280), (const void *)(v3 + 40), v17);
    v6 = 0;
    v28 = 0;
  }
  if ( v6 >= 0 )
  {
    *(_DWORD *)(v8 + 40) |= 0x8000u;
    _InterlockedOr(v27, 0);
    v18 = BugCheckParameter2;
    v19 = *(_QWORD *)(BugCheckParameter2 + 24);
    AlpcpRemoveMessageFromPendingQueue(BugCheckParameter2);
    *(_DWORD *)(v18 + 240) = v30;
    *(_WORD *)(v18 + 244) = 2;
    v20 = BugCheckParameter2;
    *(_OWORD *)(BugCheckParameter2 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
    *(_DWORD *)(v8 + 40) |= 0x200u;
    v21 = *(_DWORD *)(v8 + 40) & 0xFFFFFF87 | (4 * (*(_DWORD *)(v19 + 416) & 6));
    *(_DWORD *)(v8 + 40) = v21;
    if ( ((v21 >> 3) & 0xF) == 1 )
    {
      v22 = *(_QWORD *)(v19 + 16);
      ExAcquirePushLockSharedEx(v22 - 16, 0LL);
      v23 = *(_QWORD *)(v22 + 8);
      if ( v23 )
        *(_QWORD *)(v20 + 120) = *(_QWORD *)(v23 + 56);
      else
        *(_QWORD *)(v20 + 120) = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v22 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v22 - 16));
      KeAbPostRelease(v22 - 16);
      v20 = BugCheckParameter2;
    }
    else
    {
      *(_QWORD *)(v20 + 120) = *(_QWORD *)(v19 + 56);
    }
    v24 = *(_QWORD *)(v20 + 32);
    *(_QWORD *)(v20 + 32) = 0LL;
    --*(_WORD *)(v20 - 30);
    *(_DWORD *)(v8 + 40) = *(_DWORD *)(v8 + 40) & 0xFFFF7EF8 | 0x105;
    AlpcpClearOwnerPortMessage(v20);
    AlpcpSetOwnerPortMessage(v20, v4);
    AlpcpUnlockMessage(v20);
    if ( (a1[6] & 4) != 0 )
      a1[3] = v24;
    else
      KeReleaseSemaphoreEx(v24 + 1160, 1, 1, v25, 2);
    return v28;
  }
  else
  {
    AlpcpUnlockMessage(v8);
  }
  return (unsigned int)v6;
}
