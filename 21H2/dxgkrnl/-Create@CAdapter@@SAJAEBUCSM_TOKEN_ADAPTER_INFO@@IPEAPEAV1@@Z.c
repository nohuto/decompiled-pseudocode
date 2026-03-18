/*
 * XREFs of ?Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z @ 0x1C001C094
 * Callers:
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C001BFAC (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C001BED0 (--_GCAdapter@@IEAAPEAXI@Z.c)
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C001C154 (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 */

__int64 __fastcall CAdapter::Create(const struct CSM_TOKEN_ADAPTER_INFO *a1, int a2, struct CAdapter **a3, __int64 a4)
{
  int v7; // edi
  __int64 v8; // rax
  CAdapter *v9; // rbx

  *a3 = 0LL;
  v7 = -1073741801;
  v8 = operator new[](0x68uLL, 0x63614D54u, 256LL, a4);
  v9 = (CAdapter *)v8;
  if ( v8 )
  {
    *(_QWORD *)v8 = &CAdapter::`vftable';
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_DWORD *)(v8 + 40) = 0;
    *(_DWORD *)(v8 + 44) = 0;
    *(_QWORD *)(v8 + 48) = -1LL;
    *(_DWORD *)(v8 + 56) = 0;
    *(_QWORD *)(v8 + 64) = 0LL;
    *(_DWORD *)(v8 + 72) = 0;
    *(_QWORD *)(v8 + 80) = 0LL;
    *(_QWORD *)(v8 + 88) = 0LL;
    *(_DWORD *)(v8 + 96) = a2;
    *(_DWORD *)(v8 + 100) = 1;
    v7 = CAdapter::Initialize((CAdapter *)v8, a1);
    if ( v7 < 0 )
      CAdapter::`scalar deleting destructor'(v9);
    else
      *a3 = v9;
  }
  return (unsigned int)v7;
}
