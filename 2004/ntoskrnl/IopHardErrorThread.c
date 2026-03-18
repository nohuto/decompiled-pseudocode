/*
 * XREFs of IopHardErrorThread @ 0x14088E5D0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IopCheckHardErrorEmpty @ 0x1404FB180 (IopCheckHardErrorEmpty.c)
 *     IopRemoveHardErrorPacket @ 0x1404FBC08 (IopRemoveHardErrorPacket.c)
 *     ExRaiseHardError @ 0x140952B80 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
    KeWaitForSingleObject(&byte_140C45D38, Executive, 0, 0, 0LL);
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
