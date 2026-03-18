/*
 * XREFs of ?SetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800C2B60
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007B89C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?SetClip@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800B14D4 (-SetClip@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x1800C343C (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 */

void __fastcall CD2DContext::SetClip(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        enum D2D1_ANTIALIAS_MODE a4)
{
  int v4; // eax
  CD2DTarget *v5; // rsi
  CD2DContext *v8; // r10

  v4 = *((_DWORD *)this + 100);
  v5 = 0LL;
  v8 = this;
  if ( v4 )
    v5 = *(CD2DTarget **)(*((_QWORD *)this + 47) + 8LL * (unsigned int)(v4 - 1));
  if ( !*((_BYTE *)this + 485)
    || *((_BYTE *)this + 487)
    || a4 != *((_DWORD *)this + 116)
    || !AreEqual(a3, (const struct D2D_RECT_F *)this + 28) )
  {
    CD2DContext::FlushDrawList(v8);
    CD2DTarget::SetClip(v5, a3, a4);
  }
}
