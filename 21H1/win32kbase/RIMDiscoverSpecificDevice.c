/*
 * XREFs of RIMDiscoverSpecificDevice @ 0x1C017ABB0
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0037400 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RimInputTypeToDeviceType @ 0x1C004F9C0 (RimInputTypeToDeviceType.c)
 *     RIMDoOnPnpNotification @ 0x1C0059D84 (RIMDoOnPnpNotification.c)
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1C0159410 (RIMFreeDev.c)
 */

__int64 __fastcall RIMDiscoverSpecificDevice(CDeviceIdentity **Object, __int64 a2)
{
  unsigned int v4; // eax
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v4 = RimInputTypeToDeviceType(*((_DWORD *)Object + 21));
  v5 = RIMCreateDev(Object, v4, a2, 1, 0, 0LL, &v9);
  if ( v5 >= 0 )
  {
    v6 = v9;
    v7 = v9;
    *(_DWORD *)(v9 + 184) |= 1u;
    v5 = RIMDoOnPnpNotification((__int64)Object, v7);
    if ( v5 < 0 )
      RIMFreeDev((__int64)Object, v6);
  }
  return (unsigned int)v5;
}
