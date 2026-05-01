/*
 * XREFs of ?s_CreateInstance@CTrustedComponentForegroundControl@@SAJPEAUIImmersiveApplicationManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18008276C
 * Callers:
 *     ?InitializeTrustedComponentForegroundControl@CApplicationManager@@UEAAJAEBU_GUID@@@Z @ 0x180084980 (-InitializeTrustedComponentForegroundControl@CApplicationManager@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180033F70 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIDiscoverRecentItem@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIDis.c)
 *     ??0CTrustedComponentForegroundControl@@QEAA@PEAUIImmersiveApplicationManager@@@Z @ 0x180082844 (--0CTrustedComponentForegroundControl@@QEAA@PEAUIImmersiveApplicationManager@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTrustedComponentForegroundControl::s_CreateInstance(
        struct IImmersiveApplicationManager *a1,
        const struct _GUID *a2,
        void **a3)
{
  CTrustedComponentForegroundControl *v5; // rax
  CTrustedComponentForegroundControl *v6; // rdi
  const struct _GUID *v7; // r10
  volatile int *v8; // rdx
  int CanCastTo; // ebx
  _DWORD *v10; // r10
  int v11; // r8d

  *a3 = 0LL;
  v5 = (CTrustedComponentForegroundControl *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 || (v6 = CTrustedComponentForegroundControl::CTrustedComponentForegroundControl(v5, a1)) == 0LL )
    return (unsigned int)-2147024882;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_2a74d8da_47f0_47be_b3e6_195778432fb4, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a3 = v6;
    (*(void (__fastcall **)(CTrustedComponentForegroundControl *))(*(_QWORD *)v6 + 8LL))(v6);
    CanCastTo = 0;
    goto LABEL_8;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(v6, v7, a3);
  if ( CanCastTo != -2147467262 )
  {
LABEL_11:
    if ( CanCastTo < 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( !InlineIsEqualGUID(v10, v8) )
  {
    CanCastTo = v11;
    goto LABEL_11;
  }
  CanCastTo = 0;
  *a3 = (char *)v6 + 32;
LABEL_7:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
LABEL_8:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IDiscoverRecentItem>::Release(
    (__int64)v6,
    v8);
  return (unsigned int)CanCastTo;
}
