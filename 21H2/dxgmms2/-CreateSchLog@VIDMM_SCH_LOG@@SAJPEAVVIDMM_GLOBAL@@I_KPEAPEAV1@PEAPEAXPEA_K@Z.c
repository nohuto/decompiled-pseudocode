/*
 * XREFs of ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C00472D0
 * Callers:
 *     VidSchiCreateNodeSchedulingLog @ 0x1C0042A90 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C00149D0 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x1C0018008 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x1C004729C (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 *     ?RegisterSchLog@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_SCH_LOG@@@Z @ 0x1C0047874 (-RegisterSchLog@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_SCH_LOG@@@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C007B4E8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C007C150 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00859C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0085A38 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C009A5E0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C009B234 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00A6BA8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_SCH_LOG::CreateSchLog(
        struct VIDMM_GLOBAL *this,
        unsigned int a2,
        __int64 a3,
        struct VIDMM_SCH_LOG **a4,
        void **a5,
        unsigned __int64 *a6)
{
  struct VIDMM_SCH_LOG **v6; // r13
  __int64 v7; // r12
  SIZE_T v9; // r15
  unsigned __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rax
  int v13; // eax
  struct _MDL *Mdl; // rax
  int v15; // eax
  unsigned int v16; // eax
  CVirtualAddressAllocator *VirtualAddressAllocator; // r13
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v22; // [rsp+70h] [rbp-B8h] BYREF
  SIZE_T v23; // [rsp+78h] [rbp-B0h] BYREF
  _BYTE v24[16]; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v25[19]; // [rsp+90h] [rbp-98h] BYREF
  unsigned __int64 v26; // [rsp+130h] [rbp+8h] BYREF
  SIZE_T v27; // [rsp+140h] [rbp+18h] BYREF
  struct VIDMM_SCH_LOG **v28; // [rsp+148h] [rbp+20h]

  v28 = a4;
  v6 = a4;
  v7 = a2;
  v9 = (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v22 = 0LL;
  memset(v25, 0, 0x58uLL);
  v10 = 0LL;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v24,
    (struct DXGPUSHLOCKFAST *)(*(_QWORD *)this + 32LL));
  if ( *(_DWORD *)(*(_QWORD *)this + 24LL) == 1 )
  {
    if ( (*(_BYTE *)(1584 * v7 + *((_QWORD *)this + 5028) + 436) & 0x20) != 0 )
    {
      LODWORD(v11) = -1073741637;
      goto LABEL_26;
    }
    v12 = operator new(88LL, 0x65356956u, 256LL);
    v10 = v12;
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      *(_OWORD *)(v12 + 8) = 0LL;
      *(_DWORD *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 32) = 0LL;
      *(_QWORD *)(v12 + 40) = 0LL;
      *(_QWORD *)(v12 + 48) = 0LL;
      *(_QWORD *)(v12 + 56) = 0LL;
      *(_QWORD *)(v12 + 64) = 0LL;
      *(_QWORD *)(v12 + 72) = 0LL;
      *(_BYTE *)(v12 + 80) = 0;
    }
    else
    {
      v10 = 0LL;
    }
    v26 = v10;
    if ( v10 )
    {
      *(_QWORD *)v10 = this;
      *(_DWORD *)(v10 + 24) = v7;
      *(_QWORD *)(v10 + 32) = v9;
      v27 = v9;
      v13 = MmCreateSection(v10 + 40, 0LL, 0LL, &v27, 4, 0x8000000, 0LL, 0LL);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v23 = v9;
        LODWORD(v11) = MmMapViewInSystemSpaceEx(*(_QWORD *)(v10 + 40), v10 + 48, &v23, &v22, 0LL);
        if ( (int)v11 >= 0 )
        {
          Mdl = VidMmiAllocateMdl(*(PVOID *)(v10 + 48), v9);
          *(_QWORD *)(v10 + 64) = Mdl;
          if ( Mdl )
          {
            MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
            *(_BYTE *)(v10 + 80) = 1;
            v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64, unsigned __int64))DxgCoreInterface[88])(
                    *(_QWORD *)(*((_QWORD *)this + 3) + 224LL),
                    *(_QWORD *)(v10 + 32),
                    v10,
                    v10 + 72);
            LODWORD(v11) = v15;
            if ( v15 >= 0 )
            {
              v16 = VIDMM_GLOBAL::AdapterId(this);
              VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(g_pVidMmSystemProcess, v16, v7);
              v26 = 0LL;
              LODWORD(v11) = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
                               VirtualAddressAllocator,
                               v9,
                               v18,
                               *((_QWORD *)this + 5118),
                               *((_QWORD *)this + 5119),
                               0x1000u,
                               &v26);
              if ( (int)v11 >= 0 )
              {
                v19 = v26;
                *(_QWORD *)(v10 + 56) = v26;
                v20 = CVirtualAddressAllocator::MapVirtualAddressRange(
                        VirtualAddressAllocator,
                        v10,
                        0LL,
                        7LL,
                        v9,
                        v19,
                        0LL,
                        0LL,
                        4096,
                        17LL,
                        0LL,
                        v7,
                        0LL,
                        0,
                        v22);
                if ( !v20 )
                {
                  WdLogSingleEntry0(3LL);
                  LODWORD(v11) = -1073741823;
                  goto LABEL_11;
                }
                LODWORD(v25[0]) = 113;
                v25[6] = v20;
                v25[5] = VirtualAddressAllocator;
                HIDWORD(v25[0]) = v7;
                v25[7] = *(_QWORD *)(v10 + 64);
                LODWORD(v11) = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v25, 1);
                if ( (int)v11 >= 0 )
                {
                  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v24);
                  LODWORD(v11) = VIDMM_GLOBAL::RegisterSchLog(this, (struct VIDMM_SCH_LOG *)v10);
                  if ( (int)v11 >= 0 )
                  {
                    VIDMM_PROCESS::OpenAdapter(g_pVidMmSystemProcess, this);
                    *v28 = (struct VIDMM_SCH_LOG *)v10;
                    *a5 = *(void **)(v10 + 48);
                    *a6 = *(_QWORD *)(v10 + 56);
                    goto LABEL_29;
                  }
                }
              }
              WdLogSingleEntry0(3LL);
              goto LABEL_11;
            }
            WdLogSingleEntry1(3LL, v15);
          }
          else
          {
            _InterlockedIncrement(&dword_1C006E89C);
            WdLogSingleEntry1(6LL, 140LL);
            DxgCoreInterface[85](
              0LL,
              262145LL,
              0xFFFFFFFFLL,
              L"Failed to allocate Mdl for VidMm scheduler log",
              140LL,
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(v11) = -1073741801;
          }
        }
        else
        {
          _InterlockedIncrement(&dword_1C006E834);
          WdLogSingleEntry1(6LL, 131LL);
          DxgCoreInterface[85](
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Failed to map view of section for VidMm scheduler log",
            131LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        _InterlockedIncrement(&dword_1C006E898);
        WdLogSingleEntry1(6LL, v13);
        DxgCoreInterface[85](
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Failed to create section for VidMm scheduler log, Status=0x%.8x",
          v11,
          0LL,
          0LL,
          0LL,
          0LL);
      }
LABEL_11:
      v6 = v28;
      goto LABEL_26;
    }
  }
  LODWORD(v11) = -1073741801;
LABEL_26:
  if ( v10 )
    VIDMM_SCH_LOG::`scalar deleting destructor'((VIDMM_SCH_LOG *)v10);
  *v6 = 0LL;
  *a5 = 0LL;
  *a6 = 0LL;
LABEL_29:
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v24);
  return (unsigned int)v11;
}
