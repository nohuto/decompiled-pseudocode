/*
 * XREFs of sub_1C00019E0 @ 0x1C00019E0
 * Callers:
 *     sub_1C000A800 @ 0x1C000A800 (sub_1C000A800.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C00019E0(__int64 a1)
{
  char v2; // bl
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  unsigned __int64 v5; // r8

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.BufferChainingDpc);
  v2 = 0;
  v3 = *(_QWORD **)&DeviceObject.DeviceQueue.Type;
  *(_QWORD *)&DeviceObject.AlignmentRequirement = KeGetCurrentThread();
  LOBYTE(v4) = 0;
  v5 = *(_QWORD *)(a1 + 96);
  if ( !*(_QWORD *)&DeviceObject.DeviceQueue.Type )
    goto LABEL_11;
  while ( 1 )
  {
    if ( v5 < v3[7] )
    {
      v4 = (_QWORD *)*v3;
      if ( !*v3 )
        goto LABEL_11;
      goto LABEL_5;
    }
    if ( v5 <= v3[7] )
    {
      v2 = 1;
      goto LABEL_9;
    }
    v4 = (_QWORD *)v3[1];
    if ( !v4 )
      break;
LABEL_5:
    v3 = v4;
  }
  LOBYTE(v4) = 1;
LABEL_11:
  RtlRbInsertNodeEx(&DeviceObject.DeviceQueue, v3, (unsigned __int8)v4, a1 + 40);
LABEL_9:
  *(_QWORD *)&DeviceObject.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.BufferChainingDpc, 0);
  return v2 == 0;
}
