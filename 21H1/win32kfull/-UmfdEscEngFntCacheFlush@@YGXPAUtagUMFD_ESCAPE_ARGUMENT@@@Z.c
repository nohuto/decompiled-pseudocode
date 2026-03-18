/*
 * XREFs of ?UmfdEscEngFntCacheFlush@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0xECB1A
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SG_NPAEIIW4FontDriverType@@@Z @ 0xECB3C (-FntCacheAllocate@UmfdFontCacheEntry@@SG_NPAEIIW4FontDriverType@@@Z.c)
 */

void __thiscall UmfdEscEngFntCacheFlush(_DWORD *this)
{
  this[1] = (unsigned __int8)UmfdFontCacheEntry::FntCacheAllocate(this[4], this[3], this[2], this[1]) != 0;
}
