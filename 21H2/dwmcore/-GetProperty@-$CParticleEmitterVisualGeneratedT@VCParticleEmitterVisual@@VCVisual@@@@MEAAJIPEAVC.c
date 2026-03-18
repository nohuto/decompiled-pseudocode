/*
 * XREFs of ?GetProperty@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18022F740
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800C9750 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::GetProperty(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v3; // r9d
  int v4; // xmm0_4
  __int64 v5; // xmm0_8
  int v6; // eax

  v3 = 0;
  if ( a2 > 0x41 )
  {
    switch ( a2 )
    {
      case 'B':
        v4 = *(_DWORD *)(a1 + 764);
        goto LABEL_30;
      case 'D':
        v5 = *(_QWORD *)(a1 + 772);
        v6 = *(_DWORD *)(a1 + 780);
        break;
      case 'E':
        v4 = *(_DWORD *)(a1 + 784);
        goto LABEL_30;
      case 'F':
        v4 = *(_DWORD *)(a1 + 788);
        goto LABEL_30;
      case 'G':
        v5 = *(_QWORD *)(a1 + 792);
        v6 = *(_DWORD *)(a1 + 800);
        break;
      case 'I':
        v5 = *(_QWORD *)(a1 + 808);
        v6 = *(_DWORD *)(a1 + 816);
        break;
      default:
        return (unsigned int)CVisual::GetProperty((CVisual *)a1, a2, (struct CExpressionValue *)a3);
    }
    *(_QWORD *)a3 = v5;
    *(_DWORD *)(a3 + 8) = v6;
    *(_DWORD *)(a3 + 72) = 52;
LABEL_31:
    *(_BYTE *)(a3 + 76) = 1;
    return v3;
  }
  switch ( a2 )
  {
    case 'A':
      v4 = *(_DWORD *)(a1 + 760);
      goto LABEL_30;
    case '6':
      v4 = *(_DWORD *)(a1 + 728);
      goto LABEL_30;
    case '7':
      v4 = *(_DWORD *)(a1 + 732);
      goto LABEL_30;
    case '8':
      v4 = *(_DWORD *)(a1 + 736);
      goto LABEL_30;
    case '=':
      v4 = *(_DWORD *)(a1 + 748);
      goto LABEL_30;
    case '?':
      v4 = *(_DWORD *)(a1 + 752);
      goto LABEL_30;
    case '@':
      v4 = *(_DWORD *)(a1 + 756);
LABEL_30:
      *(_DWORD *)a3 = v4;
      *(_DWORD *)(a3 + 72) = 18;
      goto LABEL_31;
  }
  return (unsigned int)CVisual::GetProperty((CVisual *)a1, a2, (struct CExpressionValue *)a3);
}
