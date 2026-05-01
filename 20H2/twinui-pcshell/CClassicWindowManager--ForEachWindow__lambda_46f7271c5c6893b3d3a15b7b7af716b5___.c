/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___ @ 0x180054DDC
 * Callers:
 *     CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa___ @ 0x180054AD4 (CClassicWindowManager--ForEachWindowInOwnershipChain__lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa___.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000BE8C (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator() @ 0x180054B7C (_lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_--operator().c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___(
        __int64 a1,
        __int64 a2)
{
  char v4; // bl
  unsigned __int64 v5; // rbp
  unsigned __int64 i; // rsi
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rbx
  char v10; // al
  __int64 *v12; // rax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v4 = 1;
  v5 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v5; ++i )
  {
    if ( !v4 )
      break;
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * i);
    v14 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = **(_QWORD **)(a2 + 8);
    v9 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7);
    v13 = v9;
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      while ( v9 )
      {
        if ( v7 == v9 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          break;
        }
        if ( v9 == v8 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
          v10 = 1;
          goto LABEL_7;
        }
        v12 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 96LL))(v9);
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v13, v12);
        v9 = v13;
      }
    }
    v10 = 0;
LABEL_7:
    v4 = v10 ? lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()(**(_QWORD ***)(a2 + 16), &v14) : 1;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v4;
}
