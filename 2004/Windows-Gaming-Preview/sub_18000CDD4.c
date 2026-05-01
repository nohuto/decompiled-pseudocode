/*
 * XREFs of sub_18000CDD4 @ 0x18000CDD4
 * Callers:
 *     sub_18000D370 @ 0x18000D370 (sub_18000D370.c)
 *     sub_18000F4B0 @ 0x18000F4B0 (sub_18000F4B0.c)
 *     sub_18000FDF0 @ 0x18000FDF0 (sub_18000FDF0.c)
 *     sub_180014440 @ 0x180014440 (sub_180014440.c)
 *     sub_1800144D0 @ 0x1800144D0 (sub_1800144D0.c)
 *     sub_18002E7E0 @ 0x18002E7E0 (sub_18002E7E0.c)
 *     sub_18002E880 @ 0x18002E880 (sub_18002E880.c)
 *     sub_18002F890 @ 0x18002F890 (sub_18002F890.c)
 *     sub_180034350 @ 0x180034350 (sub_180034350.c)
 *     sub_1800344B0 @ 0x1800344B0 (sub_1800344B0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000CDD4(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 < 0 )
  {
    v3 = (volatile signed __int32 *)(2 * v2);
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      if ( v3 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
      if ( qword_18005ADB0 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
    }
  }
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
