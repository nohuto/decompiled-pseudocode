/*
 * XREFs of MiApplyBytestreamFixup @ 0x1402A42C8
 * Callers:
 *     MiSwitchBaseAddress @ 0x1406C302C (MiSwitchBaseAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall MiApplyBytestreamFixup(__int64 a1, _QWORD *a2, __int64 a3)
{
  *a2 += a3;
}
