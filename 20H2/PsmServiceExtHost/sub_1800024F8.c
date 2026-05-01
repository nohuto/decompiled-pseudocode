/*
 * XREFs of sub_1800024F8 @ 0x1800024F8
 * Callers:
 *     sub_18000220C @ 0x18000220C (sub_18000220C.c)
 *     sub_180016100 @ 0x180016100 (sub_180016100.c)
 *     sub_180073544 @ 0x180073544 (sub_180073544.c)
 * Callees:
 *     sub_1800025C8 @ 0x1800025C8 (sub_1800025C8.c)
 *     sub_180002618 @ 0x180002618 (sub_180002618.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800024F8(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        _BYTE *a7,
        _BYTE *a8,
        __int64 a9)
{
  __int64 result; // rax
  char v14; // bl
  _BYTE *v15; // rax
  char v16; // [rsp+40h] [rbp-18h] BYREF
  _BYTE v17[23]; // [rsp+41h] [rbp-17h] BYREF

  result = sub_180002618(a1, a2, a3, a4, 1, (__int64)v17, (__int64)&v16, a9);
  if ( (int)result >= 0 )
  {
    if ( v16 || a6 == 1 && (sub_180002618(a1, a2, a3, a4, 0, (__int64)v17, (__int64)&v16, 0LL), v16) )
    {
      v14 = v17[0];
      if ( !v17[0]
        && ((*(int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2, a3) < 0
         || (unsigned __int8)sub_1800025C8(a1, a2, a3, a5)) )
      {
        v14 = 1;
      }
      *a8 = 1;
      v15 = a7;
      if ( v14 )
      {
        *a7 = 1;
        return 0LL;
      }
    }
    else
    {
      *a8 = 0;
      v15 = a7;
    }
    *v15 = 0;
    return 0LL;
  }
  return result;
}
