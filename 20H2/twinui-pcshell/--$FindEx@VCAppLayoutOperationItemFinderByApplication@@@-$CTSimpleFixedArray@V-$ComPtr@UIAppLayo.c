/*
 * XREFs of ??$FindEx@VCAppLayoutOperationItemFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutOperationItemFinderByApplication@@AEBV?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18047DFC8
 * Callers:
 *     ?GetOperationItem@CAppLayoutOperation@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutOperationItem@@@Z @ 0x18047E540 (-GetOperationItem@CAppLayoutOperation@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutOperatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::FindEx<CAppLayoutOperationItemFinderByApplication>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rbx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  *a4 = 0LL;
  v4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v8 = *a1;
    v12 = 0LL;
    v9 = -1;
    v10 = *(_QWORD *)(v8 + 8 * v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v12) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 104LL))(v12, *a2, &v13);
      v9 = ((_DWORD)v13 != 0) - 1;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    if ( !v9 )
      break;
    if ( ++v4 >= (unsigned __int64)a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
