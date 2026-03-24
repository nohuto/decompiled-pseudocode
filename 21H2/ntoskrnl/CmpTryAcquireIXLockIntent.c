/*
 * XREFs of CmpTryAcquireIXLockIntent @ 0x140665108
 * Callers:
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpTryAcquireIXLockIntent(_DWORD *a1)
{
  return *a1 >= 0;
}
