/*
 * XREFs of ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1800ECB6C
 * Callers:
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800EC140 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealization@@@Z @ 0x1800504FC (--0-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealizatio.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1801845A0 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ @ 0x180184698 (-UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::Present(
        CDirectFlipInfo *this,
        _QWORD *a2,
        unsigned int a3,
        __int128 *a4,
        __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD **); // rcx
  int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  __int64 (__fastcall *v16)(_QWORD *, __int64 *, _QWORD); // rsi
  int v17; // eax
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, _BYTE *); // rcx
  int v20; // r15d
  __int128 v21; // xmm0
  __int64 (__fastcall ***v22)(_QWORD, _BYTE *); // rcx
  __int64 v23; // rax
  unsigned int v24; // esi
  BOOL v25; // ebx
  const void *updated; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD *v31; // [rsp+60h] [rbp-31h] BYREF
  __int64 v32; // [rsp+68h] [rbp-29h] BYREF
  __int64 v33; // [rsp+70h] [rbp-21h] BYREF
  __int128 v34; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v35[16]; // [rsp+88h] [rbp-9h] BYREF

  v5 = 0;
  if ( CDirectFlipInfo::RenderingRealizationChanged(this)
    && (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 264LL))(*((_QWORD *)this + 2)) <= 2 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
    wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
      &v33,
      v10);
    if ( !v33 )
    {
      v5 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003292412, 0x282u, 0LL);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33);
      return v5;
    }
    v32 = 0LL;
    v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))(*(int *)(*(_QWORD *)(v33 + 8) + 4LL) + v33 + 8);
    v31 = 0LL;
    v13 = (**v12)(v12, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, &v31);
    v5 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x248u, 0LL);
    }
    else
    {
      if ( *((_DWORD *)this + 13) == 1 )
      {
        v22 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))((char *)a2 + *(int *)(a2[1] + 8LL) + 8);
        v23 = (**v22)(v22, v35);
        v21 = *a4;
        v20 = *(_DWORD *)(v23 + 8);
LABEL_12:
        v24 = 0;
        v34 = v21;
        v25 = 1;
        if ( !*((_BYTE *)this + 113) )
        {
          if ( *((_BYTE *)this + 114) )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a2 + 96LL))(a2) )
            {
              v25 = (*(__int64 (__fastcall **)(_QWORD *))(*v31 + 96LL))(v31) != 0;
              if ( !v25 )
              {
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v31 + 112LL))(v31) )
                  v24 = 512;
              }
            }
          }
        }
        updated = CDirectFlipInfo::UpdateHDRMetaData(this);
        v27 = (*(__int64 (__fastcall **)(_QWORD *, BOOL, _QWORD, _QWORD, __int64, int, _DWORD, const void *, __int128 *, __int64))(*a2 + 136LL))(
                a2,
                v25,
                v24,
                a3,
                v32,
                v20,
                *((_DWORD *)this + 16),
                updated,
                &v34,
                a5);
        v5 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x27Cu, 0LL);
        else
          *((_BYTE *)this + 113) = 0;
        goto LABEL_22;
      }
      v15 = v31;
      v16 = *(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD))(*v31 + 128LL);
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      v17 = v16(v15, &v32, 0LL);
      v5 = v17;
      if ( v17 >= 0 )
      {
        v19 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))((char *)v31 + *(int *)(v31[1] + 12LL) + 8);
        v20 = *(_DWORD *)((**v19)(v19, v35) + 8);
        v21 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v31 + 40LL))(v31);
        goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x24Eu, 0LL);
    }
LABEL_22:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v32);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v31);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33);
    if ( v5 == -2003304442 )
      *((_BYTE *)this + 115) = 1;
    return v5;
  }
  if ( (***(unsigned __int8 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this) )
  {
    v5 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2003304309, 0x28Au, 0LL);
  }
  return v5;
}
