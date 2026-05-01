/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180374338
 * Callers:
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180373A80 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180374A70 (-Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 *     ?get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180375CE0 (-get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU-$IVectorView@PEAUIVirtualDesktop@Mul.c)
 *     ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1803781AC (-CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ?VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@@Z @ 0x180435E50 (-VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(
        __int64 *a1)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1 + 1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  v3 = a1[2];
  result = *(unsigned int *)(v3 + 8);
  if ( *(_DWORD *)a1 < (unsigned int)result )
  {
    do
    {
      v5 = *(_QWORD *)v3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v5 + 32LL))(
                 v5,
                 *(unsigned int *)a1,
                 &GUID_ff72ffdd_be7e_43fc_9c03_ad81681e88e4,
                 v1);
      if ( (int)result >= 0 )
        break;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x35,
        (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)result);
      ++*(_DWORD *)a1;
      v3 = a1[2];
      result = *(unsigned int *)a1;
    }
    while ( (unsigned int)result < *(_DWORD *)(v3 + 8) );
  }
  return result;
}
