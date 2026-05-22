/*
 * XREFs of ??$reset@PEADX@?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@QEAAXPEAD@Z @ 0x18007A24C
 * Callers:
 *     ?DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ @ 0x1800419D0 (-DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ.c)
 *     ?StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z @ 0x180042F2C (-StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z.c)
 *     ?StopWatching@GameInputWatcher@@QEAAXXZ @ 0x180043120 (-StopWatching@GameInputWatcher@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<char [0]>::reset<char *,void>(void **a1, const struct std::nothrow_t *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    operator delete(v2, a2);
}
