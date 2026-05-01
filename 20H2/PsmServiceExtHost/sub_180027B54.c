/*
 * XREFs of sub_180027B54 @ 0x180027B54
 * Callers:
 *     sub_18000DA20 @ 0x18000DA20 (sub_18000DA20.c)
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 * Callees:
 *     sub_1800030B4 @ 0x1800030B4 (sub_1800030B4.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180085678 @ 0x180085678 (sub_180085678.c)
 */

__int64 __fastcall sub_180027B54(__int64 a1, int a2)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  bool v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF

  v9 = a2 != 0;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, bool))(*(_QWORD *)(*(_QWORD *)(a1 + 48)
                                                                                             + 40LL)
                                                                                 + 56LL))(
         a1 + 552,
         *(unsigned int *)(a1 + 620),
         a1 + 88,
         *(unsigned int *)(a1 + 624),
         *(_QWORD *)(a1 + 32),
         v9);
  v7 = v4;
  if ( *(_DWORD *)(a1 + 624) != 8 && v4 < 0 )
    sub_180085678();
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    v11 = a2;
    sub_1800030B4((int)&dword_1800B3218, (int)&unk_18009EA94, v5, v6, (__int64)&v10, (__int64)&v11);
  }
  if ( v7 >= 0 )
    return 0;
  return (unsigned int)v7;
}
