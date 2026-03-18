/*
 * XREFs of ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C00AD9C0
 * Callers:
 *     EngQueryW32kCddInterface @ 0x1C0046B30 (EngQueryW32kCddInterface.c)
 *     ldevLoadDriver @ 0x1C00AD2C0 (ldevLoadDriver.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00B5120 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
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
