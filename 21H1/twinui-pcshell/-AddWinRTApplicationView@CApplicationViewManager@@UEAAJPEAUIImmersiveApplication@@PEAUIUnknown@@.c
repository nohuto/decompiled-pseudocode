/*
 * XREFs of ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x18000BBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BD00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x18000BDA0 (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 *     ??0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z @ 0x18000E348 (--0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180028660 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180130CE4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::AddWinRTApplicationView(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IUnknown *a3)
{
  CWinRTApplicationView *v5; // rbx
  CWinRTApplicationView *v6; // rax
  CWinRTApplicationView *v7; // r14
  int v8; // eax
  int v9; // esi
  char *Ptr; // rdx
  CWinRTApplicationView **v11; // rdx
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CWinRTApplicationView *v17; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0LL;
  v15 = 0;
  v6 = (CWinRTApplicationView *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
  {
    v5 = CWinRTApplicationView::CWinRTApplicationView(v6, a2);
    v15 = (int)v5;
    v7 = v5;
  }
  if ( !v7 )
  {
    v9 = -2147024882;
    v13 = 2147942414LL;
    v14 = 533LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)v13,
      v15);
    goto LABEL_13;
  }
  v8 = CWinRTApplicationView::RuntimeClassInitialize(v5);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = (unsigned int)v8;
    v14 = 534LL;
    goto LABEL_18;
  }
  AcquireSRWLockExclusive(this + 67);
  v17 = v7;
  (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v7 + 8LL))(v7);
  v9 = 0;
  Ptr = (char *)this[69].Ptr;
  if ( Ptr != this[71].Ptr
    || (v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               &this[68],
               Ptr + 1),
        v9 >= 0) )
  {
    v11 = (CWinRTApplicationView **)((char *)this[68].Ptr + 8 * (__int64)this[69].Ptr++);
    if ( v11 )
    {
      *v11 = 0LL;
      if ( v11 != &v17 )
      {
        *v11 = v7;
        v17 = 0LL;
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x219,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v9,
      v15);
  else
    CApplicationViewManager::RaiseApplicationViewChanged(this, v7, 0LL);
  if ( this != (RTL_SRWLOCK *)-536LL )
    ReleaseSRWLockExclusive(this + 67);
LABEL_13:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v5);
  return (unsigned int)v9;
}
