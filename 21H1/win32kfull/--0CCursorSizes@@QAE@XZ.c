/*
 * XREFs of ??0CCursorSizes@@QAE@XZ @ 0xEBFC6
 * Callers:
 *     _EditionInitGlobalCursorSizes@0 @ 0xEBF9A (_EditionInitGlobalCursorSizes@0.c)
 * Callees:
 *     ?RefreshSizes@CCursorSizes@@QAEXXZ @ 0xA27AC (-RefreshSizes@CCursorSizes@@QAEXXZ.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

CCursorSizes *__thiscall CCursorSizes::CCursorSizes(CCursorSizes *this)
{
  *(_DWORD *)this = 32;
  *((_DWORD *)this + 1) = 32;
  memset((char *)this + 8, 0, 0x38u);
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 16) = &CPushLock::`vftable';
  CCursorSizes::RefreshSizes(this);
  return this;
}
