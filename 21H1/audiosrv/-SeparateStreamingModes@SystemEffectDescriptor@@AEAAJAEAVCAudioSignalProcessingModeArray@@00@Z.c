/*
 * XREFs of ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x180029824
 * Callers:
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180029574 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18005A058 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180027A48 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBC68 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::SeparateStreamingModes(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        struct CAudioSignalProcessingModeArray *a3,
        struct CAudioSignalProcessingModeArray *a4)
{
  int v4; // eax
  signed int v5; // ebx
  signed int v10; // r8d
  __int64 i; // rbp
  __int64 *v12; // rdx
  int v13; // r10d
  int v14; // ecx
  __int64 v15; // r15
  __int64 v16; // r8
  __int64 v17; // r11
  int v18; // eax
  int v19; // esi
  __int64 v20; // rax
  _OWORD *v21; // rcx
  _OWORD *v23; // rax
  __int64 v24; // rdx
  int v25; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *((_DWORD *)a2 + 2);
  v5 = 0;
  if ( v4 <= 0 )
    return 0LL;
  v10 = *((_DWORD *)a2 + 2);
  for ( i = 0LL; ; i += 16LL )
  {
    v12 = (__int64 *)*((_QWORD *)this + 2);
    if ( v12 )
    {
      if ( v5 < 0 || v5 >= v10 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v12);
        JUMPOUT(0x18009043ELL);
      }
      v13 = *((_DWORD *)v12 + 2);
      v14 = 0;
      v15 = *(_QWORD *)a2;
      v16 = 16LL * v5;
      if ( v13 <= 0 )
      {
LABEL_24:
        v14 = -1;
      }
      else
      {
        v17 = *v12;
        while ( 1 )
        {
          v12 = (__int64 *)(*(_QWORD *)(v17 + 16LL * v14) - *(_QWORD *)(v16 + v15));
          if ( !v12 )
            v12 = (__int64 *)(*(_QWORD *)(v17 + 16LL * v14 + 8) - *(_QWORD *)(v16 + v15 + 8));
          if ( !v12 )
            break;
          if ( ++v14 >= v13 )
            goto LABEL_24;
        }
      }
      if ( v14 != -1 )
        break;
    }
    v23 = (_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)a2, v5);
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)a4, v23) )
    {
      v24 = 257LL;
      goto LABEL_31;
    }
LABEL_22:
    v4 = *((_DWORD *)a2 + 2);
    ++v5;
    v10 = v4;
    if ( v5 >= v4 )
      return 0LL;
  }
  if ( v5 >= v4 )
  {
    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v12);
    __debugbreak();
  }
  v18 = *((_DWORD *)a3 + 2);
  if ( v18 != *((_DWORD *)a3 + 3) )
  {
LABEL_19:
    v21 = (_OWORD *)(*(_QWORD *)a3 + 16LL * v18);
    if ( v21 )
    {
      *v21 = *(_OWORD *)(v15 + i);
      v18 = *((_DWORD *)a3 + 2);
    }
    *((_DWORD *)a3 + 2) = v18 + 1;
    goto LABEL_22;
  }
  if ( *((_DWORD *)a3 + 3) )
  {
    v19 = 2 * v18;
    if ( (v18 & 0x40000000) != 0 )
      goto LABEL_30;
  }
  else
  {
    v19 = 1;
  }
  if ( (unsigned __int64)v19 <= 0x7FFFFFF )
  {
    v20 = _o__recalloc(*(_QWORD *)a3, v19, 16LL);
    if ( v20 )
    {
      *(_QWORD *)a3 = v20;
      v18 = *((_DWORD *)a3 + 2);
      *((_DWORD *)a3 + 3) = v19;
      goto LABEL_19;
    }
  }
LABEL_30:
  v24 = 252LL;
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v25);
  return 2147942414LL;
}
