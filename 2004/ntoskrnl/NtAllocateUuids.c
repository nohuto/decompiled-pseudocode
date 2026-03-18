/*
 * XREFs of NtAllocateUuids @ 0x140707EA0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x140708054 (ExpUuidSaveSequenceNumberIf.c)
 *     ExpAllocateUuids @ 0x140708084 (ExpAllocateUuids.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAllocateUuids(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct _KTHREAD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // edi
  char v16; // di
  char v17; // bl
  int v19; // [rsp+24h] [rbp-44h] BYREF
  int v20; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v21[3]; // [rsp+30h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-20h]

  v21[0] = 0LL;
  v19 = 0;
  v20 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    if ( (a1 & 3) != 0 )
      goto LABEL_14;
    v8 = 0x7FFFFFFF0000LL;
    v9 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v9 = a1;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 7) = *(_BYTE *)(v9 + 7);
    if ( (a2 & 3) != 0 )
      goto LABEL_14;
    v10 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v10 = a2;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( (a3 & 3) != 0 )
LABEL_14:
      ExRaiseDatatypeMisalignment();
    v11 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v11 = a3;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( a4 < 0x7FFFFFFF0000LL )
      v8 = a4;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 5) = *(_BYTE *)(v8 + 5);
  }
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  v13 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v13, (ULONG_PTR)&ExpUuidLock);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  v15 = ExpAllocateUuids(v21, &v19, &v20);
  if ( v15 < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)v12);
    return (unsigned int)v15;
  }
  else
  {
    ExpUuidSaveSequenceNumberIf();
    v16 = BYTE5(NlsMbCodePageTag);
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)v12);
    *(_QWORD *)a1 = v21[0];
    *(_DWORD *)a2 = v19;
    *(_DWORD *)a3 = v20;
    *(_DWORD *)a4 = *(int *)((char *)&dword_140D2D2E4 + 2);
    *(_WORD *)(a4 + 4) = HIWORD(dword_140D2D2E8);
    return v16 == 0 ? 0x40020056 : 0;
  }
}
