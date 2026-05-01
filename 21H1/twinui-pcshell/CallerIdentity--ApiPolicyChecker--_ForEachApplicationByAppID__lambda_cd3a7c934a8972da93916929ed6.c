/*
 * XREFs of CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6f73f0___ @ 0x1804470C4
 * Callers:
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x1804478F0 (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180446388 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     _lambda_cd3a7c934a8972da93916929ed6f73f0_::operator() @ 0x180447340 (_lambda_cd3a7c934a8972da93916929ed6f73f0_--operator().c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6f73f0___(
        struct IUnknown *this,
        __int64 a2)
{
  struct IObjectArray **v4; // r8
  int AllApplicationsByAppID; // ebx
  char v6; // si
  unsigned int v7; // edi
  __int64 v8; // rbx
  int v9; // eax
  unsigned __int16 v11[4]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+38h] [rbp-8h] BYREF
  char v13; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+38h] BYREF

  *(_QWORD *)v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v11);
  AllApplicationsByAppID = CallerIdentity::FindAllApplicationsByAppID(this, v11, v4);
  if ( AllApplicationsByAppID >= 0 )
  {
    v6 = 1;
    v13 = 1;
    v7 = 0;
    for ( AllApplicationsByAppID = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v11 + 24LL))(
                                     *(_QWORD *)v11,
                                     &v14); AllApplicationsByAppID >= 0; ++v7 )
    {
      if ( !v6 || v7 >= v14 )
        break;
      v12 = 0LL;
      v8 = *(_QWORD *)v11;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      AllApplicationsByAppID = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL))(
                                 v8,
                                 v7,
                                 &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                                 &v12);
      if ( AllApplicationsByAppID >= 0 )
      {
        v9 = lambda_cd3a7c934a8972da93916929ed6f73f0_::operator()(a2, v12, &v13);
        v6 = v13;
        AllApplicationsByAppID = v9;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v11);
  return (unsigned int)AllApplicationsByAppID;
}
