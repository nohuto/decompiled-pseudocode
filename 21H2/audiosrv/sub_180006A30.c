/*
 * XREFs of sub_180006A30 @ 0x180006A30
 * Callers:
 *     sub_180001FB0 @ 0x180001FB0 (sub_180001FB0.c)
 *     sub_180002004 @ 0x180002004 (sub_180002004.c)
 *     sub_180002FD4 @ 0x180002FD4 (sub_180002FD4.c)
 *     sub_180003D20 @ 0x180003D20 (sub_180003D20.c)
 *     sub_18000543C @ 0x18000543C (sub_18000543C.c)
 *     sub_1800055B0 @ 0x1800055B0 (sub_1800055B0.c)
 *     sub_180005BE4 @ 0x180005BE4 (sub_180005BE4.c)
 *     sub_180006008 @ 0x180006008 (sub_180006008.c)
 *     sub_180006430 @ 0x180006430 (sub_180006430.c)
 *     sub_1800064D0 @ 0x1800064D0 (sub_1800064D0.c)
 *     sub_180006524 @ 0x180006524 (sub_180006524.c)
 *     sub_180006FA0 @ 0x180006FA0 (sub_180006FA0.c)
 *     sub_18000DF70 @ 0x18000DF70 (sub_18000DF70.c)
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 *     sub_18001C620 @ 0x18001C620 (sub_18001C620.c)
 *     sub_18002B430 @ 0x18002B430 (sub_18002B430.c)
 *     sub_18002C26C @ 0x18002C26C (sub_18002C26C.c)
 *     sub_18004FD90 @ 0x18004FD90 (sub_18004FD90.c)
 *     sub_180051BBC @ 0x180051BBC (sub_180051BBC.c)
 *     sub_18009C86B @ 0x18009C86B (sub_18009C86B.c)
 *     sub_18009C938 @ 0x18009C938 (sub_18009C938.c)
 *     sub_1800B7A3C @ 0x1800B7A3C (sub_1800B7A3C.c)
 *     sub_1800B7D40 @ 0x1800B7D40 (sub_1800B7D40.c)
 *     sub_1800B82B0 @ 0x1800B82B0 (sub_1800B82B0.c)
 *     sub_1800B8300 @ 0x1800B8300 (sub_1800B8300.c)
 *     sub_1800C6588 @ 0x1800C6588 (sub_1800C6588.c)
 *     sub_1800C7DB0 @ 0x1800C7DB0 (sub_1800C7DB0.c)
 *     sub_1800C7E70 @ 0x1800C7E70 (sub_1800C7E70.c)
 *     sub_1800C8320 @ 0x1800C8320 (sub_1800C8320.c)
 *     sub_1800C99E4 @ 0x1800C99E4 (sub_1800C99E4.c)
 *     sub_1800CDBA8 @ 0x1800CDBA8 (sub_1800CDBA8.c)
 *     sub_1800CF240 @ 0x1800CF240 (sub_1800CF240.c)
 *     sub_1800D3024 @ 0x1800D3024 (sub_1800D3024.c)
 *     sub_1800D32F4 @ 0x1800D32F4 (sub_1800D32F4.c)
 *     sub_1800D38A0 @ 0x1800D38A0 (sub_1800D38A0.c)
 *     sub_1800D3CD4 @ 0x1800D3CD4 (sub_1800D3CD4.c)
 *     sub_1800D407C @ 0x1800D407C (sub_1800D407C.c)
 *     sub_1800D4504 @ 0x1800D4504 (sub_1800D4504.c)
 *     sub_1800DAA74 @ 0x1800DAA74 (sub_1800DAA74.c)
 *     sub_1800FA07C @ 0x1800FA07C (sub_1800FA07C.c)
 *     sub_1800FA0E0 @ 0x1800FA0E0 (sub_1800FA0E0.c)
 *     sub_1800FA128 @ 0x1800FA128 (sub_1800FA128.c)
 *     sub_180112B7C @ 0x180112B7C (sub_180112B7C.c)
 *     sub_18011B7C0 @ 0x18011B7C0 (sub_18011B7C0.c)
 *     sub_180139610 @ 0x180139610 (sub_180139610.c)
 *     sub_18013D1E0 @ 0x18013D1E0 (sub_18013D1E0.c)
 *     sub_18013D230 @ 0x18013D230 (sub_18013D230.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180006A30(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax
  bool v2; // cc
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF);
  v2 = v1 <= 1;
  result = (unsigned int)(v1 - 1);
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)a1 + 8LL))(*(_QWORD *)a1, a1);
  return result;
}
