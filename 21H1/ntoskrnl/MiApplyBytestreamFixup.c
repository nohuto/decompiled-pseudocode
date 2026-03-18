/*
 * XREFs of MiApplyBytestreamFixup @ 0x140312ABC
 * Callers:
 *     MiSwitchBaseAddress @ 0x1406D96BC (MiSwitchBaseAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall MiApplyBytestreamFixup(__int64 a1, _QWORD *a2, __int64 a3)
{
  *a2 += a3;
}
