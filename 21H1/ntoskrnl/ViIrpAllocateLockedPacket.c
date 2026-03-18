/*
 * XREFs of ViIrpAllocateLockedPacket @ 0x1409CE730
 * Callers:
 *     IovAllocateIrp @ 0x1409C1790 (IovAllocateIrp.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402799D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1402A3090 (PsChargeProcessNonPagedPoolQuota.c)
 *     IoInitializeIrp @ 0x1402F6F10 (IoInitializeIrp.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15B0 (VeAllocatePoolWithTagPriority.c)
 *     VfPacketCreateAndLock @ 0x1409DE948 (VfPacketCreateAndLock.c)
 */

__int64 __fastcall ViIrpAllocateLockedPacket(CCHAR a1, int a2, __int64 a3)
{
  __int64 v5; // rbx
  USHORT v6; // r12
  IRP *PoolWithTagPriority; // rdi
  unsigned int v8; // ebp
  struct _KPROCESS *Process; // rsi
  __int64 v10; // rax

  v5 = 0LL;
  v6 = 72 * a1 + 208;
  PoolWithTagPriority = (IRP *)VeAllocatePoolWithTagPriority((POOL_TYPE)640, v6, 0x2B707249u, HighPoolPriority, a3);
  if ( PoolWithTagPriority )
  {
    v8 = 0;
    Process = 0LL;
    if ( a2
      && (v8 = 4096,
          Process = KeGetCurrentThread()->ApcState.Process,
          (int)PsChargeProcessNonPagedPoolQuota(Process, 0x1000uLL) < 0) )
    {
      ExFreePoolWithTag(PoolWithTagPriority, 0);
    }
    else
    {
      IoInitializeIrp(PoolWithTagPriority, v6, a1);
      v10 = VfPacketCreateAndLock(PoolWithTagPriority);
      v5 = v10;
      if ( v10 )
      {
        *(_DWORD *)(v10 + 56) |= 0x200008u;
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 20));
        ++*(_DWORD *)(v10 + 24);
        PoolWithTagPriority->Flags |= 0x40000000u;
        if ( a2 )
        {
          PoolWithTagPriority->AllocationFlags |= 1u;
          *(_DWORD *)(v10 + 84) = v8;
          *(_QWORD *)(v10 + 88) = Process;
          ObfReferenceObjectWithTag(Process, 0x49667256u);
        }
      }
      else
      {
        ExFreePoolWithTag(PoolWithTagPriority, 0);
        if ( a2 )
          PsReturnProcessNonPagedPoolQuota((ULONG_PTR)Process, v8);
      }
    }
  }
  return v5;
}
