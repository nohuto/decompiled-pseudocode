/*
 * XREFs of ?SetRemarshalingFlags@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01F1600
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01F10F0 (-SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this)
{
  char result; // al

  result = DirectComposition::CCaptureRenderTargetMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 16) )
  {
    *((_DWORD *)this + 4) |= 0x1000u;
    result = 1;
  }
  if ( *((_QWORD *)this + 23) )
  {
    *((_DWORD *)this + 4) |= 0x2000u;
    result = 1;
  }
  if ( *((_DWORD *)this + 38) || *((_DWORD *)this + 40) || *((_DWORD *)this + 39) || *((_DWORD *)this + 41) )
  {
    *((_DWORD *)this + 4) |= 0x4000u;
    return 1;
  }
  return result;
}
