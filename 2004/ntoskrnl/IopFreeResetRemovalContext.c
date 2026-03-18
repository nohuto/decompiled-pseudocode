/*
 * XREFs of IopFreeResetRemovalContext @ 0x14089D7D0
 * Callers:
 *     IoRequestDeviceRemovalForReset @ 0x14089D4B0 (IoRequestDeviceRemovalForReset.c)
 *     IopDeviceRemovalForResetComplete @ 0x14089D610 (IopDeviceRemovalForResetComplete.c)
 *     IopRetryDeviceRemovalForReset @ 0x14089D8D0 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
