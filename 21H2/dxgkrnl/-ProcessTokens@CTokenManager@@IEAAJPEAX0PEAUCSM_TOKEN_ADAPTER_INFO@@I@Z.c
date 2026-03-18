/*
 * XREFs of ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C000AA60
 * Callers:
 *     ?TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C001D740 (-TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0007F94 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AC70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SetTokenThreadProcess@CTokenManager@@IEAAXXZ @ 0x1C001E7FC (-SetTokenThreadProcess@CTokenManager@@IEAAXXZ.c)
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C00230E4 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 */

__int64 __fastcall CTokenManager::ProcessTokens(
        CTokenManager *this,
        HANDLE Handle,
        void *a3,
        struct CSM_TOKEN_ADAPTER_INFO *a4,
        unsigned int a5)
{
  ULONG v9; // r15d
  HANDLE *v10; // r14
  NTSTATUS inited; // ebx
  int v12; // eax
  int v13; // esi
  CTokenManager *v14; // rax
  __int64 v15; // rbx
  __int64 v17; // rax
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-88h] BYREF
  HANDLE Object[2]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v20; // [rsp+48h] [rbp-70h]
  __int128 v21; // [rsp+58h] [rbp-60h]
  __int64 v22; // [rsp+68h] [rbp-50h]

  v22 = 0LL;
  v9 = a5 + 2;
  *(_OWORD *)Object = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( a5 > 5 )
  {
    v17 = 8LL * v9;
    if ( !is_mul_ok(v9, 8uLL) )
      v17 = -1LL;
    v10 = (HANDLE *)operator new[](v17, 1650675028LL, 256LL);
    if ( !v10 )
      return 3221225495LL;
  }
  else
  {
    v10 = Object;
  }
  *v10 = Handle;
  v10[1] = a3;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 4, (signed __int64)KeGetCurrentThread(), 0LL) )
  {
    inited = -2147483631;
  }
  else
  {
    CTokenManager::SetTokenThreadProcess(this);
    inited = CTokenManager::InitAdapterCollection(this, a4, v10 + 2, a5);
    if ( inited >= 0 )
    {
      while ( 1 )
      {
        inited = ZwWaitForMultipleObjects(v9, v10, WaitAny, 1u, 0LL);
        if ( inited >= 0 )
          break;
LABEL_34:
        if ( inited == -1073741801 || inited == -1073741789 )
        {
          Timeout.QuadPart = -160000LL;
          inited = ZwWaitForSingleObject(Handle, 0, &Timeout);
          if ( inited == 258 )
            continue;
        }
        goto LABEL_24;
      }
      while ( inited && inited != 257 && inited != 192 )
      {
        if ( inited == 1 )
        {
          CTokenManager::ProcessGdiSysmemTokens(this);
        }
        else
        {
          v12 = *((_DWORD *)this + 22);
          if ( v12 && inited <= (unsigned int)(v12 + 1) )
          {
            v13 = inited - 2;
            ExAcquirePushLockSharedEx((char *)this + 152, 0LL);
            *((_BYTE *)this + 160) = 0;
            if ( (unsigned int)(inited - 2) >= *((_DWORD *)this + 29)
              || (v14 = (CTokenManager *)*((_QWORD *)this + 17), v14 == (CTokenManager *)((char *)this + 136)) )
            {
LABEL_33:
              ExReleasePushLockSharedEx((char *)this + 152, 0LL);
            }
            else
            {
              while ( 1 )
              {
                v15 = v14 ? (__int64)v14 - 8 : 0LL;
                if ( !v13 )
                  break;
                v14 = *(CTokenManager **)v14;
                --v13;
                if ( v14 == (CTokenManager *)((char *)this + 136) )
                  goto LABEL_33;
              }
              ExReleasePushLockSharedEx((char *)this + 152, 0LL);
              CTokenManager::ProcessDxgkAdapterTokens(this, *(_DWORD *)(v15 + 40));
            }
          }
        }
        inited = ZwWaitForMultipleObjects(v9, v10, WaitAny, 1u, 0LL);
        if ( inited < 0 )
          goto LABEL_34;
      }
      inited = 0;
    }
LABEL_24:
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( v10 != Object )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)inited;
}
