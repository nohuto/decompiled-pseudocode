/*
 * XREFs of memcpy_s_0 @ 0x18008DA14
 * Callers:
 *     ?s_UnpackTouchEvent@CNotificationData@@SAXPEBXPEAW4TouchEventSource@IhmNotification@@PEAIPEA_JPEAKPEA_N5@Z @ 0x1800F00C8 (-s_UnpackTouchEvent@CNotificationData@@SAXPEBXPEAW4TouchEventSource@IhmNotification@@PEAIPEA_JPE.c)
 *     ?BoolToQword@QwordHelpers@@YA_K_N@Z @ 0x180479480 (-BoolToQword@QwordHelpers@@YA_K_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  return memcpy_s(Destination, DestinationSize, Source, SourceSize);
}
