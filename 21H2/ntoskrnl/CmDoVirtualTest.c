/*
 * XREFs of CmDoVirtualTest @ 0x14024FB14
 * Callers:
 *     NtSetValueKey @ 0x140658BE0 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14065DF20 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x140661030 (NtDeleteKey.c)
 *     NtSetInformationKey @ 0x1406E3160 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x140868D90 (NtRenameKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x14064B910 (CmpIsSystemEntity.c)
 */

bool __fastcall CmDoVirtualTest(__int64 a1)
{
  if ( !CmpVEEnabled )
    return 0;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(a1) == 0;
}
