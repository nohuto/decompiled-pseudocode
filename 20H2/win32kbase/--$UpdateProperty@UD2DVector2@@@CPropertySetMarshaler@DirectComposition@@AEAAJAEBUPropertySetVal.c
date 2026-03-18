/*
 * XREFs of ??$UpdateProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector2@@@Z @ 0x1C01E6674
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00927A0 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DVector2>(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // r9d
  __int64 v5; // rbx
  __int64 v6; // rdx

  v3 = *a2;
  v4 = 0;
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 80)
    && (v5 = *(_QWORD *)(a1 + 72), a2[1] == (*(_DWORD *)(v5 + 8 * v3 + 4) & 0x1FFFFFFF))
    && a2[2] == *(_DWORD *)(v5 + 8LL * (unsigned int)v3) )
  {
    *(_QWORD *)((*(_DWORD *)(v5 + 8 * v3 + 4) & 0x1FFFFFFF) + *(_QWORD *)(a1 + 88)) = *a3;
    v6 = *(_QWORD *)(a1 + 72);
    if ( (*(_DWORD *)(v6 + 8LL * (unsigned int)v3 + 4) & 0xE0000000) != 0x20000000 )
      *(_DWORD *)(v6 + 8LL * (unsigned int)v3 + 4) = *(_DWORD *)(v6 + 8LL * (unsigned int)v3 + 4) & 0x1FFFFFFF | 0x40000000;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
