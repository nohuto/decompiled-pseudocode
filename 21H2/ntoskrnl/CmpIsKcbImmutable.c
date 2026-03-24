/*
 * XREFs of CmpIsKcbImmutable @ 0x140665DD0
 * Callers:
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 *     CmpSetKeySecurity @ 0x14066DF0C (CmpSetKeySecurity.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbImmutable(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 160LL) & 0x100000) != 0;
}
