/*
 * XREFs of KiGetHalExtensionList @ 0x140A70380
 * Callers:
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     <none>
 */

__int64 KiGetHalExtensionList()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 240) + 2584LL;
}
