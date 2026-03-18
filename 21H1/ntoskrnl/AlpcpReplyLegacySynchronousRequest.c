/*
 * XREFs of AlpcpReplyLegacySynchronousRequest @ 0x14064A8F4
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x140611820 (NtReplyWaitReceivePortEx.c)
 *     NtReplyPort @ 0x14064BE10 (NtReplyPort.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeReleaseSemaphoreEx @ 0x140330D70 (KeReleaseSemaphoreEx.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     AlpcpAvailableBufferSize @ 0x1405C6D34 (AlpcpAvailableBufferSize.c)
 *     AlpcpUnlockMessage @ 0x14060A7C4 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     AlpcpValidateMessage @ 0x1406107A8 (AlpcpValidateMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14064A6D4 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpCancelMessage @ 0x14064ACC0 (AlpcpCancelMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x14064B438 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x14064B518 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpCaptureMessageData @ 0x1406C2A78 (AlpcpCaptureMessageData.c)
 *     AlpcpValidateDataInformation @ 0x1408BE680 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpReplyLegacySynchronousRequest(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v5; // r14
  int v6; // ebx
  __int64 v7; // r9
  ULONG_PTR v8; // rsi
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r13
  _QWORD *v12; // rbx
  signed __int64 *v13; // rsi
  bool v14; // bl
  _QWORD *v15; // rax
  unsigned __int64 v16; // rax
  size_t v17; // rdx
  ULONG_PTR v18; // rbx
  __int64 v19; // r15
  ULONG_PTR v20; // r14
  unsigned int v21; // ecx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rbx
  _DWORD *v25; // r9
  signed __int32 v27[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v28; // [rsp+30h] [rbp-68h]
  __int128 v29; // [rsp+40h] [rbp-58h] BYREF
  __int128 v30; // [rsp+50h] [rbp-48h]
  __int64 v31; // [rsp+60h] [rbp-38h]
  ULONG_PTR v32; // [rsp+B8h] [rbp+20h] BYREF

  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v5 = *(_QWORD *)a1;
  if ( a3 )
  {
    AlpcpProbeAndCaptureMessageHeader(a2, (__int64)&v29, 0);
    v6 = AlpcpValidateMessage((unsigned __int16 *)&v29, 1);
    v28 = v6;
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( WORD3(v29) )
    {
      v6 = AlpcpValidateDataInformation(a2, &v29);
      v28 = v6;
      if ( v6 < 0 )
        return (unsigned int)v6;
    }
  }
  else
  {
    v29 = *(_OWORD *)a2;
    v30 = *(_OWORD *)(a2 + 16);
    HIDWORD(v31) = HIDWORD(*(_QWORD *)(a2 + 32));
    LODWORD(v31) = 0;
    v6 = AlpcpValidateMessage((unsigned __int16 *)&v29, 1);
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  v6 = AlpcpLookupMessage(v5, DWORD2(v30), v31, v7, &v32);
  v28 = v6;
  if ( v6 < 0 )
    return (unsigned int)v6;
  v8 = v32;
  v9 = *(_DWORD *)(v32 + 40);
  if ( (v9 & 0x80u) != 0 )
  {
    AlpcpCancelMessage(v5, v32, 0x10000LL);
    return (unsigned int)-1073741769;
  }
  if ( (v9 & 0x200) != 0 || !*(_QWORD *)(v32 + 32) )
    goto LABEL_47;
  v10 = *(_QWORD *)(v32 + 16);
  if ( v10 == v5 )
  {
LABEL_27:
    if ( (v9 & 7) == 3 )
    {
      v14 = 1;
      goto LABEL_29;
    }
LABEL_47:
    AlpcpUnlockMessage(v8);
    return (unsigned int)-1073741790;
  }
  if ( v10 )
  {
    if ( (*(_BYTE *)(v5 + 416) & 6) != 6 )
      goto LABEL_47;
    v15 = *(_QWORD **)(v5 + 16);
    if ( !v15 || *v15 != v10 )
      goto LABEL_47;
    goto LABEL_27;
  }
  v11 = *(_QWORD *)(v32 + 24);
  if ( !v11 )
    goto LABEL_47;
  v12 = *(_QWORD **)(v11 + 16);
  v13 = v12 - 2;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v12 - 2), 0LL);
  if ( ((*(_DWORD *)(v11 + 416) >> 1) & 3) == 2 )
    v14 = *v12 == v5 || v12[1] == v5;
  else
    v14 = v12[2] == v5;
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  v8 = v32;
LABEL_29:
  if ( !v14 )
    goto LABEL_47;
  v16 = AlpcpAvailableBufferSize(v8);
  if ( v17 > v16 )
  {
    v6 = AlpcpCaptureMessageData(v8, v17, a2 + 40);
    v28 = v6;
  }
  else
  {
    memmove((void *)(v8 + 280), (const void *)(a2 + 40), v17);
    v6 = 0;
    v28 = 0;
  }
  if ( v6 >= 0 )
  {
    *(_DWORD *)(v8 + 40) |= 0x8000u;
    _InterlockedOr(v27, 0);
    v18 = v32;
    v19 = *(_QWORD *)(v32 + 24);
    AlpcpClearOwnerPortMessage(v32);
    AlpcpRemoveMessageFromPendingQueue(v18);
    *(_DWORD *)(v18 + 240) = v29;
    *(_WORD *)(v18 + 244) = 2;
    v20 = v32;
    *(_OWORD *)(v32 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
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
      v20 = v32;
    }
    else
    {
      *(_QWORD *)(v20 + 120) = *(_QWORD *)(v19 + 56);
    }
    v24 = *(_QWORD *)(v20 + 32);
    *(_QWORD *)(v20 + 32) = 0LL;
    --*(_WORD *)(v20 - 30);
    *(_DWORD *)(v8 + 40) = *(_DWORD *)(v8 + 40) & 0xFFFF7EFF | 0x100;
    AlpcpUnlockMessage(v20);
    if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
      *(_QWORD *)(a1 + 24) = v24;
    else
      KeReleaseSemaphoreEx(v24 + 1160, 1LL, 1LL, v25, 2);
    return v28;
  }
  else
  {
    AlpcpUnlockMessage(v8);
  }
  return (unsigned int)v6;
}
