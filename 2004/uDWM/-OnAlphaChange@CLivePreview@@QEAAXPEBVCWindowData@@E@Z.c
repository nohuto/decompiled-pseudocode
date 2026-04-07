/*
 * XREFs of ?OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z @ 0x180010CA8
 * Callers:
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800114C0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001D170 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 */

void __fastcall CLivePreview::OnAlphaChange(CLivePreview *this, const struct CWindowData *a2, unsigned __int8 a3)
{
  unsigned int v3; // r10d
  int v6; // eax
  __int64 v7; // r8
  double v8; // xmm6_8
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r9
  CVisual *v13; // rcx

  v3 = *((_DWORD *)this + 90);
  v6 = a3;
  v7 = 0LL;
  v8 = (double)v6 / 255.0;
  if ( v3 )
  {
    v11 = *((_QWORD *)this + 42);
    while ( *(const struct CWindowData **)(v11 + 48 * v7 + 8) != a2 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v3 )
        goto LABEL_2;
    }
    CVisual::SetOpacity(*(CVisual **)(v11 + 48 * v7), v8);
  }
LABEL_2:
  v9 = *((_DWORD *)this + 82);
  v10 = 0LL;
  if ( v9 )
  {
    v12 = *((_QWORD *)this + 38);
    while ( *(const struct CWindowData **)(v12 + 40 * v10) != a2 )
    {
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= v9 )
        return;
    }
    v13 = *(CVisual **)(v12 + 40 * v10 + 8);
    if ( v13 )
      CVisual::SetOpacity(v13, v8);
  }
}
