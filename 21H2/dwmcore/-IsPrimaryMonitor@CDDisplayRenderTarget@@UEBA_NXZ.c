/*
 * XREFs of ?IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ @ 0x1801A1750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplayRenderTarget::IsPrimaryMonitor(CDDisplayRenderTarget *this)
{
  return *((float *)this + 4503) == 0.0 && *((float *)this + 4504) == 0.0;
}
