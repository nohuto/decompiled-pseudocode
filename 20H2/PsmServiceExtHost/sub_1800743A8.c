/*
 * XREFs of sub_1800743A8 @ 0x1800743A8
 * Callers:
 *     sub_180074464 @ 0x180074464 (sub_180074464.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002C1F8 @ 0x18002C1F8 (sub_18002C1F8.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

void __fastcall sub_1800743A8(__int64 a1)
{
  __int64 v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 44) |= 1u;
  if ( (*(_BYTE *)(a1 + 44) & 2) == 0 )
  {
    if ( sub_18002C1F8((_QWORD *)(a1 + 16)) >= 0 )
      RtlQueryUnbiasedInterruptTime(a1 + 24);
    *(_DWORD *)(a1 + 44) |= 2u;
    TpSetTimer(*(_QWORD *)a1, a1 + 8, 0LL, *(unsigned int *)(a1 + 40));
  }
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      sub_18002E278(v2, (unsigned __int8 *)dword_18009DB09, 0LL, 0LL, 2u, &v3);
  }
}
