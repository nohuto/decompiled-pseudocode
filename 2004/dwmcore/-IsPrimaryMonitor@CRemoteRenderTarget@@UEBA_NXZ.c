/*
 * XREFs of ?IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ @ 0x1800E1180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRemoteRenderTarget::IsPrimaryMonitor(CRemoteRenderTarget *this)
{
  bool result; // al

  result = 0;
  if ( !*((_DWORD *)this + 12) )
    return *((_DWORD *)this + 13) == 0;
  return result;
}
