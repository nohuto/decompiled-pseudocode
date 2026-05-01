/*
 * XREFs of CrmActivityWindowClosedReasonSubscribe @ 0x1800091C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CrmActivityWindowClosedReasonSubscribe(
        struct _CRMP_ACTIVITY_CONTEXT *a1,
        void (*a2)(void *, void *, void *),
        void *a3)
{
  return CrmpActivityWindowClosedReasonSubscribe(a1, a2, a3);
}
