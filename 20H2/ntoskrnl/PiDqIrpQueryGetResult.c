/*
 * XREFs of PiDqIrpQueryGetResult @ 0x1406D8984
 * Callers:
 *     PiDqDispatch @ 0x140646700 (PiDqDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     PiDqQuerySerializeActionQueue @ 0x140645C2C (PiDqQuerySerializeActionQueue.c)
 *     PiDqIrpComplete @ 0x140646534 (PiDqIrpComplete.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x140646DB0 (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqQueryFreeActiveData @ 0x1406D806C (PiDqQueryFreeActiveData.c)
 */

__int64 __fastcall PiDqIrpQueryGetResult(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r15
  __int64 v4; // rdi
  char v5; // r13
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  unsigned int v8; // eax
  struct _KTHREAD *v9; // rdx
  struct _KTHREAD *v10; // rax
  unsigned int v11; // eax
  struct _KTHREAD *v13; // rax
  int v14; // [rsp+30h] [rbp-68h]
  _OWORD v15[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v17; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL);
  v14 = *(_DWORD *)(v3 + 24);
  v5 = 0;
  v16 = 0;
  v17 = 0;
  v15[0] = 0LL;
  if ( !v4 )
  {
    v2 = -1073741637;
    goto LABEL_14;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
  v7 = *(_DWORD *)(v4 + 216);
  if ( (v7 & 8) != 0 )
  {
    v2 = -1073741536;
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
    v2 = -1073741637;
    goto LABEL_7;
  }
  v2 = -1073741670;
LABEL_7:
  ExReleasePushLockEx(v4 + 64, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v2 < 0 )
    goto LABEL_13;
  v8 = *(_DWORD *)(v3 + 8);
  if ( v8 < 0x10 )
  {
    v2 = -1073741789;
  }
  else
  {
    if ( v14 == 4653063 )
    {
      ProbeForWrite(*(volatile void **)(a1 + 112), v8, 8u);
      v2 = PiDqQuerySerializeActionQueue(v4, *(_QWORD *)(a1 + 112), *(_DWORD *)(v3 + 8), (int *)&v16, &v17);
      if ( v2 < 0 )
        goto LABEL_13;
      v9 = KeGetCurrentThread();
      --v9->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
      PiDqQueryGetNextIoctlInfo(v4, *(_DWORD *)(v3 + 8), v17, v15);
LABEL_12:
      ExReleasePushLockEx(v4 + 64, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_13:
      if ( v2 == 259 )
        return (unsigned int)v2;
      goto LABEL_14;
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
      if ( !*(_QWORD *)(v4 + 184)
        && *(_QWORD *)(v4 + 192) == v4 + 192
        && (*(_DWORD *)(*(_QWORD *)(v4 + 24) + 40LL) & 1) != 0 )
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)PiDqIrpCancel);
        if ( *(_BYTE *)(a1 + 68) )
        {
          v2 = -1073741536;
        }
        else
        {
          *(_QWORD *)(v4 + 176) = a1;
          *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
          v2 = 259;
        }
      }
      else
      {
        PiDqQueryGetNextIoctlInfo(v4, *(_DWORD *)(v3 + 8), 0, v15);
        v16 = 16;
      }
      goto LABEL_12;
    }
    v2 = -1073741811;
  }
LABEL_14:
  if ( v5 )
  {
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
    v11 = *(_DWORD *)(v4 + 216) & 0xFFFFFFEF;
    *(_DWORD *)(v4 + 216) = v11;
    if ( v2 < 0 )
    {
      *(_DWORD *)(v4 + 216) = v11 | 1;
      PiDqQueryFreeActiveData(v4);
    }
    ExReleasePushLockEx(v4 + 64, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  PiDqIrpComplete((IRP *)a1, v2, v16, v15);
  return (unsigned int)v2;
}
