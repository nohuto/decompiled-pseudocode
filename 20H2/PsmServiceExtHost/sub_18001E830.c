/*
 * XREFs of sub_18001E830 @ 0x18001E830
 * Callers:
 *     sub_180002B14 @ 0x180002B14 (sub_180002B14.c)
 *     sub_180002F50 @ 0x180002F50 (sub_180002F50.c)
 *     sub_18000375C @ 0x18000375C (sub_18000375C.c)
 *     sub_1800038AC @ 0x1800038AC (sub_1800038AC.c)
 *     sub_180004818 @ 0x180004818 (sub_180004818.c)
 *     sub_180007268 @ 0x180007268 (sub_180007268.c)
 *     sub_1800084E8 @ 0x1800084E8 (sub_1800084E8.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000D704 @ 0x18000D704 (sub_18000D704.c)
 *     sub_18000DC14 @ 0x18000DC14 (sub_18000DC14.c)
 *     sub_18000E3DC @ 0x18000E3DC (sub_18000E3DC.c)
 *     sub_18000E85C @ 0x18000E85C (sub_18000E85C.c)
 *     sub_18000FAA0 @ 0x18000FAA0 (sub_18000FAA0.c)
 *     sub_180012DB4 @ 0x180012DB4 (sub_180012DB4.c)
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_180021954 @ 0x180021954 (sub_180021954.c)
 *     sub_180025CDC @ 0x180025CDC (sub_180025CDC.c)
 *     sub_180025DF0 @ 0x180025DF0 (sub_180025DF0.c)
 *     sub_180027400 @ 0x180027400 (sub_180027400.c)
 *     sub_180027C9C @ 0x180027C9C (sub_180027C9C.c)
 *     sub_18002A3C4 @ 0x18002A3C4 (sub_18002A3C4.c)
 *     sub_180034568 @ 0x180034568 (sub_180034568.c)
 *     sub_1800347D0 @ 0x1800347D0 (sub_1800347D0.c)
 *     sub_180034EB8 @ 0x180034EB8 (sub_180034EB8.c)
 *     sub_1800351EC @ 0x1800351EC (sub_1800351EC.c)
 *     sub_180036EBC @ 0x180036EBC (sub_180036EBC.c)
 *     sub_180037D30 @ 0x180037D30 (sub_180037D30.c)
 *     sub_18003BB4C @ 0x18003BB4C (sub_18003BB4C.c)
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_18003D1D8 @ 0x18003D1D8 (sub_18003D1D8.c)
 *     sub_18007BEF8 @ 0x18007BEF8 (sub_18007BEF8.c)
 *     sub_18007ECDC @ 0x18007ECDC (sub_18007ECDC.c)
 *     sub_18007F5AC @ 0x18007F5AC (sub_18007F5AC.c)
 *     sub_18007FF78 @ 0x18007FF78 (sub_18007FF78.c)
 *     sub_180081090 @ 0x180081090 (sub_180081090.c)
 *     sub_180081624 @ 0x180081624 (sub_180081624.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001E830(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  _QWORD *Value; // rax

  v3 = a3;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( ((1LL << v3) & *Value) == 0 )
      __int2c();
    if ( Value[v3 + 1]-- == 1LL )
      *Value &= ~(1LL << v3);
  }
}
