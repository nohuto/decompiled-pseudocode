/*
 * XREFs of KeSetGroupMaskProcess @ 0x14026831C
 * Callers:
 *     KeInitializeProcess @ 0x140613C3C (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 636) = a2;
}
