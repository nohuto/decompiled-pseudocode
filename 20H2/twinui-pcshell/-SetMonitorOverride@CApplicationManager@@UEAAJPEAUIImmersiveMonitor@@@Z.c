/*
 * XREFs of ?SetMonitorOverride@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180151410
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetMonitorOverride(CApplicationManager *this, struct IImmersiveMonitor *a2)
{
  PSRWLOCK v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 49) + 32LL))(
    *((_QWORD *)this + 49),
    0LL,
    &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
    &v6);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, struct IImmersiveMonitor *))(*(_QWORD *)v6 + 24LL))(
    v6,
    1LL,
    *((unsigned int *)this + 194),
    a2);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( a2 )
  {
    LODWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 2;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&v4[6], (__int64)a2);
    v4 = CApplicationManagerUtility::g_pIAMGlobals;
  }
  else
  {
    HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 2;
  }
  ReleaseSRWLockExclusive(v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return 0LL;
}
