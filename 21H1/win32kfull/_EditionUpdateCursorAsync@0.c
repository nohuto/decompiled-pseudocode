/*
 * XREFs of _EditionUpdateCursorAsync@0 @ 0x99F1A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall EditionUpdateCursorAsync()
{
  void *v0; // eax

  v0 = (void *)ReferenceDwmApiPort();
  return DwmAsyncUpdateCursorMouseMove(v0);
}
