/*
 * XREFs of ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x18006CF14
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAJPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N1@Z @ 0x18006CE10 (-ApplyConfiguration@COverlayContext@@QEAAJPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@s.c)
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x1800D48B4 (--1CDirectFlipInfo@@QEAA@XZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x1800D48E8 (-Reset@COverlayContext@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Deactivate@CDirectFlipInfo@@IEAAJXZ @ 0x1801882E4 (-Deactivate@CDirectFlipInfo@@IEAAJXZ.c)
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x1801887F8 (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 */

void __fastcall CDirectFlipInfo::Reset(CDirectFlipInfo *this, __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rcx

  v3 = *((_DWORD *)this + 12) - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
          goto LABEL_5;
        CDirectFlipInfo::Deactivate(this);
      }
      LOBYTE(a2) = *((_BYTE *)this + 115);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 168LL))(*((_QWORD *)this + 2), a2);
    }
  }
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v6 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  std::shared_ptr<CRegion>::reset((char *)this + 32);
  *((_DWORD *)this + 24) = -1;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_WORD *)this + 56) = 256;
  *((_BYTE *)this + 114) = 0;
LABEL_5:
  *((_DWORD *)this + 12) = 0;
}
