/*
 * XREFs of CmDoVirtualTest @ 0x140320F24
 * Callers:
 *     NtSetInformationKey @ 0x1405FA5C0 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x140618C70 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x140692140 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140693CE0 (NtDeleteValueKey.c)
 *     NtRenameKey @ 0x1408642D0 (NtRenameKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1405EA850 (CmpIsSystemEntity.c)
 */

bool __fastcall CmDoVirtualTest(__int64 a1)
{
  if ( !CmpVEEnabled )
    return 0;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(a1) == 0;
}
