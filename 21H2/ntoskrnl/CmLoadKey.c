/*
 * XREFs of CmLoadKey @ 0x140619944
 * Callers:
 *     CmLoadDifferencingKey @ 0x140664A6C (CmLoadDifferencingKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     CmpLoadKeyCommon @ 0x14026D10C (CmpLoadKeyCommon.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     _tlgWriteAgg @ 0x1403759E4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140619CE8 (CmpQueryHiveRedirectionFileList.c)
 *     CmpOpenHiveFile @ 0x1406A3938 (CmpOpenHiveFile.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpCmdHiveOpen @ 0x1406F2CB8 (CmpCmdHiveOpen.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     CmpDestroyHive @ 0x1407293E8 (CmpDestroyHive.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E884 (CmpResolveHiveLoadConflict.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmLoadKey(
        _QWORD *a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        ULONG_PTR *a11)
{
  unsigned __int16 *v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r8
  wchar_t *PoolWithTag; // rax
  wchar_t *v19; // r12
  UNICODE_STRING *v20; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _LOOKASIDE_LIST_EX *v24; // r9
  int v25; // ebx
  PVOID TransientPoolWithTag; // rax
  __int64 v27; // rdi
  int v28; // edx
  signed int v29; // eax
  signed int v30; // ebx
  _DWORD *v31; // rsi
  char v32; // r13
  signed int KeyCommon; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r8
  UNICODE_STRING *p_Destination; // rax
  NTSTATUS v40; // ebx
  int Conflict; // ebx
  void *v42; // rcx
  NTSTATUS v43; // eax
  unsigned int v44; // r9d
  int v45; // r9d
  int v46; // edx
  __int64 v47; // r14
  int v48; // r10d
  int v49; // edx
  int v50; // r9d
  int v51; // r10d
  unsigned int Object; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  char v54; // [rsp+60h] [rbp-A0h] BYREF
  char v55; // [rsp+61h] [rbp-9Fh] BYREF
  __int16 v56; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v57; // [rsp+68h] [rbp-98h] BYREF
  __int16 v58; // [rsp+6Ch] [rbp-94h] BYREF
  __int16 v59; // [rsp+70h] [rbp-90h] BYREF
  __int16 v60; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v61; // [rsp+78h] [rbp-88h] BYREF
  __int64 v62; // [rsp+80h] [rbp-80h] BYREF
  int v63; // [rsp+88h] [rbp-78h]
  signed int v64; // [rsp+8Ch] [rbp-74h] BYREF
  signed int v65; // [rsp+90h] [rbp-70h] BYREF
  signed int v66; // [rsp+94h] [rbp-6Ch] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h]
  PVOID v68; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v69; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR *v70; // [rsp+B0h] [rbp-50h]
  __int64 v71; // [rsp+B8h] [rbp-48h]
  __int64 v72; // [rsp+C0h] [rbp-40h]
  __int64 v73; // [rsp+C8h] [rbp-38h]
  __int64 v74; // [rsp+D0h] [rbp-30h]
  __int64 v75; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING Destination; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v77; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v78; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v79; // [rsp+100h] [rbp+0h] BYREF
  __int64 v80; // [rsp+108h] [rbp+8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81[3]; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  signed int *v85; // [rsp+170h] [rbp+70h]
  __int64 v86; // [rsp+178h] [rbp+78h]
  __int16 *v87; // [rsp+180h] [rbp+80h]
  __int64 v88; // [rsp+188h] [rbp+88h]
  __int16 *v89; // [rsp+190h] [rbp+90h]
  __int64 v90; // [rsp+198h] [rbp+98h]
  __int16 *v91; // [rsp+1A0h] [rbp+A0h]
  __int64 v92; // [rsp+1A8h] [rbp+A8h]
  __int64 v93; // [rsp+1B0h] [rbp+B0h]
  __int64 v94; // [rsp+1B8h] [rbp+B8h]
  __int64 v95; // [rsp+1C0h] [rbp+C0h]
  int v96; // [rsp+1C8h] [rbp+C8h]
  int v97; // [rsp+1CCh] [rbp+CCh]
  __int64 v98; // [rsp+1D0h] [rbp+D0h]
  __int64 v99; // [rsp+1D8h] [rbp+D8h]
  __int64 v100; // [rsp+1E0h] [rbp+E0h]
  int v101; // [rsp+1E8h] [rbp+E8h]
  int v102; // [rsp+1ECh] [rbp+ECh]
  __int64 v103; // [rsp+1F0h] [rbp+F0h]
  __int64 v104; // [rsp+1F8h] [rbp+F8h]
  __int64 v105; // [rsp+200h] [rbp+100h]
  int v106; // [rsp+208h] [rbp+108h]
  int v107; // [rsp+20Ch] [rbp+10Ch]
  __int64 *v108; // [rsp+210h] [rbp+110h]
  __int64 v109; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v110; // [rsp+220h] [rbp+120h] BYREF
  signed int *v111; // [rsp+240h] [rbp+140h]
  __int64 v112; // [rsp+248h] [rbp+148h]
  __int16 *v113; // [rsp+250h] [rbp+150h]
  __int64 v114; // [rsp+258h] [rbp+158h]
  __int16 *v115; // [rsp+260h] [rbp+160h]
  __int64 v116; // [rsp+268h] [rbp+168h]
  __int16 *v117; // [rsp+270h] [rbp+170h]
  __int64 v118; // [rsp+278h] [rbp+178h]
  __int64 v119; // [rsp+280h] [rbp+180h]
  __int64 v120; // [rsp+288h] [rbp+188h]
  __int64 v121; // [rsp+290h] [rbp+190h]
  int v122; // [rsp+298h] [rbp+198h]
  int v123; // [rsp+29Ch] [rbp+19Ch]
  __int64 v124; // [rsp+2A0h] [rbp+1A0h]
  __int64 v125; // [rsp+2A8h] [rbp+1A8h]
  __int64 v126; // [rsp+2B0h] [rbp+1B0h]
  int v127; // [rsp+2B8h] [rbp+1B8h]
  int v128; // [rsp+2BCh] [rbp+1BCh]
  __int64 v129; // [rsp+2C0h] [rbp+1C0h]
  __int64 v130; // [rsp+2C8h] [rbp+1C8h]
  __int64 v131; // [rsp+2D0h] [rbp+1D0h]
  int v132; // [rsp+2D8h] [rbp+1D8h]
  int v133; // [rsp+2DCh] [rbp+1DCh]
  struct _EVENT_DATA_DESCRIPTOR v134; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 *v135; // [rsp+300h] [rbp+200h]
  __int64 v136; // [rsp+308h] [rbp+208h]
  signed int *v137; // [rsp+310h] [rbp+210h]
  __int64 v138; // [rsp+318h] [rbp+218h]
  __int64 *v139; // [rsp+320h] [rbp+220h]
  __int64 v140; // [rsp+328h] [rbp+228h]

  v75 = a5;
  v71 = a7;
  v73 = a8;
  v74 = a10;
  v70 = a11;
  v14 = (unsigned __int16 *)a1[2];
  v54 = 0;
  memset(v81, 0, sizeof(v81));
  v72 = a4;
  v62 = 0LL;
  v15 = *v14;
  Handle = 0LL;
  v63 = 0;
  if ( (unsigned __int16)v15 >= 2u )
  {
    LODWORD(v16) = v15 >> 1;
    if ( v15 >> 1 )
    {
      do
      {
        v17 = a1[2];
        v16 = (unsigned int)(v16 - 1);
        if ( *(_WORD *)(*(_QWORD *)(v17 + 8) + 2 * v16) != 92 )
          break;
        *(_WORD *)v17 -= 2;
      }
      while ( (_DWORD)v16 );
    }
  }
  if ( *(_WORD *)a1[2] < 2u )
    return 3221225485LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x104uLL, 0x62534D43u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v20 = (UNICODE_STRING *)a1[2];
  *(_QWORD *)&Destination.Length = 17039360LL;
  Destination.Buffer = PoolWithTag;
  if ( (unsigned __int8)CmpQueryHiveRedirectionFileList(v20, &Destination) )
  {
    p_Destination = &Destination;
    if ( Destination.Length == 2 )
      p_Destination = (UNICODE_STRING *)a2;
    a2 = p_Destination;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, (__int64)v24);
    ExFreePoolWithTag(v19, 0);
    return 3221225865LL;
  }
  v25 = ((a3 & 0x2000) != 0 ? 3 : 0) | 8;
  if ( (a3 & 0x4000) == 0 )
    v25 = (a3 & 0x2000) != 0 ? 3 : 0;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u, v24);
  v27 = (__int64)TransientPoolWithTag;
  if ( !TransientPoolWithTag )
  {
    v30 = -1073741670;
    goto LABEL_22;
  }
  memset(TransientPoolWithTag, 0, 0x1B0uLL);
  v55 = 1;
  v28 = v25 | 4;
  if ( !v75 )
    v28 = v25;
  HandleInformation = v28;
  LOBYTE(v28) = 1;
  v29 = CmpCmdHiveOpen(
          (_DWORD)a2,
          v28,
          (unsigned int)&v55,
          (unsigned int)&v62,
          ((a3 & 0xFFFFF223 | (2 * (a3 & 0x480 | (2 * (a3 & 0x20 | ((a3 & 4) << 6)))))) << 19) | 0x1190001,
          HandleInformation,
          v73,
          (__int64)&v54,
          v27);
  v30 = v29;
  if ( v29 < 0 )
  {
    if ( v29 != -1073741757 )
    {
      SetFailureLocation(v27, 0, 31, v29, 0x10u);
      v31 = (_DWORD *)v62;
      goto LABEL_20;
    }
    if ( (int)CmpOpenHiveFile(a2, 8, v73, 0LL, 0LL, 0LL) >= 0 )
    {
      v68 = 0LL;
      v40 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v68, 0LL);
      ZwClose(Handle);
      if ( v40 < 0 )
      {
        Object = 48;
      }
      else
      {
        Conflict = CmpResolveHiveLoadConflict((_DWORD)a1, (_DWORD)v68, a3, v72, v71, v27, a9, v74, (__int64)v70);
        HalPutDmaAdapter((PADAPTER_OBJECT)v68);
        if ( Conflict >= 0 )
        {
          v31 = (_DWORD *)v62;
          goto LABEL_19;
        }
        Object = 64;
      }
    }
    else
    {
      Object = 32;
    }
    v30 = -1073741757;
    SetFailureLocation(v27, 0, 31, 0xC0000043, Object);
    v31 = (_DWORD *)v62;
    goto LABEL_20;
  }
  v31 = (_DWORD *)v62;
  if ( (a3 & 0x2000) != 0 )
  {
    v42 = *(void **)(v62 + 1536);
    v69 = 0LL;
    v43 = ObReferenceObjectByHandle(v42, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v69, 0LL);
    v30 = v43;
    if ( v43 < 0 )
    {
      SetFailureLocation(v27, 0, 31, v43, 0x50u);
      goto LABEL_20;
    }
    v32 = a9;
    v30 = CmpResolveHiveLoadConflict((_DWORD)a1, (_DWORD)v69, a3, v72, v71, v27, a9, v74, (__int64)v70);
    HalPutDmaAdapter((PADAPTER_OBJECT)v69);
    if ( v30 < 0 )
    {
      if ( v30 == -1073741275 )
        goto LABEL_16;
      SetFailureLocation(v27, 0, 31, v30, 0x60u);
LABEL_20:
      if ( v31 )
      {
        CmpAttachToRegistryProcess(v81);
        CmpDestroyHive(v31);
        KiUnstackDetachProcess((__int64)v81, 0LL);
      }
      goto LABEL_22;
    }
LABEL_19:
    v30 = 0;
    goto LABEL_20;
  }
  v32 = a9;
LABEL_16:
  if ( a6 )
    v31[1038] |= 0x2000u;
  KeyCommon = CmpLoadKeyCommon((ULONG_PTR)v31, a1, a3, v72, v75, v71, v32, v70, v55, v54, v27);
  v30 = KeyCommon;
  v31 = 0LL;
  if ( KeyCommon >= 0 )
    goto LABEL_19;
  SetFailureLocation(v27, 0, 31, KeyCommon, 0x70u);
LABEL_22:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v34, v35, v36);
  ExFreePoolWithTag(v19, 0);
  if ( v30 < 0 )
  {
    if ( (unsigned int)dword_140C02130 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
      {
        v77 = 1LL;
        v83 = &v77;
        v87 = &v56;
        v85 = &v64;
        v45 = *(unsigned __int16 *)(v27 + 10);
        v46 = *(unsigned __int16 *)(v27 + 8);
        v93 = v27 + 8;
        v89 = &v57;
        v47 = v27 + 12;
        v56 = v46;
        v48 = *(unsigned __int8 *)(v27 + 394);
        v96 = 12 * v46;
        v100 = v27 + 108;
        v101 = 12 * v45;
        v105 = v27 + 396;
        v108 = &v78;
        v58 = v48;
        v57 = v45;
        v98 = v27 + 10;
        v84 = 8LL;
        v64 = v30;
        v86 = 4LL;
        v88 = 2LL;
        v90 = 2LL;
        v91 = &v58;
        v92 = 2LL;
        v94 = 2LL;
        v95 = v27 + 12;
        v97 = 0;
        v99 = 2LL;
        v102 = 0;
        v103 = v27 + 394;
        v104 = 2LL;
        v106 = 8 * v48;
        v107 = 0;
        v78 = 0x1000000LL;
        v109 = 8LL;
        tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&word_1400230A6, v27 + 394, 0xEu, &v82);
        v44 = dword_140C02130;
      }
      else
      {
        v47 = v27 + 12;
      }
      if ( v44 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
      {
        v65 = v30;
        v111 = &v65;
        v113 = &v59;
        v49 = *(unsigned __int16 *)(v27 + 8);
        v50 = *(unsigned __int16 *)(v27 + 10);
        v119 = v27 + 8;
        v115 = &v60;
        v51 = *(unsigned __int8 *)(v27 + 394);
        v122 = 12 * v49;
        v126 = v27 + 108;
        v127 = 12 * v50;
        v131 = v27 + 396;
        v61 = v51;
        v59 = v49;
        v60 = v50;
        v124 = v27 + 10;
        v129 = v27 + 394;
        v112 = 4LL;
        v114 = 2LL;
        v116 = 2LL;
        v117 = &v61;
        v118 = 2LL;
        v120 = 2LL;
        v121 = v47;
        v123 = 0;
        v125 = 2LL;
        v128 = 0;
        v130 = 2LL;
        v132 = 8 * v51;
        v133 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)byte_140022F6D,
          0LL,
          0LL,
          0xCu,
          &v110);
      }
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
  {
    v79 = 1LL;
    v135 = &v79;
    v136 = 8LL;
    v137 = &v66;
    v66 = v30;
    v139 = &v80;
    v138 = 4LL;
    v80 = 0x1000000LL;
    v140 = 8LL;
    tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&unk_140022BB8, v37, 5u, &v134);
  }
  if ( v27 )
    CmSiFreeMemory((PPRIVILEGE_SET)v27);
  return (unsigned int)v30;
}
