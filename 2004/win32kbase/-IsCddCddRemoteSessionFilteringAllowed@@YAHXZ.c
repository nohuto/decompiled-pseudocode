/*
 * XREFs of ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C00BC5E0
 * Callers:
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00A7F20 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     EngQueryW32kCddInterface @ 0x1C00B7170 (EngQueryW32kCddInterface.c)
 *     ldevLoadDriver @ 0x1C00BBEE0 (ldevLoadDriver.c)
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
