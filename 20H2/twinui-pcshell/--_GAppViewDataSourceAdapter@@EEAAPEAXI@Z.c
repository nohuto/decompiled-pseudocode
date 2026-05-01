/*
 * XREFs of ??_GAppViewDataSourceAdapter@@EEAAPEAXI@Z @ 0x18033B1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AppViewDataSourceAdapter@@EEAA@XZ @ 0x18033AD70 (--1AppViewDataSourceAdapter@@EEAA@XZ.c)
 */

AppViewDataSourceAdapter *__fastcall AppViewDataSourceAdapter::`scalar deleting destructor'(
        AppViewDataSourceAdapter *this,
        char a2)
{
  AppViewDataSourceAdapter::~AppViewDataSourceAdapter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x168);
  return this;
}
