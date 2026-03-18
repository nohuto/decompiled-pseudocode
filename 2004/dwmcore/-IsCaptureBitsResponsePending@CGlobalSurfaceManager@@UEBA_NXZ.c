/*
 * XREFs of ?IsCaptureBitsResponsePending@CGlobalSurfaceManager@@UEBA_NXZ @ 0x1800C1EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalSurfaceManager::IsCaptureBitsResponsePending(CGlobalSurfaceManager *this)
{
  return *((_QWORD *)this + 38) != 0LL;
}
