/*
 * XREFs of ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x1800733D0
 * Callers:
 *     ?SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z @ 0x180199DF0 (-SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x180416470 (-SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsAgile@@YA_NPEAUIUnknown@@@Z @ 0x1800734C4 (-IsAgile@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x180140778 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ?Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z @ 0x180140BD4 (-Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z.c)
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x18014161C (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWRLObjectWithGITSite::SetSite(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  bool v4; // si
  __int64 v5; // rcx
  PVOID v6; // rcx
  int v7; // esi
  PVOID v9; // rdx
  unsigned int v10; // esi
  unsigned int Ptr; // ebp
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v12 = 0LL;
    v4 = !this
      || (*(int (__fastcall **)(RTL_SRWLOCK *, GUID *, __int64 *))this->Ptr)(
           this,
           &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90,
           &v12) >= 0;
    v5 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    if ( v4 && !IsAgile(a2) )
    {
      LODWORD(v12) = 0;
      v7 = GlobalInterfaceTable::Marshal(a2, &GUID_00000000_0000_0000_c000_000000000046, (unsigned int *)&v12);
      if ( v7 >= 0 )
      {
        AcquireSRWLockExclusive(this + 2);
        Ptr = (unsigned int)this[3].Ptr;
        LODWORD(this[3].Ptr) = v12;
        ReleaseSRWLockExclusive(this + 2);
        if ( Ptr )
          GlobalInterfaceTable::Revoke(Ptr);
      }
    }
    else
    {
      AcquireSRWLockExclusive(this + 2);
      if ( this[4].Ptr != a2 )
      {
        ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
        v6 = this[4].Ptr;
        this[4].Ptr = a2;
        if ( v6 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 16LL))(v6);
      }
      ReleaseSRWLockExclusive(this + 2);
      return 0;
    }
  }
  else
  {
    AcquireSRWLockExclusive(this + 2);
    v12 = 0LL;
    v9 = this[4].Ptr;
    this[4].Ptr = 0LL;
    Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(&v12, v9);
    v10 = (unsigned int)this[3].Ptr;
    LODWORD(this[3].Ptr) = 0;
    ReleaseSRWLockExclusive(this + 2);
    if ( v10 )
      GlobalInterfaceTable::Revoke(v10);
    else
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v7 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  return (unsigned int)v7;
}
