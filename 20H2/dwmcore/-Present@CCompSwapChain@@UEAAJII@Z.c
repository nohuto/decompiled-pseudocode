/*
 * XREFs of ?Present@CCompSwapChain@@UEAAJII@Z @ 0x18024EAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180070A30 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$07$0A@@@QEAA@XZ @ 0x18009F6E8 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_ea_18009F6E8.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A362C (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800A6058 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800A6094 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800B5378 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C07A0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x18023D6B8 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x18024E270 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 */

__int64 __fastcall CCompSwapChain::Present(CCompSwapChain *this, unsigned int a2, unsigned int a3)
{
  char v6; // si
  int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  int RectangleCount; // eax
  int v12; // eax
  unsigned int v13; // r10d
  __int64 v14; // rdx
  FastRegion::Internal::CRgnData *v15; // rcx
  int v16; // r10d
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int128 v22; // [rsp+30h] [rbp-D0h]
  DXGI_PRESENT_PARAMETERS v23; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v24[8]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-98h]
  _DWORD *v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+80h] [rbp-80h]
  _QWORD v29[3]; // [rsp+90h] [rbp-70h] BYREF
  UINT v30; // [rsp+A8h] [rbp-58h]
  const void *retaddr; // [rsp+168h] [rbp+68h]

  memset(&v23, 0, sizeof(v23));
  v6 = a3;
  DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,8,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,8,0>((__int64)v29);
  v7 = v6 & 2;
  if ( !v7 )
  {
    v8 = CCompSwapChain::CopyFrontToBackBuffer(this);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_180303860, 2u, v8, 0x13Du, 0LL);
      goto LABEL_20;
    }
    if ( **((_DWORD **)this + 13) )
    {
      v30 = 0;
      RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)this + 13);
      v12 = DynArrayImpl<0>::AddMultiple((__int64)v29, 16, RectangleCount, 0LL);
      if ( v12 < 0 )
        ModuleFailFastForHRESULT(v12, retaddr);
      FastRegion::Internal::CRgnData::BeginIterator(
        *((FastRegion::Internal::CRgnData **)this + 13),
        (struct FastRegion::CRegion::Iterator *)v24);
      while ( (unsigned __int64)v26 < v25 )
      {
        DWORD1(v22) = *v26;
        HIDWORD(v22) = v26[2];
        v14 = 2 * v28;
        LODWORD(v22) = *(_DWORD *)(v27 + 4 * v14);
        DWORD2(v22) = *(_DWORD *)(v27 + 4 * v14 + 4);
        v15 = (FastRegion::Internal::CRgnData *)(2LL * v13);
        *(_OWORD *)(v29[0] + 8LL * (_QWORD)v15) = v22;
        FastRegion::Internal::CRgnData::StepIterator(v15, (struct FastRegion::CRegion::Iterator *)v24);
        v13 = v16 + 1;
      }
      v23.DirtyRectsCount = v30;
      v23.pDirtyRects = (RECT *)v29[0];
    }
  }
  v17 = CD3DDevice::Present(*((CD3DDevice **)this + 3), *((struct IDXGISwapChain1 **)this + 4), a2, a3, &v23);
  v10 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_180303860, 2u, v17, 0x14Cu, 0LL);
  }
  else if ( !v7 )
  {
    if ( *((_DWORD *)this + 25) == 3 )
    {
      v19 = FastRegion::CRegion::Copy(
              (const struct FastRegion::Internal::CRgnData **)this + 31,
              (const struct FastRegion::Internal::CRgnData **)this + 22);
      if ( v19 < 0 )
        ModuleFailFastForHRESULT(v19, retaddr);
    }
    v20 = FastRegion::CRegion::Copy(
            (const struct FastRegion::Internal::CRgnData **)this + 22,
            (const struct FastRegion::Internal::CRgnData **)this + 13);
    if ( v20 < 0 )
      ModuleFailFastForHRESULT(v20, retaddr);
    **((_DWORD **)this + 13) = 0;
  }
LABEL_20:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v29);
  return v10;
}
