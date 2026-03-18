/*
 * XREFs of ?Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z @ 0x1C00079D0
 * Callers:
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C00078E8 (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C0007810 (--_GCAdapter@@IEAAPEAXI@Z.c)
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C0007A9C (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CAdapter::Create(const struct CSM_TOKEN_ADAPTER_INFO *a1, int a2, struct CAdapter **a3)
{
  int v6; // edi
  CAdapter *v7; // rax
  CAdapter *v8; // rbx

  *a3 = 0LL;
  v6 = -1073741801;
  v7 = (CAdapter *)operator new[](0x60uLL, 0x63614D54u, PagedPool);
  v8 = v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = &CAdapter::`vftable';
    *((_QWORD *)v7 + 3) = 0LL;
    *((_DWORD *)v7 + 8) = 0;
    *((_DWORD *)v7 + 9) = 0;
    *((_QWORD *)v7 + 5) = -1LL;
    *((_DWORD *)v7 + 12) = 0;
    *((_QWORD *)v7 + 7) = 0LL;
    *((_DWORD *)v7 + 16) = 0;
    *((_QWORD *)v7 + 9) = 0LL;
    *((_QWORD *)v7 + 10) = 0LL;
    *((_DWORD *)v7 + 22) = a2;
    *((_DWORD *)v7 + 23) = 1;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v6 = CAdapter::Initialize(v8, a1);
    if ( v6 >= 0 )
    {
      *a3 = v8;
      v8 = 0LL;
    }
    if ( v8 )
      CAdapter::`scalar deleting destructor'(v8);
  }
  return (unsigned int)v6;
}
