/*
 * XREFs of PiDqIrpQueryGetResult @ 0x1406230F8
 * Callers:
 *     PiDqDispatch @ 0x140623C70 (PiDqDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     PiDqQueryFreeActiveData @ 0x140623798 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x140623804 (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqIrpComplete @ 0x1406240D0 (PiDqIrpComplete.c)
 *     PiDqQuerySerializeActionQueue @ 0x14062466C (PiDqQuerySerializeActionQueue.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 */

__int64 __fastcall PiDqIrpQueryGetResult(__int64 a1)
{
  int SerializeActionQueue; // ebx
  __int64 v3; // r15
  __int64 v4; // rdi
  char v5; // r13
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  struct _KTHREAD *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KTHREAD *v22; // rax
  int v23; // [rsp+30h] [rbp-68h]
  _OWORD v24[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp+20h] BYREF

  SerializeActionQueue = 0;
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL);
  v23 = *(_DWORD *)(v3 + 24);
  v5 = 0;
  v25 = 0;
  v26 = 0;
  v24[0] = 0LL;
  if ( !v4 )
  {
    SerializeActionQueue = -1073741637;
    goto LABEL_14;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
  v7 = *(_DWORD *)(v4 + 216);
  if ( (v7 & 8) != 0 )
  {
    SerializeActionQueue = -1073741536;
    goto LABEL_7;
  }
  if ( (v7 & 4) == 0 )
    goto LABEL_28;
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x10) == 0 )
    {
      *(_DWORD *)(v4 + 216) = v7 | 0x10;
      v5 = 1;
      goto LABEL_7;
    }
LABEL_28:
    SerializeActionQueue = -1073741637;
    goto LABEL_7;
  }
  SerializeActionQueue = -1073741670;
LABEL_7:
  ExReleasePushLockEx(v4 + 64, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  if ( SerializeActionQueue < 0 )
    goto LABEL_13;
  v11 = *(_DWORD *)(v3 + 8);
  if ( v11 < 0x10 )
  {
    SerializeActionQueue = -1073741789;
  }
  else
  {
    if ( v23 == 4653063 )
    {
      ProbeForWrite(*(volatile void **)(a1 + 112), v11, 8u);
      SerializeActionQueue = PiDqQuerySerializeActionQueue(
                               v4,
                               *(_QWORD *)(a1 + 112),
                               *(_DWORD *)(v3 + 8),
                               (unsigned int)&v25,
                               (__int64)&v26);
      if ( SerializeActionQueue < 0 )
        goto LABEL_13;
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
      PiDqQueryGetNextIoctlInfo(v4, *(unsigned int *)(v3 + 8), v26, v24);
LABEL_12:
      ExReleasePushLockEx(v4 + 64, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
LABEL_13:
      if ( SerializeActionQueue == 259 )
        return (unsigned int)SerializeActionQueue;
      goto LABEL_14;
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      v22 = KeGetCurrentThread();
      --v22->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
      if ( !*(_QWORD *)(v4 + 184)
        && *(_QWORD *)(v4 + 192) == v4 + 192
        && (*(_DWORD *)(*(_QWORD *)(v4 + 24) + 40LL) & 1) != 0 )
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)PiDqIrpCancel);
        if ( *(_BYTE *)(a1 + 68) )
        {
          SerializeActionQueue = -1073741536;
        }
        else
        {
          *(_QWORD *)(v4 + 176) = a1;
          *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
          SerializeActionQueue = 259;
        }
      }
      else
      {
        PiDqQueryGetNextIoctlInfo(v4, *(unsigned int *)(v3 + 8), 0LL, v24);
        v25 = 16;
      }
      goto LABEL_12;
    }
    SerializeActionQueue = -1073741811;
  }
LABEL_14:
  if ( v5 )
  {
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
    v17 = *(_DWORD *)(v4 + 216) & 0xFFFFFFEF;
    *(_DWORD *)(v4 + 216) = v17;
    if ( SerializeActionQueue < 0 )
    {
      *(_DWORD *)(v4 + 216) = v17 | 1;
      PiDqQueryFreeActiveData(v4);
    }
    ExReleasePushLockEx(v4 + 64, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
  }
  PiDqIrpComplete(a1, (unsigned int)SerializeActionQueue, v25, v24);
  return (unsigned int)SerializeActionQueue;
}
