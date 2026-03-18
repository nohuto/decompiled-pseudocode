/*
 * XREFs of ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180041614
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z @ 0x18003F4BC (-NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18004108C (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800D59D8 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x18003F594 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180040A90 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z @ 0x18004114C (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180041B60 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180041C50 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180044738 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x180045728 (-Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxxxx_EventWriteTransfer @ 0x180155CEC (McTemplateU0xxxxx_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CGdiSpriteBitmap::AddDirtyRegion(CGdiSpriteBitmap *this, struct CRegion *a2, char a3)
{
  int v3; // r9d
  int v5; // edx
  _DWORD *v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rsi
  __int64 *v15; // r14
  char v16; // r15
  unsigned int i; // esi
  CWindowNode *v18; // r14
  __int64 v19; // rcx
  unsigned int *v20; // r8
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  HGDIOBJ ho; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v27[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h]
  void *lpMem; // [rsp+90h] [rbp-70h] BYREF
  __int64 v30; // [rsp+98h] [rbp-68h] BYREF
  int v31; // [rsp+A0h] [rbp-60h]
  _DWORD v32[2]; // [rsp+A4h] [rbp-5Ch] BYREF
  _DWORD v33[13]; // [rsp+ACh] [rbp-54h] BYREF
  int *v34; // [rsp+E0h] [rbp-20h] BYREF
  int v35; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v36[48]; // [rsp+100h] [rbp+0h] BYREF
  void *retaddr; // [rsp+178h] [rbp+78h]

  v3 = *((_DWORD *)this + 117);
  lpMem = &v30;
  v5 = *((_DWORD *)this + 116);
  if ( v5 <= 0 || v3 <= 0 )
  {
    LODWORD(v30) = 0;
  }
  else
  {
    v30 = 2LL;
    v31 = v5;
    v32[0] = 0;
    v33[2] = 0;
    v32[1] = (unsigned int)v36 - 76 - (unsigned int)v32;
    v33[3] = v5;
    v33[0] = v3;
    v33[1] = (unsigned int)v36 - 76 - (unsigned int)v33 + 8;
  }
  v8 = *(_DWORD **)a2;
  ho = 0LL;
  if ( *v8 )
  {
    if ( !*((_QWORD *)this + 49) )
    {
      if ( *((_BYTE *)this + 128) )
      {
        v19 = *((_QWORD *)this + 11);
        LODWORD(v25) = 56;
        v28 = 0LL;
        v27[1] = (unsigned __int64)&ho;
        v27[0] = 0LL;
        v27[2] = 0LL;
        CRedirectedGDISurface::GetInformation(v19, 0, &v25, (__int64)v27);
        if ( ho )
        {
          v35 = 0;
          v34 = &v35;
          CRegion::SetHRGN((CRegion *)&v34, (HRGN)ho, v20);
          v21 = FastRegion::CRegion::Copy(a2, a2);
          if ( v21 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v21, retaddr);
          v22 = FastRegion::CRegion::Intersect(a2, (const struct CRegion *)&v34);
          if ( v22 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v22, retaddr);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v34);
        }
      }
    }
    v9 = FastRegion::CRegion::Intersect(a2, (const struct CRegion *)&lpMem);
    if ( v9 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
    if ( **(_DWORD **)a2 )
    {
      if ( !*((_BYTE *)this + 128) || !FastRegion::CRegion::Contains((CGdiSpriteBitmap *)((char *)this + 224), a2) )
      {
        v10 = FastRegion::CRegion::Union((CGdiSpriteBitmap *)((char *)this + 224), a2);
        if ( v10 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v10, retaddr);
        *((_BYTE *)this + 131) = 1;
      }
      v12 = *((_QWORD *)this + 60);
      if ( v12 )
      {
        v13 = v12 + 8 + *(int *)(*(_QWORD *)(v12 + 8) + 12LL);
        (*(void (__fastcall **)(__int64, struct CRegion *))(*(_QWORD *)v13 + 32LL))(v13, a2);
        v14 = (__int64 *)*((_QWORD *)this + 61);
        v15 = (__int64 *)*((_QWORD *)this + 62);
        while ( v14 != v15 )
        {
          v23 = *v14;
          v25 = 0LL;
          v24 = v23 + 56 + *(int *)(*(_QWORD *)(v23 + 56) + 8LL);
          if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 48LL))(v24, &v25) >= 0 )
            (*(void (__fastcall **)(__int64, struct CRegion *))(*(_QWORD *)v25 + 32LL))(v25, a2);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v25);
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
          CWindowNode::NotifyDirtySurface(v18, (FastRegion::Internal::CRgnData **)a2, v11, *((_BYTE *)this + 131));
        }
      }
    }
    if ( ho )
      DeleteObject(ho);
    if ( &v30 != lpMem )
      operator delete(lpMem);
  }
}
