/*
 * XREFs of ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C03296A0
 * Callers:
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C02E42E8 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0009AD4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0021A48 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x1C02C30A4 (-AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z.c)
 *     ?DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z @ 0x1C02C6FF0 (-DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::Initialize(DXGOVERLAY *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // r13
  __int64 v9; // r13
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  struct _EX_RUNDOWN_REF *v17; // rdx
  __int64 v18; // r13
  int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // r8
  D3DKMT_HANDLE v22; // eax
  struct _EX_RUNDOWN_REF *v23[2]; // [rsp+50h] [rbp-49h] BYREF
  _DXGKARG_CREATEOVERLAY v24; // [rsp+60h] [rbp-39h] BYREF

  v5 = 0;
  if ( DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 696) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 760) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 752) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 744) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v6 = ADAPTER_RENDER::AcquireOverlayId(*(ADAPTER_RENDER **)(v4 + 2800), this);
    v7 = *((_QWORD *)this + 2);
    *((_DWORD *)this + 8) = v6;
    if ( v6 == -1 )
    {
      WdLogSingleEntry1(6LL, *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL));
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of overlay hardware on adapter 0x%I64x",
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225626LL;
    }
    v9 = *(_QWORD *)(v7 + 40);
    hAllocation = a2->OverlayInfo.hAllocation;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9 + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v13 = *(_DWORD *)(v9 + 272);
        if ( v13 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)"g", v12, v13);
      }
      ExAcquirePushLockSharedEx(v9 + 248, 0LL);
    }
    v14 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < *(_DWORD *)(v9 + 296) )
    {
      v15 = *(_QWORD *)(v9 + 280);
      v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
      if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60)
        && (v16 & 0x2000) == 0
        && (v16 & 0x1F) != 0 )
      {
        if ( (v16 & 0x1F) == 5 )
        {
          v17 = *(struct _EX_RUNDOWN_REF **)(v15 + 16LL * (unsigned int)v14);
LABEL_21:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v23, v17);
          ExReleasePushLockSharedEx(v9 + 248, 0LL);
          KeLeaveCriticalRegion();
          if ( v23[0] )
          {
            v18 = *((_QWORD *)this + 2);
            if ( *(_QWORD *)(*(_QWORD *)(v23[0][1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) )
            {
              v19 = -1073741811;
              WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v23[0], -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
                *((_QWORD *)this + 2),
                (__int64)v23[0],
                -1073741811LL,
                0LL,
                0LL);
              goto LABEL_32;
            }
            if ( (*(_DWORD *)(v23[0][6].Count + 4) & 8) != 0 && (v23[0][9].Count & 0x800) != 0 )
            {
              memset(&v24, 0, sizeof(v24));
              v24.VidPnSourceId = a2->VidPnSourceId;
              v24.OverlayInfo.hAllocation = *(HANDLE *)(v23[0][6].Count + 16);
              v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 2800LL);
              (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, LARGE_INTEGER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v20 + 648)
                                                                                                  + 8LL)
                                                                                      + 224LL))(
                *(_QWORD *)(v20 + 656),
                *(_QWORD *)(v23[0][6].Count + 8),
                &v24.OverlayInfo.SegmentId,
                &v24.OverlayInfo.PhysicalAddress,
                0LL);
              v24.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
              v24.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
              v24.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
              v24.OverlayInfo.pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
              v19 = ADAPTER_RENDER::DdiCreateOverlay(
                      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2800LL),
                      &v24,
                      v21);
              if ( v19 >= 0 )
              {
                *((_QWORD *)this + 5) = v24.hOverlay;
                *((struct _EX_RUNDOWN_REF **)this + 6) = v23[0];
                v22 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 6u);
                *((_DWORD *)this + 6) = v22;
                if ( v22 )
                {
                  a2->hOverlay = v22;
                  *((_DWORD *)this + 7) = 1;
LABEL_33:
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v23);
                  return v5;
                }
                v19 = -1073741801;
                WdLogSingleEntry2(3LL, this, -1073741801LL);
              }
LABEL_32:
              v5 = v19;
              goto LABEL_33;
            }
          }
          v19 = -1073741811;
          WdLogSingleEntry3(3LL, this, a2->OverlayInfo.hAllocation, -1073741811LL);
          goto LABEL_32;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v17 = 0LL;
    goto LABEL_21;
  }
  WdLogSingleEntry3(2LL, this, v4, -1073741637LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Device 0x%I64x: Driver 0x%I64x didn't supply Overlay functions, returning 0x%I64x",
    (__int64)this,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
    -1073741637LL,
    0LL,
    0LL);
  return 3221225659LL;
}
