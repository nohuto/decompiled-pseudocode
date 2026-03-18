/*
 * XREFs of KeSetGroupMaskProcess @ 0x1402F6F10
 * Callers:
 *     KeInitializeProcess @ 0x1406A71A0 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 636) = a2;
}
