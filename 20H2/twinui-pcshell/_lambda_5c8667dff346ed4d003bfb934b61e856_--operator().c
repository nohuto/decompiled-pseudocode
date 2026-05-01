/*
 * XREFs of _lambda_5c8667dff346ed4d003bfb934b61e856_::operator() @ 0x1803CAB8C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___::Run @ 0x1803CAF80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___--Run.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18003704C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_5c8667dff346ed4d003bfb934b61e856_::operator()(_QWORD *a1)
{
  __int64 result; // rax
  struct IInspectable *v3; // rdi
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rbx
  struct IInspectable *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  Microsoft::WRL::WeakRef::InternalResolve(
    (Microsoft::WRL::WeakRef *)(a1 + 2),
    &GUID_0e0da070_2224_4934_8090_041f7ff223eb,
    &v5);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IInspectable *))(*(_QWORD *)*a1 + 32LL))(*a1, a1[1], v5);
  v3 = v5;
  if ( v5 )
  {
    if ( (int)result <= -1 || (result = (unsigned int)(result - 2556504), (unsigned int)result <= 1) )
    {
      v6 = 0LL;
      QueryInterface = v5->lpVtbl->QueryInterface;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
      if ( ((int (__fastcall *)(struct IInspectable *, GUID *, __int64 *))QueryInterface)(
             v3,
             &GUID_94e76fd7_6ec7_4a63_a8fb_5d5cb760b7f6,
             &v6) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
      v3 = v5;
    }
  }
  if ( v3 )
  {
    v5 = 0LL;
    return ((__int64 (__fastcall *)(struct IInspectable *))v3->lpVtbl->Release)(v3);
  }
  return result;
}
