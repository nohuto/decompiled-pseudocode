/*
 * XREFs of ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x180183EF0
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAJPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N1@Z @ 0x1800931CC (-ApplyConfiguration@COverlayContext@@QEAAJPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@s.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?CalcIndependentFlipSupport@CDirectFlipInfo@@IEAAXXZ @ 0x18018415C (-CalcIndependentFlipSupport@CDirectFlipInfo@@IEAAXXZ.c)
 *     ?CheckCustomPresentDuration@CDirectFlipInfo@@IEAA_NXZ @ 0x1801841C8 (-CheckCustomPresentDuration@CDirectFlipInfo@@IEAA_NXZ.c)
 *     ?IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x18018455C (-IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?SetIndependentFlip@CDirectFlipInfo@@QEAAJ_N@Z @ 0x1801845F8 (-SetIndependentFlip@CDirectFlipInfo@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::Activate(CDirectFlipInfo *this, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int v4; // esi
  int v6; // eax
  CDirectFlipInfo *v7; // rcx
  bool v8; // dl
  char v9; // di
  int v10; // eax
  __int64 v11; // rcx

  v3 = *((_DWORD *)this + 12);
  v4 = 0;
  if ( v3 != 4 )
    CDirectFlipInfo::CalcIndependentFlipSupport(this);
  if ( *((_DWORD *)this + 24) != -1 )
  {
    if ( CDirectFlipInfo::IsIndependentFlip(this) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 264LL))(*((_QWORD *)this + 2));
      v7 = this;
      if ( v6 == -1 )
      {
        v8 = 0;
LABEL_11:
        CDirectFlipInfo::SetIndependentFlip(v7, v8);
        goto LABEL_12;
      }
      if ( !CDirectFlipInfo::CheckCustomPresentDuration(this) )
        goto LABEL_12;
    }
    else
    {
      CDirectFlipInfo::CheckCustomPresentDuration(this);
    }
    v7 = this;
    v8 = 1;
    goto LABEL_11;
  }
LABEL_12:
  v9 = 0;
  if ( *(_BYTE *)(*((_QWORD *)g_pComposition + 11) + 129LL) )
    v9 = *((_DWORD *)this + 13) != 3;
  if ( v3 != 4 || v9 != *((_BYTE *)this + 114) )
  {
    LOBYTE(a2) = v9;
    LOBYTE(a3) = *((_DWORD *)this + 13) == 1;
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 2) + 208LL))(
            *((_QWORD *)this + 2),
            a2,
            a3);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x139u, 0LL);
    }
    else
    {
      *((_BYTE *)this + 114) = v9;
      *((_DWORD *)this + 12) = 4;
    }
  }
  return v4;
}
