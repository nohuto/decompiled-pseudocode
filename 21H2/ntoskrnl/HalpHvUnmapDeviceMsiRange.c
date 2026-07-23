/*
 * XREFs of HalpHvUnmapDeviceMsiRange @ 0x1409A82D0
 * Callers:
 *     HalpInterruptUnmap @ 0x1407619F8 (HalpInterruptUnmap.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpHvBuildDeviceId @ 0x1409A7FF8 (HalpHvBuildDeviceId.c)
 */

__int64 __fastcall HalpHvUnmapDeviceMsiRange(__int64 a1, __int64 a2, int *a3, char a4)
{
  __int64 v4; // r11
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF

  v7 = 0LL;
  HalpHvBuildDeviceId(a1, a3, a4, (__int64)&v7);
  v5 = *(_DWORD *)(v4 + 48);
  v8[1] = 0;
  v8[2] = v5;
  v8[3] = *(unsigned __int16 *)(v4 + 52);
  v8[0] = 1;
  return ((__int64 (__fastcall *)(__int64, _DWORD *))qword_140C4A1F0)(v7, v8);
}
