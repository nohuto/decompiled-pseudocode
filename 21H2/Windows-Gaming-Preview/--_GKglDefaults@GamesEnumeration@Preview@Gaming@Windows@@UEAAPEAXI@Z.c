/*
 * XREFs of ??_GKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18003CA30
 * Callers:
 *     <none>
 * Callees:
 *     ??1KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x18003CA6C (--1KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180044AD8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::KglDefaults *__fastcall Windows::Gaming::Preview::GamesEnumeration::KglDefaults::`scalar deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::KglDefaults *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults::~KglDefaults(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
