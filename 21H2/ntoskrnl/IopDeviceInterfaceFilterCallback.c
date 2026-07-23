/*
 * XREFs of IopDeviceInterfaceFilterCallback @ 0x14060B3E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14068FB00 (PiPnpRtlApplyMandatoryFilters.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 */

char __fastcall IopDeviceInterfaceFilterCallback(int a1, const WCHAR *a2, int a3, PCWSTR *a4)
{
  char v4; // bl
  int v5; // edi
  int v8; // eax
  char v9; // cl
  UNICODE_STRING String2; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  LOBYTE(v13) = 0;
  v5 = (int)a4;
  String2 = 0LL;
  DestinationString = 0LL;
  if ( a3 == 3
    && a4
    && (!*a4
     || RtlInitUnicodeStringEx(&DestinationString, *a4) >= 0
     && RtlInitUnicodeStringEx(&String2, a2) >= 0
     && RtlEqualUnicodeString(&DestinationString, &String2, 1u) != 1) )
  {
    v8 = PiPnpRtlApplyMandatoryFilters(a1, (int)a2, 3, 0, v5 + 8, (__int64)&v13);
    v9 = v13;
    if ( v8 < 0 )
      return 0;
    return v9;
  }
  return v4;
}
