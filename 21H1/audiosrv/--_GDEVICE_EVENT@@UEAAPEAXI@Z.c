/*
 * XREFs of ??_GDEVICE_EVENT@@UEAAPEAXI@Z @ 0x180116000
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall DEVICE_EVENT::`scalar deleting destructor'(void **this, char a2)
{
  *this = &DEVICE_EVENT::`vftable';
  free(this[2]);
  this[2] = 0LL;
  *this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
