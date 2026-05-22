/*
 * XREFs of ?Release@MouseProcessor@@UEAAKXZ @ 0x180135C50
 * Callers:
 *     ?Release@MouseProcessor@@W7EAAKXZ @ 0x18004C300 (-Release@MouseProcessor@@W7EAAKXZ.c)
 *     ?Release@MouseProcessor@@WBA@EAAKXZ @ 0x18004C310 (-Release@MouseProcessor@@WBA@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WBI@EAAKXZ @ 0x18004C320 (-Release@MouseProcessor@@WBI@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WCA@EAAKXZ @ 0x18004C330 (-Release@MouseProcessor@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::Release(MouseProcessor *this)
{
  return RefCountedObject::Release((MouseProcessor *)((char *)this + 32));
}
