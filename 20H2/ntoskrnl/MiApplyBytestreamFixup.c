/*
 * XREFs of MiApplyBytestreamFixup @ 0x14023C1B8
 * Callers:
 *     MiSwitchBaseAddress @ 0x14062BE34 (MiSwitchBaseAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall MiApplyBytestreamFixup(__int64 a1, _QWORD *a2, __int64 a3)
{
  *a2 += a3;
}
