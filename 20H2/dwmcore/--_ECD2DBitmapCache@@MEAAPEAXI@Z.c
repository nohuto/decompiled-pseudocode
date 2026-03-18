/*
 * XREFs of ??_ECD2DBitmapCache@@MEAAPEAXI@Z @ 0x18019ACD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x18006F4C0 (--1CD2DBitmapCache@@MEAA@XZ.c)
 */

CD2DBitmapCache *__fastcall CD2DBitmapCache::`vector deleting destructor'(CD2DBitmapCache *this, char a2)
{
  CD2DBitmapCache::~CD2DBitmapCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
