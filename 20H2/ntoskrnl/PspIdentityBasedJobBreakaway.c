/*
 * XREFs of PspIdentityBasedJobBreakaway @ 0x1405D62F4
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14068EDF8 (PspInitializeProcessSecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlQueryPackageIdentityEx @ 0x1402E3FA0 (RtlQueryPackageIdentityEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PspIdentityBasedJobBreakaway(void *a1, void *a2, int *a3)
{
  unsigned __int64 v4; // r14
  NTSTATUS v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // rdi
  int v9; // eax
  NTSTATUS v10; // eax
  GUID *v12; // [rsp+28h] [rbp-D8h]
  GUID *v13; // [rsp+28h] [rbp-D8h]
  unsigned __int64 Flags; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v16; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR PackageSize; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR v18; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR AppIdSize; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v22; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING String1; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR AppId[72]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR v25[72]; // [rsp+140h] [rbp+40h] BYREF
  WCHAR PackageFullName[128]; // [rsp+1D0h] [rbp+D0h] BYREF
  WCHAR SourceString[128]; // [rsp+2D0h] [rbp+1D0h] BYREF

  Flags = 0LL;
  v4 = 0LL;
  PackageSize = 256LL;
  *a3 = 0;
  v16 = 256LL;
  v15 = 0LL;
  AppIdSize = 132LL;
  v18 = 132LL;
  DestinationString = 0LL;
  String1 = 0LL;
  String2 = 0LL;
  v22 = 0LL;
  v6 = RtlQueryPackageIdentityEx(a1, PackageFullName, &PackageSize, AppId, &AppIdSize, v12, &Flags);
  v7 = v6;
  if ( v6 == -1073741275 || v6 == -2147483643 )
  {
    v8 = 0LL;
    v7 = 0;
  }
  else
  {
    v8 = Flags;
  }
  if ( v7 >= 0 )
  {
    if ( v8 )
    {
      v9 = *a3;
    }
    else
    {
      *a3 = 1;
      v9 = 1;
    }
    if ( !v9 )
    {
      v10 = RtlQueryPackageIdentityEx(a2, SourceString, &v16, v25, &v18, v13, &v15);
      v7 = v10;
      if ( v10 == -1073741275 || v10 == -2147483643 )
        v7 = 0;
      else
        v4 = v15;
    }
    if ( v7 >= 0 )
    {
      if ( v4 )
      {
        if ( (((unsigned int)v4 ^ (unsigned int)v8) & 0xFFFFFFDF) != 0
          || PackageSize != v16
          || AppIdSize != v18
          || (RtlInitUnicodeString(&DestinationString, PackageFullName),
              RtlInitUnicodeString(&String1, AppId),
              RtlInitUnicodeString(&String2, SourceString),
              RtlInitUnicodeString(&v22, v25),
              !RtlEqualUnicodeString(&DestinationString, &String2, 1u))
          || !RtlEqualUnicodeString(&String1, &v22, 1u) )
        {
          *a3 = 1;
        }
      }
    }
  }
  return (unsigned int)v7;
}
