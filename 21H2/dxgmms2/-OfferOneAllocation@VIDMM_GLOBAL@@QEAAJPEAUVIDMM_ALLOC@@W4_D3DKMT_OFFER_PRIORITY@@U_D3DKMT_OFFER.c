/*
 * XREFs of ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C007E180
 * Callers:
 *     ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C007CD38 (-OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_O.c)
 * Callees:
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0005660 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006030 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchSubmitDeviceCommand @ 0x1C0006140 (VidSchSubmitDeviceCommand.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     McTemplateK0pu_EtwWriteTransfer @ 0x1C0024D08 (McTemplateK0pu_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchFlushDevice @ 0x1C0081F00 (VidSchFlushDevice.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OfferOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  char v4; // bl
  __int64 v5; // rsi
  struct VIDMM_ALLOC *v6; // r14
  unsigned int v8; // r12d
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  signed __int16 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  char v17; // bp
  __int64 v18; // rsi
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  VIDMM_GLOBAL *v27; // rcx
  VIDMM_GLOBAL **v28; // rdx
  bool v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  DXGFASTMUTEX *v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // rsi
  _QWORD *i; // rbx
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // rbx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  int v46; // r9d
  int v47; // esi
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // esi
  int v51; // eax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 *v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 **v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // r8
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned __int8 v68; // [rsp+20h] [rbp-E8h]
  bool v69; // [rsp+30h] [rbp-D8h]
  int v70; // [rsp+34h] [rbp-D4h]
  _QWORD v71[23]; // [rsp+50h] [rbp-B8h] BYREF

  v4 = (char)a4.0;
  v5 = a3;
  v6 = a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v8 = 0;
  v9 = **(_QWORD **)v6;
  v10 = **(unsigned int **)(v9 + 512);
  if ( (v10 & 0x40000000) != 0 || (int)v10 < 0 )
  {
    v67 = WdLogNewEntry5_WdWarning(v10, a2);
    *(_QWORD *)(v67 + 24) = v6;
    WdLogEvent5_WdWarning(v67);
    return 3221225485LL;
  }
  if ( (unsigned int)(v5 - 1) > 3 )
  {
    v66 = WdLogNewEntry5_WdWarning(v10, a2);
    *(_QWORD *)(v66 + 24) = v6;
    *(_QWORD *)(v66 + 32) = v5;
    WdLogEvent5_WdWarning(v66);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 488, 0LL);
  if ( *(_DWORD *)(v9 + 336) )
  {
    if ( (*((_BYTE *)this + 40936) & 4) == 0 )
    {
      v49 = WdLogNewEntry5_WdWarning(v12, v11);
      *(_QWORD *)(v49 + 24) = v6;
      WdLogEvent5_WdWarning(v49);
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        ExReleasePushLockExclusiveEx(v9 + 488, 0LL);
        KeLeaveCriticalRegion();
        return 3221225485LL;
      }
    }
  }
  if ( (_DWORD)v5 == 2 )
  {
    *(_DWORD *)(v9 + 440) = 2;
  }
  else
  {
    v47 = v5 - 1;
    if ( v47 )
    {
      v50 = v47 - 2;
      if ( v50 )
      {
        if ( v50 == 1 )
        {
          v51 = 4;
          if ( *(_DWORD *)(v9 + 384) < 0xA0000000 )
            v51 = 2;
          *(_DWORD *)(v9 + 440) = v51;
        }
      }
      else
      {
        *(_DWORD *)(v9 + 440) = 3;
      }
    }
    else
    {
      *(_DWORD *)(v9 + 440) = 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 12) + 8LL));
  v69 = 0;
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v9 + 312));
  v13 = _InterlockedCompareExchange16((volatile signed __int16 *)(*((_QWORD *)v6 + 12) + 4LL), 1, 0);
  ExReleasePushLockExclusiveEx(v9 + 488, 0LL);
  KeLeaveCriticalRegion();
  if ( v13
    || (v4 & 2) == 0 && !dword_1C00504BC
    || (*((_BYTE *)this + 40936) & 4) != 0
    || (*(_DWORD *)(v9 + 80) & 0x6000) != 0 )
  {
    v17 = 0;
  }
  else
  {
    v52 = *(_QWORD *)(v9 + 96);
    v17 = 1;
    *(_DWORD *)(v9 + 84) |= 0x80u;
    v14 = *(_QWORD *)(*(_QWORD *)(v52 + 8) + 32LL);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 376), *(_QWORD *)(v9 + 8));
    v15 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 8LL);
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v15 + 32) + 368LL));
  }
  v18 = *(_QWORD *)(v9 + 312);
  if ( *(struct _KTHREAD **)(v18 + 16) != KeGetCurrentThread() )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14);
    v53[3] = 275LL;
    v53[4] = 4LL;
    v53[5] = v18;
    v53[6] = 0LL;
    v53[7] = 0LL;
    WdLogEvent5_WdCriticalError(v53);
  }
  v19 = *(_DWORD *)(v18 + 24);
  if ( v19 <= 0 )
  {
    v54 = WdLogNewEntry5_WdAssertion(v15, v14, v16);
    *(_QWORD *)(v54 + 24) = 705LL;
    WdLogEvent5_WdAssertion(v54);
    v19 = *(_DWORD *)(v18 + 24);
  }
  v20 = v19 - 1;
  *(_DWORD *)(v18 + 24) = v20;
  if ( !v20 )
  {
    *(_QWORD *)(v18 + 16) = 0LL;
    ExReleasePushLockExclusiveEx(v18, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( this != (VIDMM_GLOBAL *)-39968LL && *((struct _KTHREAD **)this + 4997) == KeGetCurrentThread() )
  {
    v55 = WdLogNewEntry5_WdAssertion(v22, v21, v23);
    *(_QWORD *)(v55 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v55);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39968, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v46 = *((_DWORD *)this + 9998);
      if ( v46 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, (const EVENT_DESCRIPTOR *)"g", v25, v46);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 39968, 0LL);
  }
  *((_QWORD *)this + 4997) = KeGetCurrentThread();
  if ( !v13 )
  {
    v26 = (_QWORD *)((char *)this + 39952);
    v27 = (VIDMM_GLOBAL *)(v9 + 408);
    v28 = (VIDMM_GLOBAL **)*((_QWORD *)this + 4995);
    v29 = *v26 == (_QWORD)v26;
    v69 = v29;
    if ( *v28 == (VIDMM_GLOBAL *)((char *)this + 39952) )
    {
      *(_QWORD *)v27 = v26;
      *(_QWORD *)(v9 + 416) = v28;
      *v28 = v27;
      *((_QWORD *)this + 4995) = v27;
      *(_QWORD *)(v9 + 448) = *((_QWORD *)this + 577);
      if ( !v17 )
        goto LABEL_26;
      v56 = (__int64 *)(v9 + 424);
      v57 = *(unsigned int *)(*((_QWORD *)this + 3) + 232LL);
      v58 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 96) + 8LL) + 16LL) + 8 * v57) + 424LL;
      v59 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 96) + 8LL) + 16LL) + 8 * v57) + 432LL);
      if ( *v59 == (__int64 *)v58 )
      {
        *v56 = v58;
        *(_QWORD *)(v9 + 432) = v59;
        *v59 = v56;
        *(_QWORD *)(v58 + 8) = v56;
        v69 = v29;
        goto LABEL_26;
      }
    }
    __fastfail(3u);
  }
LABEL_26:
  *((_QWORD *)this + 4997) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 39968, 0LL);
  KeLeaveCriticalRegion();
  if ( v13 )
  {
    v65 = WdLogNewEntry5_WdWarning(v31, v30);
    *(_QWORD *)(v65 + 24) = v6;
    *(_QWORD *)(v65 + 32) = *(unsigned __int16 *)(*((_QWORD *)v6 + 12) + 4LL);
    WdLogEvent5_WdWarning(v65);
    v8 = DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
  }
  else
  {
    if ( (**(_DWORD **)(v9 + 512) & 0x20000000) != 0 )
    {
      if ( (v4 & 2) != 0 || dword_1C00504BC )
      {
        v60 = *(_QWORD *)(v9 + 8);
        ++*((_DWORD *)this + 1962);
        *((_QWORD *)this + 982) += v60;
      }
      v48 = *(_QWORD *)(v9 + 8);
      ++*((_DWORD *)this + 1958);
      *((_QWORD *)this + 980) += v48;
    }
    *((_QWORD *)this + 978) += *(_QWORD *)(v9 + 8);
    ++*((_DWORD *)this + 1954);
    if ( (v4 & 1) == 0 )
    {
      memset(v71, 0, 0x88uLL);
      v32 = *(DXGFASTMUTEX **)(v9 + 312);
      v71[3] = VIDMM_GLOBAL::VidMmiOfferAllocationCallback;
      LODWORD(v71[5]) = 3;
      LODWORD(v71[0]) = 1;
      DXGFASTMUTEX::Acquire(v32);
      v36 = *(_QWORD **)(v9 + 288);
      if ( v36 != (_QWORD *)(v9 + 288) )
      {
        do
        {
          for ( i = (_QWORD *)*(v36 - 2); i != v36 - 2; i = (_QWORD *)*i )
          {
            v34 = i - 5;
            if ( (*(_DWORD *)(i - 1) & 1) == 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v34[12] + 8LL));
              v38 = v34[1];
              v71[6] = i - 5;
              v39 = *(_QWORD *)(v38 + 32);
              v70 = VidSchSubmitDeviceCommand(v39, (__int64)v71, v35);
              if ( v70 < 0 )
              {
                v61 = WdLogNewEntry5_WdWarning(v34, v33);
                *(_QWORD *)(v61 + 24) = v70;
                WdLogEvent5_WdWarning(v61);
                VidSchFlushDevice(v39);
                LODWORD(v71[0]) = 0;
                VidSchSubmitDeviceCommand(v39, (__int64)v71, v62);
              }
            }
          }
          v36 = (_QWORD *)*v36;
        }
        while ( v36 != (_QWORD *)(v9 + 288) );
        v6 = a2;
      }
      v40 = *(_QWORD *)(v9 + 312);
      if ( *(struct _KTHREAD **)(v40 + 16) != KeGetCurrentThread() )
      {
        v63 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33);
        v63[3] = 275LL;
        v63[4] = 4LL;
        v63[5] = v40;
        v63[6] = 0LL;
        v63[7] = 0LL;
        WdLogEvent5_WdCriticalError(v63);
      }
      v41 = *(_DWORD *)(v40 + 24);
      if ( v41 <= 0 )
      {
        v64 = WdLogNewEntry5_WdAssertion(v34, v33, v35);
        *(_QWORD *)(v64 + 24) = 705LL;
        WdLogEvent5_WdAssertion(v64);
        v41 = *(_DWORD *)(v40 + 24);
      }
      v42 = v41 - 1;
      *(_DWORD *)(v40 + 24) = v42;
      if ( !v42 )
      {
        *(_QWORD *)(v40 + 16) = 0LL;
        ExReleasePushLockExclusiveEx(v40, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    if ( v69 )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 176LL), 0, 0);
  }
  VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v6);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v68 = *(_BYTE *)(v9 + 440);
      McTemplateK0pu_EtwWriteTransfer(v68, v43, v44, v6, v68);
    }
  }
  return v8;
}
