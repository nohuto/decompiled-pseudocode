/*
 * XREFs of IopHardErrorThread @ 0x1408917C0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IopCheckHardErrorEmpty @ 0x140500558 (IopCheckHardErrorEmpty.c)
 *     IopRemoveHardErrorPacket @ 0x140500FE0 (IopRemoveHardErrorPacket.c)
 *     ExRaiseHardError @ 0x1409562E0 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void IopHardErrorThread()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  char v2; // al
  void *v3; // rcx
  char v4; // di
  int v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  do
  {
    KeWaitForSingleObject(&Semaphore, Executive, 0, 0, 0LL);
    v0 = IopRemoveHardErrorPacket();
    v1 = *(_QWORD *)(v0 + 32);
    v6 = v0 + 24;
    if ( ExReadyForErrors )
      ExRaiseHardError(
        *(unsigned int *)(v0 + 16),
        v1 != 0,
        v1 != 0,
        (unsigned __int64)&v6 & -(__int64)(v1 != 0),
        7,
        &v5);
    v2 = IopCheckHardErrorEmpty();
    v3 = *(void **)(v0 + 32);
    v4 = v2;
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag((PVOID)v0, 0);
  }
  while ( v4 );
}
