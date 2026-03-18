/*
 * XREFs of PoFxEnableDStateReporting @ 0x1408DF9B0
 * Callers:
 *     <none>
 * Callees:
 *     PoFxStartDevicePowerManagement @ 0x1403B9D40 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopFxRegisterDevice @ 0x14079CA3C (PopFxRegisterDevice.c)
 */

__int64 __fastcall PoFxEnableDStateReporting(PDEVICE_OBJECT DeviceObject, ULONG_PTR *a2)
{
  int v4; // ebx
  _BYTE v6[80]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v7; // [rsp+90h] [rbp-9h] BYREF
  __int128 v8; // [rsp+A0h] [rbp+7h]
  __int128 v9; // [rsp+B0h] [rbp+17h]
  __int64 v10; // [rsp+C0h] [rbp+27h]
  __int128 v11; // [rsp+C8h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+D8h] [rbp+3Fh]

  if ( DeviceObject && a2 )
  {
    memset(v6, 0, sizeof(v6));
    v10 = 0LL;
    v12 = 0LL;
    v8 = 0LL;
    HIDWORD(v8) = 1;
    v9 = (unsigned __int64)&v11;
    v7 = 0LL;
    v11 = 0LL;
    v4 = PopFxRegisterDevice(DeviceObject, (int)v6, (int)&v7, 1, 0LL, 0LL, a2);
    if ( v4 >= 0 )
    {
      *(_DWORD *)(*a2 + 824) |= 1u;
      PoFxStartDevicePowerManagement(*a2);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
