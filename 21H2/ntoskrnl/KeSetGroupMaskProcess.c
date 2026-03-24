/*
 * XREFs of KeSetGroupMaskProcess @ 0x1402E9864
 * Callers:
 *     KeInitializeProcess @ 0x1406D62BC (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 636) = a2;
}
