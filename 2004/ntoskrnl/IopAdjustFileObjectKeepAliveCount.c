/*
 * XREFs of IopAdjustFileObjectKeepAliveCount @ 0x140501F08
 * Callers:
 *     IoDecrementKeepAliveCount @ 0x140501A60 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x140501BC0 (IoIncrementKeepAliveCount.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     IopGetSetSpecificExtension @ 0x1402289D4 (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x140228AC4 (IopGetFileObjectExtension.c)
 *     IopVerifierExAllocatePool_0 @ 0x14027C6F4 (IopVerifierExAllocatePool_0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAdjustFileObjectKeepAliveCount(__int64 a1, __int64 a2, int a3, _DWORD *a4, _QWORD *a5)
{
  _OWORD *Pool_0; // rbx
  _OWORD *v6; // rsi
  __int64 result; // rax
  unsigned int v10; // edi
  __int64 v11; // r14
  KIRQL v12; // al
  __int64 *v13; // rcx
  unsigned __int64 v14; // r13
  _DWORD *v15; // rax
  bool v16; // al
  int v17; // edx
  int v18; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  __int64 FileObjectExtension; // [rsp+30h] [rbp-38h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp-30h]

  FileObjectExtension = 0LL;
  Pool_0 = 0LL;
  v6 = 0LL;
  if ( a3 )
  {
    result = IopGetSetSpecificExtension(a1, 1u, 0x20u, 1, &FileObjectExtension, 0LL);
    v10 = result;
    if ( (int)result < 0 )
      return result;
    Pool_0 = IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x20uLL);
    if ( Pool_0 )
    {
      v6 = IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x38uLL);
      if ( !v6 )
      {
        ExFreePoolWithTag(Pool_0, 0);
        Pool_0 = 0LL;
      }
    }
    v11 = FileObjectExtension;
  }
  else
  {
    v10 = 0;
    FileObjectExtension = IopGetFileObjectExtension(a1, 1, 0LL);
    v11 = FileObjectExtension;
    if ( !FileObjectExtension )
      return 3221225485LL;
  }
  SpinLock = (PKSPIN_LOCK)(a1 + 184);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v13 = *(__int64 **)(v11 + 24);
  v14 = v12;
  while ( v13 )
  {
    if ( v13[1] == a2 )
    {
      v17 = *((_DWORD *)v13 + 4);
      if ( a3 )
        v18 = v17 + 1;
      else
        v18 = v17 - 1;
      *((_DWORD *)v13 + 4) = v18;
      *a5 = v13[3];
      *a4 = v18;
      goto LABEL_27;
    }
    v13 = (__int64 *)*v13;
  }
  if ( a3 )
  {
    if ( Pool_0 )
    {
      *Pool_0 = 0LL;
      Pool_0[1] = 0LL;
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = 0LL;
      *((_QWORD *)v6 + 6) = 0LL;
      *(_QWORD *)Pool_0 = *(_QWORD *)(v11 + 24);
      *(_QWORD *)(v11 + 24) = Pool_0;
      *((_QWORD *)Pool_0 + 1) = a2;
      *((_DWORD *)Pool_0 + 4) = 1;
      *((_QWORD *)Pool_0 + 3) = v6;
      *((_QWORD *)v6 + 3) = a2;
      *((_QWORD *)v6 + 5) = a1;
      v16 = 0;
      if ( (*(_DWORD *)(a1 + 80) & 0x20000000) != 0 )
      {
        v15 = *(_DWORD **)(a1 + 208);
        if ( !v15 || (*v15 & 8) == 0 )
          v16 = 1;
      }
      *((_BYTE *)v6 + 18) = v16;
      Pool_0 = 0LL;
      *a5 = v6;
      v6 = 0LL;
      *a4 = 1;
    }
    else
    {
      v10 = -1073741670;
    }
  }
  else
  {
    v10 = -1073741811;
  }
LABEL_27:
  KxReleaseSpinLock(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v23 = (v22 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v14);
  if ( Pool_0 )
    ExFreePoolWithTag(Pool_0, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v10;
}
