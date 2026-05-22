/*
 * XREFs of ??_GDevice@GameInputServerProxy@@QEAAPEAXI@Z @ 0x180042968
 * Callers:
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x1800427F4 (--1GameInputServerProxy@@EEAA@XZ.c)
 *     ?NotifyRouterDeviceId@GameInputServerProxy@@UEAAXPEBGI@Z @ 0x180042FE0 (-NotifyRouterDeviceId@GameInputServerProxy@@UEAAXPEBGI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

GameInputServerProxy::Device *__fastcall GameInputServerProxy::Device::`scalar deleting destructor'(
        GameInputServerProxy::Device *this,
        const struct std::nothrow_t *a2)
{
  void *v3; // rcx

  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
    operator delete(v3, a2);
  operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
