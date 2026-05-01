/*
 * XREFs of ?GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPEAX@Z @ 0x1802E9DAC
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x1802E8EC0 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWi.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000BE8C (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180159770 (-erase@-$vector@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_________lambda_0f2c79fb5a4f581c774178e7b76926ba___ @ 0x1802E83E4 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_IX.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlExplorerHostShellComponent::GrabAvailableWindowForSize(
        XamlExplorerHostShellComponent *this,
        struct tagRECT *a2,
        bool *a3,
        const struct _GUID *a4,
        void **a5)
{
  RTL_SRWLOCK *v8; // rdi
  void **v9; // r12
  __int64 *v10; // r8
  __int64 result; // rax
  void **v12; // rdx
  __int64 *v13; // rbx
  int v14; // eax
  unsigned int v15; // ebx
  const char *v16; // r9
  int v17[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  const struct _GUID *v19; // [rsp+78h] [rbp+20h] BYREF

  v19 = a4;
  v8 = (RTL_SRWLOCK *)((char *)this + 232);
  AcquireSRWLockExclusive((PSRWLOCK)this + 29);
  *a3 = 0;
  v9 = a5;
  *a5 = 0LL;
  v10 = (__int64 *)*((_QWORD *)this + 26);
  if ( *((__int64 **)this + 25) == v10 )
  {
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    return 2147943568LL;
  }
  else
  {
    v19 = 0LL;
    *(struct tagRECT *)v17 = *a2;
    try
    {
      std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_________lambda_0f2c79fb5a4f581c774178e7b76926ba___(
        (__int64 **)&a5,
        *((__int64 **)this + 25),
        v10,
        (__int64)v17);
      v12 = (void **)*((_QWORD *)this + 26);
      v13 = (__int64 *)a5;
      if ( a5 == v12 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v19, (__int64 *)v12 - 1);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 26) - 8LL));
        *((_QWORD *)this + 26) -= 8LL;
      }
      else
      {
        *a3 = 1;
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v19, v13);
        std::vector<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::erase(
          (__int64)this + 200,
          &a5,
          (__int64)v13);
      }
      v14 = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&v19->Data1)(
              v19,
              &GUID_a9728204_899b_46a5_9344_43e74614d24b,
              v9);
      v15 = v14;
      if ( v14 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10F,
          (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
          (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      if ( v8 )
        ReleaseSRWLockExclusive(v8);
      result = v15;
    }
    catch ( ... )
    {
      LODWORD(v19) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x111,
                       (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
                       v16);
      return (unsigned int)v19;
    }
  }
  return result;
}
