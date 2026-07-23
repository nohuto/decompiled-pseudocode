/*
 * XREFs of CmpTryAcquireIXLockIntent @ 0x140659F28
 * Callers:
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpTryAcquireIXLockIntent(_DWORD *a1)
{
  return *a1 >= 0;
}
