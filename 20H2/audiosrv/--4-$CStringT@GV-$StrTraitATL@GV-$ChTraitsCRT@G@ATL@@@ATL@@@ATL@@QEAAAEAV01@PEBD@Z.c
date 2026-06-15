/*
 * XREFs of ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z @ 0x1800C62AC
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBDPEAUIAtlStringMgr@1@@Z @ 0x1800C5FF8 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBDPEAUIAtlStringMgr@1@@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001B520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18002C23C (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180044A14 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

WCHAR **__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
        WCHAR **a1)
{
  int cchWideChar; // edi
  WCHAR *lpWideCharStr; // rdx

  cchWideChar = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
  if ( cchWideChar <= 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
  }
  else
  {
    lpWideCharStr = *a1;
    if ( ((*((_DWORD *)*a1 - 3) - cchWideChar) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)a1, cchWideChar);
      lpWideCharStr = *a1;
    }
    MultiByteToWideChar(3u, 0, MultiByteStr, -1, lpWideCharStr, cchWideChar);
    ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)a1, cchWideChar);
  }
  return a1;
}
