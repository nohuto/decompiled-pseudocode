/*
 * XREFs of sub_180070C2C @ 0x180070C2C
 * Callers:
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 * Callees:
 *     sub_1800030B4 @ 0x1800030B4 (sub_1800030B4.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 */

__int64 __fastcall sub_180070C2C(__int64 a1, int a2)
{
  int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 1320) = a2;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 16)) <= 1 )
    __fastfail(0xEu);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v7 = *(_QWORD *)(a1 + 32);
    v8 = v5;
    sub_1800030B4(v3, (int)&unk_18009CFDE, v4, v5, (__int64)&v7, (__int64)&v8);
  }
  return TpPostWork(*(_QWORD *)(a1 + 1296));
}
