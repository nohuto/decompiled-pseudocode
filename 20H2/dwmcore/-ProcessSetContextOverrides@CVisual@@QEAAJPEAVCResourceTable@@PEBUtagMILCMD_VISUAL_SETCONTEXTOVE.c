/*
 * XREFs of ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801ADDB4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800AA3B8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ @ 0x1801889D8 (-GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ.c)
 *     ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x180188A30 (-GetWorldUpVectorOverride@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z @ 0x1801AE548 (-SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z.c)
 *     ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1801AE590 (-SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetContextOverrides(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCONTEXTOVERRIDES *a3)
{
  float v5; // xmm1_4
  FLOAT v6; // xmm1_4
  __int64 v7; // rax
  bool v8; // al
  struct D2D_VECTOR_3F v10; // [rsp+20h] [rbp-18h] BYREF

  CVisual::GetWorldUpVectorOverride(this, &v10);
  v5 = *((float *)a3 + 2);
  if ( v5 != CVisual::GetWorldRenderingScaleOverride(this)
    || *((float *)a3 + 3) != v10.x
    || *((float *)a3 + 4) != v10.y
    || *((float *)a3 + 5) != v10.z )
  {
    CVisual::SetWorldRenderingScaleOverride(this, v5);
    v6 = *((float *)a3 + 4);
    v10.x = *((FLOAT *)a3 + 3);
    v10.z = *((FLOAT *)a3 + 5);
    v10.y = v6;
    CVisual::SetWorldUpVectorOverride(this, &v10);
    v7 = *((_QWORD *)this + 27);
    v8 = (*(_DWORD *)(v7 + 4) & 0x40000) != 0 || (*(_DWORD *)(v7 + 4) & 0x20000) != 0;
    *((_BYTE *)this + 95) &= ~1u;
    *((_BYTE *)this + 95) |= v8;
    if ( (*((_DWORD *)this + 22) & 0x4000) != 0 )
    {
      *((_QWORD *)this + 55) = 0LL;
      CVisual::PropagateFlags((__int64)this, 0x10u);
    }
  }
  return 0LL;
}
