/*
 * XREFs of IopAdjustFileObjectKeepAliveCount @ 0x1405057D8
 * Callers:
 *     IoDecrementKeepAliveCount @ 0x140505330 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x140505490 (IoIncrementKeepAliveCount.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14020AC94 (IopVerifierExAllocatePool.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     IopGetSetSpecificExtension @ 0x14029F8F4 (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x14029FA60 (IopGetFileObjectExtension.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAdjustFileObjectKeepAliveCount(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  _OWORD *Pool; // rbx
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
  _DWORD *v27; // [rsp+88h] [rbp+20h]

  v27 = (_DWORD *)a4;
  FileObjectExtension = 0LL;
  Pool = 0LL;
  v6 = 0LL;
  if ( a3 )
  {
    LOBYTE(a4) = 1;
    result = IopGetSetSpecificExtension(a1, 1u, 32LL, a4, &FileObjectExtension, 0LL);
    v10 = result;
    if ( (int)result < 0 )
      return result;
    Pool = IopVerifierExAllocatePool(NonPagedPoolNx, 0x20uLL);
    if ( Pool )
    {
      v6 = IopVerifierExAllocatePool(NonPagedPoolNx, 0x38uLL);
      if ( !v6 )
      {
        ExFreePoolWithTag(Pool, 0);
        Pool = 0LL;
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
      *v27 = v18;
      goto LABEL_27;
    }
    v13 = (__int64 *)*v13;
  }
  if ( a3 )
  {
    if ( Pool )
    {
      *Pool = 0LL;
      Pool[1] = 0LL;
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = 0LL;
      *((_QWORD *)v6 + 6) = 0LL;
      *(_QWORD *)Pool = *(_QWORD *)(v11 + 24);
      *(_QWORD *)(v11 + 24) = Pool;
      *((_QWORD *)Pool + 1) = a2;
      *((_DWORD *)Pool + 4) = 1;
      *((_QWORD *)Pool + 3) = v6;
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
      Pool = 0LL;
      *a5 = v6;
      v6 = 0LL;
      *v27 = 1;
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
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v10;
}
