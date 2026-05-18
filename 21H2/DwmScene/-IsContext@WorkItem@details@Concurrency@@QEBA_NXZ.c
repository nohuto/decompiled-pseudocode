/*
 * XREFs of ?IsContext@WorkItem@details@Concurrency@@QEBA_NXZ @ 0x180122628
 * Callers:
 *     sub_18011CDEC @ 0x18011CDEC (sub_18011CDEC.c)
 *     sub_18011DC10 @ 0x18011DC10 (sub_18011DC10.c)
 * Callees:
 *     <none>
 */

bool __fastcall Concurrency::details::WorkItem::IsContext(Concurrency::details::WorkItem *this)
{
  return *(_DWORD *)this == 1;
}
