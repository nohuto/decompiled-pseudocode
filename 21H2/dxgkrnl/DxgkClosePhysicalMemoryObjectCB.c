/*
 * XREFs of DxgkClosePhysicalMemoryObjectCB @ 0x1C0054820
 * Callers:
 *     <none>
 * Callees:
 *     SmmClosePhysicalObject @ 0x1C001B364 (SmmClosePhysicalObject.c)
 */

void __fastcall DxgkClosePhysicalMemoryObjectCB(__int64 **a1, __int64 a2, int a3)
{
  SmmClosePhysicalObject(*a1, a2, a3);
}
