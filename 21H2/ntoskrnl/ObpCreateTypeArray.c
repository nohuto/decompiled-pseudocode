/*
 * XREFs of ObpCreateTypeArray @ 0x1408DDC60
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1408DD50C (ObEnumerateObjectsByType.c)
 *     ObGetObjectInformation @ 0x1408DD5D8 (ObGetObjectInformation.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x140212AE0 (ObReferenceObjectSafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall ObpCreateTypeArray(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // r15
  _QWORD *v4; // rax
  _DWORD *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  _DWORD *PoolWithTag; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = (ULONG_PTR)(a1 + 23);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 23), 0LL);
  v4 = *a1;
  v5 = 0LL;
  v6 = 0;
  if ( *a1 != a1 )
  {
    do
    {
      v4 = (_QWORD *)*v4;
      v7 = v6++;
    }
    while ( v4 != a1 );
    if ( v6 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v7 + 16, 0x7241624Fu);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v6;
        v9 = 0LL;
        v10 = *a1;
        while ( v10 != a1 )
        {
          *(_QWORD *)&v5[2 * v9 + 2] = v10;
          if ( !ObReferenceObjectSafe((__int64)(v10 + 10)) )
            *(_QWORD *)&v5[2 * v9 + 2] = 0LL;
          v10 = (_QWORD *)*v10;
          v9 = (unsigned int)(v9 + 1);
        }
      }
    }
  }
  ExReleasePushLockEx(v3, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}
