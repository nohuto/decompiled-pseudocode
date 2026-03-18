/*
 * XREFs of ??$UpdateProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DMatrix@@@Z @ 0x1C0028DFC
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0028830 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DMatrix>(
        __int64 a1,
        unsigned int *a2,
        _OWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // r10d
  __int64 v5; // rbx
  __int64 v6; // r9
  int v7; // r11d
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // rdx

  v3 = *a2;
  v4 = 0;
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 80)
    && (v5 = *(_QWORD *)(a1 + 72), v6 = (unsigned int)v3, v7 = *(_DWORD *)(v5 + 8 * v3 + 4), a2[1] == (v7 & 0x1FFFFFFF))
    && a2[2] == *(_DWORD *)(v5 + 8LL * (unsigned int)v3) )
  {
    v8 = *(_QWORD *)(a1 + 88);
    v9 = v7 & 0x1FFFFFFF;
    *(_OWORD *)(v9 + v8) = *a3;
    *(_OWORD *)(v9 + v8 + 16) = a3[1];
    *(_OWORD *)(v9 + v8 + 32) = a3[2];
    *(_OWORD *)(v9 + v8 + 48) = a3[3];
    v10 = *(_QWORD *)(a1 + 72);
    if ( (*(_DWORD *)(v10 + 8 * v6 + 4) & 0xE0000000) != 0x20000000 )
      *(_DWORD *)(v10 + 8 * v6 + 4) = *(_DWORD *)(v10 + 8 * v6 + 4) & 0x1FFFFFFF | 0x40000000;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
