/*
 * XREFs of DwmSyncNotifyMinimizing @ 0x1C0057260
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C003E158 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 */

__int64 __fastcall DwmSyncNotifyMinimizing(PVOID Object, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  struct _PORT_MESSAGE v6; // [rsp+30h] [rbp-40h] BYREF
  int v7; // [rsp+58h] [rbp-18h]
  __int64 v8; // [rsp+5Ch] [rbp-14h]
  __int64 v9; // [rsp+80h] [rbp+10h] BYREF

  v3 = -1073741823;
  if ( Object )
  {
    v3 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(&v6, 0, sizeof(v6));
      v6.u2.s2.Type = 0x8000;
      v8 = a2;
      v9 = 52LL;
      v6.u1.Length = 3407884;
      v7 = 1073741825;
      v4 = ((__int64 (__fastcall *)(PVOID, __int64, struct _PORT_MESSAGE *, struct _PORT_MESSAGE *, __int64 *, _QWORD))LpcSendWaitReceivePort)(
             Object,
             0x20000LL,
             &v6,
             &v6,
             &v9,
             0LL);
      v3 = SyncLpcCheckNtStatus(v4, &v6);
    }
    ObfDereferenceObject(Object);
  }
  return v3;
}
