/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___::OnStoryboardStatusChanged @ 0x1803C4020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIStoryboardExtraData@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStoryboardExtraData@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803AFC48 (--$As@UIStoryboardExtraData@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 */

__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___::OnStoryboardStatusChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  void (*v7)(void); // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+28h] [rbp-10h] BYREF

  v3 = a2;
  if ( a3 != 1 )
  {
    if ( a3 == 5 )
    {
      LOBYTE(a2) = 1;
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24), a2);
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
  if ( (*(int (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v3 + 136LL))(v3, &v10, 0LL) >= 0 )
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
