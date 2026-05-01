/*
 * XREFs of ?UpdateViewEngagementFlags@CImmersiveApp@@UEAAJW4VIEW_ENGAGEMENT_FLAGS@@0@Z @ 0x18007A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::UpdateViewEngagementFlags(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  *(_DWORD *)(a1 + 816) |= a2;
  *(_DWORD *)(a1 + 820) = a3 | *(_DWORD *)(a1 + 820) & ~a3;
  if ( a2 )
  {
    v7 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)(a1 + 16) + 352LL))(
           a1 + 16,
           1LL,
           &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
           &v7) >= 0 )
    {
      v6 = 0LL;
      if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v7 + 40LL))(
             v7,
             &GUID_f4a53d68_890b_4931_bdbf_71158377eece,
             &v6) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 656LL))(v6, a2, a3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  }
  return 0LL;
}
