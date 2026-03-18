/*
 * XREFs of HT_InitSaneLimits @ 0x1C01297CC
 * Callers:
 *     EnableHalftone @ 0x1C0129740 (EnableHalftone.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 HT_InitSaneLimits()
{
  int v0; // ebx
  PVOID SystemRoutineAddress; // rax
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v4; // [rsp+34h] [rbp-CCh] BYREF
  int v5; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+50h] [rbp-B0h] BYREF
  int v9; // [rsp+58h] [rbp-A8h]
  const wchar_t *v10; // [rsp+60h] [rbp-A0h]
  int *v11; // [rsp+68h] [rbp-98h]
  int v12; // [rsp+70h] [rbp-90h]
  int *v13; // [rsp+78h] [rbp-88h]
  int v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  int v16; // [rsp+90h] [rbp-70h]
  const wchar_t *v17; // [rsp+98h] [rbp-68h]
  unsigned int *v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A8h] [rbp-58h]
  int *v20; // [rsp+B0h] [rbp-50h]
  int v21; // [rsp+B8h] [rbp-48h]
  __int64 v22; // [rsp+C0h] [rbp-40h]
  int v23; // [rsp+C8h] [rbp-38h]
  __int128 v24; // [rsp+D0h] [rbp-30h]
  __int128 v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+F0h] [rbp-10h]

  v0 = 0;
  v6 = 20000000;
  v5 = 0;
  v3 = 0;
  v12 = 67108868;
  v19 = 67108868;
  v14 = 4;
  v10 = L"DisableSaneLimits";
  v21 = 4;
  v11 = &v3;
  v4 = 0;
  v13 = &v5;
  v17 = L"HTSurfaceSizeLimit";
  v18 = &v4;
  v20 = &v6;
  v26 = 0LL;
  v8 = 0LL;
  v9 = 288;
  v15 = 0LL;
  v16 = 288;
  v22 = 0LL;
  v23 = 0;
  v24 = 0LL;
  v25 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  result = ((__int64 (__fastcall *)(__int64, const wchar_t *, __int64 *, _QWORD, _QWORD))SystemRoutineAddress)(
             3LL,
             L"GRE_Initialize",
             &v8,
             0LL,
             0LL);
  if ( !(_DWORD)result )
  {
    result = v4;
    LOBYTE(v0) = v3 == 0;
    gdwMaxSurfaceSize = v4;
    gbCheckLimits = v0;
  }
  return result;
}
