/*
 * XREFs of ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18002797C
 * Callers:
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800211E4 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x180027910 (-GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x18011E100 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180023530 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180023740 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180027A48 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800685BC (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBC68 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetSupportedProcessingModes(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdx
  signed int i; // edi
  __int64 *v7; // rax
  int v8; // edi
  __int64 v9; // r10
  int v10; // ecx
  __int64 v11; // r9
  __int64 v13; // rdx
  signed int j; // ebp
  __int64 *v15; // rax
  _QWORD *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // r8
  int v20; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)a1);
    for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
    {
      for ( j = 0;
            j < *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                         a1 + 32,
                                         i)
                          + 8LL);
            ++j )
      {
        v15 = (__int64 *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a1 + 32, i);
        v16 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v15, j);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)a2, v16) == -1 )
        {
          v17 = (__int64 *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a1 + 32, i);
          v18 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v17, j);
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a2, v18) )
          {
            v13 = 584LL;
            goto LABEL_18;
          }
        }
      }
    }
    v7 = *(__int64 **)(a1 + 16);
    if ( v7 )
    {
      v8 = 0;
      if ( *((int *)v7 + 2) > 0 )
      {
        while ( 1 )
        {
          if ( v8 < 0 || v8 >= *((_DWORD *)v7 + 2) )
          {
            ATL::_AtlRaiseException(0xC000008C, v5);
            __debugbreak();
          }
          v9 = *v7;
          v10 = 0;
          v11 = 16LL * v8;
          if ( *(int *)(a2 + 8) > 0 )
          {
            while ( 1 )
            {
              v19 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v10);
              v5 = *v19 - *(_QWORD *)(v11 + v9);
              if ( *v19 == *(_QWORD *)(v11 + v9) )
                v5 = v19[1] - *(_QWORD *)(v11 + v9 + 8);
              if ( !v5 )
                break;
              if ( ++v10 >= *(_DWORD *)(a2 + 8) )
                goto LABEL_9;
            }
          }
          else
          {
LABEL_9:
            v10 = -1;
          }
          if ( v10 == -1 )
          {
            if ( v8 >= *((_DWORD *)v7 + 2) )
            {
              ATL::_AtlRaiseException(0xC000008C, v5);
              __debugbreak();
            }
            if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a2, v11 + *v7) )
              break;
          }
          v7 = *(__int64 **)(a1 + 16);
          if ( ++v8 >= *((_DWORD *)v7 + 2) )
            return 0LL;
        }
        v13 = 596LL;
        goto LABEL_18;
      }
    }
    return 0LL;
  }
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(a2, a1);
  if ( *(_DWORD *)(a2 + 8) == *(_DWORD *)(a1 + 8) )
    return 0LL;
  v13 = 570LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v20);
  return 2147942414LL;
}
