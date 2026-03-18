/*
 * XREFs of IopHardErrorThread @ 0x1409345F0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IopCheckHardErrorEmpty @ 0x140556550 (IopCheckHardErrorEmpty.c)
 *     IopRemoveHardErrorPacket @ 0x140556FA8 (IopRemoveHardErrorPacket.c)
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void IopHardErrorThread()
{
  __int64 v0; // rbx
  char v1; // al
  void *v2; // rcx
  char v3; // di

  do
  {
    KeWaitForSingleObject(&SystemArgument1, Executive, 0, 0, 0LL);
    v0 = IopRemoveHardErrorPacket();
    if ( ExReadyForErrors )
      ExRaiseHardError(*(unsigned int *)(v0 + 16), *(_QWORD *)(v0 + 32) != 0LL);
    v1 = IopCheckHardErrorEmpty();
    v2 = *(void **)(v0 + 32);
    v3 = v1;
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag((PVOID)v0, 0);
  }
  while ( v3 );
}
