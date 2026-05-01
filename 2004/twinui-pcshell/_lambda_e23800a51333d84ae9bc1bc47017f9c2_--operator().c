/*
 * XREFs of _lambda_e23800a51333d84ae9bc1bc47017f9c2_::operator() @ 0x1800322FC
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___::operator() @ 0x180088870 (CDelayIAMOperations--CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_e23800a51333d84ae9bc1bc47017f9c2_::operator()(_QWORD **a1)
{
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF
  int v5; // [rsp+60h] [rbp+28h] BYREF
  int v6; // [rsp+64h] [rbp+2Ch]
  __int64 v7; // [rsp+68h] [rbp+30h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD *, __int64 *))(*a1[1] + 496LL))(a1[1], &v4) >= 0
    && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 24LL))(v4, &v7) >= 0 )
  {
    v3 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, __int64, GUID *, GUID *, __int64 *))(*(_QWORD *)(*a1)[70] + 88LL))(
           (*a1)[70],
           v7,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &v3) >= 0 )
    {
      v5 = *((_DWORD *)*a1 + 240);
      v6 = 0;
      (*(void (__fastcall **)(_QWORD *, __int64, int *, _QWORD))(*a1[1] + 456LL))(a1[1], v3, &v5, 0LL);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
}
