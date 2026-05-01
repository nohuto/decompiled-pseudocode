/*
 * XREFs of ?OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180073750
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180073850 (-GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::OnPositionChanged(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2)
{
  __int64 v3; // rdi
  int (__fastcall *v4)(__int64, struct IApplicationFrameProxy *, GUID *, __int64 *); // rbx
  __int64 v6; // [rsp+50h] [rbp+20h] BYREF
  struct IApplicationFrameProxy *v7; // [rsp+60h] [rbp+30h] BYREF
  HWND v8; // [rsp+68h] [rbp+38h] BYREF

  if ( *((_DWORD *)this + 36)
    && (*(int (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a2 + 24LL))(a2, &v8) >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
    if ( (int)CApplicationFrameService::GetFrameByWindow((CApplicationFrameService *)((char *)this - 8), v8, &v7) >= 0 )
    {
      v6 = 0LL;
      v3 = *((_QWORD *)this + 15);
      v4 = *(int (__fastcall **)(__int64, struct IApplicationFrameProxy *, GUID *, __int64 *))(*(_QWORD *)v3 + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
      if ( v4(v3, v7, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v6) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 488LL))(v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  }
  return 0LL;
}
