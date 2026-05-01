/*
 * XREFs of ?get_ReadyForPresentation@PresentationReadyChangedEventArgs@@UEAAJPEAE@Z @ 0x18008AED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PresentationReadyChangedEventArgs::get_ReadyForPresentation(
        PresentationReadyChangedEventArgs *this,
        unsigned __int8 *a2)
{
  *a2 = *((_BYTE *)this + 24);
  return 0LL;
}
