/*
 * XREFs of ??$MakeAndInitialize@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@V1234@W4TreeNodeEventType@234@AEAPEAUITreeNode@234@@Details@WRL@Microsoft@@YAJPEAPEAVNodeChangedEventArgs@ComposableShell@Internal@Windows@@$$QEAW4TreeNodeEventType@456@AEAPEAUITreeNode@456@@Z @ 0x18022788C
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@W4TreeNodeEventType@234@AEAPEAUITreeNode@234@@wil@@YA?AV?$ComPtr@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@$$QEAW4TreeNodeEventType@ComposableShell@Internal@Windows@@AEAPEAUITreeNode@567@@Z @ 0x180227C68 (--$MakeAndInitializeOrThrow@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@W4TreeNodeEv.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x18011C158 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x1801363F8 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??0NodeChangedEventArgs@ComposableShell@Internal@Windows@@QEAA@XZ @ 0x180229DE8 (--0NodeChangedEventArgs@ComposableShell@Internal@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComposableShell::NodeChangedEventArgs,Windows::Internal::ComposableShell::NodeChangedEventArgs,enum Windows::Internal::ComposableShell::TreeNodeEventType,Windows::Internal::ComposableShell::ITreeNode * &>(
        _QWORD *a1,
        int *a2,
        __int64 *a3)
{
  unsigned int v3; // esi
  Windows::Internal::ComposableShell::NodeChangedEventArgs *v7; // rax
  __int64 v8; // rax
  int v9; // edi
  _DWORD *v10; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a1 = 0LL;
  v7 = (Windows::Internal::ComposableShell::NodeChangedEventArgs *)operator new(
                                                                     0x60uLL,
                                                                     (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = Windows::Internal::ComposableShell::NodeChangedEventArgs::NodeChangedEventArgs(v7);
    v12 = 0LL;
    Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(&v12, v8);
    v9 = *a2;
    v10 = (_DWORD *)v12;
    wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)(v12 + 88), *a3);
    v10[12] = v9;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
    *a1 = v10;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
