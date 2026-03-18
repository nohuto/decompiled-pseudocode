/*
 * XREFs of IopHardErrorThread @ 0x140894090
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     IopCheckHardErrorEmpty @ 0x1404FEA38 (IopCheckHardErrorEmpty.c)
 *     IopRemoveHardErrorPacket @ 0x1404FF4DC (IopRemoveHardErrorPacket.c)
 *     ExRaiseHardError @ 0x140958940 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void IopHardErrorThread()
{
  __int64 v0; // rbx
  char v1; // al
  void *v2; // rcx
  char v3; // di
  int v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  v4 = 0;
  do
  {
    KeWaitForSingleObject(&Semaphore, Executive, 0, 0, 0LL);
    v0 = IopRemoveHardErrorPacket();
    v5 = v0 + 24;
    if ( ExReadyForErrors )
      ExRaiseHardError(
        *(_DWORD *)(v0 + 16),
        *(_QWORD *)(v0 + 32) != 0LL,
        *(_QWORD *)(v0 + 32) != 0LL,
        (unsigned __int64)&v5 & -(__int64)(*(_QWORD *)(v0 + 32) != 0LL),
        7,
        (__int64)&v4);
    v1 = IopCheckHardErrorEmpty();
    v2 = *(void **)(v0 + 32);
    v3 = v1;
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag((PVOID)v0, 0);
  }
  while ( v3 );
}
