/*
 * XREFs of ??$MakeAndInitialize@VCoverWindowAcc@@V1@AEAPEAUHWND__@@AEAPEBGAEAPEAUIRawElementProviderFragment@@@Details@WRL@Microsoft@@YAJPEAPEAVCoverWindowAcc@@AEAPEAUHWND__@@AEAPEBGAEAPEAUIRawElementProviderFragment@@@Z @ 0x1803F7E38
 * Callers:
 *     ?CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F8078 (-CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0CoverWindowAcc@@QEAA@XZ @ 0x1803F7EE0 (--0CoverWindowAcc@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CoverWindowAcc@@QEAAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@@Z @ 0x1803F8694 (-RuntimeClassInitialize@CoverWindowAcc@@QEAAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CoverWindowAcc,CoverWindowAcc,HWND__ * &,unsigned short const * &,IRawElementProviderFragment * &>(
        CoverWindowAcc **a1,
        HWND *a2,
        const unsigned __int16 **a3,
        struct IRawElementProviderFragment **a4)
{
  CoverWindowAcc *v8; // rax
  int v9; // edi
  CoverWindowAcc *v10; // rax
  struct IRawElementProviderFragment *v11; // r9
  const unsigned __int16 *v12; // r8
  CoverWindowAcc *v13; // rbx
  HWND v14; // rdx
  CoverWindowAcc *v16; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CoverWindowAcc *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = CoverWindowAcc::CoverWindowAcc(v8);
    v11 = *a4;
    v12 = *a3;
    v13 = v10;
    v14 = *a2;
    v16 = v10;
    v9 = CoverWindowAcc::RuntimeClassInitialize(v10, v14, v12, v11);
    if ( v9 >= 0 )
    {
      if ( v13 )
        (*(void (__fastcall **)(CoverWindowAcc *))(*(_QWORD *)v13 + 8LL))(v13);
      *a1 = v13;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
