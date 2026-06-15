/*
 * XREFs of ?ConvertToBaseType@?$ChTraitsCRT@G@ATL@@SAXPEAGHPEBGH@Z @ 0x1800C757C
 * Callers:
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800C9950 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 * Callees:
 *     _o_wmemcpy_s_0 @ 0x18006B584 (_o_wmemcpy_s_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

errno_t __fastcall ATL::ChTraitsCRT<unsigned short>::ConvertToBaseType(wchar_t *a1, int a2, const wchar_t *a3, int a4)
{
  __int64 v4; // rax
  int v5; // r10d
  errno_t result; // eax

  v4 = -1LL;
  v5 = a4;
  if ( a4 == -1 )
  {
    do
      ++v4;
    while ( a3[v4] );
    v5 = v4 + 1;
  }
  result = o_wmemcpy_s_0(a1, a2, a3, v5);
  if ( result )
  {
    if ( result == 12 )
      ATL::AtlThrowImpl(-2147024882);
    if ( result == 22 || result == 34 )
      ATL::AtlThrowImpl(-2147024809);
    if ( result != 80 )
      ATL::AtlThrowImpl(-2147467259);
  }
  return result;
}
