/*
 * XREFs of ?Release@HeatProcessor@@UEAAKXZ @ 0x180037520
 * Callers:
 *     ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x18004D700 (-Release@DWMCursorBroker@@W7EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBA@EAAKXZ @ 0x18004D710 (-Release@HeatProcessor@@WBA@EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBI@EAAKXZ @ 0x18004D720 (-Release@HeatProcessor@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall HeatProcessor::Release(HeatProcessor *this)
{
  return RefCountedObject::Release((HeatProcessor *)((char *)this + 24));
}
