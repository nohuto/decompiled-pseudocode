/*
 * XREFs of ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180002440
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18000221C (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x180015E90 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x1800024D4 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460C0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AddToListPrioritized(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned int v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rax

  v2 = (_QWORD *)*a1;
  v5 = 0;
  while ( v2 != a1 && *(_DWORD *)(v2[2] + 1288LL) < *(_DWORD *)(a2 + 1288) )
    v2 = (_QWORD *)*v2;
  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(v6 + 2, a2);
    v8 = (_QWORD *)v2[1];
    v7[1] = v8;
    *v7 = v2;
    *v8 = v7;
    v2[1] = v7;
    ++a1[2];
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
