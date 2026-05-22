/*
 * XREFs of ?Release@TouchProcessor@@UEAAKXZ @ 0x180037560
 * Callers:
 *     ?Release@ControllerProcessor@@W7EAAKXZ @ 0x18004A710 (-Release@ControllerProcessor@@W7EAAKXZ.c)
 *     ?Release@TapProcessor@@WBA@EAAKXZ @ 0x18004A720 (-Release@TapProcessor@@WBA@EAAKXZ.c)
 *     ?Release@ControllerProcessor@@WEI@EAAKXZ @ 0x18004C140 (-Release@ControllerProcessor@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall TouchProcessor::Release(TouchProcessor *this)
{
  return RefCountedObject::Release((TouchProcessor *)((char *)this + 16));
}
