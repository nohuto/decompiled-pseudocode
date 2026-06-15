/*
 * XREFs of ??_ECBaseStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800E3920
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x18004F170 (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CBaseStreamGroupProxy *__fastcall CBaseStreamGroupProxy::`vector deleting destructor'(
        CBaseStreamGroupProxy *this,
        char a2)
{
  CBaseStreamGroupProxy::~CBaseStreamGroupProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
