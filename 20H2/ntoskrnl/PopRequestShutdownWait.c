/*
 * XREFs of PopRequestShutdownWait @ 0x1407A4994
 * Callers:
 *     PoRequestShutdownEvent @ 0x1407A4950 (PoRequestShutdownEvent.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireGuardedMutex @ 0x140241970 (KeAcquireGuardedMutex.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopRequestShutdownWait(PVOID Object)
{
  _QWORD *PoolWithTag; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x4C536F50u);
  v3 = 0;
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[1] = Object;
  ObfReferenceObjectWithTag(Object, 0x64536F50u);
  KeAcquireGuardedMutex(&PopShutdownListMutex);
  if ( PopShutdownListAvailable )
  {
    *v4 = PopShutdownThreadList;
    PopShutdownThreadList = v4;
  }
  else
  {
    ObfDereferenceObjectWithTag(Object, 0x64536F50u);
    ExFreePoolWithTag(v4, 0);
    v3 = -1073741823;
  }
  KeReleaseGuardedMutex(&PopShutdownListMutex);
  return v3;
}
