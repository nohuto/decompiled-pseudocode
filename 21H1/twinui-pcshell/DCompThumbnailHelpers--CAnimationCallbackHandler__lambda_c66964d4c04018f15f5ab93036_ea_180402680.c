/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a___::OnStoryboardStatusChanged @ 0x180402680
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIStoryboardExtraData@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStoryboardExtraData@@@WRL@Microsoft@@@Details@12@@Z @ 0x18038E9B8 (--$As@UIStoryboardExtraData@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 */

__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a___::OnStoryboardStatusChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  void (*v7)(void); // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+38h] [rbp-10h] BYREF

  if ( a3 != 1 )
  {
    if ( a3 == 5 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 40LL))(
        *(_QWORD *)(a1 + 24),
        0LL,
        0LL,
        0LL);
      v6 = *(_QWORD *)(a1 + 32);
      if ( !v6 )
        return 0LL;
      v7 = *(void (**)(void))(*(_QWORD *)v6 + 48LL);
    }
    else
    {
      if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
        return 0LL;
      v8 = *(_QWORD *)(a1 + 32);
      if ( !v8 )
        return 0LL;
      v7 = *(void (**)(void))(*(_QWORD *)v8 + 56LL);
    }
    v7();
    return 0LL;
  }
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  if ( (*(int (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 136LL))(a2, &v10, 0LL) >= 0 )
  {
    v11[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IStoryboardExtraData>(&v10, v11) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11[0] + 40LL))(v11[0]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  }
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return 0LL;
}
