/*
 * XREFs of sub_1C0029FEC @ 0x1C0029FEC
 * Callers:
 *     sub_1C0057C60 @ 0x1C0057C60 (sub_1C0057C60.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C0029FEC(
        __int64 a1,
        unsigned __int16 a2,
        struct _UNICODE_STRING *a3,
        _BYTE *a4,
        int a5,
        __int64 a6)
{
  ULONG v7; // ebx
  NTSTATUS v10; // eax
  __int64 v11; // r10
  __int64 v12; // rcx
  int v13; // r8d
  PDEVICE_OBJECT *v14; // rax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  int v17; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-98h] BYREF
  __m128 SourceString[4]; // [rsp+50h] [rbp-88h] BYREF

  v7 = a2;
  DestinationString = 0LL;
  sub_1C001D340(SourceString, 0, 0x40uLL);
  RtlInitUnicodeString(&DestinationString, (PCWSTR)SourceString);
  DestinationString.MaximumLength = 64;
  v10 = RtlIntegerToUnicodeString(v7, 0xAu, &DestinationString);
  v11 = v10;
  v12 = a1;
  if ( v10 < 0 )
  {
    v13 = 1668441137;
LABEL_10:
    sub_1C000FD80(v12, 8, v13, v11, 0LL);
    return (unsigned int)v11;
  }
  v14 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  v15 = IoRegisterDeviceInterface(v14[149], &InterfaceClassGuid, &DestinationString, a3);
  v11 = v15;
  if ( v15 < 0 )
  {
    v13 = 1668441138;
LABEL_9:
    v12 = a1;
    goto LABEL_10;
  }
  *a4 = 1;
  v16 = IoSetDeviceInterfaceState(a3, 1u);
  v11 = v16;
  if ( v16 < 0 )
  {
    v13 = 1668441139;
    goto LABEL_9;
  }
  v17 = IoSetDeviceInterfacePropertyData(a3, &PropertyKey, 0LL, 0LL, 4099, a5, a6);
  v11 = v17;
  if ( v17 < 0 )
  {
    v13 = 1668441140;
    goto LABEL_9;
  }
  return (unsigned int)v11;
}
