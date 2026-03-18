/*
 * XREFs of UsbhReleasePdoUxdLock @ 0x1C005B78C
 * Callers:
 *     UsbhPdoPnp_QueryId @ 0x1C0056360 (UsbhPdoPnp_QueryId.c)
 *     UsbhUpdateUxdSettings @ 0x1C005B7C4 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 */

__int64 __fastcall UsbhReleasePdoUxdLock(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  v2 = PdoExt(a2);
  KeReleaseSemaphore((PRKSEMAPHORE)(v2 + 642), 16, 1, 0);
  return 0LL;
}
