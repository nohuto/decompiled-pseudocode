/*
 * XREFs of ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02A51FC
 * Callers:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C02A817C (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C02A86A0 (DxgkAcquireSwapChain.c)
 *     DxgkAddSurfaceToSwapChain @ 0x1C02A8C30 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1C02A9010 (DxgkCreateSwapChain.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1C02AA5E0 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x1C02AA8A0 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C000A358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000EE64 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0049D20 (--4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0208CF4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C02A751C (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
        DXGSWAPCHAINLOCKWITHDEVICE *this,
        struct DXGDEVICE **a2,
        char a3)
{
  DXGAUTOMUTEX *v3; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v17; // rbp
  char *v18; // r15
  int v19; // esi
  __int64 v20; // r8
  signed __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _KEVENT *v31; // rbp
  __int64 v32; // rcx
  unsigned __int8 v33; // bp
  __int64 v34; // r8
  COREACCESS *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  signed __int64 v40; // rax
  signed __int64 v41; // rtt
  __int64 v42; // rdx
  __int64 v43; // rax
  _BYTE v45[64]; // [rsp+40h] [rbp-88h] BYREF

  v3 = (DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24);
  DXGAUTOMUTEX::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
  v9 = *((_QWORD *)this + 1);
  *((_BYTE *)this + 40) = 1;
  if ( *(_DWORD *)(v9 + 40) )
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = *((_QWORD *)this + 1);
    WdLogEvent5_WdWarning(v10);
    return 3221225558LL;
  }
  if ( *(_BYTE *)this == 1 )
  {
    v12 = *((_BYTE *)this + 16) != 0 ? 0x30 : 0;
    v13 = *(_QWORD *)(v12 + v9 + 104);
    if ( PsGetCurrentProcess(v12, v6) != v13 )
    {
      v15 = WdLogNewEntry5_WdWarning(v7, v6, v14);
      *(_QWORD *)(v15 + 24) = *((_QWORD *)this + 1);
      *(_QWORD *)(v15 + 32) = PsGetCurrentProcessId();
      WdLogEvent5_WdWarning(v15);
      return 3221225506LL;
    }
  }
  Current = DXGPROCESS::GetCurrent(v7, v6);
  v17 = Current;
  if ( a2 )
  {
    *a2 = 0LL;
    v18 = (char *)Current + 208;
    v19 = 0;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
    LOBYTE(v21) = -*((_BYTE *)this + 16);
    v22 = *((_BYTE *)this + 16) != 0 ? 0x30 : 0;
    v23 = *(unsigned int *)(v22 + *((_QWORD *)this + 1) + 88);
    v24 = (*(_DWORD *)(v22 + *((_QWORD *)this + 1) + 88) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < *((_DWORD *)v17 + 64) )
    {
      v20 = *((_QWORD *)v17 + 30);
      v21 = ((unsigned int)v23 >> 25) & 0x60;
      v22 = *(unsigned int *)(v20 + 16 * v24 + 8);
      if ( (((unsigned int)v23 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v24 + 8) & 0x60)
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) != 0 )
      {
        v22 &= 0x1Fu;
        if ( (_BYTE)v22 == 3 )
        {
          v26 = *(_QWORD *)(v20 + 16LL * (unsigned int)v24);
          if ( v26 )
          {
            _m_prefetchw((const void *)(v26 + 64));
            v40 = *(_QWORD *)(v26 + 64);
            while ( v40 )
            {
              v21 = v40 + 1;
              v41 = v40;
              v40 = _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 64), v40 + 1, v40);
              if ( v41 == v40 )
                goto LABEL_33;
            }
            v26 = 0LL;
LABEL_33:
            if ( v26 )
            {
              *((_BYTE *)this + 42) = 1;
              *((_QWORD *)this + 6) = v26;
              goto LABEL_15;
            }
          }
LABEL_14:
          v27 = WdLogNewEntry5_WdWarning(v21, v22, v20);
          *(_QWORD *)(v27 + 24) = v23;
          *(_QWORD *)(v27 + 32) = v17;
          WdLogEvent5_WdWarning(v27);
          v19 = -1073741811;
LABEL_15:
          ExReleasePushLockSharedEx(v18, 0LL);
          KeLeaveCriticalRegion();
          if ( v26 && a3 )
          {
            DXGAUTOMUTEX::Release(v3, v28);
            v31 = *(struct _KEVENT **)(v26 + 16);
            if ( !KeReadStateEvent(v31 + 4) )
              KeWaitForSingleObject(&v31[4], Executive, 0, 0, 0LL);
            KeEnterCriticalRegion();
            if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v26 + 136), 0) )
            {
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 104LL));
              v33 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q_EtwWriteTransfer(v32, &EventBlockThread, v34, 40);
              ExAcquireResourceSharedLite(*(PERESOURCE *)(v26 + 136), 1u);
              if ( v33 )
                DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
              ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 104LL, 0LL);
              KeLeaveCriticalRegion();
            }
            *((_BYTE *)this + 41) = 1;
            v35 = COREACCESS::COREACCESS((COREACCESS *)v45, *(struct DXGADAPTER *const *)(*(_QWORD *)(v26 + 16) + 16LL));
            COREACCESS::operator=((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56), (__int64)v35);
            COREACCESS::~COREACCESS((COREACCESS *)v45);
            COREACCESS::AcquireShared((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56), 0LL);
            if ( *(_DWORD *)(v26 + 576) == 1 )
            {
              *((_BYTE *)this + 43) = 1;
            }
            else
            {
              COREACCESS::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
              v19 = -1073741130;
              v39 = WdLogNewEntry5_WdWarning(v37, v36, v38);
              *(_QWORD *)(v39 + 24) = v26;
              *(_QWORD *)(v39 + 32) = -1073741130LL;
              WdLogEvent5_WdWarning(v39);
            }
            DXGAUTOMUTEX::Acquire(v3);
          }
          if ( v19 >= 0 )
          {
            v42 = *((_QWORD *)this + 1);
            if ( !*(_DWORD *)(v42 + 40) )
            {
              *(_QWORD *)((*((_BYTE *)this + 16) != 0 ? 0x30 : 0) + v42 + 96) = v26;
              *a2 = (struct DXGDEVICE *)v26;
              return (unsigned int)v19;
            }
            v43 = WdLogNewEntry5_WdWarning(v29, v42, v30);
            *(_QWORD *)(v43 + 24) = *((_QWORD *)this + 1);
            WdLogEvent5_WdWarning(v43);
            v19 = -1073741738;
          }
          DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
          return (unsigned int)v19;
        }
        v25 = WdLogNewEntry5_WdError(v21, v22);
        *(_QWORD *)(v25 + 24) = 267LL;
        WdLogEvent5_WdError(v25);
      }
    }
    v26 = 0LL;
    goto LABEL_14;
  }
  return 0LL;
}
