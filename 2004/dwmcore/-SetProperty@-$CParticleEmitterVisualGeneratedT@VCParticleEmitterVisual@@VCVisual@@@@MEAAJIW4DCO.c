/*
 * XREFs of ?SetProperty@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801E2250
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18003F9D0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?OnEmitterTimeChanged@CParticleEmitterVisual@@QEAAXXZ @ 0x180171610 (-OnEmitterTimeChanged@CParticleEmitterVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetProperty(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  if ( a3 != 18 )
  {
    if ( a3 != 52 )
    {
      v4 = CVisual::SetProperty((float *)a1, a2, a3, a4);
      v6 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1EDAu, 0LL);
      return v6;
    }
    switch ( a2 )
    {
      case 'B':
        *(_QWORD *)(a1 + 660) = *(_QWORD *)a4;
        *(_DWORD *)(a1 + 668) = *(_DWORD *)(a4 + 8);
        break;
      case 'E':
        *(_QWORD *)(a1 + 680) = *(_QWORD *)a4;
        *(_DWORD *)(a1 + 688) = *(_DWORD *)(a4 + 8);
        break;
      case 'G':
        *(_QWORD *)(a1 + 696) = *(_QWORD *)a4;
        *(_DWORD *)(a1 + 704) = *(_DWORD *)(a4 + 8);
        break;
      default:
        v7 = CVisual::SetProperty((float *)a1, a2, 52, a4);
        v6 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1ED5u, 0LL);
        return v6;
    }
    goto LABEL_47;
  }
  if ( a2 > 0x3E )
  {
    switch ( a2 )
    {
      case '?':
        if ( *(float *)a4 != *(float *)(a1 + 648) )
        {
          *(_DWORD *)(a1 + 648) = *(_DWORD *)a4;
          goto LABEL_47;
        }
        return 0;
      case '@':
        if ( *(float *)a4 != *(float *)(a1 + 652) )
        {
          *(_DWORD *)(a1 + 652) = *(_DWORD *)a4;
          goto LABEL_47;
        }
        return 0;
      case 'C':
        if ( *(float *)a4 != *(float *)(a1 + 672) )
        {
          *(_DWORD *)(a1 + 672) = *(_DWORD *)a4;
          goto LABEL_47;
        }
        return 0;
      case 'D':
        if ( *(float *)a4 != *(float *)(a1 + 676) )
        {
          *(_DWORD *)(a1 + 676) = *(_DWORD *)a4;
          goto LABEL_47;
        }
        return 0;
    }
  }
  else
  {
    switch ( a2 )
    {
      case '>':
        if ( *(float *)a4 != *(float *)(a1 + 644) )
        {
          *(_DWORD *)(a1 + 644) = *(_DWORD *)a4;
          goto LABEL_47;
        }
        return 0;
      case '4':
        if ( *(float *)a4 != *(float *)(a1 + 616) )
        {
          *(_DWORD *)(a1 + 616) = *(_DWORD *)a4;
          CParticleEmitterVisual::OnEmitterTimeChanged((CParticleEmitterVisual *)a1);
        }
        return 0;
      case '5':
        if ( *(float *)a4 != *(float *)(a1 + 620) )
        {
          *(_DWORD *)(a1 + 620) = *(_DWORD *)a4;
          goto LABEL_47;
        }
        return 0;
      case '6':
        if ( *(float *)a4 != *(float *)(a1 + 624) )
        {
          *(_DWORD *)(a1 + 624) = *(_DWORD *)a4;
          goto LABEL_47;
        }
        return 0;
      case ';':
        if ( *(float *)a4 != *(float *)(a1 + 636) )
        {
          *(_DWORD *)(a1 + 636) = *(_DWORD *)a4;
          goto LABEL_47;
        }
        return 0;
      case '=':
        if ( *(float *)a4 != *(float *)(a1 + 640) )
        {
          *(_DWORD *)(a1 + 640) = *(_DWORD *)a4;
LABEL_47:
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
          return 0;
        }
        return 0;
    }
  }
  v9 = CVisual::SetProperty((float *)a1, a2, 18, a4);
  v6 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1EC3u, 0LL);
  return v6;
}
