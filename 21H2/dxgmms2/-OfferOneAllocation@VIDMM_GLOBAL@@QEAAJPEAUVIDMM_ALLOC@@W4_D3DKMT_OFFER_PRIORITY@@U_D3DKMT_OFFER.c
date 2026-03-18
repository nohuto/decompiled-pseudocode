/*
 * XREFs of ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0082DAC
 * Callers:
 *     ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0082D78 (-OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_O.c)
 * Callees:
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0001950 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchSubmitDeviceCommand @ 0x1C00019C0 (VidSchSubmitDeviceCommand.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0pu_EtwWriteTransfer @ 0x1C002EE4C (McTemplateK0pu_EtwWriteTransfer.c)
 *     VidSchFlushDevice @ 0x1C009A0D0 (VidSchFlushDevice.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OfferOneAllocation(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 v5; // r14
  struct VIDMM_ALLOC *v6; // r12
  __int64 v8; // rdi
  int v9; // ecx
  int v10; // r14d
  int v11; // r14d
  char v12; // r14
  _QWORD *v13; // rax
  VIDMM_GLOBAL *v14; // rcx
  VIDMM_GLOBAL **v15; // rdx
  bool v16; // r9
  _QWORD *v17; // rax
  _QWORD *v18; // r14
  _QWORD *v19; // rbx
  _QWORD *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 **v33; // rax
  __int64 v34; // rax
  int v35; // r14d
  bool v36; // [rsp+38h] [rbp-59h]
  signed __int16 v37; // [rsp+3Ah] [rbp-57h]
  _QWORD *v38; // [rsp+40h] [rbp-51h]
  char v39[8]; // [rsp+58h] [rbp-39h] BYREF
  DXGPUSHLOCK *v40; // [rsp+60h] [rbp-31h]
  int v41; // [rsp+68h] [rbp-29h]
  _QWORD v42[10]; // [rsp+78h] [rbp-19h] BYREF

  v4 = a4;
  v5 = (int)a3;
  v6 = a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  v8 = **(_QWORD **)v6;
  v9 = **(_DWORD **)(v8 + 528);
  if ( (v9 & 0x40000000) != 0 || v9 < 0 )
  {
    WdLogSingleEntry1(3LL, v6);
    return 3221225485LL;
  }
  if ( (unsigned int)(v5 - 1) > 3 )
  {
    WdLogSingleEntry2(3LL, v6, v5);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8 + 496, 0LL);
  if ( *(_DWORD *)(v8 + 360) )
  {
    if ( (*((_BYTE *)this + 40936) & 4) == 0 )
    {
      WdLogSingleEntry1(3LL, v6);
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        ExReleasePushLockExclusiveEx(v8 + 496, 0LL);
        KeLeaveCriticalRegion();
        return 3221225485LL;
      }
    }
  }
  v10 = v5 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v35 = v11 - 1;
      if ( v35 )
      {
        if ( v35 == 1 )
          *(_DWORD *)(v8 + 448) = *(_DWORD *)(v8 + 392) < 0xA0000000 ? 2 : 4;
      }
      else
      {
        *(_DWORD *)(v8 + 448) = 3;
      }
    }
    else
    {
      *(_DWORD *)(v8 + 448) = 2;
    }
  }
  else
  {
    *(_DWORD *)(v8 + 448) = 1;
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v6 + 12) + 8LL), 1u);
  v36 = 0;
  v12 = 0;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 296));
  v37 = _InterlockedCompareExchange16((volatile signed __int16 *)(*((_QWORD *)v6 + 12) + 4LL), 1, 0);
  ExReleasePushLockExclusiveEx(v8 + 496, 0LL);
  KeLeaveCriticalRegion();
  if ( !v37 )
  {
    if ( (v4 & 2) == 0 && !dword_1C006E52C
      || (*((_BYTE *)this + 40936) & 4) != 0
      || (*(_DWORD *)(v8 + 72) & 0x6000) != 0 )
    {
      v12 = 0;
    }
    else
    {
      v29 = *(_QWORD *)(v8 + 88);
      *(_DWORD *)(v8 + 76) |= 0x40u;
      v12 = 1;
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v29 + 8) + 32LL) + 456LL),
        *(_QWORD *)(v8 + 8));
      _InterlockedAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 88) + 8LL) + 32LL) + 448LL),
        1uLL);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v8 + 296));
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39, (struct _KTHREAD **)this + 4997, 0);
  DXGPUSHLOCK::AcquireExclusive(v40);
  v41 = 2;
  if ( !v37 )
  {
    v13 = (_QWORD *)((char *)this + 39960);
    v14 = (VIDMM_GLOBAL *)(v8 + 416);
    v15 = (VIDMM_GLOBAL **)*((_QWORD *)this + 4996);
    v16 = *v13 == (_QWORD)v13;
    v36 = v16;
    if ( *v15 == (VIDMM_GLOBAL *)((char *)this + 39960) )
    {
      *(_QWORD *)v14 = v13;
      *(_QWORD *)(v8 + 424) = v15;
      *v15 = v14;
      *((_QWORD *)this + 4996) = v14;
      *(_QWORD *)(v8 + 456) = *((_QWORD *)this + 579);
      if ( !v12 )
        goto LABEL_17;
      v30 = (__int64 *)(v8 + 432);
      v31 = *(unsigned int *)(*((_QWORD *)this + 3) + 240LL);
      v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 88) + 8LL) + 16LL) + 8 * v31) + 424LL;
      v33 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 88) + 8LL) + 16LL) + 8 * v31) + 432LL);
      if ( *v33 == (__int64 *)v32 )
      {
        *v30 = v32;
        *(_QWORD *)(v8 + 440) = v33;
        *v33 = v30;
        *(_QWORD *)(v32 + 8) = v30;
        v36 = v16;
        goto LABEL_17;
      }
    }
    __fastfail(3u);
  }
LABEL_17:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
  if ( v37 )
  {
    WdLogSingleEntry2(3LL, v6, *(unsigned __int16 *)(*((_QWORD *)v6 + 12) + 4LL));
    v23 = DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
  }
  else
  {
    if ( (**(_DWORD **)(v8 + 528) & 0x20000000) != 0 )
    {
      if ( (v4 & 2) != 0 || dword_1C006E52C )
      {
        v34 = *(_QWORD *)(v8 + 8);
        ++*((_DWORD *)this + 1964);
        *((_QWORD *)this + 983) += v34;
      }
      v28 = *(_QWORD *)(v8 + 8);
      ++*((_DWORD *)this + 1960);
      *((_QWORD *)this + 981) += v28;
    }
    *((_QWORD *)this + 979) += *(_QWORD *)(v8 + 8);
    ++*((_DWORD *)this + 1956);
    if ( (v4 & 1) == 0 )
    {
      memset(v42, 0, sizeof(v42));
      LODWORD(v42[5]) = 3;
      v42[3] = VIDMM_GLOBAL::VidMmiOfferAllocationCallback;
      LODWORD(v42[0]) = 1;
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 296));
      v17 = (_QWORD *)(v8 + 272);
      v18 = *(_QWORD **)(v8 + 272);
      if ( v18 != (_QWORD *)(v8 + 272) )
      {
        do
        {
          v19 = (_QWORD *)*(v18 - 2);
          if ( v19 != v18 - 2 )
          {
            do
            {
              v20 = v19 - 5;
              if ( (*(_DWORD *)(v19 - 1) & 1) == 0 )
              {
                _InterlockedAdd((volatile signed __int32 *)(v20[12] + 8LL), 1u);
                v21 = v20[1];
                v42[6] = v19 - 5;
                v38 = *(_QWORD **)(v21 + 32);
                v22 = VidSchSubmitDeviceCommand(v38, (__int64)v42);
                if ( v22 < 0 )
                {
                  WdLogSingleEntry1(3LL, v22);
                  VidSchFlushDevice((int)v38);
                  LODWORD(v42[0]) = 0;
                  VidSchSubmitDeviceCommand(v38, (__int64)v42);
                }
              }
              v19 = (_QWORD *)*v19;
            }
            while ( v19 != v18 - 2 );
            v17 = (_QWORD *)(v8 + 272);
          }
          v18 = (_QWORD *)*v18;
        }
        while ( v18 != v17 );
        v6 = a2;
      }
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v8 + 296));
    }
    if ( v36 )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 176LL), 0, 0);
    v23 = 0;
  }
  VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v6);
  if ( bTracingEnabled )
  {
    if ( (byte_1C006E941 & 1) != 0 )
    {
      LOBYTE(v25) = *(_BYTE *)(v8 + 448);
      McTemplateK0pu_EtwWriteTransfer(v25, v24, v26, v6, v25);
    }
  }
  return v23;
}
