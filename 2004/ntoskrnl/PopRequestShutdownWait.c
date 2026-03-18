/*
 * XREFs of PopRequestShutdownWait @ 0x140795664
 * Callers:
 *     PoRequestShutdownEvent @ 0x140795620 (PoRequestShutdownEvent.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KeAcquireGuardedMutex @ 0x140273EF0 (KeAcquireGuardedMutex.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
