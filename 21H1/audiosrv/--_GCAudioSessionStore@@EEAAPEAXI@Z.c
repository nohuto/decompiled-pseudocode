/*
 * XREFs of ??_GCAudioSessionStore@@EEAAPEAXI@Z @ 0x1800035D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionStore@@EEAA@XZ @ 0x180003B5C (--1CAudioSessionStore@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioSessionStore *__fastcall CAudioSessionStore::`scalar deleting destructor'(CAudioSessionStore *this, char a2)
{
  CAudioSessionStore::~CAudioSessionStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
