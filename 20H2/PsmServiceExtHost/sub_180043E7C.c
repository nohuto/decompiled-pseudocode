/*
 * XREFs of sub_180043E7C @ 0x180043E7C
 * Callers:
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 * Callees:
 *     sub_18002B0F8 @ 0x18002B0F8 (sub_18002B0F8.c)
 *     sub_18002BF9C @ 0x18002BF9C (sub_18002BF9C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 */

NTSTATUS __fastcall sub_180043E7C(__int64 a1)
{
  _DWORD *v2; // rdx
  int v3; // ecx
  unsigned int v4; // eax
  const void *v5; // rdx
  void *v6; // r9
  NTSTATUS result; // eax
  _BYTE SystemInformation[64]; // [rsp+20h] [rbp-58h] BYREF

  v2 = (_DWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v3 = *(_DWORD *)a1;
  *v2 = 100;
  v4 = sub_18002BF9C(v3);
  memcpy(v6, v5, v4);
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    *(_BYTE *)(a1 + 96) = SystemInformation[56];
    result = TpAllocTimer(a1 + 88, sub_18002BA30, a1, 0LL);
    if ( result >= 0 )
      return sub_18002B0F8(a1 + 64, 8);
  }
  return result;
}
