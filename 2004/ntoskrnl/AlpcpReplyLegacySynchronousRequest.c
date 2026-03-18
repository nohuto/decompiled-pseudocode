/*
 * XREFs of AlpcpReplyLegacySynchronousRequest @ 0x14062CD44
 * Callers:
 *     NtReplyPort @ 0x14062E070 (NtReplyPort.c)
 *     NtReplyWaitReceivePortEx @ 0x1406899A0 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     KeReleaseSemaphoreEx @ 0x1402EBC30 (KeReleaseSemaphoreEx.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     AlpcpAvailableBufferSize @ 0x1405C7D34 (AlpcpAvailableBufferSize.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14062CB24 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpCancelMessage @ 0x14062D110 (AlpcpCancelMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x14062D888 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x14062D968 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpUnlockMessage @ 0x140682914 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x1406871E0 (AlpcpLookupMessage.c)
 *     AlpcpValidateMessage @ 0x140688928 (AlpcpValidateMessage.c)
 *     AlpcpCaptureMessageData @ 0x1406E2FF8 (AlpcpCaptureMessageData.c)
 *     AlpcpValidateDataInformation @ 0x1408BF9D0 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpReplyLegacySynchronousRequest(__int64 *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r15
  __int64 v5; // r14
  __int64 v6; // rdx
  int v7; // ebx
  int v8; // r9d
  ULONG_PTR v9; // rsi
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r13
  _QWORD *v13; // rbx
  signed __int64 *v14; // rsi
  bool v15; // bl
  _QWORD *v16; // rax
  unsigned __int64 v17; // rax
  size_t v18; // rdx
  ULONG_PTR v19; // rbx
  __int64 v20; // r15
  ULONG_PTR v21; // r14
  unsigned int v22; // ecx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rbx
  _DWORD *v26; // r9
  signed __int32 v28[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v29; // [rsp+30h] [rbp-68h]
  __int128 v30; // [rsp+40h] [rbp-58h] BYREF
  __int128 v31; // [rsp+50h] [rbp-48h]
  __int64 v32; // [rsp+60h] [rbp-38h]
  ULONG_PTR v33; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a2;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v5 = *a1;
  if ( a3 )
  {
    AlpcpProbeAndCaptureMessageHeader(a2, (__int64)&v30, 0);
    LOBYTE(v6) = 1;
    v7 = AlpcpValidateMessage(&v30, v6);
    v29 = v7;
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( WORD3(v30) )
    {
      v7 = AlpcpValidateDataInformation(v3, &v30);
      v29 = v7;
      if ( v7 < 0 )
        return (unsigned int)v7;
    }
  }
  else
  {
    v30 = *(_OWORD *)a2;
    v31 = *(_OWORD *)(a2 + 16);
    HIDWORD(v32) = HIDWORD(*(_QWORD *)(a2 + 32));
    LODWORD(v32) = 0;
    LOBYTE(a2) = 1;
    v7 = AlpcpValidateMessage(&v30, a2);
    if ( v7 < 0 )
      return (unsigned int)v7;
  }
  v7 = AlpcpLookupMessage(v5, DWORD2(v31), v32, v8, (__int64)&v33);
  v29 = v7;
  if ( v7 < 0 )
    return (unsigned int)v7;
  v9 = v33;
  v10 = *(_DWORD *)(v33 + 40);
  if ( (v10 & 0x80u) != 0 )
  {
    AlpcpCancelMessage(v5, v33, 0x10000LL);
    return (unsigned int)-1073741769;
  }
  if ( (v10 & 0x200) != 0 || !*(_QWORD *)(v33 + 32) )
    goto LABEL_47;
  v11 = *(_QWORD *)(v33 + 16);
  if ( v11 == v5 )
  {
LABEL_27:
    if ( (v10 & 7) == 3 )
    {
      v15 = 1;
      goto LABEL_29;
    }
LABEL_47:
    AlpcpUnlockMessage(v9);
    return (unsigned int)-1073741790;
  }
  if ( v11 )
  {
    if ( (*(_BYTE *)(v5 + 416) & 6) != 6 )
      goto LABEL_47;
    v16 = *(_QWORD **)(v5 + 16);
    if ( !v16 || *v16 != v11 )
      goto LABEL_47;
    goto LABEL_27;
  }
  v12 = *(_QWORD *)(v33 + 24);
  if ( !v12 )
    goto LABEL_47;
  v13 = *(_QWORD **)(v12 + 16);
  v14 = v13 - 2;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v13 - 2), 0LL);
  if ( ((*(_DWORD *)(v12 + 416) >> 1) & 3) == 2 )
    v15 = *v13 == v5 || v13[1] == v5;
  else
    v15 = v13[2] == v5;
  if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v14);
  KeAbPostRelease((ULONG_PTR)v14);
  v9 = v33;
LABEL_29:
  if ( !v15 )
    goto LABEL_47;
  v17 = AlpcpAvailableBufferSize(v9);
  if ( v18 > v17 )
  {
    v7 = AlpcpCaptureMessageData(v9, v18, v3 + 40);
    v29 = v7;
  }
  else
  {
    memmove((void *)(v9 + 280), (const void *)(v3 + 40), v18);
    v7 = 0;
    v29 = 0;
  }
  if ( v7 >= 0 )
  {
    *(_DWORD *)(v9 + 40) |= 0x8000u;
    _InterlockedOr(v28, 0);
    v19 = v33;
    v20 = *(_QWORD *)(v33 + 24);
    AlpcpClearOwnerPortMessage(v33);
    AlpcpRemoveMessageFromPendingQueue(v19);
    *(_DWORD *)(v19 + 240) = v30;
    *(_WORD *)(v19 + 244) = 2;
    v21 = v33;
    *(_OWORD *)(v33 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
    *(_DWORD *)(v9 + 40) |= 0x200u;
    v22 = *(_DWORD *)(v9 + 40) & 0xFFFFFF87 | (4 * (*(_DWORD *)(v20 + 416) & 6));
    *(_DWORD *)(v9 + 40) = v22;
    if ( ((v22 >> 3) & 0xF) == 1 )
    {
      v23 = *(_QWORD *)(v20 + 16);
      ExAcquirePushLockSharedEx(v23 - 16, 0LL);
      v24 = *(_QWORD *)(v23 + 8);
      if ( v24 )
        *(_QWORD *)(v21 + 120) = *(_QWORD *)(v24 + 56);
      else
        *(_QWORD *)(v21 + 120) = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v23 - 16));
      KeAbPostRelease(v23 - 16);
      v21 = v33;
    }
    else
    {
      *(_QWORD *)(v21 + 120) = *(_QWORD *)(v20 + 56);
    }
    v25 = *(_QWORD *)(v21 + 32);
    *(_QWORD *)(v21 + 32) = 0LL;
    --*(_WORD *)(v21 - 30);
    *(_DWORD *)(v9 + 40) = *(_DWORD *)(v9 + 40) & 0xFFFF7EFF | 0x100;
    AlpcpUnlockMessage(v21);
    if ( (a1[6] & 4) != 0 )
      a1[3] = v25;
    else
      KeReleaseSemaphoreEx(v25 + 1160, 1LL, 1LL, v26, 2);
    return v29;
  }
  else
  {
    AlpcpUnlockMessage(v9);
  }
  return (unsigned int)v7;
}
