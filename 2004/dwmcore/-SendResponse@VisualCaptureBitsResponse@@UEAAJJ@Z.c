/*
 * XREFs of ?SendResponse@VisualCaptureBitsResponse@@UEAAJJ@Z @ 0x1800DA270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VisualCaptureBitsResponse::SendResponse(HANDLE *this)
{
  if ( !*((_BYTE *)this + 1728) )
  {
    SetEvent(this[215]);
    *((_BYTE *)this + 1728) = 1;
  }
  *((_BYTE *)this + 33) = 1;
  return 0LL;
}
