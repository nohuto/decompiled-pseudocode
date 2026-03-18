/*
 * XREFs of ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C0016ED0
 * Callers:
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0011A70 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ldevLoadDriver @ 0x1C00167D0 (ldevLoadDriver.c)
 *     EngQueryW32kCddInterface @ 0x1C00B4E30 (EngQueryW32kCddInterface.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsCddCddRemoteSessionFilteringAllowed(void)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !gbDisableCddRemoteSessionFiltering )
    return gRemoteSessionUseWddm == 0;
  return result;
}
