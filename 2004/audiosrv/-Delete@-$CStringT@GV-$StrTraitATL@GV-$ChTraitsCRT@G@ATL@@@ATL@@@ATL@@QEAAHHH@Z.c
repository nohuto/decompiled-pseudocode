/*
 * XREFs of ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x1800D3C28
 * Callers:
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800D5198 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180045124 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x18006B61E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x180074C5B (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??$AtlAddThrow@H@ATL@@YAHHH@Z @ 0x1800C6A84 (--$AtlAddThrow@H@ATL@@YAHHH@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x1800D3D28 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
        __int64 *a1,
        int a2)
{
  int v2; // r14d
  int v4; // esi
  int v5; // edi
  int v6; // ebp
  int v7; // esi
  __int64 Buffer; // rax
  void *v9; // rcx
  size_t v10; // r8

  v2 = 0;
  if ( a2 >= 0 )
    v2 = a2;
  v4 = *(_DWORD *)(*a1 - 16);
  v5 = v4 - v2;
  v6 = 1;
  if ( (int)ATL::AtlAddThrow<int>(1, v2) > v4 )
    v6 = v4 - v2;
  if ( v6 > 0 )
  {
    v7 = v4 - v6;
    Buffer = ATL::CSimpleStringT<unsigned short,0>::GetBuffer(a1);
    v9 = (void *)(Buffer + 2LL * v2);
    v10 = 2LL * (v5 - v6 + 1);
    if ( v10 )
    {
      if ( !v9 || !(Buffer + 2 * (v2 + (__int64)v6)) )
      {
        *(_DWORD *)_o__errno(v9) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove_0(v9, (const void *)(Buffer + 2 * (v2 + (__int64)v6)), v10);
    }
    ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v7);
  }
  return *(unsigned int *)(*a1 - 16);
}
