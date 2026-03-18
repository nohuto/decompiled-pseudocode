/*
 * XREFs of ?GetSize@CVirtualMonitorCaptureRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800F9FE4
 * Callers:
 *     ?GetSize@CVirtualMonitorCaptureRenderTarget@@$4PPPPPPPM@A@EBA?AUD2D_SIZE_U@@XZ @ 0x180106030 (-GetSize@CVirtualMonitorCaptureRenderTarget@@$4PPPPPPPM@A@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CVirtualMonitorCaptureRenderTarget::GetSize(
        CVirtualMonitorCaptureRenderTarget *this,
        _DWORD *a2)
{
  *a2 = *((_DWORD *)this - 21);
  a2[1] = *((_DWORD *)this - 20);
  return (struct D2D_SIZE_U)a2;
}
