/*
 * XREFs of FreeOwnedObjects @ 0x1C00665BC
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C006581C (AMLIRemoveNativeObjectsFromNamespace.c)
 *     ParseUnload @ 0x1C006C0C0 (ParseUnload.c)
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 */

void __fastcall FreeOwnedObjects(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  KIRQL v4; // al
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi

  byte_1C0082260 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  KeReleaseSpinLock(&gmutOwnerList, byte_1C0082260);
  v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v5 = a1[3];
  if ( v5 )
  {
    do
    {
      v6 = *(_QWORD *)(v5 + 56);
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
      if ( (gdwfAMLI & 4) != 0 )
        AMLIDereferenceHandleEx((volatile signed __int32 *)(v5 + 120));
      else
        FreeNameSpaceObjects(v5);
      v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
      v5 = v6;
    }
    while ( v6 );
  }
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
}
