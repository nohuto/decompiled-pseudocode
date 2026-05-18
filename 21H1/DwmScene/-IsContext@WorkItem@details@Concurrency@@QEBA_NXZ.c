/*
 * XREFs of ?IsContext@WorkItem@details@Concurrency@@QEBA_NXZ @ 0x18011CD58
 * Callers:
 *     sub_18011751C @ 0x18011751C (sub_18011751C.c)
 *     sub_180118340 @ 0x180118340 (sub_180118340.c)
 * Callees:
 *     <none>
 */

bool __fastcall Concurrency::details::WorkItem::IsContext(Concurrency::details::WorkItem *this)
{
  return *(_DWORD *)this == 1;
}
