/*
 * XREFs of ?Release@HeatProcessor@@UEAAKXZ @ 0x180037270
 * Callers:
 *     ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x18004DCE0 (-Release@DWMCursorBroker@@W7EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBA@EAAKXZ @ 0x18004DCF0 (-Release@HeatProcessor@@WBA@EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBI@EAAKXZ @ 0x18004DD00 (-Release@HeatProcessor@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall HeatProcessor::Release(HeatProcessor *this)
{
  return RefCountedObject::Release((HeatProcessor *)((char *)this + 24));
}
