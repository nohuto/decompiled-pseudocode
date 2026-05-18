/*
 * XREFs of sub_180097958 @ 0x180097958
 * Callers:
 *     sub_180013950 @ 0x180013950 (sub_180013950.c)
 *     sub_1800EFBC0 @ 0x1800EFBC0 (sub_1800EFBC0.c)
 *     sub_1800FB73C @ 0x1800FB73C (sub_1800FB73C.c)
 *     sub_1800FBA20 @ 0x1800FBA20 (sub_1800FBA20.c)
 *     sub_180110790 @ 0x180110790 (sub_180110790.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180067F50 @ 0x180067F50 (sub_180067F50.c)
 *     sub_18006821C @ 0x18006821C (sub_18006821C.c)
 *     sub_1800972FC @ 0x1800972FC (sub_1800972FC.c)
 *     sub_180097618 @ 0x180097618 (sub_180097618.c)
 *     sub_180097A9C @ 0x180097A9C (sub_180097A9C.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180097958(__int64 a1, unsigned int a2)
{
  char result; // al
  char v5; // bp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  unsigned int v9; // eax
  _QWORD v10[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v11[5]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE pExceptionObject[88]; // [rsp+80h] [rbp-58h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000FE28(v11);
    v9 = (unsigned int)sub_18000FE28(v10);
    sub_1800D1210((unsigned int)pExceptionObject, v9, 430, (unsigned int)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  result = sub_18006821C(a1, 4, 1);
  if ( *(_QWORD *)(a1 + 144) )
  {
    v5 = a2 & (*(_QWORD *)(a1 + 160) == 0LL);
    result = (a2 >> 1) & (*(_QWORD *)(a1 + 192) == 0LL);
    if ( result && !*(_QWORD *)(a1 + 240) )
    {
      sub_18011BCAC(
        &unk_180213658,
        3LL,
        "Attempting to compute tangents for mesh without UV coordinates. Tangents will not be calculated.");
      result = 0;
    }
    if ( v5 )
    {
      if ( result )
      {
        v6 = sub_180067F50(a1);
        return sub_180097618((_DWORD *)a1, v6, (a2 & 4) != 0);
      }
      else
      {
        sub_180067F50(a1);
        return sub_1800972FC((_DWORD *)a1);
      }
    }
    else if ( result )
    {
      v7 = sub_180067F50(a1);
      LOBYTE(v8) = (a2 & 4) != 0;
      return sub_180097A9C(a1, v7, v8);
    }
  }
  return result;
}
