/*
 * XREFs of CmDoVirtualTest @ 0x1402D1684
 * Callers:
 *     NtSetInformationKey @ 0x1405F3A00 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x140663DC0 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x140669100 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14066C210 (NtDeleteKey.c)
 *     NtRenameKey @ 0x140868C30 (NtRenameKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x140656AF0 (CmpIsSystemEntity.c)
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
