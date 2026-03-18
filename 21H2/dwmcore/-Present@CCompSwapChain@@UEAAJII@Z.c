/*
 * XREFs of ?Present@CCompSwapChain@@UEAAJII@Z @ 0x18028F460
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180083EF4 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x18027EDAC (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$07$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$07$0A@@@@Z @ 0x18028E504 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMi_ea_18028E504.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x18028EAB0 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 */

__int64 __fastcall CCompSwapChain::Present(CCompSwapChain *this, unsigned int a2, unsigned int a3)
{
  char v4; // si
  int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  DXGI_PRESENT_PARAMETERS v16; // [rsp+30h] [rbp-99h] BYREF
  void *v17[2]; // [rsp+50h] [rbp-79h] BYREF
  int v18; // [rsp+60h] [rbp-69h]
  int v19; // [rsp+64h] [rbp-65h]
  UINT v20; // [rsp+68h] [rbp-61h]
  char v21[128]; // [rsp+70h] [rbp-59h] BYREF
  const void *retaddr; // [rsp+128h] [rbp+5Fh]

  v20 = 0;
  v17[0] = v21;
  v4 = a3;
  v17[1] = v21;
  v18 = 8;
  v19 = 8;
  memset(&v16, 0, sizeof(v16));
  `vector constructor iterator'(
    v21,
    16LL,
    8LL,
    (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  v7 = v4 & 2;
  if ( !v7 )
  {
    v8 = CCompSwapChain::CopyFrontToBackBuffer(this);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18038DA08, 2LL, v8, 0x13Du);
      goto LABEL_15;
    }
    if ( **((_DWORD **)this + 21) )
    {
      v20 = 0;
      CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,8,0>>(
        (int **)this + 21,
        (__int64)v17);
      v16.DirtyRectsCount = v20;
      v16.pDirtyRects = (RECT *)v17[0];
    }
  }
  v11 = CD3DDevice::Present(*((CD3DDevice **)this + 9), *((struct IDXGISwapChain1 **)this + 10), a2, a3, &v16);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_18038DA08, 2LL, v11, 0x14Cu);
  }
  else if ( !v7 )
  {
    if ( *((_DWORD *)this + 40) == 3 )
    {
      v13 = FastRegion::CRegion::Copy((int **)this + 39, (int **)this + 30);
      if ( v13 < 0 )
        ModuleFailFastForHRESULT(v13, retaddr);
    }
    v14 = FastRegion::CRegion::Copy((int **)this + 30, (int **)this + 21);
    if ( v14 < 0 )
      ModuleFailFastForHRESULT(v14, retaddr);
    **((_DWORD **)this + 21) = 0;
  }
LABEL_15:
  DynArrayImpl<1>::~DynArrayImpl<1>(v17);
  return v10;
}
