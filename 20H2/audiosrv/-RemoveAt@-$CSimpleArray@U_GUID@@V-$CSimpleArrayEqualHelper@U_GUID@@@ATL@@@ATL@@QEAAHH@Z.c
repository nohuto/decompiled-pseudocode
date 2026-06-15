/*
 * XREFs of ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x18011E9BC
 * Callers:
 *     ?RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArray@@@Z @ 0x18005A464 (-RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArra.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180067D8C (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18011E8E8 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18006ACBE (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18007419B (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(__int64 a1, int a2)
{
  __int64 v2; // r9
  int v4; // r8d
  int v5; // edx
  __int64 v6; // rcx
  unsigned __int64 v7; // r10

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 8);
  if ( a2 >= v4 )
    return 0LL;
  if ( a2 != v4 - 1 )
  {
    v5 = v4 - a2;
    v6 = *(_QWORD *)a1 + 16 * v2;
    v7 = 16LL * (v5 - 1);
    if ( v7 )
    {
      if ( !v6 || v6 == -16 )
      {
        *(_DWORD *)_o__errno(v6) = 22;
        goto LABEL_10;
      }
      if ( 16LL * v5 < v7 )
      {
        *(_DWORD *)_o__errno(v6) = 34;
LABEL_10:
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove_0((void *)v6, (const void *)(v6 + 16), 16LL * (v5 - 1));
      v4 = *(_DWORD *)(a1 + 8);
    }
  }
  *(_DWORD *)(a1 + 8) = v4 - 1;
  return 1LL;
}
