/*
 * XREFs of ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x180028D7C
 * Callers:
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180028EF4 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800599B8 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800273C8 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180067D8C (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BB0C8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::CreateOverrideChainLists(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r10
  unsigned int v11; // edi
  int v12; // esi
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // r15
  int v16; // edi
  __int64 v17; // rax
  _OWORD *v18; // rcx
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    if ( !a4 )
    {
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(a6, v6 + 40);
      v6 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(a6 + 8) != *(_DWORD *)(v6 + 48) )
      {
        v20 = 277LL;
        goto LABEL_29;
      }
    }
  }
  v11 = 0;
  if ( a2 )
  {
    while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            a5,
                            (_OWORD *)(a3 + 16LL * v11)) )
    {
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            a6,
                            (_OWORD *)(a3 + 16LL * v11)) )
      {
        v20 = 283LL;
        goto LABEL_29;
      }
      if ( ++v11 >= a2 )
      {
        v6 = *(_QWORD *)(a1 + 16);
        goto LABEL_4;
      }
    }
    v20 = 282LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v21);
    return 2147942414LL;
  }
  else
  {
LABEL_4:
    if ( v6 )
    {
      if ( a4 == 1 )
      {
        v12 = 0;
        if ( *(int *)(v6 + 48) > 0 )
        {
          v13 = 0LL;
          do
          {
            if ( v13 < 0 || v12 >= *(_DWORD *)(v6 + 48) )
            {
              ATL::_AtlRaiseException(0xC000008C, a2);
              __debugbreak();
            }
            v14 = *(_DWORD *)(a6 + 8);
            v15 = *(_QWORD *)(v6 + 40);
            if ( v14 == *(_DWORD *)(a6 + 12) )
            {
              if ( *(_DWORD *)(a6 + 12) )
              {
                v16 = 2 * v14;
                if ( (v14 & 0x40000000) != 0 )
                  goto LABEL_28;
              }
              else
              {
                v16 = 1;
              }
              if ( (unsigned __int64)v16 > 0x7FFFFFF || (v17 = _o__recalloc(*(_QWORD *)a6, v16, 16LL)) == 0 )
              {
LABEL_28:
                v20 = 291LL;
                goto LABEL_29;
              }
              *(_QWORD *)a6 = v17;
              v14 = *(_DWORD *)(a6 + 8);
              *(_DWORD *)(a6 + 12) = v16;
            }
            v18 = (_OWORD *)(*(_QWORD *)a6 + 16LL * v14);
            if ( v18 )
            {
              *v18 = *(_OWORD *)(v15 + v13);
              v14 = *(_DWORD *)(a6 + 8);
            }
            ++v12;
            *(_DWORD *)(a6 + 8) = v14 + 1;
            v13 += 16LL;
            v6 = *(_QWORD *)(a1 + 16);
          }
          while ( v12 < *(_DWORD *)(v6 + 48) );
        }
      }
    }
    return 0LL;
  }
}
