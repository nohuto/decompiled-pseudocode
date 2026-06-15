/*
 * XREFs of ??_GCPlaybackManager@@MEAAPEAXI@Z @ 0x1800280A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CPlaybackManager *__fastcall CPlaybackManager::`scalar deleting destructor'(CPlaybackManager *this, char a2)
{
  *((_DWORD *)this + 6) = 1;
  *((_QWORD *)this + 2) = &CPlaybackManager::`vftable'{for `ISessionInternalEvents'};
  *(_QWORD *)this = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
