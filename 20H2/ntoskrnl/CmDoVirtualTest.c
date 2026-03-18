/*
 * XREFs of CmDoVirtualTest @ 0x14032F6D4
 * Callers:
 *     NtDeleteValueKey @ 0x140668FB0 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14066DEB0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1406766B0 (NtSetInformationKey.c)
 *     NtDeleteKey @ 0x140701FA0 (NtDeleteKey.c)
 *     NtRenameKey @ 0x14086B010 (NtRenameKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x14060D910 (CmpIsSystemEntity.c)
 */

bool __fastcall CmDoVirtualTest(__int64 a1)
{
  if ( !CmpVEEnabled )
    return 0;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(a1) == 0;
}
