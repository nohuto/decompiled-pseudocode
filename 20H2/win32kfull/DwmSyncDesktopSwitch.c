/*
 * XREFs of DwmSyncDesktopSwitch @ 0x1C002A714
 * Callers:
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C00152B8 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall DwmSyncDesktopSwitch(PVOID Object, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp-50h] BYREF
  struct _PORT_MESSAGE v8; // [rsp+38h] [rbp-48h] BYREF
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  __int64 v11; // [rsp+68h] [rbp-18h]

  v4 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    v4 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(&v8, 0, sizeof(v8));
      v8.u2.s2.Type = 0x8000;
      v11 = a2;
      v10 = a3;
      v7 = 56LL;
      v8.u1.Length = 3670032;
      v9 = 1073741839;
      v5 = ((__int64 (__fastcall *)(PVOID, __int64, struct _PORT_MESSAGE *, struct _PORT_MESSAGE *, __int64 *, _QWORD))LpcSendWaitReceivePort)(
             Object,
             0x20000LL,
             &v8,
             &v8,
             &v7,
             0LL);
      v4 = SyncLpcCheckNtStatus(v5, &v8);
    }
    ObfDereferenceObject(Object);
  }
  return v4;
}
