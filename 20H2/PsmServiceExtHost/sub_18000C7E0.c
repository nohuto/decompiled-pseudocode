/*
 * XREFs of sub_18000C7E0 @ 0x18000C7E0
 * Callers:
 *     sub_18000C860 @ 0x18000C860 (sub_18000C860.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180074A1C @ 0x180074A1C (sub_180074A1C.c)
 */

__int64 __fastcall sub_18000C7E0(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int v4; // r8d
  int v5; // r9d
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL)
                                                                                         + 120LL))(
         a1 + 552,
         *(unsigned int *)(a1 + 620),
         a1 + 88,
         *(unsigned int *)(a1 + 624),
         *(_QWORD *)(a1 + 32),
         *(_DWORD *)(a1 + 836) & 1,
         a2);
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    v8 = a1;
    v7 = v3;
    sub_180074A1C(
      (unsigned int)&dword_1800B31E0,
      (unsigned int)&unk_18009EDB2,
      v4,
      v5,
      (__int64)&v7,
      (__int64)&v9,
      (__int64)&v8);
  }
  return v3;
}
