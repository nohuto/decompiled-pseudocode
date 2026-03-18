/*
 * XREFs of ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801DEEC8
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x1800BC2AC (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcEarlyWakeup@CDirectFlipInfo@@IEAAXXZ @ 0x180103C04 (-CalcEarlyWakeup@CDirectFlipInfo@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180113274 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?CalcIndependentFlipSupport@CDirectFlipInfo@@IEAAXXZ @ 0x1801DF234 (-CalcIndependentFlipSupport@CDirectFlipInfo@@IEAAXXZ.c)
 *     ?CheckCustomPresentDuration@CDirectFlipInfo@@IEAA_NXZ @ 0x1801DF2B4 (-CheckCustomPresentDuration@CDirectFlipInfo@@IEAA_NXZ.c)
 *     ?DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ @ 0x1801DF414 (-DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?EnableIndependentFlip@CDirectFlipInfo@@QEAAJXZ @ 0x1801DF4A4 (-EnableIndependentFlip@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?GetVidPnSourceId@CDirectFlipInfo@@IEBAIXZ @ 0x1801DF6C8 (-GetVidPnSourceId@CDirectFlipInfo@@IEBAIXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::Activate(CDirectFlipInfo *this)
{
  int v1; // edi
  unsigned int v2; // ebx
  char v3; // si
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, __int64, unsigned int); // rdi
  unsigned int VidPnSourceId; // ebx
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 12);
  v2 = 0;
  v3 = *((_BYTE *)this + 124);
  if ( v1 != 3 )
    CDirectFlipInfo::CalcIndependentFlipSupport(this);
  CDirectFlipInfo::CalcEarlyWakeup(this);
  if ( v1 != 3 || v3 != *((_BYTE *)this + 124) )
  {
    v5 = *((_QWORD *)this + 2);
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, unsigned int))(*(_QWORD *)v5 + 240LL);
    VidPnSourceId = CDirectFlipInfo::GetVidPnSourceId(this);
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 184LL))(*(_QWORD *)this);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v14);
    LOBYTE(v9) = *((_BYTE *)this + 124);
    v10 = v6(v5, *((_QWORD *)this + 3), v9, v14, VidPnSourceId);
    v2 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0xFDu);
      return v2;
    }
    *((_DWORD *)this + 12) = 3;
  }
  if ( *((_BYTE *)this + 122) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 312LL))(*((_QWORD *)this + 2)) )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 328LL))(*((_QWORD *)this + 2)) == -1 )
      {
        CDirectFlipInfo::DisableIndependentFlip(this);
      }
      else
      {
        LOBYTE(v12) = 1;
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 216LL))(*((_QWORD *)this + 2), v12);
        if ( CDirectFlipInfo::CheckCustomPresentDuration(this) )
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 352LL))(
            *((_QWORD *)this + 2),
            *((_QWORD *)this + 3),
            *((unsigned int *)this + 17));
      }
    }
    else if ( (int)CDirectFlipInfo::EnableIndependentFlip(this) >= 0 )
    {
      CDirectFlipInfo::CheckCustomPresentDuration(this);
      if ( *((_DWORD *)this + 17) )
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 352LL))(
          *((_QWORD *)this + 2),
          *((_QWORD *)this + 3));
    }
  }
  *((_BYTE *)this + 121) |= CDirectFlipInfo::RenderingRealizationChanged(this);
  return v2;
}
