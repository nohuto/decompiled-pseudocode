/*
 * XREFs of ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0090764
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C009011C (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     ?ReadBudgetConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C00914FC (-ReadBudgetConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadVPRConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0091CE4 (-ReadVPRConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadTestAndStagingConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0091E98 (-ReadTestAndStagingConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadPagingConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0092218 (-ReadPagingConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadGpuVaConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C00927C0 (-ReadGpuVaConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadPowerConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0092ACC (-ReadPowerConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadHeapConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0092BC8 (-ReadHeapConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C00930BC (-ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadUnusedAllocationConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C00932DC (-ReadUnusedAllocationConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadWorkingSetConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C00938B0 (-ReadWorkingSetConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadCommitLimitInformation@VIDMM_GLOBAL@@KAXXZ @ 0x1C009399C (-ReadCommitLimitInformation@VIDMM_GLOBAL@@KAXXZ.c)
 */

void VIDMM_GLOBAL::ReadConfiguration(void)
{
  int v0; // ebx
  unsigned __int64 v1; // rsi
  __int64 PhysicalMemoryRanges; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rax
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int *v9; // rsi
  ULONG v10; // r14d
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v24; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-C4h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+54h] [rbp-B4h] BYREF
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  int v31; // [rsp+5Ch] [rbp-ACh] BYREF
  int v32; // [rsp+60h] [rbp-A8h] BYREF
  int v33; // [rsp+64h] [rbp-A4h] BYREF
  int v34; // [rsp+68h] [rbp-A0h] BYREF
  int v35; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v36; // [rsp+70h] [rbp-98h] BYREF
  int v37; // [rsp+74h] [rbp-94h] BYREF
  int v38; // [rsp+78h] [rbp-90h] BYREF
  int v39; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v40; // [rsp+80h] [rbp-88h] BYREF
  int v41; // [rsp+84h] [rbp-84h] BYREF
  int v42; // [rsp+88h] [rbp-80h] BYREF
  int v43; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v44; // [rsp+90h] [rbp-78h] BYREF
  int v45; // [rsp+94h] [rbp-74h] BYREF
  int v46; // [rsp+98h] [rbp-70h] BYREF
  int v47; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v48; // [rsp+A0h] [rbp-68h] BYREF
  int v49; // [rsp+A4h] [rbp-64h] BYREF
  int v50; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v51; // [rsp+ACh] [rbp-5Ch] BYREF
  int v52; // [rsp+B0h] [rbp-58h] BYREF
  int v53; // [rsp+B4h] [rbp-54h] BYREF
  int v54; // [rsp+B8h] [rbp-50h] BYREF
  int v55; // [rsp+BCh] [rbp-4Ch] BYREF
  int v56; // [rsp+C0h] [rbp-48h] BYREF
  int v57; // [rsp+C4h] [rbp-44h] BYREF
  int v58; // [rsp+C8h] [rbp-40h] BYREF
  int v59; // [rsp+CCh] [rbp-3Ch] BYREF
  int v60; // [rsp+D0h] [rbp-38h] BYREF
  int v61; // [rsp+D4h] [rbp-34h] BYREF
  int v62; // [rsp+D8h] [rbp-30h] BYREF
  int v63; // [rsp+DCh] [rbp-2Ch] BYREF
  int v64; // [rsp+E0h] [rbp-28h] BYREF
  int v65; // [rsp+E4h] [rbp-24h] BYREF
  int v66; // [rsp+E8h] [rbp-20h] BYREF
  int v67; // [rsp+ECh] [rbp-1Ch] BYREF
  int v68; // [rsp+F0h] [rbp-18h] BYREF
  int v69; // [rsp+F4h] [rbp-14h] BYREF
  int v70; // [rsp+F8h] [rbp-10h] BYREF
  int v71; // [rsp+FCh] [rbp-Ch] BYREF
  int v72; // [rsp+100h] [rbp-8h] BYREF
  int v73; // [rsp+104h] [rbp-4h] BYREF
  int v74; // [rsp+108h] [rbp+0h] BYREF
  int v75; // [rsp+10Ch] [rbp+4h] BYREF
  int v76; // [rsp+110h] [rbp+8h] BYREF
  int v77; // [rsp+114h] [rbp+Ch] BYREF
  int v78; // [rsp+118h] [rbp+10h] BYREF
  int v79; // [rsp+11Ch] [rbp+14h] BYREF
  int v80; // [rsp+120h] [rbp+18h] BYREF
  int v81; // [rsp+124h] [rbp+1Ch] BYREF
  int v82; // [rsp+128h] [rbp+20h] BYREF
  int v83; // [rsp+12Ch] [rbp+24h] BYREF
  int v84; // [rsp+130h] [rbp+28h] BYREF
  int v85; // [rsp+134h] [rbp+2Ch] BYREF
  struct _UNICODE_STRING Destination; // [rsp+138h] [rbp+30h] BYREF
  struct _UNICODE_STRING String; // [rsp+148h] [rbp+40h] BYREF
  __int128 v88; // [rsp+158h] [rbp+50h]
  __int128 v89; // [rsp+168h] [rbp+60h]
  __int128 v90; // [rsp+178h] [rbp+70h]
  __int64 v91; // [rsp+188h] [rbp+80h]
  struct _UNICODE_STRING DestinationString; // [rsp+190h] [rbp+88h] BYREF
  _OWORD v93[112]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v94; // [rsp+8A8h] [rbp+7A0h] BYREF
  _BYTE v95[64]; // [rsp+8B8h] [rbp+7B0h] BYREF

  v0 = 0;
  v1 = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRangesEx(0LL);
  v3 = (_QWORD *)PhysicalMemoryRanges;
  if ( PhysicalMemoryRanges )
  {
    v4 = *(_QWORD *)(PhysicalMemoryRanges + 8);
    v5 = 0;
    while ( v4 )
    {
      v1 += v4;
      v4 = v3[2 * (unsigned int)++v5 + 1];
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    _InterlockedAdd(&dword_1C0051750, 1u);
    v19 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v19 + 24) = 44LL;
    WdLogEvent5_WdLowResource(v19);
    v1 = 0x20000000LL;
  }
  qword_1C00511E0 = v1;
  v26 = 25;
  v22 = 25;
  qword_1C00511D8 = v1;
  v27 = 40;
  v23 = 40;
  v56 = 0;
  v24 = 0;
  v57 = 10;
  v58 = 15;
  v39 = 15;
  v38 = 10;
  v59 = 5;
  v40 = 5;
  v60 = 300;
  v41 = 300;
  v6 = 256;
  if ( v1 > 0x20000000 )
    v6 = 1024;
  v61 = 0;
  v62 = v6;
  v29 = v6;
  v7 = 0x800000;
  if ( v1 > 0x20000000 )
    v7 = 0x2000000;
  v28 = 0;
  v64 = v7;
  v31 = v7;
  v8 = 0x400000;
  if ( v1 > 0x20000000 )
    v8 = 0x1000000;
  v63 = 4;
  v65 = v8;
  v32 = v8;
  v30 = 4;
  v66 = 10;
  v33 = 10;
  v68 = 1;
  v35 = 1;
  v69 = 1;
  v37 = 1;
  v67 = g_IsInternalRelease != 0 ? 0x40 : 0;
  v34 = v67;
  v71 = 0x100000;
  v42 = 0x100000;
  v73 = 60;
  v44 = 60;
  v74 = 60;
  v45 = 60;
  v76 = 8;
  v47 = 8;
  v70 = 1;
  v36 = 1;
  v72 = 0x800000;
  v43 = 0x800000;
  v75 = 1;
  v46 = 1;
  v77 = 2;
  v48 = 2;
  v78 = 0;
  v49 = 0;
  v79 = 0;
  v50 = 0;
  v81 = 1;
  v52 = 1;
  v80 = 200;
  v51 = 200;
  v82 = 4096;
  v53 = 4096;
  v83 = 6;
  v54 = 6;
  v84 = 20;
  v55 = 20;
  *(_QWORD *)&v93[1] = L"PinnedMemoryLimit";
  *((_QWORD *)&v93[1] + 1) = &v22;
  *((_QWORD *)&v93[2] + 1) = &v26;
  *((_QWORD *)&v93[4] + 1) = L"PinnedApertureMemoryLimit";
  *(_QWORD *)&v93[5] = &v23;
  *(_QWORD *)&v93[6] = &v27;
  *(_QWORD *)&v93[8] = L"PagesHistory";
  *((_QWORD *)&v93[8] + 1) = &v24;
  *((_QWORD *)&v93[9] + 1) = &v56;
  *((_QWORD *)&v93[11] + 1) = L"MemTransferThreshold";
  *(_QWORD *)&v93[12] = &v38;
  *(_QWORD *)&v93[13] = &v57;
  *(_QWORD *)&v93[15] = L"ExcessiveMemTransferFlipThreshold";
  *((_QWORD *)&v93[15] + 1) = &v39;
  *((_QWORD *)&v93[16] + 1) = &v58;
  *((_QWORD *)&v93[18] + 1) = L"ExcessiveMemTransferPenalty";
  *(_QWORD *)&v93[19] = &v40;
  *(_QWORD *)&v93[20] = &v59;
  *(_QWORD *)&v93[22] = L"EventThrottleThreshold";
  *(_QWORD *)&v93[0] = 0LL;
  DWORD2(v93[0]) = 288;
  LODWORD(v93[2]) = 67108868;
  LODWORD(v93[3]) = 4;
  *((_QWORD *)&v93[3] + 1) = 0LL;
  LODWORD(v93[4]) = 288;
  DWORD2(v93[5]) = 67108868;
  DWORD2(v93[6]) = 4;
  *(_QWORD *)&v93[7] = 0LL;
  DWORD2(v93[7]) = 288;
  LODWORD(v93[9]) = 67108868;
  LODWORD(v93[10]) = 4;
  *((_QWORD *)&v93[10] + 1) = 0LL;
  LODWORD(v93[11]) = 288;
  DWORD2(v93[12]) = 67108868;
  DWORD2(v93[13]) = 4;
  *(_QWORD *)&v93[14] = 0LL;
  DWORD2(v93[14]) = 288;
  LODWORD(v93[16]) = 67108868;
  LODWORD(v93[17]) = 4;
  *((_QWORD *)&v93[17] + 1) = 0LL;
  LODWORD(v93[18]) = 288;
  DWORD2(v93[19]) = 67108868;
  DWORD2(v93[20]) = 4;
  *(_QWORD *)&v93[21] = 0LL;
  DWORD2(v93[21]) = 288;
  *((_QWORD *)&v93[22] + 1) = &v41;
  *((_QWORD *)&v93[23] + 1) = &v60;
  *((_QWORD *)&v93[25] + 1) = L"DisablePrefetching";
  *(_QWORD *)&v93[26] = &v28;
  *(_QWORD *)&v93[27] = &v61;
  *(_QWORD *)&v93[29] = L"NbDmaBufferLimitPerDevice";
  *((_QWORD *)&v93[29] + 1) = &v29;
  *((_QWORD *)&v93[30] + 1) = &v62;
  *((_QWORD *)&v93[32] + 1) = L"NbCddDmaBufferLimitPerDevice";
  *(_QWORD *)&v93[33] = &v30;
  *(_QWORD *)&v93[34] = &v63;
  *(_QWORD *)&v93[36] = L"DmaBufferBytesLimitAllDevices";
  *((_QWORD *)&v93[36] + 1) = &v31;
  *((_QWORD *)&v93[37] + 1) = &v64;
  *((_QWORD *)&v93[39] + 1) = L"DmaBufferListBytesLimitAllDevices";
  *(_QWORD *)&v93[40] = &v32;
  *(_QWORD *)&v93[41] = &v65;
  *(_QWORD *)&v93[43] = L"NbDmaBufferLimitCompareWatermark";
  *((_QWORD *)&v93[43] + 1) = &v33;
  *((_QWORD *)&v93[44] + 1) = &v66;
  *((_QWORD *)&v93[46] + 1) = L"NbPagingHistoryRecords";
  *(_QWORD *)&v93[47] = &v34;
  *(_QWORD *)&v93[48] = &v67;
  *(_QWORD *)&v93[50] = L"PinDWMAllocationBackingStore";
  *((_QWORD *)&v93[50] + 1) = &v35;
  LODWORD(v93[23]) = 67108868;
  LODWORD(v93[24]) = 4;
  *((_QWORD *)&v93[24] + 1) = 0LL;
  LODWORD(v93[25]) = 288;
  DWORD2(v93[26]) = 67108868;
  DWORD2(v93[27]) = 4;
  *(_QWORD *)&v93[28] = 0LL;
  DWORD2(v93[28]) = 288;
  LODWORD(v93[30]) = 67108868;
  LODWORD(v93[31]) = 4;
  *((_QWORD *)&v93[31] + 1) = 0LL;
  LODWORD(v93[32]) = 288;
  DWORD2(v93[33]) = 67108868;
  DWORD2(v93[34]) = 4;
  *(_QWORD *)&v93[35] = 0LL;
  DWORD2(v93[35]) = 288;
  LODWORD(v93[37]) = 67108868;
  LODWORD(v93[38]) = 4;
  *((_QWORD *)&v93[38] + 1) = 0LL;
  LODWORD(v93[39]) = 288;
  DWORD2(v93[40]) = 67108868;
  DWORD2(v93[41]) = 4;
  *(_QWORD *)&v93[42] = 0LL;
  DWORD2(v93[42]) = 288;
  LODWORD(v93[44]) = 67108868;
  LODWORD(v93[45]) = 4;
  *((_QWORD *)&v93[45] + 1) = 0LL;
  LODWORD(v93[46]) = 288;
  DWORD2(v93[47]) = 67108868;
  DWORD2(v93[48]) = 4;
  *(_QWORD *)&v93[49] = 0LL;
  DWORD2(v93[49]) = 288;
  LODWORD(v93[51]) = 67108868;
  *((_QWORD *)&v93[51] + 1) = &v68;
  *((_QWORD *)&v93[53] + 1) = L"RemovePagesFromWorkingSetOnPagingForDwm";
  *(_QWORD *)&v93[54] = &v37;
  *(_QWORD *)&v93[55] = &v69;
  *(_QWORD *)&v93[57] = L"UseUnreset";
  *((_QWORD *)&v93[57] + 1) = &v36;
  *((_QWORD *)&v93[58] + 1) = &v70;
  *((_QWORD *)&v93[60] + 1) = L"PrivateHeapPackingThreshold";
  *(_QWORD *)&v93[61] = &v42;
  *(_QWORD *)&v93[62] = &v71;
  *(_QWORD *)&v93[64] = L"PrivateHeapPackingBlockSize";
  *((_QWORD *)&v93[64] + 1) = &v43;
  *((_QWORD *)&v93[65] + 1) = &v72;
  *((_QWORD *)&v93[67] + 1) = L"EvictTemporaryPeriod";
  *(_QWORD *)&v93[68] = &v44;
  *(_QWORD *)&v93[69] = &v73;
  *(_QWORD *)&v93[71] = L"EvictUnusedPeriod";
  *((_QWORD *)&v93[71] + 1) = &v45;
  *((_QWORD *)&v93[72] + 1) = &v74;
  *((_QWORD *)&v93[74] + 1) = L"ProcessPendingOfferPeriod";
  *(_QWORD *)&v93[75] = &v46;
  *(_QWORD *)&v93[76] = &v75;
  *(_QWORD *)&v93[78] = L"ProcessSysmemOfferPeriod";
  *((_QWORD *)&v93[78] + 1) = &v47;
  LODWORD(v93[52]) = 4;
  *((_QWORD *)&v93[52] + 1) = 0LL;
  LODWORD(v93[53]) = 288;
  DWORD2(v93[54]) = 67108868;
  DWORD2(v93[55]) = 4;
  *(_QWORD *)&v93[56] = 0LL;
  DWORD2(v93[56]) = 288;
  LODWORD(v93[58]) = 67108868;
  LODWORD(v93[59]) = 4;
  *((_QWORD *)&v93[59] + 1) = 0LL;
  LODWORD(v93[60]) = 288;
  DWORD2(v93[61]) = 67108868;
  DWORD2(v93[62]) = 4;
  *(_QWORD *)&v93[63] = 0LL;
  DWORD2(v93[63]) = 288;
  LODWORD(v93[65]) = 67108868;
  LODWORD(v93[66]) = 4;
  *((_QWORD *)&v93[66] + 1) = 0LL;
  LODWORD(v93[67]) = 288;
  DWORD2(v93[68]) = 67108868;
  DWORD2(v93[69]) = 4;
  *(_QWORD *)&v93[70] = 0LL;
  DWORD2(v93[70]) = 288;
  LODWORD(v93[72]) = 67108868;
  LODWORD(v93[73]) = 4;
  *((_QWORD *)&v93[73] + 1) = 0LL;
  LODWORD(v93[74]) = 288;
  DWORD2(v93[75]) = 67108868;
  DWORD2(v93[76]) = 4;
  *(_QWORD *)&v93[77] = 0LL;
  DWORD2(v93[77]) = 288;
  LODWORD(v93[79]) = 67108868;
  LODWORD(v93[80]) = 4;
  *((_QWORD *)&v93[79] + 1) = &v76;
  *((_QWORD *)&v93[81] + 1) = L"SegmentBalancingPolicy";
  *(_QWORD *)&v93[82] = &v48;
  *(_QWORD *)&v93[83] = &v77;
  *(_QWORD *)&v93[85] = L"BugcheckOnApertureCorruption";
  *((_QWORD *)&v93[85] + 1) = &v49;
  *((_QWORD *)&v93[86] + 1) = &v78;
  *((_QWORD *)&v93[88] + 1) = L"QuickApertureCorruptionCheck";
  *(_QWORD *)&v93[89] = &v50;
  *(_QWORD *)&v93[90] = &v79;
  *(_QWORD *)&v93[92] = L"DirectFlipMemoryRequirement";
  *((_QWORD *)&v93[92] + 1) = &v51;
  *((_QWORD *)&v93[93] + 1) = &v80;
  *((_QWORD *)&v93[95] + 1) = L"CommitProcessHeapOnDemand";
  *(_QWORD *)&v93[96] = &v52;
  *(_QWORD *)&v93[97] = &v81;
  *(_QWORD *)&v93[99] = L"SegmentCleanupSizeThreshold";
  *((_QWORD *)&v93[99] + 1) = &v53;
  *((_QWORD *)&v93[100] + 1) = &v82;
  *((_QWORD *)&v93[102] + 1) = L"SegmentCleanupCountThreshold";
  *(_QWORD *)&v93[103] = &v54;
  *(_QWORD *)&v93[104] = &v83;
  *(_QWORD *)&v93[106] = L"SegmentCleanupTime";
  *((_QWORD *)&v93[106] + 1) = &v55;
  *((_QWORD *)&v93[80] + 1) = 0LL;
  LODWORD(v93[81]) = 288;
  DWORD2(v93[82]) = 67108868;
  DWORD2(v93[83]) = 4;
  *(_QWORD *)&v93[84] = 0LL;
  DWORD2(v93[84]) = 288;
  LODWORD(v93[86]) = 67108868;
  LODWORD(v93[87]) = 4;
  *((_QWORD *)&v93[87] + 1) = 0LL;
  LODWORD(v93[88]) = 288;
  DWORD2(v93[89]) = 67108868;
  DWORD2(v93[90]) = 4;
  *(_QWORD *)&v93[91] = 0LL;
  DWORD2(v93[91]) = 288;
  LODWORD(v93[93]) = 67108868;
  LODWORD(v93[94]) = 4;
  *((_QWORD *)&v93[94] + 1) = 0LL;
  LODWORD(v93[95]) = 288;
  DWORD2(v93[96]) = 67108868;
  DWORD2(v93[97]) = 4;
  *(_QWORD *)&v93[98] = 0LL;
  DWORD2(v93[98]) = 288;
  LODWORD(v93[100]) = 67108868;
  LODWORD(v93[101]) = 4;
  *((_QWORD *)&v93[101] + 1) = 0LL;
  LODWORD(v93[102]) = 288;
  DWORD2(v93[103]) = 67108868;
  DWORD2(v93[104]) = 4;
  *(_QWORD *)&v93[105] = 0LL;
  DWORD2(v93[105]) = 288;
  LODWORD(v93[107]) = 67108868;
  *((_QWORD *)&v93[107] + 1) = &v84;
  LODWORD(v93[108]) = 4;
  *((_QWORD *)&v93[111] + 1) = 0LL;
  *(_OWORD *)((char *)&v93[108] + 8) = 0LL;
  *(_OWORD *)((char *)&v93[109] + 8) = 0LL;
  *(_OWORD *)((char *)&v93[110] + 8) = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v93, 0LL, 0LL);
  v9 = (unsigned int *)&unk_1C0051208;
  memset(&unk_1C0051208, 0, 0x80uLL);
  memset(v93, 0, sizeof(v93));
  v10 = 0;
  v11 = 0LL;
  do
  {
    memset(v95, 0, sizeof(v95));
    *(_QWORD *)&Destination.Length = 0x400000LL;
    Destination.Buffer = (PWSTR)v95;
    DestinationString = 0LL;
    String = 0LL;
    RtlInitUnicodeString(&DestinationString, L"MaxSegmentSize");
    if ( RtlAppendUnicodeStringToString(&Destination, &DestinationString) >= 0 )
    {
      *(_DWORD *)&String.Length = 0x100000;
      String.Buffer = (PWSTR)&v94;
      if ( RtlIntegerToUnicodeString(v10, 0, &String) >= 0 && RtlAppendUnicodeStringToString(&Destination, &String) >= 0 )
      {
        *(_QWORD *)&v89 = Destination.Buffer;
        *(_QWORD *)&v88 = 0LL;
        *((_QWORD *)&v89 + 1) = &v25;
        DWORD2(v88) = 288;
        *((_QWORD *)&v90 + 1) = &v85;
        v93[1] = v89;
        v93[0] = v88;
        LODWORD(v90) = 67108868;
        LODWORD(v91) = 4;
        v93[2] = v90;
        *(_QWORD *)&v93[3] = v91;
        v85 = 0;
        v25 = 0;
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v93, 0LL, 0LL);
        v14 = v25;
        *v9 = v25;
        if ( v14 )
        {
          v20 = (v14 + 4095) & 0xFFFFF000;
          if ( v20 < 0x800000 )
            v20 = 0x800000;
          *v9 = v20;
          v21 = WdLogNewEntry5_WdEvent(v13, v12);
          *(_QWORD *)(v21 + 24) = v11;
          *(_QWORD *)(v21 + 32) = *v9;
          WdLogEvent5_WdEvent(v21);
        }
      }
    }
    ++v10;
    ++v11;
    ++v9;
  }
  while ( v10 < 0x20 );
  v15 = WdLogNewEntry5_WdEvent(v13, v12);
  *(_QWORD *)(v15 + 24) = v22;
  WdLogEvent5_WdEvent(v15);
  v16 = v26;
  if ( v22 < 0x5A )
    v16 = v22;
  dword_1C00511F8 = v16;
  v17 = v27;
  if ( v23 < 0x5A )
    v17 = v23;
  dword_1C00511FC = v17;
  v18 = 0x7FFFFFF;
  dword_1C0051200 = 0;
  if ( v24 < 0x7FFFFFF )
    v18 = v24;
  dword_1C0051204 = v18;
  dword_1C0051308 = v29;
  dword_1C005130C = v30;
  dword_1C0051310 = v31;
  dword_1C0051314 = v32;
  dword_1C0051318 = v33;
  dword_1C005131C = v34;
  qword_1C0051320 = (unsigned int)(v38 << 20);
  dword_1C0051328 = v39;
  dword_1C005132C = v40;
  dword_1C0051338 = v42;
  dword_1C005133C = v43;
  dword_1C0051360 = v48;
  qword_1C0051330 = (unsigned int)(10000000 * v41);
  qword_1C0051340 = (unsigned int)(10000000 * v44);
  qword_1C0051348 = (unsigned int)(10000000 * v45);
  qword_1C0051350 = (unsigned int)(10000000 * v46);
  qword_1C0051358 = (unsigned int)(10000000 * v47);
  VIDMM_GLOBAL::_Config = (v49 != 0 ? 0x10 : 0) | (v35 != 0 ? 2 : 0) | (VIDMM_GLOBAL::_Config ^ (v28 ^ VIDMM_GLOBAL::_Config) & 1) & 0xFFFFFFE1 | (4 * (v37 & 1 | (unsigned __int8)(2 * (v36 & 1)))) & 0xEF;
  dword_1C00511C4 = v50 != 0;
  qword_1C00511D0 = (unsigned __int64)v51 << 20;
  LOBYTE(v0) = v52 != 0;
  qword_1C0051390 = (unsigned int)(v53 << 10);
  dword_1C00511C8 = v0;
  qword_1C00513A0 = (unsigned int)(10000 * v55);
  dword_1C0051398 = v54;
  VIDMM_GLOBAL::ReadCommitLimitInformation();
  VIDMM_GLOBAL::ReadWorkingSetConfiguration();
  VIDMM_GLOBAL::ReadUnusedAllocationConfiguration();
  VIDMM_GLOBAL::ReadPreparationPeriodConfiguration();
  VIDMM_GLOBAL::ReadHeapConfiguration();
  VIDMM_GLOBAL::ReadPowerConfiguration();
  VIDMM_GLOBAL::ReadGpuVaConfiguration();
  VIDMM_GLOBAL::ReadPagingConfiguration();
  VIDMM_GLOBAL::ReadTestAndStagingConfiguration();
  VIDMM_GLOBAL::ReadVPRConfiguration();
  VIDMM_GLOBAL::ReadBudgetConfiguration();
}
