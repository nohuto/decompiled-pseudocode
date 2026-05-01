/*
 * XREFs of sub_18000B084 @ 0x18000B084
 * Callers:
 *     sub_180002B44 @ 0x180002B44 (sub_180002B44.c)
 *     sub_1800038AC @ 0x1800038AC (sub_1800038AC.c)
 *     sub_180007FF8 @ 0x180007FF8 (sub_180007FF8.c)
 *     sub_18000803C @ 0x18000803C (sub_18000803C.c)
 *     sub_1800089AC @ 0x1800089AC (sub_1800089AC.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000A230 @ 0x18000A230 (sub_18000A230.c)
 *     sub_18000AE74 @ 0x18000AE74 (sub_18000AE74.c)
 *     sub_18000AF20 @ 0x18000AF20 (sub_18000AF20.c)
 *     sub_180034EEC @ 0x180034EEC (sub_180034EEC.c)
 *     sub_18003BB80 @ 0x18003BB80 (sub_18003BB80.c)
 *     sub_18003D210 @ 0x18003D210 (sub_18003D210.c)
 *     sub_18007BBD8 @ 0x18007BBD8 (sub_18007BBD8.c)
 *     sub_18007ECDC @ 0x18007ECDC (sub_18007ECDC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000B084(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  DWORD v4; // edi
  __int64 v6; // rsi
  _QWORD *Value; // rbx
  _QWORD *v8; // rax
  char v9; // cl

  v4 = dwTlsIndex;
  v6 = a3;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    v8 = TlsGetValue(v4);
    v9 = v6 + 1;
    if ( !a4 )
      v9 = v6;
    if ( (~((1LL << v9) - 1) & *v8) != 0 )
      __int2c();
    *Value |= 1LL << v6;
    ++Value[v6 + 1];
  }
}
