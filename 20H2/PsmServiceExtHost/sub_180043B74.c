/*
 * XREFs of sub_180043B74 @ 0x180043B74
 * Callers:
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 * Callees:
 *     sub_18002BF9C @ 0x18002BF9C (sub_18002BF9C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 */

__int64 __fastcall sub_180043B74(__int64 a1)
{
  unsigned int v2; // eax
  const void *v3; // rdx
  void *v4; // r9
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  _QWORD SystemInformation[6]; // [rsp+28h] [rbp-40h] BYREF

  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v2 = sub_18002BF9C(*(_DWORD *)a1);
  memcpy(v4, v3, v2);
  NtQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
  v5 = TpAllocTimer(a1 + 72, sub_180037630, a1, 0LL);
  if ( v5 >= 0 )
  {
    v6 = SystemInformation[0];
    v7 = SystemInformation[1];
    *(_QWORD *)(a1 + 64) = 30LL;
    if ( v7 < v6 + 300000000 )
      v8 = v7 - v6 - 300000000;
    else
      v8 = -1LL;
    v9 = *(_QWORD *)(a1 + 72);
    v11 = v8;
    TpSetTimer(v9, &v11, 0LL, 0LL);
  }
  return (unsigned int)v5;
}
