/*
 * XREFs of ?CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z @ 0x18042CE9C
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180428C38 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedPresentationOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007D7F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedPrese.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z @ 0x18042C96C (--0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18042D008 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawEleme_ea_18042D008.c)
 */

__int64 __fastcall CDragVisualAcc_CreateInstance(struct IDragVisual *a1, const struct _GUID *a2, CDragVisualAcc **a3)
{
  CDragVisualAcc *v5; // rax
  CDragVisualAcc *v6; // rdi
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  int CanCastTo; // ebx
  CDragVisualAcc *v10; // r8
  __int64 v11; // r9
  volatile int *v12; // rdx

  *a3 = 0LL;
  v5 = (CDragVisualAcc *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 || (v6 = CDragVisualAcc::CDragVisualAcc(v5, a1)) == 0LL )
    return (unsigned int)-2147024882;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_959cb746_add4_483a_8acd_059d06f3798a, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a3 = v6;
    (*(void (__fastcall **)(CDragVisualAcc *))(*(_QWORD *)v6 + 8LL))(v6);
    CanCastTo = 0;
    goto LABEL_12;
  }
  if ( InlineIsEqualGUID(v7, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c) )
  {
    *a3 = v6;
LABEL_6:
    CanCastTo = 0;
LABEL_10:
    (*(void (__fastcall **)(CDragVisualAcc *))(*(_QWORD *)*a3 + 8LL))(*a3);
    goto LABEL_12;
  }
  if ( InlineIsEqualGUID(v8, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87) )
  {
    *a3 = v10;
    goto LABEL_6;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>::CanCastTo(
                (char *)v10 + 8,
                v11,
                a3);
  if ( CanCastTo >= 0 )
    goto LABEL_10;
LABEL_12:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedPresentationOperations,Microsoft::WRL::FtmBase>::Release(
    (__int64)v6,
    v12);
  return (unsigned int)CanCastTo;
}
