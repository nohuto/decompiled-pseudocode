/*
 * XREFs of PipUnprotectDevice @ 0x1408B5654
 * Callers:
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1408B5584 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     PnpQueryInterface @ 0x140765F44 (PnpQueryInterface.c)
 */

__int64 __fastcall PipUnprotectDevice(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // rcx
  int Interface; // ebx
  __int64 v3; // rdi
  __int128 v5; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v6; // [rsp+40h] [rbp-A8h]
  __int64 (__fastcall *v7)(_QWORD); // [rsp+50h] [rbp-98h]
  _QWORD v8[14]; // [rsp+60h] [rbp-88h] BYREF

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v7 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  Interface = PnpQueryInterface(v1, (ULONG_PTR)&GUID_SDEV_IDENTIFIER_INTERFACE, 1u, 0x28u, 0LL, (USHORT *)&v5);
  if ( Interface >= 0 )
  {
    v3 = v7(*((_QWORD *)&v5 + 1));
    (*((void (__fastcall **)(_QWORD))&v6 + 1))(*((_QWORD *)&v5 + 1));
    memset(v8, 0, 0x68uLL);
    v8[1] = v3;
    return (unsigned int)VslpEnterIumSecureMode(2u, 66, 0, (__int64)v8);
  }
  return (unsigned int)Interface;
}
