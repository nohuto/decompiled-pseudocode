/*
 * XREFs of sub_18004E954 @ 0x18004E954
 * Callers:
 *     sub_18004E750 @ 0x18004E750 (sub_18004E750.c)
 *     sub_1800E3940 @ 0x1800E3940 (sub_1800E3940.c)
 * Callees:
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004E954(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r10

  result = *(_QWORD *)(a1 + 40) >> 63;
  if ( *(__int64 *)(a1 + 40) < 0 )
  {
    result = sub_18006D208(2LL * *(_QWORD *)(a1 + 40) + 12);
    if ( !(_DWORD)result )
    {
      if ( v2 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
      if ( qword_18019E418 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
    }
  }
  return result;
}
