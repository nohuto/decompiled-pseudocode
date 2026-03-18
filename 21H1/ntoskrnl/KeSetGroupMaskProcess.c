/*
 * XREFs of KeSetGroupMaskProcess @ 0x14033814C
 * Callers:
 *     KeInitializeProcess @ 0x1406F70A0 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 636) = a2;
}
