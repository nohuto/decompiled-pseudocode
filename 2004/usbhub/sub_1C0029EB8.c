/*
 * XREFs of sub_1C0029EB8 @ 0x1C0029EB8
 * Callers:
 *     sub_1C0053D28 @ 0x1C0053D28 (sub_1C0053D28.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C0029EB8(__int64 a1, unsigned __int16 a2, struct _UNICODE_STRING *a3, _BYTE *a4)
{
  ULONG v5; // ebp
  __int64 v8; // r10
  NTSTATUS v9; // eax
  int v10; // r8d
  NTSTATUS v11; // eax
  int v12; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  __m128 SourceString[4]; // [rsp+50h] [rbp-78h] BYREF

  v5 = a2;
  DestinationString = 0LL;
  sub_1C001D340(SourceString, 0, 0x40uLL);
  if ( *a4 )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)SourceString);
    DestinationString.MaximumLength = 64;
    v9 = RtlIntegerToUnicodeString(v5, 0xAu, &DestinationString);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v11 = IoSetDeviceInterfaceState(a3, 0);
      v8 = v11;
      if ( v11 >= 0 )
      {
        v12 = IoSetDeviceInterfacePropertyData(a3, &PropertyKey, 0LL, 0LL, 4099, 0, 0LL);
        v8 = v12;
        if ( v12 >= 0 )
          return (unsigned int)v8;
        v10 = 1668047923;
      }
      else
      {
        v10 = 1668047922;
      }
    }
    else
    {
      v10 = 1668047921;
    }
    sub_1C000FD80(a1, 8, v10, v8, 0LL);
    return (unsigned int)v8;
  }
  LODWORD(v8) = 0;
  return (unsigned int)v8;
}
