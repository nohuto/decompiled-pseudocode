/*
 * XREFs of HalpHvUnmapDeviceInterrupt @ 0x1409A8264
 * Callers:
 *     HalpInterruptUnmap @ 0x1407619F8 (HalpInterruptUnmap.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpHvUnmapDeviceInterrupt(char a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // [rsp+20h] [rbp-28h]
  _DWORD v5[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5[1] = 0;
  v5[0] = 2;
  v4 = 0x8000000000000000uLL;
  LOBYTE(v4) = a1;
  v6 = *(_QWORD *)(a3 + 40);
  return ((__int64 (__fastcall *)(unsigned __int64, _DWORD *))qword_140C4A1F0)(v4, v5);
}
