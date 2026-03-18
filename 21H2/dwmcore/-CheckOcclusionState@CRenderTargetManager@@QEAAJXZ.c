/*
 * XREFs of ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18007DBDC
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateCompositorClockBoost@CRenderTargetManager@@AEAAXXZ @ 0x180080CC8 (-UpdateCompositorClockBoost@CRenderTargetManager@@AEAAXXZ.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180081138 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3118 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCRenderTarget@@@?$vector@PEAVCRenderTarget@@V?$allocator@PEAVCRenderTarget@@@std@@@std@@QEAAPEAPEAVCRenderTarget@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800F539C (--$_Emplace_reallocate@AEBQEAVCRenderTarget@@@-$vector@PEAVCRenderTarget@@V-$allocator@PEAVCRend.c)
 *     ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x1800F62A0 (-NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800F7B94 (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::CheckOcclusionState(CRenderTargetManager *this)
{
  struct CRenderTarget **v1; // rbx
  unsigned int v2; // r15d
  struct CRenderTarget **v3; // rsi
  __int64 v4; // r12
  __int64 v6; // r8
  ULONGLONG **v7; // rsi
  __int64 *v8; // r13
  __int64 *v9; // rbx
  int v10; // esi
  __int64 v11; // r15
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r14d
  __int64 v16; // r8
  ULONGLONG *v18; // rbx
  __int64 v19; // rcx
  ULONGLONG v20; // rcx
  ULONGLONG v21; // r14
  size_t v22; // r8
  char *v23; // rcx
  ULONGLONG *v24; // rbx
  __int64 v25; // [rsp+30h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+38h] [rbp-18h] BYREF

  v1 = (struct CRenderTarget **)*((_QWORD *)this + 4);
  v2 = 0;
  v3 = (struct CRenderTarget **)*((_QWORD *)this + 5);
  v4 = 0LL;
  if ( v1 != v3 )
  {
    do
      CRenderTargetManager::AddRenderTarget(this, *v1++);
    while ( v1 != v3 );
    v1 = (struct CRenderTarget **)*((_QWORD *)this + 4);
  }
  *((_QWORD *)this + 5) = v1;
  *((_QWORD *)this + 71) = GetCurrentFrameId();
  *((_BYTE *)this + 581) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start,
      v6,
      1u,
      &v26);
  v7 = (ULONGLONG **)((char *)this + 8);
  *((_BYTE *)this + 576) = 1;
  v8 = (__int64 *)*((_QWORD *)this + 2);
  v9 = (__int64 *)*((_QWORD *)this + 1);
  if ( v9 != v8 )
  {
    v10 = 0;
    do
    {
      v11 = *v9;
      v12 = *v9 + *(int *)(*(_QWORD *)(*v9 + 80) + 12LL) + 80LL;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v15 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x32u);
        if ( v10 >= 0 )
          v10 = v15;
      }
      else if ( v13 == 142213121 )
      {
        v25 = 0LL;
        if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v11, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v25) >= 0 )
          v4 ^= v11;
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v25);
      }
      else
      {
        *((_BYTE *)this + 581) = 0;
      }
      ++v9;
    }
    while ( v9 != v8 );
    LODWORD(v25) = v10;
    v7 = (ULONGLONG **)((char *)this + 8);
    v2 = v25;
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  CRenderTargetManager::UpdateCompositorClockBoost(this);
  if ( *((_BYTE *)this + 578) || *((_BYTE *)this + 579) )
  {
    v18 = *v7;
    if ( (unsigned __int64)(v7[1] - *v7) > 1 )
    {
      while ( v18 != *((ULONGLONG **)this + 2) )
      {
        v20 = *v18;
        v25 = 0LL;
        if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v20, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v25) >= 0
          && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25) )
        {
          if ( v18 != *v7 )
          {
            v21 = *v18;
            v22 = *((_QWORD *)this + 2) - (_QWORD)(v18 + 1);
            v26.Ptr = *v18;
            memmove_0(v18, v18 + 1, v22);
            *((_QWORD *)this + 2) -= 8LL;
            v23 = (char *)v7[1];
            v24 = *v7;
            if ( v23 == (char *)v7[2] )
            {
              std::vector<CRenderTarget *>::_Emplace_reallocate<CRenderTarget * const &>(v7, *v7, &v26);
            }
            else if ( v24 == (ULONGLONG *)v23 )
            {
              *(_QWORD *)v23 = v21;
              ++v7[1];
            }
            else
            {
              *(_QWORD *)v23 = *((_QWORD *)v23 - 1);
              ++v7[1];
              memmove_0(v24 + 1, v24, v23 - (char *)v24 - 8);
              *v24 = v21;
            }
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v25);
          break;
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v25);
        ++v18;
      }
    }
    v19 = *(_QWORD *)(*(_QWORD *)this + 488LL);
    if ( v19 )
      *(_BYTE *)(v19 + 16) = 1;
    *((_BYTE *)this + 579) = 0;
  }
  if ( v4 != *((_QWORD *)this + 67) )
  {
    *((_QWORD *)this + 67) = v4;
    CRenderTargetManager::NotifyTargetsOfOcclusionChange(this);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop,
      v16,
      1u,
      &v26);
  return v2;
}
