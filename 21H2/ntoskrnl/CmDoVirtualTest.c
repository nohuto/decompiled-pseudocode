/*
 * XREFs of CmDoVirtualTest @ 0x14023BD3C
 * Callers:
 *     NtDeleteKey @ 0x14067DE90 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140714980 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14071FAA0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1407C0160 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x14090EF60 (NtRenameKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1406B67A0 (CmpIsSystemEntity.c)
 */

bool __fastcall CmDoVirtualTest(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  if ( !CmpVEEnabled )
    return 0;
  v3 = a1;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(a1, v3, a2) == 0;
}
