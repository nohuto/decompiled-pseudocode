/*
 * XREFs of NtFlipObjectSetMaximumBackchannelQueueDepth @ 0x1C0069350
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010BD4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0069AA8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtFlipObjectSetMaximumBackchannelQueueDepth(void *a1, int a2)
{
  char v4; // r8
  int v5; // ebx
  int v6; // eax
  _QWORD *v7; // rdi
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = 0LL;
  KeEnterCriticalRegion();
  if ( a1 )
  {
    v6 = FlipManagerObject::ResolveHandle(a1, 2u, v4, (struct FlipManagerObject **)&Object);
    v7 = Object;
    v5 = v6;
    if ( v6 >= 0 )
    {
      v5 = CPushLock::AcquireLockExclusive((CPushLock *)((char *)Object + 40));
      if ( v5 >= 0 )
      {
        *(_DWORD *)(v7[25] + 28LL) = a2;
        CPushLock::ReleaseLock((CPushLock *)(v7 + 5));
      }
    }
    if ( v7 )
      ObfDereferenceObject(v7);
  }
  else
  {
    v5 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
