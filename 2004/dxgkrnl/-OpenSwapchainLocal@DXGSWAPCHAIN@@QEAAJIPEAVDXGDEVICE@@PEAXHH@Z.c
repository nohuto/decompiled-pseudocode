/*
 * XREFs of ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C02AB788
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C02AD550 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C02ADFE0 (DxgkOpenSwapChain.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C02AA61C (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSwapchainLocal(
        DXGSWAPCHAIN *this,
        __int64 a2,
        struct DXGDEVICE *a3,
        void *a4,
        int a5,
        int a6)
{
  int v8; // r12d
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  NTSTATUS v27; // eax
  struct _KEVENT *v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v34[24]; // [rsp+38h] [rbp-30h] BYREF

  v8 = a2;
  v10 = 0;
  if ( !DXGPROCESS::GetCurrent((__int64)this, a2) )
  {
    v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v14 + 24) = PsGetCurrentProcess(v16, v15);
    WdLogEvent5_WdWarning(v14);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v34, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
  if ( *((_DWORD *)this + 10) )
  {
    v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdWarning(v21);
    v10 = -1073741738;
  }
  else
  {
    v23 = (char *)this + (a6 != 0 ? 136LL : 88LL);
    if ( *((_QWORD *)v23 + 2) )
    {
      v24 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(_QWORD *)(v24 + 24) = this;
      *(_QWORD *)(v24 + 32) = a6;
      WdLogEvent5_WdWarning(v24);
      v10 = -1073740008;
    }
    else
    {
      *((_QWORD *)v23 + 2) = PsGetCurrentProcess(v19, v18);
      *(_DWORD *)v23 = v8;
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 316LL) == *((_QWORD *)this + 24) )
      {
        *((_DWORD *)v23 + 6) = a5;
        if ( a4 )
        {
          if ( a5 )
          {
            v26 = WdLogNewEntry5_WdError(v25, v22);
            *(_QWORD *)(v26 + 24) = 1993LL;
            WdLogEvent5_WdError(v26);
            v10 = -1073741822;
          }
          else
          {
            Object = 0LL;
            v27 = ObReferenceObjectByHandle(a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
            v28 = (struct _KEVENT *)Object;
            v10 = v27;
            *((_QWORD *)v23 + 4) = Object;
            if ( v27 >= 0 )
            {
              if ( !a6 )
                KeSetEvent(v28, 2, 0);
            }
            else
            {
              v29 = WdLogNewEntry5_WdError(v28, v22);
              *(_QWORD *)(v29 + 24) = a4;
              *(_QWORD *)(v29 + 32) = PsGetCurrentProcess(v31, v30);
              WdLogEvent5_WdError(v29);
            }
            if ( v10 >= 0 )
              goto LABEL_18;
          }
          DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v23);
        }
      }
      else
      {
        v32 = WdLogNewEntry5_WdError(v25, v22);
        *(_QWORD *)(v32 + 24) = this;
        WdLogEvent5_WdError(v32);
        v10 = -1073741811;
      }
    }
  }
LABEL_18:
  if ( v34[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34, v22);
  return (unsigned int)v10;
}
