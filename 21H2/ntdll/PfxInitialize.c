/*
 * XREFs of PfxInitialize @ 0x1800E61D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PfxInitialize(__int64 a1)
{
  *(_DWORD *)a1 = 512;
  *(_QWORD *)(a1 + 8) = a1;
}
