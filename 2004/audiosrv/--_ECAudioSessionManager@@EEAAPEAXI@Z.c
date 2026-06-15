/*
 * XREFs of ??_ECAudioSessionManager@@EEAAPEAXI@Z @ 0x1800CEC00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioSessionManager@@EEAA@XZ @ 0x1800CE728 (--1CAudioSessionManager@@EEAA@XZ.c)
 */

CAudioSessionManager *__fastcall CAudioSessionManager::`vector deleting destructor'(
        CAudioSessionManager *this,
        char a2)
{
  CAudioSessionManager::~CAudioSessionManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x140);
  return this;
}
