/*
 * XREFs of ?GetInputSink@DWMInputTarget@@UEBAPEAXXZ @ 0x1800B6AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall DWMInputTarget::GetInputSink(DWMInputTarget *this)
{
  return DWMInputTarget::GetInputSinkHandle((DWMInputTarget *)((char *)this - 8));
}
