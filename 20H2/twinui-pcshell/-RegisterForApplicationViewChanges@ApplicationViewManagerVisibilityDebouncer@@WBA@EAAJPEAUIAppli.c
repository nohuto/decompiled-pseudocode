/*
 * XREFs of ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1800F2620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ApplicationViewManagerVisibilityDebouncer::RegisterForApplicationViewChanges(
        __int64 a1,
        struct IApplicationViewChangeListener *a2,
        unsigned int *a3)
{
  return ApplicationViewManagerVisibilityDebouncer::RegisterForApplicationViewChanges(
           (ApplicationViewManagerVisibilityDebouncer *)(a1 - 16),
           a2,
           a3);
}
