/*
 * XREFs of CmDoVirtualTest @ 0x14035E9E4
 * Callers:
 *     NtDeleteValueKey @ 0x1405DD640 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x1405E3650 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x140643C50 (NtDeleteKey.c)
 *     NtSetInformationKey @ 0x1406726A0 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1408655F0 (NtRenameKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x140693D90 (CmpIsSystemEntity.c)
 */

bool __fastcall CmDoVirtualTest(__int64 a1)
{
  if ( !CmpVEEnabled )
    return 0;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(a1) == 0;
}
