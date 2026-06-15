/*
 * XREFs of ?CopyResourceIDMap@CConstraintModel@@AEAAJPEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@0@Z @ 0x180139DE0
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180066F30 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18013A5BC (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmR.c)
 *     ?SetAt@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEAAPEAU__POSITION@@PEBGAEBW4RmResourceType@@@Z @ 0x18013AFC0 (-SetAt@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType.c)
 */

__int64 __fastcall CConstraintModel::CopyResourceIDMap(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  int v5; // edi
  __int64 i; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h]
  __int64 v14; // [rsp+70h] [rbp+18h]
  __int64 v15; // [rsp+78h] [rbp+20h]

  v14 = a3;
  v13 = a2;
  v12 = a1;
  v3 = a3;
  v4 = a2;
  v5 = 0;
  for ( i = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::GetStartPosition(a2);
        ;
        i = v7 )
  {
    v15 = i;
    if ( !i || v5 < 0 )
      break;
    try
    {
      LODWORD(v12) = *(_DWORD *)(i + 8);
      v5 = 0;
      ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::SetAt(
        v3,
        *(_QWORD *)i,
        &v12);
    }
    catch ( ATL::CAtlException *v11 )
    {
      v10 = v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v12) = *(_DWORD *)v10;
      v3 = v14;
      v4 = v13;
      v5 = v12;
      i = v15;
    }
    v7 = *(_QWORD *)(i + 16);
    if ( !v7 )
    {
      v8 = (unsigned int)(*(_DWORD *)(i + 24) % *(_DWORD *)(v4 + 16) + 1);
      do
      {
        if ( (unsigned int)v8 >= *(_DWORD *)(v4 + 16) )
          break;
        if ( *(_QWORD *)(*(_QWORD *)v4 + 8 * v8) )
          v7 = *(_QWORD *)(*(_QWORD *)v4 + 8 * v8);
        v8 = (unsigned int)(v8 + 1);
      }
      while ( !v7 );
    }
  }
  return (unsigned int)v5;
}
