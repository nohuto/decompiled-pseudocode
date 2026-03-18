/*
 * XREFs of ??$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01BE674
 * Callers:
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01BE460 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0011B4C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 */

__int64 __fastcall _BmlFillOnePathModalityFromVidPn<D3DKMT_PATHMODALITY_DESCRIPTOR>(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  __int64 v6; // rsi
  DMMVIDPNSOURCEMODE *v7; // rcx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  int v16; // eax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 88);
  v5 = *(_QWORD *)(v2 + 104);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
    v6 = *(_QWORD *)(v2 + 104);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = *(DMMVIDPNSOURCEMODE **)(v6 + 144);
  if ( v7 )
  {
    if ( (*(_QWORD *)a2 & 0x100LL) != 0 )
    {
      GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v7);
      if ( *(_DWORD *)(a2 + 96) != GraphicsInfo->PrimSurfSize.cx
        || *(_DWORD *)(a2 + 100) != GraphicsInfo->PrimSurfSize.cy )
      {
        *(_QWORD *)a2 &= ~0x800000uLL;
      }
    }
    else
    {
      *(_QWORD *)a2 &= ~0x800000uLL;
    }
    v9 = DMMVIDPNSOURCEMODE::GetGraphicsInfo(*(DMMVIDPNSOURCEMODE **)(v6 + 144));
    *(_OWORD *)(a2 + 96) = *(_OWORD *)&v9->PrimSurfSize.cx;
    v10 = *(_OWORD *)&v9->Stride;
    *(_QWORD *)a2 |= 0x100uLL;
    *(_OWORD *)(a2 + 112) = v10;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v6 + 88));
  v11 = *(_QWORD *)(a1 + 96);
  v12 = *(_QWORD *)(v11 + 104);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
    v13 = *(_QWORD *)(v11 + 104);
  }
  else
  {
    v13 = 0LL;
  }
  v14 = *(_QWORD *)(v13 + 144);
  if ( v14 )
  {
    *(_OWORD *)(a2 + 32) = *(_OWORD *)(v14 + 72);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(v14 + 88);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(v14 + 104);
    *(_QWORD *)(a2 + 80) = *(_QWORD *)(v14 + 120);
    *(_QWORD *)(a2 + 224) = *(_QWORD *)(v14 + 152);
    *(_QWORD *)(a2 + 232) = *(_QWORD *)(v14 + 144);
    *(_DWORD *)(a2 + 240) = *(_DWORD *)(v14 + 160);
    *(_QWORD *)a2 |= 0x801000087uLL;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v13 + 88));
  v15 = *(_DWORD *)(a1 + 116);
  if ( v15 && (unsigned int)(v15 - 254) > 1 )
  {
    *(_QWORD *)a2 |= 0x200uLL;
    *(_DWORD *)(a2 + 132) = v15;
  }
  v16 = *(_DWORD *)(a1 + 112);
  if ( v16 && v16 != 254 )
  {
    *(_DWORD *)(a2 + 136) = v16;
    *(_QWORD *)a2 |= 0x40000000000uLL;
  }
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 80LL);
  *(_DWORD *)(a2 + 92) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 84LL);
  result = 0x800000000000LL;
  *(_QWORD *)a2 |= 0x800000000000uLL;
  return result;
}
