/*
 * XREFs of DPA_Create @ 0x180488170
 * Callers:
 *     ??0BUCKET@@QEAA@XZ @ 0x180487820 (--0BUCKET@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

HDPA __stdcall DPA_Create(int cItemGrow)
{
  return DPA_CreateEx(cItemGrow, 0LL);
}
