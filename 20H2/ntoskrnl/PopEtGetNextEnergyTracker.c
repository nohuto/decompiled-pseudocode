/*
 * XREFs of PopEtGetNextEnergyTracker @ 0x14065EA14
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x14065E9B8 (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14021EB40 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 */

_QWORD *__fastcall PopEtGetNextEnergyTracker(_QWORD **Object)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rsi
  ULONG_PTR v4; // rcx
  _QWORD **v5; // rax
  _QWORD *i; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = PopEtGlobals + 16;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(v4, 0LL);
  v5 = (_QWORD **)PopEtGlobals;
  if ( Object )
    v5 = Object;
  for ( i = *v5; i != (_QWORD *)PopEtGlobals; i = (_QWORD *)*i )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)i) )
    {
      v3 = i;
      break;
    }
  }
  PopReleaseRwLock(PopEtGlobals + 16);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x74456F50u);
  return v3;
}
