/*
 * XREFs of ?UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x180065090
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_67eef396734d09a1eef436dbd1978d71___ @ 0x180065164 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_67eef396734d09a1eef436dbd1978d71___.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::UpdateSizeConstraints(CFrameApplicationPresentation *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  CFrameApplicationPresentation *v12; // [rsp+68h] [rbp+10h] BYREF

  if ( *((_DWORD *)this + 14) == 2 )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FE,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v2 = *(_QWORD *)this;
    v12 = this;
    (*(void (**)(void))(v2 + 8))();
    v3 = *(_QWORD *)this;
    v9[0] = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(v3 + 8))(this);
    v4 = *((_DWORD *)this + 12);
    v9[1] = this;
    v9[2] = this;
    Windows::Internal::ComTaskPool::WrapWithTask__lambda_67eef396734d09a1eef436dbd1978d71___(&v11, v9);
    v5 = SHTaskPoolQueueTask(3LL, 2LL, v4);
    v6 = v11;
    v7 = v5;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
    if ( v7 >= 0 )
      ++*((_DWORD *)this + 53);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  return (unsigned int)v7;
}
