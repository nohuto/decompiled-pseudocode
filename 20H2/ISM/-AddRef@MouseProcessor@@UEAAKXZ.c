/*
 * XREFs of ?AddRef@MouseProcessor@@UEAAKXZ @ 0x18001DDF0
 * Callers:
 *     ?AddRef@ContextualProcessorBuffer@@W7EAAKXZ @ 0x18004C280 (-AddRef@ContextualProcessorBuffer@@W7EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WBA@EAAKXZ @ 0x18004C290 (-AddRef@MouseProcessor@@WBA@EAAKXZ.c)
 *     ?AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ @ 0x18004C2A0 (-AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WCA@EAAKXZ @ 0x18004C2B0 (-AddRef@MouseProcessor@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::AddRef(MouseProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
