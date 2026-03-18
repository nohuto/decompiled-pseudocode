/*
 * XREFs of ?GetVBlankDuration@CDDisplayRenderTarget@@UEBA_KXZ @ 0x1801A0A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONGLONG __fastcall CDDisplayRenderTarget::GetVBlankDuration(CDDisplayRenderTarget *this)
{
  if ( *((_QWORD *)this + 4) )
    return g_qpcFrequency.QuadPart / 60;
  else
    return 0LL;
}
