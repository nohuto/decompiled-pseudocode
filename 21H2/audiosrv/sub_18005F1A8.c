/*
 * XREFs of sub_18005F1A8 @ 0x18005F1A8
 * Callers:
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 *     sub_180036510 @ 0x180036510 (sub_180036510.c)
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z @ 0x1800386EC (-getZName@UnDecorator@@CA-AVDName@@_N0@Z.c)
 *     sub_18005EF08 @ 0x18005EF08 (sub_18005EF08.c)
 *     Callback @ 0x18005F170 (Callback.c)
 *     sub_180072EE8 @ 0x180072EE8 (sub_180072EE8.c)
 *     sub_180073104 @ 0x180073104 (sub_180073104.c)
 *     sub_180073300 @ 0x180073300 (sub_180073300.c)
 *     sub_180135CA8 @ 0x180135CA8 (sub_180135CA8.c)
 *     sub_18013738C @ 0x18013738C (sub_18013738C.c)
 * Callees:
 *     sub_1801096D0 @ 0x1801096D0 (sub_1801096D0.c)
 *     sub_18010BCE0 @ 0x18010BCE0 (sub_18010BCE0.c)
 */

__int64 __fastcall sub_18005F1A8(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v4 = a1;
  if ( a3 )
  {
    if ( (unsigned int)dword_18019C4F0 > 2 )
    {
      v4 = a2;
      LODWORD(v5) = a3;
      return sub_1801096D0((int)&dword_18019C4F0, (__int64)&v4, (__int64)&v5);
    }
  }
  else if ( (unsigned int)dword_18019C4F0 > 5 )
  {
    v4 = a2;
    return sub_18010BCE0((int)&dword_18019C4F0, (__int64)&v4);
  }
  return result;
}
