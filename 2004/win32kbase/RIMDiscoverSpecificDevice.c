/*
 * XREFs of RIMDiscoverSpecificDevice @ 0x1C0174880
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMDoOnPnpNotification @ 0x1C0015E90 (RIMDoOnPnpNotification.c)
 *     RimInputTypeToDeviceType @ 0x1C00565E0 (RimInputTypeToDeviceType.c)
 *     RIMCreateDev @ 0x1C00AE678 (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1C01530C0 (RIMFreeDev.c)
 */

__int64 __fastcall RIMDiscoverSpecificDevice(CDeviceIdentity **Object, const UNICODE_STRING *a2)
{
  unsigned int v4; // eax
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  v4 = RimInputTypeToDeviceType(*((_DWORD *)Object + 21));
  v5 = RIMCreateDev(Object, v4, a2, 1LL, 0, 0LL, (struct _UNICODE_STRING **)&v11);
  if ( v5 >= 0 )
  {
    v8 = v11;
    v9 = v11;
    *(_DWORD *)(v11 + 184) |= 1u;
    v5 = RIMDoOnPnpNotification((__int64)Object, v9, v6, v7);
    if ( v5 < 0 )
      RIMFreeDev((__int64)Object, v8);
  }
  return (unsigned int)v5;
}
