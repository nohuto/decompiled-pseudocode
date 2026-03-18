/*
 * XREFs of sub_1C005ADEC @ 0x1C005ADEC
 * Callers:
 *     sub_1C005B7C4 @ 0x1C005B7C4 (sub_1C005B7C4.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C005A350 @ 0x1C005A350 (sub_1C005A350.c)
 *     sub_1C005BDC4 @ 0x1C005BDC4 (sub_1C005BDC4.c)
 */

__int64 __fastcall sub_1C005ADEC(PDEVICE_OBJECT a1, __int64 a2, __int64 a3)
{
  int v5; // r8d
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const WCHAR *, void **); // rax
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-69h] BYREF
  void *v9; // [rsp+58h] [rbp-59h] BYREF
  int v10; // [rsp+60h] [rbp-51h]
  __int128 *v11; // [rsp+68h] [rbp-49h]
  __int64 v12; // [rsp+70h] [rbp-41h]
  int v13; // [rsp+78h] [rbp-39h]
  __int64 v14; // [rsp+80h] [rbp-31h]
  int v15; // [rsp+88h] [rbp-29h]
  __int64 v16; // [rsp+90h] [rbp-21h]
  int v17; // [rsp+98h] [rbp-19h]
  __int64 v18; // [rsp+A0h] [rbp-11h]
  __int64 v19; // [rsp+A8h] [rbp-9h]
  int v20; // [rsp+B0h] [rbp-1h]
  __int64 v21; // [rsp+B8h] [rbp+7h]
  int v22; // [rsp+C0h] [rbp+Fh]
  __int128 v23; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+27h]
  __int16 v25; // [rsp+E0h] [rbp+2Fh]

  v23 = xmmword_1C00653C8;
  v25 = 0;
  v24 = 0x52005200520052LL;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    a1 = DeviceObject;
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x12u, (__int64)&unk_1C00654F0);
  }
  sub_1C005A350((__int64)a1, a2, (wchar_t *)&v23);
  v10 = 4;
  v9 = &sub_1C005B530;
  v11 = &v23;
  v12 = a3;
  v13 = 0;
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v22 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C005BDC4(
      DeviceObject->DeviceExtension,
      0,
      v5,
      19,
      (__int64)&unk_1C00654F0,
      (__int64)L"usbhub\\uxd_control\\devices",
      (__int64)&v23);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const WCHAR *, void **))MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const WCHAR *, void **))RtlQueryRegistryValues;
  return SystemRoutineAddress(1LL, L"usbhub\\uxd_control\\devices", &v9);
}
