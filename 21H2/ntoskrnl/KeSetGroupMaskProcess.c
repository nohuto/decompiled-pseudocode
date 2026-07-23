/*
 * XREFs of KeSetGroupMaskProcess @ 0x14029ABB4
 * Callers:
 *     KeInitializeProcess @ 0x1406AD59C (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 636) = a2;
}
