/*
 * XREFs of ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x180139690
 * Callers:
 *     ?Lookup@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBA_NPEBGAEAW4RmResourceType@@@Z @ 0x180139B34 (-Lookup@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceTyp.c)
 *     ?SetAt@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEAAPEAU__POSITION@@PEBGAEBW4RmResourceType@@@Z @ 0x18013A330 (-SetAt@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType.c)
 * Callees:
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x180007EB0 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 */

unsigned __int16 *__fastcall ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::GetNode(
        __int64 a1,
        unsigned __int16 *a2,
        int *a3,
        unsigned int *a4,
        unsigned __int16 **a5)
{
  unsigned int v9; // eax
  unsigned __int16 *v10; // r10
  unsigned __int16 *result; // rax
  unsigned __int16 *v12; // rcx
  int v13; // r9d
  int v14; // edx

  v9 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(a2);
  *a4 = v9;
  *a3 = v9 % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v10 = 0LL;
  *a5 = 0LL;
  result = *(unsigned __int16 **)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3);
  if ( !result )
    return 0LL;
  while ( 1 )
  {
    if ( *((_DWORD *)result + 6) == *a4 )
    {
      v12 = *(unsigned __int16 **)result;
      do
      {
        v13 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v12 - *(_QWORD *)result);
        v14 = *v12 - v13;
        if ( v14 )
          break;
        ++v12;
      }
      while ( v13 );
      if ( !v14 )
        break;
    }
    v10 = result;
    result = (unsigned __int16 *)*((_QWORD *)result + 2);
    if ( !result )
      return 0LL;
  }
  *a5 = v10;
  return result;
}
