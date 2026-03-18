/*
 * XREFs of KeSetGroupMaskProcess @ 0x1402A0314
 * Callers:
 *     KeInitializeProcess @ 0x14070A268 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 636) = a2;
}
