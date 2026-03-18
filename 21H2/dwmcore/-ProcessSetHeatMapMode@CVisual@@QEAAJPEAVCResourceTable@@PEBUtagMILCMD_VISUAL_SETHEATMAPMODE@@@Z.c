/*
 * XREFs of ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x1801F7D5C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x1801B4180 (-SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetHeatMapMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETHEATMAPMODE *a3)
{
  char v4; // al
  __int64 v6; // rax
  __m128i v7; // xmm0
  __m128i v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  v4 = *((_BYTE *)this + 101);
  if ( *((_DWORD *)a3 + 6) == 2 )
  {
    if ( (v4 & 0x20) == 0 )
    {
      v6 = *((_QWORD *)this + 2);
      v10 = 0;
      ++*(_DWORD *)(v6 + 1232);
      *((_BYTE *)this + 101) |= 0x20u;
      v9 = _mm_loadu_si128((const __m128i *)((char *)a3 + 8));
      CVisual::SetHeatMapProperties((__int64)this, &v9);
      v4 = *((_BYTE *)this + 101);
    }
  }
  else if ( (v4 & 0x20) != 0 )
  {
    --*(_DWORD *)(*((_QWORD *)this + 2) + 1232LL);
    *((_BYTE *)this + 101) &= ~0x20u;
    v4 = *((_BYTE *)this + 101);
  }
  if ( *((_DWORD *)a3 + 6) == 1 )
  {
    *((_BYTE *)this + 101) = v4 | 0x10;
    v7 = _mm_loadu_si128((const __m128i *)((char *)a3 + 8));
    v10 = *((_DWORD *)a3 + 7);
    v9 = v7;
    CVisual::SetHeatMapProperties((__int64)this, &v9);
  }
  else
  {
    *((_BYTE *)this + 101) = v4 & 0xEF;
  }
  CVisual::PropagateFlags((__int64)this, 5u);
  return 0LL;
}
