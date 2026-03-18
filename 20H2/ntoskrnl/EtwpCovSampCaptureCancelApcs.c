/*
 * XREFs of EtwpCovSampCaptureCancelApcs @ 0x1405ACDC4
 * Callers:
 *     EtwpCovSampCaptureContextStop @ 0x1405AD05C (EtwpCovSampCaptureContextStop.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeRemoveQueueApc @ 0x1403240DC (KeRemoveQueueApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405AD760 (EtwpCovSampCaptureReleaseToLookaside.c)
 */

__int64 __fastcall EtwpCovSampCaptureCancelApcs(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // r14
  __int64 *v3; // rdi
  KSPIN_LOCK *v4; // r12
  void *v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // r10
  bool v11; // zf
  __int64 v12; // rbx
  __int64 v13; // rdx

  result = *(unsigned int *)(a1 + 344);
  if ( *(_DWORD *)(a1 + 348) != (_DWORD)result )
  {
    v2 = (__int64 *)(a1 + 304);
    v3 = *(__int64 **)(a1 + 304);
    if ( v3 != (__int64 *)(a1 + 304) )
    {
      v4 = (KSPIN_LOCK *)(a1 + 264);
      do
      {
        v5 = 0LL;
        v6 = KeAcquireSpinLockRaiseToDpc(v4);
        if ( *((_BYTE *)v3 + 114) )
        {
          v5 = (void *)v3[5];
          if ( v5 )
            ObfReferenceObjectWithTag((PVOID)v3[5], 0x746C6644u);
        }
        KxReleaseSpinLock(v4);
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v7 = -1LL << ((unsigned __int8)v6 + 1);
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              result = ~(unsigned __int16)v7;
              v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
              v8 = (unsigned int)result & SchedulerAssist[5];
              SchedulerAssist[5] = v8;
              if ( v11 )
                result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v6);
        if ( v5 )
        {
          if ( KeRemoveQueueApc((__int64)(v3 + 4), v7, v8, SchedulerAssist) )
          {
            v12 = qword_140C19748;
            memset(v3 + 4, 0, 0x58uLL);
            v13 = v3[3];
            *((_DWORD *)v3 + 30) = 0;
            EtwpCovSampCaptureReleaseToLookaside(v12, v13, v3 - 3);
          }
          result = ObfDereferenceObjectWithTag(v5, 0x746C6644u);
        }
        v3 = (__int64 *)*v3;
      }
      while ( v3 != v2 );
    }
  }
  return result;
}
