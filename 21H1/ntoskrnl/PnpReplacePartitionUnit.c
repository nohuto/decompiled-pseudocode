/*
 * XREFs of PnpReplacePartitionUnit @ 0x1408A7E50
 * Callers:
 *     IoReplacePartitionUnit @ 0x14089A020 (IoReplacePartitionUnit.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeIsEmptyAffinityEx @ 0x140276350 (KeIsEmptyAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140277930 (KeCopyAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1403374F0 (KeRevertToUserGroupAffinityThread.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C8408 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PnprQueryReplaceFeatures @ 0x140509B88 (PnprQueryReplaceFeatures.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14050DA90 (KeFindFirstSetLeftAffinityEx.c)
 *     MmUnloadSystemImage @ 0x14075D670 (MmUnloadSystemImage.c)
 *     PnprAllocateMappingReserves @ 0x1408A8D5C (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x1408A8F14 (PnprCollectResources.c)
 *     PnprFreeMappingReserve @ 0x1408A92B0 (PnprFreeMappingReserve.c)
 *     PnprIdentifyUnits @ 0x1408A951C (PnprIdentifyUnits.c)
 *     PnprLegacyDeviceDriversPresent @ 0x1408A99D4 (PnprLegacyDeviceDriversPresent.c)
 *     PnprLoadPluginDriver @ 0x1408A9A28 (PnprLoadPluginDriver.c)
 *     PnprLockPagesForReplace @ 0x1408A9BA4 (PnprLockPagesForReplace.c)
 *     PnprLogFailureEvent @ 0x1408A9BD8 (PnprLogFailureEvent.c)
 *     PnprLogStartEvent @ 0x1408A9D04 (PnprLogStartEvent.c)
 *     PnprLogSuccessEvent @ 0x1408A9DD8 (PnprLogSuccessEvent.c)
 *     PnprMmConstruct @ 0x1408AA1C8 (PnprMmConstruct.c)
 *     PnprMmFree @ 0x1408AA2D4 (PnprMmFree.c)
 *     PnprUnlockPagesForReplace @ 0x1408AA494 (PnprUnlockPagesForReplace.c)
 *     PnprGetMillisecondCounter @ 0x1409A9ACC (PnprGetMillisecondCounter.c)
 *     PnprInitiateReplaceOperation @ 0x1409A9B2C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceDevices @ 0x1409AA540 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1409AB0CC (PnprWakeDevices.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

LONG __fastcall PnpReplacePartitionUnit(_QWORD *a1)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v3; // r15
  ULONG_PTR v4; // rcx
  __int64 v5; // rdx
  ULONG_PTR v6; // r8
  __int64 v7; // rdx
  PVOID PoolWithTag; // rax
  __int64 v9; // rbx
  int PluginDriver; // esi
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  ULONG_PTR v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  ULONG_PTR v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  ULONG_PTR v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rcx
  ULONG_PTR v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  int v49; // edx
  int v50; // eax
  __int64 v51; // rdx
  int v52; // ecx
  int v53; // ecx
  __int64 v54; // rcx
  int v55; // eax
  int v56; // eax
  int ReplaceFeatures; // eax
  __int64 v58; // rcx
  char v59; // r15
  int v60; // eax
  int v61; // edx
  int v62; // edx
  __int64 v63; // rcx
  int v64; // eax
  int v65; // eax
  __int64 v66; // rcx
  int v67; // eax
  int v68; // eax
  __int64 v69; // rdx
  unsigned int v70; // eax
  __int64 v71; // rdx
  _QWORD *v72; // rcx
  __int64 v73; // r8
  int v74; // eax
  int FirstSetLeftAffinity; // eax
  unsigned int v76; // ecx
  __int64 v77; // r14
  void (*v78)(void); // rax
  void *v79; // rcx
  __int64 v80; // r14
  void *v81; // rcx
  void *v82; // rcx
  void *v83; // rcx
  void *v84; // rcx
  ULONG v86; // [rsp+30h] [rbp-D0h]
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v89[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v90; // [rsp+88h] [rbp-78h]
  int v91; // [rsp+90h] [rbp-70h]
  _QWORD v92[22]; // [rsp+A0h] [rbp-60h] BYREF

  Affinity = 0LL;
  memset(v92, 0, 0xA8uLL);
  v90 = 0LL;
  v91 = 0;
  PreviousAffinity = 0LL;
  memset(v89, 0, sizeof(v89));
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v3 = ActiveProcessorCount;
  v86 = ActiveProcessorCount;
  KeWaitForSingleObject(&PnpReplaceEvent, Executive, 0, 0, 0LL);
  if ( *((int *)a1 + 4) >= 0 )
  {
    v4 = a1[1];
    if ( !v4 || (v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL)) == 0 || (*(_DWORD *)(v5 + 396) & 0x20000) != 0 )
    {
      if ( v4 )
      {
        IoAddTriageDumpDataBlock(v4, (PVOID)*(unsigned __int16 *)(v4 + 2));
        v4 = a1[1];
        v28 = *(_QWORD *)(v4 + 8);
        if ( v28 )
        {
          IoAddTriageDumpDataBlock(*(_QWORD *)(v4 + 8), (PVOID)(unsigned int)*(__int16 *)(v28 + 2));
          v4 = a1[1];
          v29 = *(_QWORD *)(v4 + 8);
          if ( *(_WORD *)(v29 + 56) )
          {
            IoAddTriageDumpDataBlock(v29 + 56, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(a1[1] + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a1[1] + 8LL) + 56LL));
            v4 = a1[1];
          }
        }
        if ( v4 )
          v30 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
        else
          v30 = 0LL;
        if ( v30 )
        {
          if ( v4 )
            v31 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
          else
            v31 = 0LL;
          if ( v4 )
            v32 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
          else
            LODWORD(v32) = 0;
          IoAddTriageDumpDataBlock(v32, (PVOID)0x310);
          if ( *(_WORD *)(v31 + 40) )
          {
            IoAddTriageDumpDataBlock(v31 + 40, (PVOID)2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v31 + 48), (PVOID)*(unsigned __int16 *)(v31 + 40));
          }
          v33 = a1[1];
          if ( v33 )
            v34 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
          else
            v34 = 0LL;
          if ( *(_WORD *)(v34 + 56) )
          {
            if ( v33 )
              v35 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
            else
              LODWORD(v35) = 0;
            IoAddTriageDumpDataBlock(v35 + 56, (PVOID)2);
            v36 = a1[1];
            if ( v36 )
              v37 = *(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL);
            else
              v37 = 0LL;
            if ( v36 )
              v38 = *(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL);
            else
              v38 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v38 + 64), (PVOID)*(unsigned __int16 *)(v37 + 56));
            v33 = a1[1];
          }
          if ( v33 )
            v39 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
          else
            v39 = 0LL;
          v4 = v33;
          if ( *(_QWORD *)(v39 + 16) )
          {
            v40 = v33 ? *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v40 + 16) + 56LL) )
            {
              if ( v33 )
                v41 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
              else
                v41 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v41 + 16) + 56, (PVOID)2);
              v42 = a1[1];
              if ( v42 )
                v43 = *(_QWORD *)(*(_QWORD *)(v42 + 312) + 40LL);
              else
                v43 = 0LL;
              if ( v42 )
                v44 = *(_QWORD *)(*(_QWORD *)(v42 + 312) + 40LL);
              else
                v44 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v44 + 16) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v43 + 16) + 56LL));
              v4 = a1[1];
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v4, 0LL, 0LL);
    }
    v6 = *a1;
    if ( !*a1 || (v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL)) == 0 || (*(_DWORD *)(v7 + 396) & 0x20000) != 0 )
    {
      if ( v6 )
      {
        IoAddTriageDumpDataBlock(*a1, (PVOID)*(unsigned __int16 *)(v6 + 2));
        v6 = *a1;
        v11 = *(_QWORD *)(*a1 + 8LL);
        if ( v11 )
        {
          IoAddTriageDumpDataBlock(v11, (PVOID)(unsigned int)*(__int16 *)(v11 + 2));
          v6 = *a1;
          v12 = (_WORD *)(*(_QWORD *)(*a1 + 8LL) + 56LL);
          if ( *v12 )
          {
            IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*a1 + 8LL) + 56LL));
            v6 = *a1;
          }
        }
        if ( v6 )
          v13 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
        else
          v13 = 0LL;
        if ( v13 )
        {
          if ( v6 )
            v14 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
          else
            v14 = 0LL;
          if ( v6 )
            v15 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
          else
            LODWORD(v15) = 0;
          IoAddTriageDumpDataBlock(v15, (PVOID)0x310);
          if ( *(_WORD *)(v14 + 40) )
          {
            IoAddTriageDumpDataBlock(v14 + 40, (PVOID)2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v14 + 48), (PVOID)*(unsigned __int16 *)(v14 + 40));
          }
          v16 = *a1;
          if ( *a1 )
            v17 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
          else
            v17 = 0LL;
          if ( *(_WORD *)(v17 + 56) )
          {
            if ( v16 )
              v18 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
            else
              LODWORD(v18) = 0;
            IoAddTriageDumpDataBlock(v18 + 56, (PVOID)2);
            v19 = *a1;
            if ( *a1 )
              v20 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
            else
              v20 = 0LL;
            if ( v19 )
              v21 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
            else
              v21 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v21 + 64), (PVOID)*(unsigned __int16 *)(v20 + 56));
            v16 = *a1;
          }
          if ( v16 )
            v22 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
          else
            v22 = 0LL;
          v6 = v16;
          if ( *(_QWORD *)(v22 + 16) )
          {
            v23 = v16 ? *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v23 + 16) + 56LL) )
            {
              if ( v16 )
                v24 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
              else
                v24 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v24 + 16) + 56, (PVOID)2);
              v25 = *a1;
              if ( *a1 )
                v26 = *(_QWORD *)(*(_QWORD *)(v25 + 312) + 40LL);
              else
                v26 = 0LL;
              if ( v25 )
                v27 = *(_QWORD *)(*(_QWORD *)(v25 + 312) + 40LL);
              else
                v27 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v27 + 16) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v26 + 16) + 56LL));
              v6 = *a1;
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v6, 0LL, 0LL);
    }
    PnprLogStartEvent(*a1, a1[1]);
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x5238uLL, 0x51706E50u);
  v9 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    PluginDriver = -1073741670;
    goto LABEL_189;
  }
  memset(PoolWithTag, 0, 0x5238uLL);
  *(_QWORD *)v9 = *a1;
  *(_QWORD *)(v9 + 32) = a1[1];
  *(_DWORD *)(v9 + 64) = *((_DWORD *)a1 + 4);
  *(_QWORD *)(v9 + 160) = v9 + 152;
  *(_QWORD *)(v9 + 152) = v9 + 152;
  PnprContext = v9;
  if ( !KeDynamicPartitioningSupported && *((int *)a1 + 4) >= 0 )
  {
    v45 = *(_DWORD *)(v9 + 20984);
    if ( !v45 )
      v45 = 171;
    *(_DWORD *)(v9 + 20984) = v45;
    v46 = *(_DWORD *)(v9 + 20988);
    if ( !v46 )
      v46 = 2;
    *(_DWORD *)(v9 + 20988) = v46;
LABEL_116:
    PluginDriver = -1073741637;
    goto LABEL_189;
  }
  if ( (unsigned __int8)PnprLegacyDeviceDriversPresent() )
  {
    v47 = PnprContext;
    PluginDriver = -1073741621;
    v48 = *(_DWORD *)(PnprContext + 20984);
    if ( !v48 )
      v48 = 183;
    v49 = 7;
LABEL_121:
    *(_DWORD *)(v47 + 20984) = v48;
    v50 = *(_DWORD *)(v47 + 20988);
    if ( !v50 )
      v50 = v49;
    *(_DWORD *)(v47 + 20988) = v50;
    goto LABEL_189;
  }
  PnprGetMillisecondCounter(1LL);
  if ( *((int *)a1 + 4) < 0 )
  {
    PnprLockPagesForReplace();
    PnprQuiesceDevices(v89);
    PnprWakeDevices(v89);
    PnprUnlockPagesForReplace();
    PluginDriver = 0;
    goto LABEL_189;
  }
  PluginDriver = PnprIdentifyUnits(*(PDEVICE_OBJECT *)v9, *(PDEVICE_OBJECT *)(v9 + 32));
  if ( PluginDriver < 0 )
  {
    v51 = PnprContext;
    v52 = *(_DWORD *)(PnprContext + 20984);
    if ( !v52 )
      v52 = 220;
    *(_DWORD *)(PnprContext + 20984) = v52;
    v53 = *(_DWORD *)(v51 + 20988);
    if ( !v53 )
      v53 = 3;
    *(_DWORD *)(v51 + 20988) = v53;
    goto LABEL_189;
  }
  PluginDriver = PnprCollectResources(v9, v9 + 32);
  if ( PluginDriver < 0 )
  {
    v54 = PnprContext;
    v55 = *(_DWORD *)(PnprContext + 20984);
    if ( !v55 )
      v55 = 233;
    *(_DWORD *)(PnprContext + 20984) = v55;
    v56 = *(_DWORD *)(v54 + 20988);
    if ( !v56 )
      v56 = 1;
    goto LABEL_137;
  }
  PluginDriver = PnprLoadPluginDriver(v9 + 20864, v9 + 20888);
  if ( PluginDriver >= 0 )
  {
    ReplaceFeatures = PnprQueryReplaceFeatures(v9 + 20888, (PDEVICE_OBJECT *)(v9 + 32));
    v58 = *(_QWORD *)(v9 + 24);
    *(_DWORD *)(v9 + 64) |= ReplaceFeatures;
    v59 = ReplaceFeatures;
    if ( *(_DWORD *)(v58 + 4) )
    {
      v60 = *(_DWORD *)(v9 + 20896);
      if ( (v60 & 1) == 0 || !*(_QWORD *)(v9 + 20928) )
      {
        v61 = 274;
        goto LABEL_165;
      }
      if ( (v60 & 2) != 0 && !*(_QWORD *)(v9 + 20936) )
      {
        v61 = 282;
LABEL_165:
        v66 = PnprContext;
        v3 = v86;
        v67 = *(_DWORD *)(PnprContext + 20984);
        if ( !v67 )
          v67 = v61;
        *(_DWORD *)(PnprContext + 20984) = v67;
        v68 = *(_DWORD *)(v66 + 20988);
        if ( !v68 )
          v68 = 9;
        *(_DWORD *)(v66 + 20988) = v68;
        goto LABEL_116;
      }
      PluginDriver = PnprMmConstruct(v58, v9 + 152);
      if ( PluginDriver < 0 )
      {
        v62 = 294;
        goto LABEL_147;
      }
      if ( (v59 & 8) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v9 + 56) + 4LL) = 0;
      }
      else if ( !*(_QWORD *)(v9 + 20968) || (*(_DWORD *)(v9 + 64) & 0x20) != 0 )
      {
        v61 = 318;
        goto LABEL_165;
      }
      v3 = v86;
      PluginDriver = PnprAllocateMappingReserves(v9 + 136, v9 + 144, v86);
      if ( PluginDriver < 0 )
      {
        v47 = PnprContext;
        v48 = *(_DWORD *)(PnprContext + 20984);
        if ( !v48 )
          v48 = 333;
        v49 = 10;
        goto LABEL_121;
      }
      *(_QWORD *)(v9 + 168) = 0LL;
LABEL_171:
      if ( (*(_DWORD *)(v9 + 64) & 0x20) != 0 && !*(_QWORD *)(v9 + 20976) )
      {
        v47 = PnprContext;
        PluginDriver = -1073741637;
        v48 = *(_DWORD *)(PnprContext + 20984);
        if ( !v48 )
          v48 = 353;
        v49 = 9;
        goto LABEL_121;
      }
      *(_DWORD *)(v9 + 176) = v3;
      KeCopyAffinityEx((__int64)v92, (unsigned __int16 *)KeActiveProcessors);
      v69 = *(_QWORD *)(v9 + 16);
      v70 = *(_DWORD *)(v69 + 8);
      if ( v70 )
      {
        v71 = *(_QWORD *)v69 - (_QWORD)&v92[1];
        v72 = &v92[1];
        v73 = v70;
        do
        {
          *v72 &= ~*(_QWORD *)((char *)v72 + v71);
          ++v72;
          --v73;
        }
        while ( v73 );
      }
      if ( !(unsigned int)KeIsEmptyAffinityEx(v92) )
      {
        if ( ((v92[((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6) + 1] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F)) & 1) != 0 )
          FirstSetLeftAffinity = 0;
        else
          FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx((__int16 *)v92);
        *(_DWORD *)(v9 + 180) = FirstSetLeftAffinity;
        v76 = KiProcessorIndexToNumberMappingTable[FirstSetLeftAffinity];
        Affinity.Reserved[1] = 0;
        Affinity.Reserved[2] = 0;
        *(_DWORD *)&Affinity.Group = (unsigned __int16)(v76 >> 6);
        Affinity.Mask = 1LL << (v76 & 0x3F);
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        PluginDriver = PnprInitiateReplaceOperation();
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        goto LABEL_189;
      }
      v54 = PnprContext;
      PluginDriver = -1073741621;
      v74 = *(_DWORD *)(PnprContext + 20984);
      if ( !v74 )
        v74 = 380;
      *(_DWORD *)(PnprContext + 20984) = v74;
      v56 = *(_DWORD *)(v54 + 20988);
      if ( !v56 )
        v56 = 6;
LABEL_137:
      *(_DWORD *)(v54 + 20988) = v56;
      goto LABEL_189;
    }
LABEL_170:
    v3 = v86;
    goto LABEL_171;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v9 + 24) + 4LL) )
    goto LABEL_170;
  v62 = 259;
LABEL_147:
  v63 = PnprContext;
  v3 = v86;
  v64 = *(_DWORD *)(PnprContext + 20984);
  if ( !v64 )
    v64 = v62;
  *(_DWORD *)(PnprContext + 20984) = v64;
  v65 = *(_DWORD *)(v63 + 20988);
  if ( !v65 )
    v65 = 1;
  *(_DWORD *)(v63 + 20988) = v65;
LABEL_189:
  if ( *((int *)a1 + 4) >= 0 )
  {
    if ( PluginDriver < 0 )
    {
      PnprLogFailureEvent(*a1, a1[1], (unsigned int)PluginDriver);
    }
    else
    {
      *(_DWORD *)(v9 + 21040) = PnprGetMillisecondCounter(0LL);
      PnprLogSuccessEvent();
    }
  }
  if ( v9 )
  {
    v77 = *(_QWORD *)(v9 + 20864);
    if ( v77 )
    {
      v78 = *(void (**)(void))(v9 + 20904);
      if ( v78 )
        v78();
      MmUnloadSystemImage(v77);
    }
    v79 = *(void **)(v9 + 136);
    if ( v79 && *(_QWORD *)(v9 + 144) )
    {
      if ( (_DWORD)v3 )
      {
        v80 = 0LL;
        do
        {
          PnprFreeMappingReserve(v80 + *(_QWORD *)(v9 + 136));
          PnprFreeMappingReserve(v80 + *(_QWORD *)(v9 + 144));
          v80 += 24LL;
          --v3;
        }
        while ( v3 );
        v79 = *(void **)(v9 + 136);
      }
      ExFreePoolWithTag(v79, 0x51706E50u);
      ExFreePoolWithTag(*(PVOID *)(v9 + 144), 0x51706E50u);
    }
    PnprMmFree(v9 + 152);
    v81 = *(void **)(v9 + 16);
    if ( v81 )
    {
      ExFreePoolWithTag(v81, 0x51706E50u);
      *(_QWORD *)(v9 + 16) = 0LL;
    }
    v82 = *(void **)(v9 + 24);
    if ( v82 )
    {
      ExFreePoolWithTag(v82, 0x51706E50u);
      *(_QWORD *)(v9 + 24) = 0LL;
    }
    v83 = *(void **)(v9 + 48);
    if ( v83 )
    {
      ExFreePoolWithTag(v83, 0x51706E50u);
      *(_QWORD *)(v9 + 48) = 0LL;
    }
    v84 = *(void **)(v9 + 56);
    if ( v84 )
    {
      ExFreePoolWithTag(v84, 0x51706E50u);
      *(_QWORD *)(v9 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v9, 0x51706E50u);
  }
  KeSetEvent(&PnpReplaceEvent, 0, 0);
  *((_DWORD *)a1 + 5) = PluginDriver;
  return KeSetEvent((PRKEVENT)a1 + 1, 0, 0);
}
