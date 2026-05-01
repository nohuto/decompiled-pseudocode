/*
 * XREFs of ?get_ViewMode@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ViewMode@Holographic@Shell@Internal@Windows@@@Z @ 0x18008A860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::get_ViewMode(
        ApplicationViewBackedViewHostItem *this,
        enum Windows::Internal::Shell::Holographic::ViewMode *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 61);
  return 0LL;
}
