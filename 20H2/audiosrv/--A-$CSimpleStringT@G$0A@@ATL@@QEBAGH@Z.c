/*
 * XREFs of ??A?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800D2F68
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800D31E4 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800D4508 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::operator[](__int64 *a1, int a2)
{
  __int64 v2; // rcx

  if ( a2 < 0 || (v2 = *a1, a2 > *(_DWORD *)(v2 - 16)) )
    ATL::AtlThrowImpl(-2147024809);
  return *(unsigned __int16 *)(v2 + 2LL * a2);
}
