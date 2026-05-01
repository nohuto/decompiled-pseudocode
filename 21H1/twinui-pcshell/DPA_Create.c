/*
 * XREFs of DPA_Create @ 0x1804640F0
 * Callers:
 *     ??0BUCKET@@QEAA@XZ @ 0x1804637A0 (--0BUCKET@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

HDPA __stdcall DPA_Create(int cItemGrow)
{
  return DPA_CreateEx(cItemGrow, 0LL);
}
