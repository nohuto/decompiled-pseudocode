/*
 * XREFs of ?Release@HeatProcessor@@UEAAKXZ @ 0x1800375F0
 * Callers:
 *     ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x18004D0C0 (-Release@DWMCursorBroker@@W7EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBA@EAAKXZ @ 0x18004D0D0 (-Release@HeatProcessor@@WBA@EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBI@EAAKXZ @ 0x18004D0E0 (-Release@HeatProcessor@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall HeatProcessor::Release(HeatProcessor *this)
{
  return RefCountedObject::Release((HeatProcessor *)((char *)this + 24));
}
