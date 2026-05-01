/*
 * XREFs of CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_aed1de138aa46e36192d6ffea72541fd___ @ 0x18046A920
 * Callers:
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x18046AB68 (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CoCreateInstance_0 @ 0x18008E33F (CoCreateInstance_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_aed1de138aa46e36192d6ffea72541fd___(
        __int64 a1,
        _QWORD *a2)
{
  HRESULT Instance_0; // ebx
  LPVOID v5; // rbx
  __int64 v6; // rbx
  bool v7; // si
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF

  ppv[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  Instance_0 = CoCreateInstance_0(
                 &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                 0LL,
                 0x404u,
                 &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                 ppv);
  if ( Instance_0 >= 0 )
  {
    v12 = 0LL;
    v5 = ppv[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    Instance_0 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
                   v5,
                   &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                   &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                   &v12);
    if ( Instance_0 >= 0 )
    {
      v15 = 0LL;
      v6 = v12;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      Instance_0 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 40LL))(v6, a1, &v15);
      if ( Instance_0 >= 0 )
      {
        v7 = 1;
        v8 = 0;
        for ( Instance_0 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 24LL))(v15, &v14);
              Instance_0 >= 0;
              ++v8 )
        {
          if ( !v7 || v8 >= v14 )
            break;
          v11 = 0LL;
          v9 = v15;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
          Instance_0 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v9 + 32LL))(
                         v9,
                         v8,
                         &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                         &v11);
          if ( Instance_0 >= 0 )
          {
            Instance_0 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 216LL))(v11, *a2);
            if ( Instance_0 >= 0 )
              v7 = *(_DWORD *)*a2 == 0;
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  return (unsigned int)Instance_0;
}
