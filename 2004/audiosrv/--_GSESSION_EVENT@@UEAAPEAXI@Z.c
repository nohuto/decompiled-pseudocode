/*
 * XREFs of ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x180038A60
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x180038930 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall SESSION_EVENT::`scalar deleting destructor'(void **this, char a2)
{
  *this = &SESSION_EVENT::`vftable';
  free(this[2]);
  this[2] = 0LL;
  *this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
