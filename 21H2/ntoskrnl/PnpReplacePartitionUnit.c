/*
 * XREFs of PnpReplacePartitionUnit @ 0x1408AC3D0
 * Callers:
 *     IoReplacePartitionUnit @ 0x14089E5A0 (IoReplacePartitionUnit.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14029C6E0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1403461A0 (KeCopyAffinityEx.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     PnprQueryReplaceFeatures @ 0x14050F878 (PnprQueryReplaceFeatures.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x140513790 (KeFindFirstSetLeftAffinityEx.c)
 *     MmUnloadSystemImage @ 0x140772310 (MmUnloadSystemImage.c)
 *     PnprAllocateMappingReserves @ 0x1408AD2DC (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x1408AD494 (PnprCollectResources.c)
 *     PnprFreeMappingReserve @ 0x1408AD830 (PnprFreeMappingReserve.c)
 *     PnprIdentifyUnits @ 0x1408ADA9C (PnprIdentifyUnits.c)
 *     PnprLegacyDeviceDriversPresent @ 0x1408ADF54 (PnprLegacyDeviceDriversPresent.c)
 *     PnprLoadPluginDriver @ 0x1408ADFA8 (PnprLoadPluginDriver.c)
 *     PnprLockPagesForReplace @ 0x1408AE124 (PnprLockPagesForReplace.c)
 *     PnprLogFailureEvent @ 0x1408AE158 (PnprLogFailureEvent.c)
 *     PnprLogStartEvent @ 0x1408AE284 (PnprLogStartEvent.c)
 *     PnprLogSuccessEvent @ 0x1408AE358 (PnprLogSuccessEvent.c)
 *     PnprMmConstruct @ 0x1408AE748 (PnprMmConstruct.c)
 *     PnprMmFree @ 0x1408AE854 (PnprMmFree.c)
 *     PnprUnlockPagesForReplace @ 0x1408AEA14 (PnprUnlockPagesForReplace.c)
 *     PnprGetMillisecondCounter @ 0x1409AE6CC (PnprGetMillisecondCounter.c)
 *     PnprInitiateReplaceOperation @ 0x1409AE72C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceDevices @ 0x1409AF140 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1409AFCCC (PnprWakeDevices.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 v9; // rdx
  __int64 v10; // rbx
  int PluginDriver; // esi
  __int64 v12; // rcx
  _WORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  ULONG_PTR v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  ULONG_PTR v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  ULONG_PTR v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rcx
  ULONG_PTR v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  int v50; // eax
  int v51; // ecx
  int v52; // ecx
  __int64 v53; // rcx
  int v54; // eax
  int v55; // eax
  int ReplaceFeatures; // eax
  __int64 v57; // rcx
  char v58; // r15
  int v59; // eax
  int v60; // edx
  __int64 v61; // rcx
  int v62; // eax
  int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  int v66; // eax
  __int64 v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // rdx
  _QWORD *v70; // rcx
  __int64 v71; // r8
  int v72; // eax
  int FirstSetLeftAffinity; // eax
  unsigned int v74; // ecx
  __int64 v75; // r14
  void (*v76)(void); // rax
  void *v77; // rcx
  __int64 v78; // r14
  void *v79; // rcx
  void *v80; // rcx
  void *v81; // rcx
  void *v82; // rcx
  ULONG v84; // [rsp+30h] [rbp-D0h]
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v87[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v88; // [rsp+88h] [rbp-78h]
  int v89; // [rsp+90h] [rbp-70h]
  _QWORD v90[22]; // [rsp+A0h] [rbp-60h] BYREF

  Affinity = 0LL;
  memset(v90, 0, 0xA8uLL);
  v88 = 0LL;
  v89 = 0;
  PreviousAffinity = 0LL;
  memset(v87, 0, sizeof(v87));
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v3 = ActiveProcessorCount;
  v84 = ActiveProcessorCount;
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
        v29 = *(_QWORD *)(v4 + 8);
        if ( v29 )
        {
          IoAddTriageDumpDataBlock(*(_QWORD *)(v4 + 8), (PVOID)(unsigned int)*(__int16 *)(v29 + 2));
          v4 = a1[1];
          v30 = *(_QWORD *)(v4 + 8);
          if ( *(_WORD *)(v30 + 56) )
          {
            IoAddTriageDumpDataBlock(v30 + 56, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(a1[1] + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a1[1] + 8LL) + 56LL));
            v4 = a1[1];
          }
        }
        if ( v4 )
          v31 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
        else
          v31 = 0LL;
        if ( v31 )
        {
          if ( v4 )
            v32 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
          else
            v32 = 0LL;
          if ( v4 )
            v33 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
          else
            LODWORD(v33) = 0;
          IoAddTriageDumpDataBlock(v33, (PVOID)0x310);
          if ( *(_WORD *)(v32 + 40) )
          {
            IoAddTriageDumpDataBlock(v32 + 40, (PVOID)2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v32 + 48), (PVOID)*(unsigned __int16 *)(v32 + 40));
          }
          v34 = a1[1];
          if ( v34 )
            v35 = *(_QWORD *)(*(_QWORD *)(v34 + 312) + 40LL);
          else
            v35 = 0LL;
          if ( *(_WORD *)(v35 + 56) )
          {
            if ( v34 )
              v36 = *(_QWORD *)(*(_QWORD *)(v34 + 312) + 40LL);
            else
              LODWORD(v36) = 0;
            IoAddTriageDumpDataBlock(v36 + 56, (PVOID)2);
            v37 = a1[1];
            if ( v37 )
              v38 = *(_QWORD *)(*(_QWORD *)(v37 + 312) + 40LL);
            else
              v38 = 0LL;
            if ( v37 )
              v39 = *(_QWORD *)(*(_QWORD *)(v37 + 312) + 40LL);
            else
              v39 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v39 + 64), (PVOID)*(unsigned __int16 *)(v38 + 56));
            v34 = a1[1];
          }
          if ( v34 )
            v40 = *(_QWORD *)(*(_QWORD *)(v34 + 312) + 40LL);
          else
            v40 = 0LL;
          v4 = v34;
          if ( *(_QWORD *)(v40 + 16) )
          {
            v41 = v34 ? *(_QWORD *)(*(_QWORD *)(v34 + 312) + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v41 + 16) + 56LL) )
            {
              if ( v34 )
                v42 = *(_QWORD *)(*(_QWORD *)(v34 + 312) + 40LL);
              else
                v42 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v42 + 16) + 56, (PVOID)2);
              v43 = a1[1];
              if ( v43 )
                v44 = *(_QWORD *)(*(_QWORD *)(v43 + 312) + 40LL);
              else
                v44 = 0LL;
              if ( v43 )
                v45 = *(_QWORD *)(*(_QWORD *)(v43 + 312) + 40LL);
              else
                v45 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v45 + 16) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v44 + 16) + 56LL));
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
        v12 = *(_QWORD *)(*a1 + 8LL);
        if ( v12 )
        {
          IoAddTriageDumpDataBlock(v12, (PVOID)(unsigned int)*(__int16 *)(v12 + 2));
          v6 = *a1;
          v13 = (_WORD *)(*(_QWORD *)(*a1 + 8LL) + 56LL);
          if ( *v13 )
          {
            IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*a1 + 8LL) + 56LL));
            v6 = *a1;
          }
        }
        if ( v6 )
          v14 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
        else
          v14 = 0LL;
        if ( v14 )
        {
          if ( v6 )
            v15 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
          else
            v15 = 0LL;
          if ( v6 )
            v16 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
          else
            LODWORD(v16) = 0;
          IoAddTriageDumpDataBlock(v16, (PVOID)0x310);
          if ( *(_WORD *)(v15 + 40) )
          {
            IoAddTriageDumpDataBlock(v15 + 40, (PVOID)2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v15 + 48), (PVOID)*(unsigned __int16 *)(v15 + 40));
          }
          v17 = *a1;
          if ( *a1 )
            v18 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
          else
            v18 = 0LL;
          if ( *(_WORD *)(v18 + 56) )
          {
            if ( v17 )
              v19 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
            else
              LODWORD(v19) = 0;
            IoAddTriageDumpDataBlock(v19 + 56, (PVOID)2);
            v20 = *a1;
            if ( *a1 )
              v21 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
            else
              v21 = 0LL;
            if ( v20 )
              v22 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
            else
              v22 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v22 + 64), (PVOID)*(unsigned __int16 *)(v21 + 56));
            v17 = *a1;
          }
          if ( v17 )
            v23 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
          else
            v23 = 0LL;
          v6 = v17;
          if ( *(_QWORD *)(v23 + 16) )
          {
            v24 = v17 ? *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v24 + 16) + 56LL) )
            {
              if ( v17 )
                v25 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
              else
                v25 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v25 + 16) + 56, (PVOID)2);
              v26 = *a1;
              if ( *a1 )
                v27 = *(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL);
              else
                v27 = 0LL;
              if ( v26 )
                v28 = *(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL);
              else
                v28 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v28 + 16) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v27 + 16) + 56LL));
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
  v10 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    PluginDriver = -1073741670;
    goto LABEL_189;
  }
  memset(PoolWithTag, 0, 0x5238uLL);
  *(_QWORD *)v10 = *a1;
  *(_QWORD *)(v10 + 32) = a1[1];
  *(_DWORD *)(v10 + 64) = *((_DWORD *)a1 + 4);
  *(_QWORD *)(v10 + 160) = v10 + 152;
  *(_QWORD *)(v10 + 152) = v10 + 152;
  PnprContext = v10;
  if ( !KeDynamicPartitioningSupported && *((int *)a1 + 4) >= 0 )
  {
    v46 = *(_DWORD *)(v10 + 20984);
    if ( !v46 )
      v46 = 171;
    *(_DWORD *)(v10 + 20984) = v46;
    v47 = *(_DWORD *)(v10 + 20988);
    if ( !v47 )
      v47 = 2;
    *(_DWORD *)(v10 + 20988) = v47;
LABEL_116:
    PluginDriver = -1073741637;
    goto LABEL_189;
  }
  if ( (unsigned __int8)PnprLegacyDeviceDriversPresent() )
  {
    v48 = PnprContext;
    PluginDriver = -1073741621;
    v49 = *(_DWORD *)(PnprContext + 20984);
    if ( !v49 )
      v49 = 183;
    v9 = 7LL;
LABEL_121:
    *(_DWORD *)(v48 + 20984) = v49;
    v50 = *(_DWORD *)(v48 + 20988);
    if ( !v50 )
      v50 = v9;
    *(_DWORD *)(v48 + 20988) = v50;
    goto LABEL_189;
  }
  PnprGetMillisecondCounter(1LL);
  if ( *((int *)a1 + 4) < 0 )
  {
    PnprLockPagesForReplace();
    PnprQuiesceDevices(v87);
    PnprWakeDevices(v87);
    PnprUnlockPagesForReplace();
    PluginDriver = 0;
    goto LABEL_189;
  }
  PluginDriver = PnprIdentifyUnits(*(PDEVICE_OBJECT *)v10, *(PDEVICE_OBJECT *)(v10 + 32));
  if ( PluginDriver < 0 )
  {
    v9 = PnprContext;
    v51 = *(_DWORD *)(PnprContext + 20984);
    if ( !v51 )
      v51 = 220;
    *(_DWORD *)(PnprContext + 20984) = v51;
    v52 = *(_DWORD *)(v9 + 20988);
    if ( !v52 )
      v52 = 3;
    *(_DWORD *)(v9 + 20988) = v52;
    goto LABEL_189;
  }
  PluginDriver = PnprCollectResources(v10, v10 + 32);
  if ( PluginDriver < 0 )
  {
    v53 = PnprContext;
    v9 = 233LL;
    v54 = *(_DWORD *)(PnprContext + 20984);
    if ( !v54 )
      v54 = 233;
    *(_DWORD *)(PnprContext + 20984) = v54;
    v55 = *(_DWORD *)(v53 + 20988);
    if ( !v55 )
      v55 = 1;
    goto LABEL_137;
  }
  PluginDriver = PnprLoadPluginDriver(v10 + 20864, v10 + 20888);
  if ( PluginDriver >= 0 )
  {
    ReplaceFeatures = PnprQueryReplaceFeatures(v10 + 20888, (PDEVICE_OBJECT *)(v10 + 32));
    v57 = *(_QWORD *)(v10 + 24);
    *(_DWORD *)(v10 + 64) |= ReplaceFeatures;
    v58 = ReplaceFeatures;
    if ( *(_DWORD *)(v57 + 4) )
    {
      v59 = *(_DWORD *)(v10 + 20896);
      if ( (v59 & 1) == 0 || !*(_QWORD *)(v10 + 20928) )
      {
        v60 = 274;
        goto LABEL_165;
      }
      if ( (v59 & 2) != 0 && !*(_QWORD *)(v10 + 20936) )
      {
        v60 = 282;
LABEL_165:
        v64 = PnprContext;
        v3 = v84;
        v65 = *(_DWORD *)(PnprContext + 20984);
        if ( !v65 )
          v65 = v60;
        v9 = 9LL;
        *(_DWORD *)(PnprContext + 20984) = v65;
        v66 = *(_DWORD *)(v64 + 20988);
        if ( !v66 )
          v66 = 9;
        *(_DWORD *)(v64 + 20988) = v66;
        goto LABEL_116;
      }
      PluginDriver = PnprMmConstruct(v57, v10 + 152);
      if ( PluginDriver < 0 )
      {
        v9 = 294LL;
        goto LABEL_147;
      }
      if ( (v58 & 8) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v10 + 56) + 4LL) = 0;
      }
      else if ( !*(_QWORD *)(v10 + 20968) || (*(_DWORD *)(v10 + 64) & 0x20) != 0 )
      {
        v60 = 318;
        goto LABEL_165;
      }
      v3 = v84;
      PluginDriver = PnprAllocateMappingReserves(v10 + 136, v10 + 144, v84);
      if ( PluginDriver < 0 )
      {
        v48 = PnprContext;
        v49 = *(_DWORD *)(PnprContext + 20984);
        if ( !v49 )
          v49 = 333;
        v9 = 10LL;
        goto LABEL_121;
      }
      *(_QWORD *)(v10 + 168) = 0LL;
LABEL_171:
      if ( (*(_DWORD *)(v10 + 64) & 0x20) != 0 && !*(_QWORD *)(v10 + 20976) )
      {
        v48 = PnprContext;
        PluginDriver = -1073741637;
        v49 = *(_DWORD *)(PnprContext + 20984);
        if ( !v49 )
          v49 = 353;
        v9 = 9LL;
        goto LABEL_121;
      }
      *(_DWORD *)(v10 + 176) = v3;
      KeCopyAffinityEx((__int64)v90, (unsigned __int16 *)KeActiveProcessors);
      v67 = *(_QWORD *)(v10 + 16);
      v68 = *(_DWORD *)(v67 + 8);
      if ( v68 )
      {
        v69 = *(_QWORD *)v67 - (_QWORD)&v90[1];
        v70 = &v90[1];
        v71 = v68;
        do
        {
          *v70 &= ~*(_QWORD *)((char *)v70 + v69);
          ++v70;
          --v71;
        }
        while ( v71 );
      }
      if ( !(unsigned int)KeIsEmptyAffinityEx(v90) )
      {
        if ( ((v90[((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6) + 1] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F)) & 1) != 0 )
          FirstSetLeftAffinity = 0;
        else
          FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx((__int16 *)v90);
        *(_DWORD *)(v10 + 180) = FirstSetLeftAffinity;
        v74 = KiProcessorIndexToNumberMappingTable[FirstSetLeftAffinity];
        Affinity.Reserved[1] = 0;
        Affinity.Reserved[2] = 0;
        *(_DWORD *)&Affinity.Group = (unsigned __int16)(v74 >> 6);
        Affinity.Mask = 1LL << (v74 & 0x3F);
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        PluginDriver = PnprInitiateReplaceOperation();
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        goto LABEL_189;
      }
      v53 = PnprContext;
      PluginDriver = -1073741621;
      v72 = *(_DWORD *)(PnprContext + 20984);
      if ( !v72 )
        v72 = 380;
      v9 = 6LL;
      *(_DWORD *)(PnprContext + 20984) = v72;
      v55 = *(_DWORD *)(v53 + 20988);
      if ( !v55 )
        v55 = 6;
LABEL_137:
      *(_DWORD *)(v53 + 20988) = v55;
      goto LABEL_189;
    }
LABEL_170:
    v3 = v84;
    goto LABEL_171;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v10 + 24) + 4LL) )
    goto LABEL_170;
  v9 = 259LL;
LABEL_147:
  v61 = PnprContext;
  v3 = v84;
  v62 = *(_DWORD *)(PnprContext + 20984);
  if ( !v62 )
    v62 = v9;
  *(_DWORD *)(PnprContext + 20984) = v62;
  v63 = *(_DWORD *)(v61 + 20988);
  if ( !v63 )
    v63 = 1;
  *(_DWORD *)(v61 + 20988) = v63;
LABEL_189:
  if ( *((int *)a1 + 4) >= 0 )
  {
    if ( PluginDriver < 0 )
    {
      PnprLogFailureEvent(*a1, a1[1], (unsigned int)PluginDriver);
    }
    else
    {
      *(_DWORD *)(v10 + 21040) = PnprGetMillisecondCounter(0LL);
      PnprLogSuccessEvent();
    }
  }
  if ( v10 )
  {
    v75 = *(_QWORD *)(v10 + 20864);
    if ( v75 )
    {
      v76 = *(void (**)(void))(v10 + 20904);
      if ( v76 )
        v76();
      MmUnloadSystemImage(v75, v9);
    }
    v77 = *(void **)(v10 + 136);
    if ( v77 && *(_QWORD *)(v10 + 144) )
    {
      if ( (_DWORD)v3 )
      {
        v78 = 0LL;
        do
        {
          PnprFreeMappingReserve(v78 + *(_QWORD *)(v10 + 136));
          PnprFreeMappingReserve(v78 + *(_QWORD *)(v10 + 144));
          v78 += 24LL;
          --v3;
        }
        while ( v3 );
        v77 = *(void **)(v10 + 136);
      }
      ExFreePoolWithTag(v77, 0x51706E50u);
      ExFreePoolWithTag(*(PVOID *)(v10 + 144), 0x51706E50u);
    }
    PnprMmFree(v10 + 152);
    v79 = *(void **)(v10 + 16);
    if ( v79 )
    {
      ExFreePoolWithTag(v79, 0x51706E50u);
      *(_QWORD *)(v10 + 16) = 0LL;
    }
    v80 = *(void **)(v10 + 24);
    if ( v80 )
    {
      ExFreePoolWithTag(v80, 0x51706E50u);
      *(_QWORD *)(v10 + 24) = 0LL;
    }
    v81 = *(void **)(v10 + 48);
    if ( v81 )
    {
      ExFreePoolWithTag(v81, 0x51706E50u);
      *(_QWORD *)(v10 + 48) = 0LL;
    }
    v82 = *(void **)(v10 + 56);
    if ( v82 )
    {
      ExFreePoolWithTag(v82, 0x51706E50u);
      *(_QWORD *)(v10 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v10, 0x51706E50u);
  }
  KeSetEvent(&PnpReplaceEvent, 0, 0);
  *((_DWORD *)a1 + 5) = PluginDriver;
  return KeSetEvent((PRKEVENT)a1 + 1, 0, 0);
}
