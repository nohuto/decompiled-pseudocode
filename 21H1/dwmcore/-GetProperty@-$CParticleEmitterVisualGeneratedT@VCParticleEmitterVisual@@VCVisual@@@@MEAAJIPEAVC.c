/*
 * XREFs of ?GetProperty@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1801E4560
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800956B0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
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
  if ( a2 > 0x3F )
  {
    switch ( a2 )
    {
      case '@':
        v4 = *(_DWORD *)(a1 + 652);
        goto LABEL_30;
      case 'B':
        v5 = *(_QWORD *)(a1 + 660);
        v6 = *(_DWORD *)(a1 + 668);
        break;
      case 'C':
        v4 = *(_DWORD *)(a1 + 672);
        goto LABEL_30;
      case 'D':
        v4 = *(_DWORD *)(a1 + 676);
        goto LABEL_30;
      case 'E':
        v5 = *(_QWORD *)(a1 + 680);
        v6 = *(_DWORD *)(a1 + 688);
        break;
      case 'G':
        v5 = *(_QWORD *)(a1 + 696);
        v6 = *(_DWORD *)(a1 + 704);
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
    case '?':
      v4 = *(_DWORD *)(a1 + 648);
      goto LABEL_30;
    case '4':
      v4 = *(_DWORD *)(a1 + 616);
      goto LABEL_30;
    case '5':
      v4 = *(_DWORD *)(a1 + 620);
      goto LABEL_30;
    case '6':
      v4 = *(_DWORD *)(a1 + 624);
      goto LABEL_30;
    case ';':
      v4 = *(_DWORD *)(a1 + 636);
      goto LABEL_30;
    case '=':
      v4 = *(_DWORD *)(a1 + 640);
      goto LABEL_30;
    case '>':
      v4 = *(_DWORD *)(a1 + 644);
LABEL_30:
      *(_DWORD *)a3 = v4;
      *(_DWORD *)(a3 + 72) = 18;
      goto LABEL_31;
  }
  return (unsigned int)CVisual::GetProperty((CVisual *)a1, a2, (struct CExpressionValue *)a3);
}
