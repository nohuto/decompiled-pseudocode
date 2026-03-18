/*
 * XREFs of sub_1C00554E0 @ 0x1C00554E0
 * Callers:
 *     sub_1C0057020 @ 0x1C0057020 (sub_1C0057020.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00469A4 @ 0x1C00469A4 (sub_1C00469A4.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C00554E0(PDEVICE_OBJECT DeviceObject, GUID *InterfaceClassGuid)
{
  _DWORD *v4; // rdi
  struct _UNICODE_STRING *v5; // rsi
  NTSTATUS v6; // ebx
  int v7; // eax
  void *v8; // rcx

  v4 = sub_1C0011220((__int64)DeviceObject);
  v5 = (struct _UNICODE_STRING *)(v4 + 300);
  v6 = IoRegisterDeviceInterface(DeviceObject, InterfaceClassGuid, 0LL, (PUNICODE_STRING)v4 + 75);
  if ( v6 < 0 )
    goto LABEL_11;
  v6 = IoSetDeviceInterfaceState(v5, 1u);
  if ( v6 >= 0 )
  {
    v4[355] |= 0x10u;
    v6 = sub_1C00469A4(DeviceObject, L"SymbolicName", 1u, *((PVOID *)v4 + 151), *((unsigned __int16 *)v4 + 600));
  }
  v7 = v4[355];
  if ( v6 < 0 )
  {
    if ( (v7 & 0x10) != 0 )
    {
      v4[355] = v7 & 0xFFFFFFEF;
      IoSetDeviceInterfaceState(v5, 0);
      v7 = v4[355];
    }
    v8 = (void *)*((_QWORD *)v4 + 151);
    v4[355] = v7 & 0xFFFFFFF7;
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      *((_QWORD *)v4 + 151) = 0LL;
    }
  }
  else
  {
    v4[355] = v7 | 8;
  }
  if ( v6 < 0 )
LABEL_11:
    sub_1C004A608(*((_QWORD *)v4 + 148), *((_WORD *)v4 + 714), 0x65u, 0LL, 0, v6, -1, aPdoC, 359, 0);
  sub_1C000FD80(*((_QWORD *)v4 + 148), 256, 1937337676, v6, (__int64)DeviceObject);
  return (unsigned int)v6;
}
