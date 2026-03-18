/*
 * XREFs of FreeOwnedObjects @ 0x1C00651CC
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C0064410 (AMLIRemoveNativeObjectsFromNamespace.c)
 *     ParseUnload @ 0x1C006BC80 (ParseUnload.c)
 *     AMLIInitialize @ 0x1C00BCBA0 (AMLIInitialize.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0003690 (FreeNameSpaceObjects.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 */

void __fastcall FreeOwnedObjects(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  KIRQL v4; // al
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi

  byte_1C0082BF0 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  KeReleaseSpinLock(&gmutOwnerList, byte_1C0082BF0);
  v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v5 = a1[3];
  if ( v5 )
  {
    do
    {
      v6 = *(_QWORD *)(v5 + 56);
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
      if ( (gdwfAMLI & 4) != 0 )
        AMLIDereferenceHandleEx(v5 + 120);
      else
        FreeNameSpaceObjects(v5);
      v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
      v5 = v6;
    }
    while ( v6 );
  }
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
}
