/*
 * XREFs of ?IsApplicationWindowPresented@CImmersiveApp@@UEAAHXZ @ 0x18017ED10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CImmersiveApp::IsApplicationWindowPresented(CImmersiveApp *this)
{
  RTL_SRWLOCK *v2; // rbx
  BOOL v3; // edi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK v6; // [rsp+38h] [rbp+10h]

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 43) + 64LL))(
                    *((_QWORD *)this + 43),
                    &v5) != 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
