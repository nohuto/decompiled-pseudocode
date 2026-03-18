/*
 * XREFs of IopFreeResetRemovalContext @ 0x1408A3300
 * Callers:
 *     IoRequestDeviceRemovalForReset @ 0x1408A2FE0 (IoRequestDeviceRemovalForReset.c)
 *     IopDeviceRemovalForResetComplete @ 0x1408A3140 (IopDeviceRemovalForResetComplete.c)
 *     IopRetryDeviceRemovalForReset @ 0x1408A3400 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeResetRemovalContext(char *P)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *((_QWORD *)P + 21);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 64), 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(*((PVOID *)P + 21), 0x4B706E50u);
    *((_QWORD *)P + 21) = 0LL;
  }
  v3 = (void *)*((_QWORD *)P + 23);
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x52706E50u);
    *((_QWORD *)P + 23) = 0LL;
  }
  RtlFreeAnsiString((PUNICODE_STRING)(P + 200));
  ExFreePoolWithTag(P, 0);
}
