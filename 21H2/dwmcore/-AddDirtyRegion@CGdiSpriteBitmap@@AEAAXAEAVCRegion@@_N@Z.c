/*
 * XREFs of ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180081D5C
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z @ 0x18000E810 (-NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z.c)
 *     ?SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@@Z @ 0x18001883C (-SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV-$span@$$CBUtagRECT@@$0-0@gsl@@@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x18005E580 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180081B1C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJPEAPEAUHRGN__@@@Z @ 0x18005E634 (-GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x180069B2C (-Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180069D54 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x180081FE4 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180082054 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x180084DC0 (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xxxxx_EventWriteTransfer @ 0x180112622 (McTemplateU0xxxxx_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CGdiSpriteBitmap::AddDirtyRegion(CGdiSpriteBitmap *this, struct CRegion *a2, char a3)
{
  int v3; // eax
  _DWORD *v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r14
  char v14; // r12
  unsigned int i; // esi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  CWindowNode *v19; // r14
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rax
  HGDIOBJ ho; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+50h] [rbp-B0h]
  int v26; // [rsp+54h] [rbp-ACh]
  int *v27; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v29[80]; // [rsp+B0h] [rbp-50h] BYREF
  void *retaddr; // [rsp+138h] [rbp+38h]

  v3 = *((_DWORD *)this + 102);
  v24 = 0LL;
  v25 = v3;
  v26 = *((_DWORD *)this + 103);
  CRegion::CRegion((CRegion *)v29, (const struct MilRectU *)&v24);
  v7 = *(_DWORD **)a2;
  ho = 0LL;
  if ( *v7 )
  {
    if ( !*((_QWORD *)this + 42) )
    {
      if ( *((_BYTE *)this + 143) )
      {
        CRedirectedGDISurface::GetDirtyRegionFromAccum(*((CRedirectedGDISurface **)this + 15), (HRGN *)&ho);
        if ( ho )
        {
          v28 = 0;
          v27 = &v28;
          CRegion::SetHRGN((CRegion *)&v27, (HRGN)ho);
          v20 = FastRegion::CRegion::Intersect(a2, (const struct CRegion *)&v27);
          if ( v20 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v20, retaddr);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v27);
        }
      }
    }
    v8 = FastRegion::CRegion::Intersect(a2, (const struct CRegion *)v29);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
    if ( **(_DWORD **)a2 )
    {
      if ( !*((_BYTE *)this + 143) || !FastRegion::CRegion::Contains((CGdiSpriteBitmap *)((char *)this + 168), a2) )
      {
        v9 = FastRegion::CRegion::Union((CGdiSpriteBitmap *)((char *)this + 168), a2);
        if ( v9 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
        *((_BYTE *)this + 145) = 1;
      }
      v10 = *((_QWORD *)this + 53);
      if ( v10 )
      {
        v11 = v10 + 8 + *(int *)(*(_QWORD *)(v10 + 8) + 12LL);
        (*(void (__fastcall **)(__int64, struct CRegion *))(*(_QWORD *)v11 + 32LL))(v11, a2);
        v12 = *((_QWORD *)this + 54);
        v13 = *((_QWORD *)this + 55);
        while ( v12 != v13 )
        {
          v21 = (__int64 *)(*(_QWORD *)v12 + 64LL + *(int *)(*(_QWORD *)(*(_QWORD *)v12 + 64LL) + 8LL));
          v22 = *v21;
          v24 = 0LL;
          if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v22 + 56))(v21, &v24) >= 0 )
            (*(void (__fastcall **)(__int64, struct CRegion *))(*(_QWORD *)v24 + 32LL))(v24, a2);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v24);
          v12 += 8LL;
        }
      }
      v14 = *((_BYTE *)this + 140);
      *((_BYTE *)this + 140) = 1;
      if ( a3 )
      {
        for ( i = 0; i < (unsigned __int64)CPtrArrayBase::GetCount((CGdiSpriteBitmap *)((char *)this + 24)); ++i )
        {
          v17 = CPtrArrayBase::operator[](v16, i);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 56LL))(v17, 204LL) )
          {
            v18 = CPtrArrayBase::operator[]((char *)this + 24, i);
            v19 = (CWindowNode *)v18;
            if ( !v14 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              McTemplateU0xxxxx_EventWriteTransfer(
                *(_QWORD *)(v18 + 88),
                (unsigned int)&EVTDESC_BIND_GDISPRITEBITMAP_FIRST_TOKEN,
                (_DWORD)this,
                *((_QWORD *)this + 49),
                v18,
                *(_QWORD *)(v18 + 88),
                *((_QWORD *)this + 9));
            CWindowNode::NotifyDirtySurface(v19, a2, *((_BYTE *)this + 145));
          }
        }
      }
    }
    if ( ho )
      DeleteObject(ho);
  }
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v29);
}
