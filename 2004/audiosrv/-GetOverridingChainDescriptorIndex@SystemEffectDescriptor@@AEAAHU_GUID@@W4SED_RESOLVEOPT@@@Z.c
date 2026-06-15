/*
 * XREFs of ?GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x180023430
 * Callers:
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x180021560 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x1800232E0 (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x1800233B0 (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180023530 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180052E20 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBD58 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectDescriptor::GetOverridingChainDescriptorIndex(__int64 a1, _QWORD *a2, int a3)
{
  int v5; // edi
  unsigned int v6; // ecx
  __int64 v8; // r14
  __int64 i; // rdx
  __int64 *v10; // r8
  int v11; // eax
  int v12; // r9d
  __int64 v13; // r11
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rax
  volatile signed __int32 *v17; // rdi

  if ( !a3 )
  {
    v5 = 0;
    if ( *(int *)(a1 + 40) > 0 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( v5 < 0 || v5 >= *(_DWORD *)(a1 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
          __debugbreak();
        }
        if ( *(_BYTE *)(*(_QWORD *)(v8 + *(_QWORD *)(a1 + 32)) + 20LL) )
        {
          v15 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                            a1 + 32,
                            (unsigned int)v5);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v15, a2) != -1 )
            break;
        }
        ++v5;
        v8 += 16LL;
        if ( v5 >= *(_DWORD *)(a1 + 40) )
          goto LABEL_3;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
      v16 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a1 + 32, (unsigned int)v5);
      v17 = *(volatile signed __int32 **)(v16 + 8);
      if ( v17 )
      {
        _InterlockedIncrement(v17 + 2);
        v17 = *(volatile signed __int32 **)(v16 + 8);
      }
      if ( (int)SystemEffectChainDescriptor::Resolve(
                  *(SystemEffectChainDescriptor **)v16,
                  (struct SystemEffectDescriptor *)a1) < 0 )
      {
        if ( v17 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v17);
        if ( a1 != -56 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
        return 0xFFFFFFFFLL;
      }
      if ( v17 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v17);
      if ( a1 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    }
  }
LABEL_3:
  v6 = 0;
  if ( *(int *)(a1 + 40) <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = 0LL; ; i += 16LL )
  {
    if ( i < 0 || (signed int)v6 >= *(_DWORD *)(a1 + 40) )
    {
      ATL::_AtlRaiseException(0xC000008C, i);
      __debugbreak();
    }
    v10 = *(__int64 **)(i + *(_QWORD *)(a1 + 32));
    v11 = 0;
    v12 = *((_DWORD *)v10 + 2);
    if ( v12 > 0 )
    {
      v13 = *v10;
      while ( 1 )
      {
        v14 = *(_QWORD *)(v13 + 16LL * v11) - *a2;
        if ( !v14 )
          v14 = *(_QWORD *)(v13 + 16LL * v11 + 8) - a2[1];
        if ( !v14 )
          break;
        if ( ++v11 >= v12 )
          goto LABEL_24;
      }
      if ( v11 != -1 )
        break;
    }
LABEL_24:
    if ( (signed int)++v6 >= *(_DWORD *)(a1 + 40) )
      return 0xFFFFFFFFLL;
  }
  return v6;
}
