/*
 * XREFs of ??R_lambda_c8b199a0feb076873244f725fed1af37_@@QEBAXXZ @ 0x180049C00
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_c8b199a0feb076873244f725fed1af37_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180049BF0 (-Run@-$CTaskWrapper@V_lambda_c8b199a0feb076873244f725fed1af37_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@$$QEAPEAUHSTRING__@@1@Z @ 0x180049C94 (--$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@.c)
 *     ??$AsAgile@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@YAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAVAgileRef@01@@Z @ 0x18004A5D8 (--$AsAgile@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@YAJPEAUIAct.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x18004A94C (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall _lambda_c8b199a0feb076873244f725fed1af37_::operator()(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(__int64 **)a1;
  v8 = 0LL;
  v3 = v1[1];
  v4 = *v1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  **(_DWORD **)(a1 + 16) = Microsoft::WRL::Details::MakeAndInitialize<CLaunchActivatedEventArgs,CLaunchActivatedEventArgs,HSTRING__ *,HSTRING__ *>(
                             &v8,
                             v4,
                             v3);
  if ( **(int **)(a1 + 16) >= 0 )
  {
    v5 = v8;
    v9 = *(_QWORD *)(a1 + 8);
    v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v9);
    **(_DWORD **)(a1 + 16) = Microsoft::WRL::AsAgile<Windows::ApplicationModel::Activation::IActivatedEventArgs>(v5, v6);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
}
