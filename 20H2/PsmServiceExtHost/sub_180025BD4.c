/*
 * XREFs of sub_180025BD4 @ 0x180025BD4
 * Callers:
 *     sub_1800235DC @ 0x1800235DC (sub_1800235DC.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180062720 @ 0x180062720 (sub_180062720.c)
 */

__int64 __fastcall sub_180025BD4(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64, __int64, __int64, _QWORD *); // rax
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // r9d
  __int64 v10; // rcx
  int v11; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v12; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v14[3]; // [rsp+50h] [rbp-30h] BYREF
  int v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]

  v2 = *(_QWORD *)(a1 + 48);
  memset(v14, 0, sizeof(v14));
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)(v2 + 40) + 8LL);
  v15 = a2;
  v16 = 16;
  v6 = v5(a1 + 552, *(unsigned int *)(a1 + 620), a1 + 88, 6LL, -1LL, v14);
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 )
  {
    v10 = qword_1800B31F8 & 1;
    if ( v10 == qword_1800B31F8 )
    {
      v13 = *(_QWORD *)(a1 + 32);
      v11 = a2;
      v12 = v6;
      sub_180062720(v10, (unsigned int)&unk_18009E9F4, v7, v8, (__int64)&v12, (__int64)&v13, (__int64)&v11);
    }
  }
  return v6;
}
