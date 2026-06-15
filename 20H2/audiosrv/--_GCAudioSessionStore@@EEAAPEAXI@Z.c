/*
 * XREFs of ??_GCAudioSessionStore@@EEAAPEAXI@Z @ 0x180003130
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionStore@@EEAA@XZ @ 0x1800036BC (--1CAudioSessionStore@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioSessionStore *__fastcall CAudioSessionStore::`scalar deleting destructor'(CAudioSessionStore *this, char a2)
{
  CAudioSessionStore::~CAudioSessionStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
