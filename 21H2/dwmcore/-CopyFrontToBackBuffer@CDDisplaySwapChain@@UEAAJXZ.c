/*
 * XREFs of ?CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ @ 0x1802397A0
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EE604 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x18023A8D8 (-PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800988EC (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B114 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B354 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009B3D8 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C4980 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x18023DC68 (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 */

__int64 __fastcall CDDisplaySwapChain::CopyFrontToBackBuffer(CDDisplaySwapChain *this)
{
  _DWORD ***i; // rdx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rcx
  FastRegion::Internal::CRgnData *v13; // rcx
  int v15; // [rsp+38h] [rbp-61h]
  _DWORD v16[4]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v17[8]; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp-31h]
  int *v19; // [rsp+70h] [rbp-29h]
  __int64 v20; // [rsp+78h] [rbp-21h]
  int v21; // [rsp+80h] [rbp-19h]
  FastRegion::Internal::CRgnData *v22; // [rsp+90h] [rbp-9h] BYREF
  int v23; // [rsp+98h] [rbp-1h] BYREF
  const void *retaddr; // [rsp+F8h] [rbp+5Fh]

  for ( i = (_DWORD ***)*((_QWORD *)this + 38); i != *((_DWORD ****)this + 39); ++i )
  {
    if ( ***i )
    {
      v23 = 0;
      v22 = (FastRegion::Internal::CRgnData *)&v23;
      v3 = FastRegion::CRegion::Copy(&v22, **((const struct FastRegion::Internal::CRgnData ****)this + 38));
      if ( v3 < 0 )
        ModuleFailFastForHRESULT(v3, retaddr);
      v4 = *((_QWORD *)this + 38);
      v5 = 1;
      if ( (unsigned __int64)((*((_QWORD *)this + 39) - v4) >> 3) > 1 )
      {
        v6 = 1LL;
        do
        {
          v7 = FastRegion::CRegion::Union(
                 (void **)&v22,
                 *(const struct FastRegion::Internal::CRgnData ***)(v4 + 8 * v6));
          if ( v7 < 0 )
            ModuleFailFastForHRESULT(v7, retaddr);
          v4 = *((_QWORD *)this + 38);
          v6 = ++v5;
        }
        while ( v5 < (unsigned __int64)((*((_QWORD *)this + 39) - v4) >> 3) );
      }
      FastRegion::Internal::CRgnData::BeginIterator(v22, (struct FastRegion::CRegion::Iterator *)v17);
      while ( (unsigned __int64)v19 < v18 )
      {
        v15 = *v19;
        v8 = 2 * v21;
        v16[3] = v19[2];
        v9 = 32LL * *((unsigned int *)this + 43);
        v10 = *(_DWORD *)(v20 + 4 * v8);
        v11 = *((unsigned int *)this + 42);
        v16[2] = *(_DWORD *)(v20 + 4 * v8 + 4);
        v12 = *((_QWORD *)this + 17);
        v16[0] = v10;
        v16[1] = v15;
        CD3DDevice::CopySubresourceRegion(
          *((_QWORD *)this + 3),
          *(_QWORD *)(v9 + v12 + 16),
          0,
          (unsigned int)v16,
          *(_QWORD *)(32 * v11 + v12 + 16),
          0,
          v10,
          v15,
          0);
        FastRegion::Internal::CRgnData::StepIterator(v13, (struct FastRegion::CRegion::Iterator *)v17);
      }
      FastRegion::CRegion::FreeMemory((void **)&v22);
      return 0LL;
    }
  }
  return 0LL;
}
