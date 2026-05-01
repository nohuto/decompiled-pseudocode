/*
 * XREFs of sub_180077D40 @ 0x180077D40
 * Callers:
 *     sub_18000DA20 @ 0x18000DA20 (sub_18000DA20.c)
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 *     sub_18007D3AC @ 0x18007D3AC (sub_18007D3AC.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180076CE4 @ 0x180076CE4 (sub_180076CE4.c)
 */

char __fastcall sub_180077D40(__int64 a1, char a2)
{
  void *v2; // rsi
  char result; // al
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  void *v12; // [rsp+78h] [rbp+20h] BYREF

  v2 = (void *)(a1 + 88);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, char))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL)
                                                                             + 64LL))(
             a1 + 552,
             *(unsigned int *)(a1 + 620),
             a1 + 88,
             *(_QWORD *)(a1 + 32),
             a2);
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B31E0, 9LL);
    if ( result )
    {
      v11 = *(_QWORD *)(a1 + 32);
      v12 = v2;
      v10 = a2;
      v9 = v7;
      return sub_180076CE4(v11, byte_18009EDEC, v6, v7, (__int64)&v9, (__int64)&v10, &v12, (__int64)&v11);
    }
  }
  return result;
}
