/*
 * XREFs of PnprRecopyMirrorPages @ 0x14056322C
 * Callers:
 *     PnprSwapFinalize @ 0x1405635D0 (PnprSwapFinalize.c)
 * Callees:
 *     PnprCopyReservedMapping @ 0x140562A80 (PnprCopyReservedMapping.c)
 *     PnprGetStackLimits @ 0x140562EBC (PnprGetStackLimits.c)
 *     PnprRecopyAddress @ 0x140563100 (PnprRecopyAddress.c)
 *     PnprRecopyMappingReserve @ 0x140563158 (PnprRecopyMappingReserve.c)
 */

__int64 PnprRecopyMirrorPages()
{
  __int64 Number; // rcx
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // edx
  __int64 result; // rax
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax

  Number = KeGetPcr()->Prcb.Number;
  PnprGetStackLimits((char **)(PnprContext + 216 + 8 * Number), PnprContext + 16600 + 8 * Number);
  v1 = PnprContext;
  v2 = 0LL;
  if ( *(_DWORD *)(PnprContext + 176) )
  {
    while ( 1 )
    {
      v3 = PnprRecopyAddress(
             *(_QWORD *)(v1 + 8 * v2 + 216),
             *(_DWORD *)(v1 + 8 * v2 + 16600) - (unsigned int)*(_QWORD *)(v1 + 8 * v2 + 216));
      if ( v3 < 0 )
        break;
      if ( (_DWORD)v2 != *(_DWORD *)(PnprContext + 180) )
      {
        v3 = PnprRecopyMappingReserve((__int64 *)(*(_QWORD *)(PnprContext + 144) + 24 * v2));
        if ( v3 < 0 )
        {
          v9 = 5619;
          goto LABEL_17;
        }
        v3 = PnprRecopyMappingReserve((__int64 *)(*(_QWORD *)(PnprContext + 136) + 24 * v2));
        if ( v3 < 0 )
        {
          v9 = 5627;
          goto LABEL_17;
        }
      }
      v1 = PnprContext;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *(_DWORD *)(PnprContext + 176) )
        goto LABEL_7;
    }
    v9 = 5603;
LABEL_17:
    v10 = PnprContext;
    v11 = *(_DWORD *)(PnprContext + 33272);
    if ( !v11 )
      v11 = v9;
    *(_DWORD *)(PnprContext + 33272) = v11;
    v12 = *(_DWORD *)(v10 + 33276);
    if ( !v12 )
      v12 = 1;
    *(_DWORD *)(v10 + 33276) = v12;
    return (unsigned int)v3;
  }
  else
  {
LABEL_7:
    result = PnprRecopyAddress(v1, 0x8238u);
    if ( (int)result >= 0 )
    {
      result = PnprCopyReservedMapping();
      if ( (int)result >= 0 )
        return 0LL;
      v5 = 5651;
    }
    else
    {
      v5 = 5639;
    }
    v6 = PnprContext;
    v7 = *(_DWORD *)(PnprContext + 33272);
    if ( !v7 )
      v7 = v5;
    *(_DWORD *)(PnprContext + 33272) = v7;
    v8 = *(_DWORD *)(v6 + 33276);
    if ( !v8 )
      v8 = 1;
    *(_DWORD *)(v6 + 33276) = v8;
  }
  return result;
}
