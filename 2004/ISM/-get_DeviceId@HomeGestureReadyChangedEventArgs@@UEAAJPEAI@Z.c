/*
 * XREFs of ?get_DeviceId@HomeGestureReadyChangedEventArgs@@UEAAJPEAI@Z @ 0x18001DB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HomeGestureReadyChangedEventArgs::get_DeviceId(
        HomeGestureReadyChangedEventArgs *this,
        unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 10);
  return 0LL;
}
