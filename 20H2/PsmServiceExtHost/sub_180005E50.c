/*
 * XREFs of sub_180005E50 @ 0x180005E50
 * Callers:
 *     sub_180005C38 @ 0x180005C38 (sub_180005C38.c)
 *     sub_18000C860 @ 0x18000C860 (sub_18000C860.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18006A72C @ 0x18006A72C (sub_18006A72C.c)
 */

__int64 __fastcall sub_180005E50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // rdi
  int v6; // ecx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = a1;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL);
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 1LL) )
  {
    v9 = *(_QWORD *)(v4 + 32);
    v8 = v4;
    sub_18006A72C(v6, (unsigned int)&unk_18009E8DE, a3, v4, (__int64)&v9, (__int64)&v8);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v5 + 128))(a2, a2, a3, v4);
}
