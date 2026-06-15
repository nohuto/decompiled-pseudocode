/*
 * XREFs of ?Lookup@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$shared_ptr@VDuckingDescriptor@@@std@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$shared_ptr@VDuckingDescriptor@@@std@@@2@@ATL@@QEBA?AV?$shared_ptr@VDuckingDescriptor@@@std@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x180024FD8
 * Callers:
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAUIDuckingController@@PEAH@Z @ 0x180024B50 (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAUIDuckingController@@PEA.c)
 *     ?TsSessionUpdateDuckingGainForId@@YAJKPEBGMPEA_N@Z @ 0x18002A1BC (-TsSessionUpdateDuckingGainForId@@YAJKPEBGMPEA_N@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001A074 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

_QWORD *__fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>>>::Lookup(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // r11
  int v4; // r9d
  __int64 v6; // rdi
  __int64 v7; // r10
  unsigned __int16 *v8; // rcx
  __int64 v9; // rbx
  int v10; // r8d
  int v11; // eax
  __int64 v13; // r8
  __int64 v14; // rcx

  v3 = *(int *)(a1 + 16);
  v4 = 0;
  if ( (int)v3 <= 0 )
  {
LABEL_9:
    v4 = -1;
  }
  else
  {
    v6 = *a3;
    v7 = 0LL;
    while ( 1 )
    {
      if ( !v6 )
        ATL::AtlThrowImpl(-2147467259);
      v8 = *(unsigned __int16 **)(*(_QWORD *)a1 + 8 * v7);
      v9 = v6 - (_QWORD)v8;
      do
      {
        v10 = *(unsigned __int16 *)((char *)v8 + v9);
        v11 = *v8 - v10;
        if ( v11 )
          break;
        ++v8;
      }
      while ( v10 );
      if ( !v11 )
        break;
      ++v4;
      if ( ++v7 >= v3 )
        goto LABEL_9;
    }
  }
  if ( v4 == -1 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    if ( v4 < 0 || v4 >= (int)v3 )
    {
      ATL::_AtlRaiseException();
      JUMPOUT(0x1800250B5LL);
    }
    v13 = *(_QWORD *)(a1 + 8);
    *a2 = 0LL;
    a2[1] = 0LL;
    v14 = *(_QWORD *)(v13 + 16LL * v4 + 8);
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      v14 = *(_QWORD *)(v13 + 16LL * v4 + 8);
    }
    *a2 = *(_QWORD *)(v13 + 16LL * v4);
    a2[1] = v14;
  }
  return a2;
}
