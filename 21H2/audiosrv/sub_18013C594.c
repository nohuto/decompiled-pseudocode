/*
 * XREFs of sub_18013C594 @ 0x18013C594
 * Callers:
 *     sub_18013C520 @ 0x18013C520 (sub_18013C520.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013C688 @ 0x18013C688 (sub_18013C688.c)
 */

__int64 __fastcall sub_18013C594(_QWORD *a1, int a2)
{
  int v2; // edi
  int v5; // ecx
  unsigned int v7; // [rsp+30h] [rbp-68h] BYREF
  _DWORD v8[3]; // [rsp+34h] [rbp-64h] BYREF
  _BYTE v9[64]; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0;
  memset(v9, 0, sizeof(v9));
  while ( 1 )
  {
    v7 = 64;
    sub_18013C688(v5, a2, (unsigned int)v9, (unsigned int)&v7, (__int64)v8);
    if ( !v7 )
      break;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD, _QWORD))(*(_QWORD *)*a1 + 32LL))(*a1, v9, v7, 0LL);
    if ( v2 < 0 )
      break;
    v5 = v8[0];
    a2 += 2 * v8[0];
  }
  return (unsigned int)v2;
}
