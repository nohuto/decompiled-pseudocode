/*
 * XREFs of ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x180031F30
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002A690 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800344F8 (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x180031EF0 (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800342C0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18007AFB4 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18009EB7C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180154328 (McTemplateU0qqq_EventWriteTransfer.c)
 */

__int64 __fastcall CDisplayManager::UpdateDXGIFactory(CDisplayManager *this)
{
  HRESULT v1; // eax
  unsigned int v2; // ebx
  CDisplayManager *v3; // rax
  CDisplayManager *v4; // rcx
  CComposition *v5; // rcx
  int CurrentFrameId; // eax
  int v8; // ecx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppFactory; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+48h] [rbp+10h] BYREF

  ppFactory = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    CurrentFrameId = GetCurrentFrameId();
    McTemplateU0qqq_EventWriteTransfer(v8, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, CurrentFrameId, 0);
  }
  ppFactory = 0LL;
  v1 = CreateDXGIFactory1(&GUID_7632e1f5_ee65_4dca_87fd_84cd75f8838d, &ppFactory);
  v2 = v1;
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x218,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)(unsigned int)v1,
      v9);
  }
  else
  {
    v12 = &g_DisplayManager;
    EnterCriticalSection(&g_DisplayManager);
    if ( qword_180349558 && !byte_18034956D && (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      (*(void (__fastcall **)(CDisplayManager *, _QWORD))(*(_QWORD *)qword_180349558 + 184LL))(
        qword_180349558,
        (unsigned int)dword_180349568);
      dword_180349568 = 0;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v3 = (CDisplayManager *)ppFactory;
    v4 = qword_180349558;
    ppFactory = 0LL;
    qword_180349558 = v3;
    if ( v4 )
      (*(void (__fastcall **)(CDisplayManager *))(*(_QWORD *)v4 + 16LL))(v4);
    byte_18034956D = GetSystemMetrics(4096) != 0;
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
    CComposition::ResetTokenThread(v5);
    v2 = 0;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&ppFactory);
  return v2;
}
