/*
 * XREFs of ?GetPenEventsDispatcher@BamoInputSystemPrincipal@@UEAAPEAVBamoPenEventsDispatcherPrincipal@@XZ @ 0x18001CA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoPenEventsDispatcherPrincipal *__fastcall BamoInputSystemPrincipal::GetPenEventsDispatcher(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoPenEventsDispatcherPrincipal *)*((_QWORD *)this + 16);
}
