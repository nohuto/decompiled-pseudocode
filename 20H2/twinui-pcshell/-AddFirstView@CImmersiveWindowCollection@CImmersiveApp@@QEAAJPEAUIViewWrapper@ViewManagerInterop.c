/*
 * XREFs of ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180018354
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18001653C (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?PrepareApplicationForLaunch@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUITaskWindow@@@Z @ 0x180018300 (-PrepareApplicationForLaunch@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18001849C (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerI.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x1800197B0 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x18003C898 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddFirstView(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct ITaskWindow *a3)
{
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  __int128 *v8; // rcx
  __int64 v9; // rax
  int inserted; // ebx
  __int64 v12; // rax
  __int128 v13; // xmm1
  __m128i v14; // xmm2
  struct ITaskWindow *v15; // [rsp+40h] [rbp-39h] BYREF
  int v16; // [rsp+48h] [rbp-31h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct ITaskWindow **); // [rsp+50h] [rbp-29h] BYREF
  __int128 *v18; // [rsp+58h] [rbp-21h] BYREF
  _DWORD *v19; // [rsp+60h] [rbp-19h] BYREF
  __int64 v20; // [rsp+68h] [rbp-11h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v21; // [rsp+70h] [rbp-9h] BYREF
  __int64 v22; // [rsp+78h] [rbp-1h] BYREF
  __int128 v23; // [rsp+80h] [rbp+7h] BYREF
  __int128 v24; // [rsp+90h] [rbp+17h]
  __int64 v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]

  v15 = 0LL;
  if ( a3 )
  {
    v12 = *((_QWORD *)this + 20);
    LODWORD(v23) = 2;
    *((_QWORD *)&v23 + 1) = 0LL;
    *(_QWORD *)&v24 = (v12 + 112) & -(__int64)(v12 != 0);
    DWORD2(v24) = 0;
    v25 = 0LL;
    inserted = (*(__int64 (__fastcall **)(struct ITaskWindow *, __int128 *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a3 + 200LL))(
                 a3,
                 &v23,
                 a2);
    if ( inserted < 0 )
      goto LABEL_10;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&v15, (__int64)a3);
  }
  else
  {
    v6 = 0LL;
    v7 = (_DWORD *)((char *)this + 16);
    if ( *v7 <= v7[2]
      && v7[1] <= v7[3]
      && (v6 = v7,
          v13 = *(_OWORD *)((char *)this + 92),
          v14 = *(__m128i *)((char *)this + 108),
          v23 = *(_OWORD *)((char *)this + 76),
          v24 = v13,
          v25 = v14.m128i_i64[0],
          v26 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 8)),
          v7) )
    {
      v8 = &v23;
    }
    else
    {
      v8 = 0LL;
    }
    v9 = *((_QWORD *)this + 20);
    v18 = v8;
    v19 = v6;
    v20 = (v9 + 112) & -(__int64)(v9 != 0);
    v16 = 1;
    v21 = a2;
    v22 = 0LL;
    v15 = 0LL;
    v17 = 0LL;
    inserted = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,HWND__ * &,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &,enum TASK_WINDOW_TYPE &,IImmersiveApplicationInternal * &,tagRECT const * &,APPLICATION_VIEW_DATA const * &>(
                 (unsigned int)&v17,
                 (unsigned int)&v22,
                 (unsigned int)&v21,
                 (unsigned int)&v16,
                 (__int64)&v20,
                 (__int64)&v19,
                 (__int64)&v18);
    if ( inserted >= 0 )
      inserted = (**v17)(v17, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  if ( inserted >= 0 )
  {
    CImmersiveApp::CImmersiveWindowCollection::PrepareApplicationForLaunch(this, v15);
    inserted = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(this, v15, 0LL);
    if ( inserted >= 0 )
      CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, v15);
  }
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return (unsigned int)inserted;
}
