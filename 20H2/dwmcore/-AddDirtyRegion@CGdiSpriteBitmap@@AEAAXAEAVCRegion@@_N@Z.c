/*
 * XREFs of ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x1800A64D8
 * Callers:
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x18003E918 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z @ 0x1800401D4 (-NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1800A6D68 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800402AC (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A353C (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A362C (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6118 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z @ 0x1800A678C (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800A733C (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x1800C3414 (-Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxxxx_EventWriteTransfer @ 0x180153E7C (McTemplateU0xxxxx_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CGdiSpriteBitmap::AddDirtyRegion(
        CGdiSpriteBitmap *this,
        const struct FastRegion::Internal::CRgnData **a2,
        char a3)
{
  int v3; // r9d
  int v5; // edx
  const struct FastRegion::Internal::CRgnData *v8; // rax
  int v9; // eax
  int v10; // eax
  bool v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rsi
  __int64 *v15; // r14
  char v16; // r15
  unsigned int i; // esi
  CWindowNode *v18; // r14
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  HGDIOBJ ho; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v26[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+80h] [rbp-80h]
  void *lpMem; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h] BYREF
  int v30; // [rsp+A0h] [rbp-60h]
  _DWORD v31[2]; // [rsp+A4h] [rbp-5Ch] BYREF
  _DWORD v32[13]; // [rsp+ACh] [rbp-54h] BYREF
  int *v33; // [rsp+E0h] [rbp-20h] BYREF
  int v34; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v35[48]; // [rsp+100h] [rbp+0h] BYREF
  void *retaddr; // [rsp+178h] [rbp+78h]

  v3 = *((_DWORD *)this + 117);
  lpMem = &v29;
  v5 = *((_DWORD *)this + 116);
  if ( v5 <= 0 || v3 <= 0 )
  {
    LODWORD(v29) = 0;
  }
  else
  {
    v29 = 2LL;
    v30 = v5;
    v31[0] = 0;
    v32[2] = 0;
    v31[1] = (unsigned int)v35 - 76 - (unsigned int)v31;
    v32[3] = v5;
    v32[0] = v3;
    v32[1] = (unsigned int)v35 - 76 - (unsigned int)v32 + 8;
  }
  v8 = *a2;
  ho = 0LL;
  if ( *(_DWORD *)v8 )
  {
    if ( !*((_QWORD *)this + 49) )
    {
      if ( *((_BYTE *)this + 128) )
      {
        v19 = *((_QWORD *)this + 11);
        LODWORD(v24) = 56;
        v27 = 0LL;
        v26[1] = (unsigned __int64)&ho;
        v26[0] = 0LL;
        v26[2] = 0LL;
        CRedirectedGDISurface::GetInformation(v19, 0, &v24, (__int64)v26);
        if ( ho )
        {
          v34 = 0;
          v33 = &v34;
          CRegion::SetHRGN((CRegion *)&v33, (HRGN)ho);
          v20 = FastRegion::CRegion::Copy(a2, a2);
          if ( v20 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v20, retaddr);
          v21 = FastRegion::CRegion::Intersect(a2, (const struct FastRegion::Internal::CRgnData **)&v33);
          if ( v21 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v21, retaddr);
          FastRegion::CRegion::FreeMemory((void **)&v33);
        }
      }
    }
    v9 = FastRegion::CRegion::Intersect(a2, (const struct FastRegion::Internal::CRgnData **)&lpMem);
    if ( v9 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
    if ( *(_DWORD *)*a2 )
    {
      if ( !*((_BYTE *)this + 128)
        || !FastRegion::CRegion::Contains((CGdiSpriteBitmap *)((char *)this + 224), (const struct CRegion *)a2) )
      {
        v10 = FastRegion::CRegion::Union((void **)this + 28, a2);
        if ( v10 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v10, retaddr);
        *((_BYTE *)this + 131) = 1;
      }
      v12 = *((_QWORD *)this + 60);
      if ( v12 )
      {
        v13 = v12 + 8 + *(int *)(*(_QWORD *)(v12 + 8) + 12LL);
        (*(void (__fastcall **)(__int64, const struct FastRegion::Internal::CRgnData **))(*(_QWORD *)v13 + 32LL))(
          v13,
          a2);
        v14 = (__int64 *)*((_QWORD *)this + 61);
        v15 = (__int64 *)*((_QWORD *)this + 62);
        while ( v14 != v15 )
        {
          v22 = *v14;
          v24 = 0LL;
          v23 = v22 + 56 + *(int *)(*(_QWORD *)(v22 + 56) + 8LL);
          if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 48LL))(v23, &v24) >= 0 )
            (*(void (__fastcall **)(__int64, const struct FastRegion::Internal::CRgnData **))(*(_QWORD *)v24 + 32LL))(
              v24,
              a2);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v24);
          ++v14;
        }
      }
      v16 = *((_BYTE *)this + 124);
      *((_BYTE *)this + 124) = 1;
      if ( a3 )
      {
        for ( i = 0; i < *((_DWORD *)this + 52); ++i )
        {
          v18 = *(CWindowNode **)(*((_QWORD *)this + 23) + 8LL * i);
          if ( !v16 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0xxxxx_EventWriteTransfer(
              i,
              (unsigned int)&EVTDESC_BIND_GDISPRITEBITMAP_FIRST_TOKEN,
              (_DWORD)this,
              *((_QWORD *)this + 56),
              (char)v18,
              *((_QWORD *)v18 + 10),
              *((_QWORD *)this + 10));
          CWindowNode::NotifyDirtySurface(v18, (const struct CRegion *)a2, v11, *((_BYTE *)this + 131));
        }
      }
    }
    if ( ho )
      DeleteObject(ho);
    if ( &v29 != lpMem )
      operator delete(lpMem);
  }
}
