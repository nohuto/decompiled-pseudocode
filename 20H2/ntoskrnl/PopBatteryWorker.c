/*
 * XREFs of PopBatteryWorker @ 0x14077BA30
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     _tlgCreate1Sz_char @ 0x14023CD10 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 *     KeQueryUnbiasedInterruptTime @ 0x1402E8F20 (KeQueryUnbiasedInterruptTime.c)
 *     IoCancelIrp @ 0x140318CD0 (IoCancelIrp.c)
 *     PopAcquireRwLockShared @ 0x140330BEC (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     DbgPrintEx @ 0x14037EFE0 (DbgPrintEx.c)
 *     PopBatteryQueueWork @ 0x14039A64C (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F7730 (ExfUnblockPushLock.c)
 *     ZwQueryWnfStateData @ 0x1403FADF0 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     PopBatteryApplyCompositeState @ 0x14077BE3C (PopBatteryApplyCompositeState.c)
 *     PopResetCBTriggers @ 0x1407937F8 (PopResetCBTriggers.c)
 *     PopAccountBatteryEnergyChange @ 0x1408EF134 (PopAccountBatteryEnergyChange.c)
 *     PopBatteryAcquireExclusiveLock @ 0x1408EF5D4 (PopBatteryAcquireExclusiveLock.c)
 *     PopBatteryEstimatesSpoiled @ 0x1408EF93C (PopBatteryEstimatesSpoiled.c)
 *     PopBatteryInitialize @ 0x1408EF9E0 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1408EFB70 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1408EFBF8 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1408EFD7C (PopBatteryReadTag.c)
 *     PopBatteryReleaseLock @ 0x1408EFE04 (PopBatteryReleaseLock.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1408F0098 (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryWaitTag @ 0x1408F01F4 (PopBatteryWaitTag.c)
 *     PopEstimateChargeTime @ 0x1408F0264 (PopEstimateChargeTime.c)
 *     PopSendWeakChargerNotification @ 0x1408F060C (PopSendWeakChargerNotification.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

void PopBatteryWorker()
{
  NTSTATUS v0; // eax
  __int64 v1; // rdx
  int v2; // ecx
  int v3; // r14d
  __int64 *i; // rbx
  __int64 *j; // rbx
  int v6; // r12d
  char v7; // r13
  __int32 v8; // r15d
  bool v9; // di
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // r10d
  __int64 v17; // r9
  unsigned int v18; // r15d
  int v19; // ebx
  char v20; // di
  int v21; // ecx
  unsigned int v22; // ebx
  __int64 *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 *v28; // rbx
  __int64 v29; // rsi
  __int64 **v30; // rcx
  int v31; // edx
  int EstimatedTime; // eax
  int v33; // ecx
  int v34; // eax
  __int64 v35; // rdx
  int v36; // ecx
  int v37; // eax
  unsigned int v38; // eax
  int v39; // eax
  __int64 v40; // rcx
  unsigned int v41; // esi
  __int64 *v42; // rdi
  int v43; // eax
  unsigned int v44; // ecx
  NTSTATUS updated; // eax
  __int64 v46; // rcx
  bool v47; // zf
  const CHAR *v48; // rdx
  char v49; // r8
  const CHAR *v50; // rdx
  const CHAR *v51; // r11
  char v52; // r8
  const CHAR *v53; // rdx
  const CHAR *v54; // r11
  char v55; // r8
  const CHAR *v56; // rdx
  const CHAR *v57; // r11
  char v58; // r8
  const CHAR *v59; // rdx
  const CHAR *v60; // r11
  char v61; // r8
  const CHAR *v62; // rdx
  const CHAR *v63; // r11
  char v64; // r8
  const CHAR *v65; // rdx
  int v66; // r10d
  unsigned int v67; // eax
  unsigned __int64 v68; // rax
  const CHAR *v69; // rdx
  int v70; // r9d
  NTSTATUS v71; // eax
  signed __int32 v72[8]; // [rsp+8h] [rbp-100h] BYREF
  PVOID Buffer; // [rsp+28h] [rbp-E0h]
  PULONG BufferSize; // [rsp+30h] [rbp-D8h]
  __int64 CheckStamp; // [rsp+38h] [rbp-D0h]
  __int64 v76; // [rsp+40h] [rbp-C8h]
  __int64 v77; // [rsp+48h] [rbp-C0h]
  bool v78; // [rsp+58h] [rbp-B0h] BYREF
  bool v79; // [rsp+59h] [rbp-AFh] BYREF
  int v80; // [rsp+5Ch] [rbp-ACh]
  unsigned __int64 v81; // [rsp+60h] [rbp-A8h] BYREF
  int v82; // [rsp+68h] [rbp-A0h]
  unsigned int v83; // [rsp+6Ch] [rbp-9Ch]
  ULONG v84; // [rsp+70h] [rbp-98h] BYREF
  __int32 v85; // [rsp+74h] [rbp-94h]
  ULONG ChangeStamp; // [rsp+78h] [rbp-90h] BYREF
  NTSTATUS v87; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v88; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v89; // [rsp+84h] [rbp-84h] BYREF
  int v90; // [rsp+88h] [rbp-80h] BYREF
  int v91; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v92; // [rsp+90h] [rbp-78h] BYREF
  __int64 v93; // [rsp+94h] [rbp-74h] BYREF
  int v94; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v95; // [rsp+A0h] [rbp-68h] BYREF
  int v96; // [rsp+A4h] [rbp-64h] BYREF
  int v97; // [rsp+A8h] [rbp-60h] BYREF
  NTSTATUS v98; // [rsp+ACh] [rbp-5Ch] BYREF
  __int64 v99; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v100; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v101; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v102; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v103; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v104; // [rsp+D8h] [rbp-30h]
  __int128 v105; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v106; // [rsp+F8h] [rbp-10h]
  _BYTE v107[24]; // [rsp+108h] [rbp+0h] BYREF
  int v108; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v109; // [rsp+128h] [rbp+20h] BYREF
  int *v110; // [rsp+148h] [rbp+40h]
  __int64 v111; // [rsp+150h] [rbp+48h]
  char v112[16]; // [rsp+158h] [rbp+50h] BYREF
  char v113[16]; // [rsp+168h] [rbp+60h] BYREF
  char v114[16]; // [rsp+178h] [rbp+70h] BYREF
  char v115[16]; // [rsp+188h] [rbp+80h] BYREF
  char v116[16]; // [rsp+198h] [rbp+90h] BYREF
  char v117[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v118[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned int *v119; // [rsp+1C8h] [rbp+C0h]
  __int64 v120; // [rsp+1D0h] [rbp+C8h]
  int *v121; // [rsp+1D8h] [rbp+D0h]
  __int64 v122; // [rsp+1E0h] [rbp+D8h]
  int *v123; // [rsp+1E8h] [rbp+E0h]
  __int64 v124; // [rsp+1F0h] [rbp+E8h]
  int *v125; // [rsp+1F8h] [rbp+F0h]
  __int64 v126; // [rsp+200h] [rbp+F8h]
  __int64 *v127; // [rsp+208h] [rbp+100h]
  __int64 v128; // [rsp+210h] [rbp+108h]
  char *v129; // [rsp+218h] [rbp+110h]
  __int64 v130; // [rsp+220h] [rbp+118h]
  int *v131; // [rsp+228h] [rbp+120h]
  __int64 v132; // [rsp+230h] [rbp+128h]
  int *v133; // [rsp+238h] [rbp+130h]
  __int64 v134; // [rsp+240h] [rbp+138h]
  char v135[16]; // [rsp+248h] [rbp+140h] BYREF
  int *v136; // [rsp+258h] [rbp+150h]
  __int64 v137; // [rsp+260h] [rbp+158h]
  int *v138; // [rsp+268h] [rbp+160h]
  __int64 v139; // [rsp+270h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v140; // [rsp+278h] [rbp+170h] BYREF
  bool *v141; // [rsp+298h] [rbp+190h]
  __int64 v142; // [rsp+2A0h] [rbp+198h]
  NTSTATUS *v143; // [rsp+2A8h] [rbp+1A0h]
  __int64 v144; // [rsp+2B0h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v145; // [rsp+2B8h] [rbp+1B0h] BYREF
  NTSTATUS *v146; // [rsp+2D8h] [rbp+1D0h]
  __int64 v147; // [rsp+2E0h] [rbp+1D8h]

  v99 = 0LL;
  v101 = 0LL;
  v103 = 0LL;
  v78 = 0;
  v105 = 0LL;
  v106 = 0LL;
  v108 = 0;
  memset(v107, 0, sizeof(v107));
  PopAcquireRwLockShared((ULONG_PTR)&PopPolicyDeviceLock);
  PopBatteryAcquireExclusiveLock();
  v100 = 0LL;
  ChangeStamp = 0;
  v84 = 8;
  v0 = ZwQueryWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL, &ChangeStamp, &v100, &v84);
  v2 = 1;
  if ( v0 == -1073741670 || v0 == -1073741431 )
  {
    v3 = 0;
  }
  else if ( !v0 && v84 == 8 )
  {
    v3 = (v100 != 0) + 2;
  }
  else
  {
    v3 = 1;
  }
  for ( i = (__int64 *)qword_140C235F0; i != &qword_140C235F0; i = (__int64 *)*i )
    IoCancelIrp((PIRP)*(i - 1));
  for ( j = (__int64 *)qword_140C235F0; j != &qword_140C235F0; j = (__int64 *)*j )
    KeWaitForSingleObject(j + 2, Executive, 0, 0, 0LL);
  LOBYTE(v6) = 0;
  v7 = 0;
  do
  {
    v6 = (unsigned __int8)v6;
    v8 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v85 = v8;
    v9 = (v8 & 2) != 0;
    if ( (v8 & 8) != 0 )
      v6 = 1;
    v80 = v6;
    if ( (v8 & 0x10) != 0 )
    {
      PopAcquirePolicyLock(v2);
      LOBYTE(v24) = 0x80;
      PopResetCBTriggers(v24);
      PopReleasePolicyLock(v26, v25);
    }
    if ( (v8 & 0x40) != 0 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C23768);
      LOBYTE(v27) = byte_140C23764;
      PopSendWeakChargerNotification(v27);
      PopReleaseRwLock((ULONG_PTR)&xmmword_140C23768);
    }
    v10 = qword_140C235F0;
    if ( (__int64 *)qword_140C235F0 != &qword_140C235F0 )
    {
      do
      {
        v28 = *(__int64 **)v10;
        v29 = v10 - 64;
        if ( *(_DWORD *)(v10 - 64 + 104) == 2 )
        {
          if ( v28[1] != v10 || (v30 = *(__int64 ***)(v10 + 8), *v30 != (__int64 *)v10) )
            __fastfail(3u);
          *v30 = v28;
          v28[1] = (__int64)v30;
          *(_QWORD *)v10 = 0LL;
          --dword_140C235D4;
          ++dword_140C23638;
          byte_140C235D8 = 1;
          if ( (int)PopBatteryReadTag(v10 - 64) < 0 )
            PopBatteryWaitTag(v29);
          v9 = 1;
        }
        v10 = (__int64)v28;
      }
      while ( v28 != &qword_140C235F0 );
    }
    v11 = qword_140C235E0;
    if ( (__int64 *)qword_140C235E0 != &qword_140C235E0 )
    {
      do
      {
        if ( *(_DWORD *)(v11 + 104) == 1 )
        {
          KeWaitForSingleObject((PVOID)(v11 + 80), Executive, 0, 0, 0LL);
          if ( (int)PopBatteryInitialize(v11) < 0 )
            PopBatteryWaitTag(v11);
          else
            v9 = 1;
        }
        v11 = *(_QWORD *)v11;
      }
      while ( (__int64 *)v11 != &qword_140C235E0 );
      LOBYTE(v8) = v85;
    }
    v12 = qword_140C235F0;
    if ( (__int64 *)qword_140C235F0 != &qword_140C235F0 )
    {
      do
      {
        LOBYTE(v1) = 1;
        v104 = *(_OWORD *)(v12 + 84);
        if ( (int)PopBatteryQueryStatus(v12 - 64, v1) >= 0 )
        {
          PopAccountBatteryEnergyChange(v12 - 64);
          v31 = *(_DWORD *)(v12 + 84);
          if ( (((unsigned __int8)v104 ^ *(_BYTE *)(v12 + 84)) & 7) != 0 )
          {
            v7 = 1;
          }
          else if ( DWORD1(v104) != *(_DWORD *)(v12 + 88) || HIDWORD(v104) != *(_DWORD *)(v12 + 96) )
          {
            LOBYTE(v6) = 1;
          }
          EstimatedTime = -1;
          if ( (v31 & 2) != 0 )
          {
            EstimatedTime = PopBatteryQueryEstimatedTime(v12 - 64, 0LL);
            v31 = *(_DWORD *)(v12 + 84);
          }
          v33 = 0;
          *(_DWORD *)(v12 + 100) = EstimatedTime;
          if ( EstimatedTime != -1 )
            v33 = EstimatedTime;
          v34 = *(_DWORD *)(v12 + 96);
          LODWORD(v77) = v33;
          LODWORD(v76) = v34;
          LODWORD(CheckStamp) = *(_DWORD *)(v12 + 92);
          LODWORD(BufferSize) = *(_DWORD *)(v12 + 88);
          LODWORD(Buffer) = v31;
          DbgPrintEx(
            0x92u,
            3u,
            "\n"
            "Battery Status [%p]\n"
            "|-- PowerState = 0x%08x\n"
            "|-- Capacity   = %u\n"
            "|-- Voltage    = %u\n"
            "|-- Rate       = %d\n"
            "|-- Est Time   = %u\n",
            v12 - 64,
            Buffer,
            BufferSize,
            CheckStamp,
            v76,
            v77);
        }
        else
        {
          *(_DWORD *)(v12 + 40) = 2;
          PopBatteryQueueWork(1u);
        }
        v12 = *(_QWORD *)v12;
      }
      while ( (__int64 *)v12 != &qword_140C235F0 );
      LOBYTE(v8) = v85;
      v80 = v6;
    }
    if ( v9 )
    {
      PopBatteryUpdateCompositeInformation();
      PopMaxChargeRate = 0LL;
      v7 = 1;
    }
    if ( (v8 & 4) != 0 || v7 )
    {
      if ( PopEstimateSpoilerMask )
      {
        v13 = -1LL;
        PopEstimateSpoiledUntilTime = -1LL;
        KeCancelTimer(&stru_140C22A40);
      }
      else
      {
        PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
        KiSetTimerEx((__int64)&stru_140C22A40, -300000000LL, 0, 0, (__int64)&PopPostSpoilingRefresh);
        v13 = -1LL;
      }
    }
    else
    {
      v13 = -1LL;
    }
    v14 = 0xFFFFFFFFLL;
    v99 = -1LL;
    v81 = 0xFFFFFFFF00000000uLL;
    v15 = 0x80000000LL;
    v82 = -1;
    v83 = 0x80000000;
    v16 = -1;
    v17 = 0xFFFFFFFFLL;
    v18 = -1;
    if ( dword_140C235D4 )
    {
      v35 = qword_140C235F0;
      v19 = v81;
      if ( (__int64 *)qword_140C235F0 != &qword_140C235F0 )
      {
        do
        {
          v36 = *(_DWORD *)(v35 + 84) & 0xA;
          v19 |= *(_DWORD *)(v35 + 84) & 0x7F;
          LODWORD(v81) = v19;
          if ( (_BYTE)v36 == 10 )
          {
            v19 |= 8u;
            LODWORD(v81) = v19;
          }
          v37 = *(_DWORD *)(v35 + 88);
          if ( v37 != -1 )
          {
            if ( (_DWORD)v17 == -1 )
              LODWORD(v17) = 0;
            v17 = (unsigned int)(v37 + v17);
            HIDWORD(v81) = v17;
          }
          v38 = *(_DWORD *)(v35 + 92);
          if ( v38 != -1 )
          {
            if ( v16 == -1 )
              v16 = 0;
            if ( v38 > v16 )
              v16 = *(_DWORD *)(v35 + 92);
            v82 = v16;
          }
          v39 = *(_DWORD *)(v35 + 96);
          v14 = 0x80000000LL;
          if ( v39 != 0x80000000 )
          {
            if ( (_DWORD)v15 == 0x80000000 )
              LODWORD(v15) = 0;
            v15 = (unsigned int)(v39 + v15);
            v83 = v15;
          }
          v35 = *(_QWORD *)v35;
        }
        while ( (__int64 *)v35 != &qword_140C235F0 );
        v13 = -1LL;
      }
      if ( (v19 & 2) != 0 )
      {
        v19 &= ~4u;
        LODWORD(v81) = v19;
      }
      if ( (v19 & 1) != 0 )
      {
        if ( (v19 & 4) != 0 )
          v99 = PopEstimateChargeTime(v14, v35, v15, v17);
      }
      else
      {
        v40 = qword_140C235F0;
        v41 = 0;
        if ( (__int64 *)qword_140C235F0 != &qword_140C235F0 )
        {
          do
          {
            v15 = *(unsigned int *)(v40 + 100);
            if ( (unsigned int)(v15 - 1) <= 0xFFFFFFFD )
              v41 -= 3600 * *(_DWORD *)(v40 + 88) / (unsigned int)v15;
            v40 = *(_QWORD *)v40;
          }
          while ( (__int64 *)v40 != &qword_140C235F0 );
          LOBYTE(v6) = v80;
          if ( v41 )
          {
            v42 = (__int64 *)qword_140C235F0;
            do
            {
              v43 = PopBatteryQueryEstimatedTime(v42 - 8, v41);
              if ( v43 != -1 )
              {
                v44 = 0;
                if ( v18 != -1 )
                  v44 = v18;
                v18 = v43 + v44;
              }
              v42 = (__int64 *)*v42;
            }
            while ( v42 != &qword_140C235F0 );
            LOBYTE(v6) = v80;
          }
        }
        v13 = -1LL;
      }
    }
    else
    {
      LOBYTE(v19) = 1;
      LODWORD(v81) = 1;
      if ( v3 == 3 && KeQueryUnbiasedInterruptTime() >= 0x11E1A300 )
        v3 = 1;
    }
    v20 = v81 & 1;
    if ( v3 == 2 && !v20 || v3 == 3 && v20 )
      v3 = 1;
    v21 = v19 & 0x10;
    if ( (xmmword_140C23600 & 0x10) != v21 )
    {
      v78 = v21 != 0;
      updated = ZwUpdateWnfStateData(&WNF_PO_BATTERY_CHARGE_LIMITING_MODE, &v78, 1u, 0LL, 0LL, 0, 0);
      if ( (unsigned int)dword_140C021E8 > 5 )
      {
        v87 = updated;
        v79 = v78;
        v143 = &v87;
        v141 = &v79;
        v144 = 4LL;
        v142 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C021E8,
          (unsigned __int8 *)byte_14002889D,
          0LL,
          0LL,
          4u,
          &v140);
      }
    }
    if ( (v19 & 0x20) != 0 )
      v22 = ((v19 & 0x40) != 0) + 1;
    else
      v22 = 0;
    if ( dword_140C23760 != v22 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C23768);
      v46 = v22;
      if ( v22 )
      {
        v46 = v22 - 1;
        if ( v22 != 1 )
        {
          if ( v22 != 2 )
            goto LABEL_137;
          goto LABEL_129;
        }
        v47 = byte_140C23764 == 0;
      }
      else
      {
        if ( !byte_140C23764 )
        {
LABEL_129:
          if ( dword_140C23760 == 1 )
          {
            v46 = 0LL;
LABEL_136:
            PopSendWeakChargerNotification(v46);
            goto LABEL_137;
          }
          goto LABEL_137;
        }
        v47 = dword_140C23760 == 2;
      }
      if ( v47 )
      {
        LOBYTE(v46) = 1;
        goto LABEL_136;
      }
LABEL_137:
      PopReleaseRwLock((ULONG_PTR)&xmmword_140C23768);
      dword_140C23760 = v22;
    }
    PopBatteryApplyCompositeState(&v81, v18, v15, v17);
    _InterlockedAnd(&PopBatteryWorkRequests, 0xFFFFFFDF);
    qword_140C23780 = MEMORY[0xFFFFF78000000008];
    _InterlockedOr(v72, 0);
    if ( qword_140C23788 )
      ExfUnblockPushLock(&qword_140C23788, 0LL);
  }
  while ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) != 0x80000000 );
  v23 = (__int64 *)qword_140C235F0;
  if ( (__int64 *)qword_140C235F0 != &qword_140C235F0 )
  {
    do
    {
      PopBatteryQueryStatus(v23 - 8, 0LL);
      v23 = (__int64 *)*v23;
    }
    while ( v23 != &qword_140C235F0 );
    v13 = -1LL;
  }
  if ( !PopUserBatteryChargingEstimator )
    ZwUpdateWnfStateData(&WNF_PO_CHARGE_ESTIMATE, &v99, 8u, 0LL, 0LL, 0, 0);
  if ( !PopDisableBatteryDischargeEstimator )
  {
    if ( v18 != -1 && !(unsigned __int8)PopBatteryEstimatesSpoiled() )
      v13 = v18;
    v101 = v13;
    ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_ESTIMATE, &v101, 8u, 0LL, 0LL, 0, 0);
  }
  if ( (unsigned __int8)v7 | (unsigned __int8)v6 )
  {
    *(_DWORD *)v107 = dword_140C23634;
    v105 = xmmword_140C23614;
    v108 = dword_140C235D0;
    *(_OWORD *)&v107[4] = xmmword_140C23600;
    *(_DWORD *)&v107[20] = dword_140C235D4;
    v106 = xmmword_140C23624;
    ZwUpdateWnfStateData(&WNF_PO_COMPOSITE_BATTERY, &v105, 0x3Cu, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140C021E8 > 5 && tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL) )
    {
      v48 = "AC Power";
      v110 = &v88;
      v88 = dword_140C235D4;
      v111 = 4LL;
      if ( (xmmword_140C23600 & 1) == 0 )
        v48 = "DC Power";
      tlgCreate1Sz_char((__int64)v112, v48);
      v50 = "Battery Discharging";
      if ( (v49 & 2) == 0 )
        v50 = "-";
      tlgCreate1Sz_char((__int64)v113, v50);
      v53 = "Battery Charging";
      if ( (v52 & 4) == 0 )
        v53 = v51;
      tlgCreate1Sz_char((__int64)v114, v53);
      v56 = "Battery Critical";
      if ( (v55 & 8) == 0 )
        v56 = v54;
      tlgCreate1Sz_char((__int64)v115, v56);
      v59 = "Battery charge limiting mode";
      if ( (v58 & 0x10) == 0 )
        v59 = v57;
      tlgCreate1Sz_char((__int64)v116, v59);
      v62 = "Battery charging state power supply present";
      if ( (v61 & 0x20) == 0 )
        v62 = v60;
      tlgCreate1Sz_char((__int64)v117, v62);
      v65 = "Battery charging state adequate";
      if ( (v64 & 0x40) == 0 )
        v65 = v63;
      tlgCreate1Sz_char((__int64)v118, v65);
      if ( (_DWORD)xmmword_140C23624 )
        v67 = (((unsigned int)xmmword_140C23624 >> 1) + 100 * DWORD1(xmmword_140C23600))
            / (unsigned int)xmmword_140C23624;
      else
        v67 = 0;
      v89 = v67;
      v119 = &v89;
      v120 = 4LL;
      if ( (_DWORD)xmmword_140C23624 )
        v68 = 100000 * (unsigned __int64)DWORD1(xmmword_140C23600) / (unsigned int)xmmword_140C23624;
      else
        LODWORD(v68) = 0;
      v69 = "Relative Capacity Unit";
      v90 = v68;
      v122 = 4LL;
      v121 = &v90;
      v91 = DWORD1(xmmword_140C23600);
      v123 = &v91;
      v125 = &v92;
      v93 = *((_QWORD *)&xmmword_140C23600 + 1);
      v127 = &v93;
      v129 = (char *)&v93 + 4;
      v94 = dword_140C235D0;
      v131 = &v94;
      v133 = &v95;
      if ( (xmmword_140C23614 & 0x40000000) == 0 )
        v69 = "mWh Unit";
      v124 = 4LL;
      v92 = xmmword_140C23624;
      v126 = 4LL;
      v128 = 4LL;
      v130 = 4LL;
      v132 = 4LL;
      v95 = v66;
      v134 = 4LL;
      tlgCreate1Sz_char((__int64)v135, v69);
      v136 = &v96;
      v96 = HIDWORD(xmmword_140C23614);
      v138 = &v97;
      v97 = v70;
      v137 = 4LL;
      v139 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C021E8,
        (unsigned __int8 *)&byte_1400286B7,
        0LL,
        0LL,
        0x15u,
        &v109);
    }
    if ( v3 == 1 )
    {
      if ( v20 )
        v102 = 0LL;
      else
        v102 = MEMORY[0xFFFFF78000000014];
      ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, &v102, 8u, 0LL, 0LL, 0, 0);
    }
    if ( v7 )
    {
      HIDWORD(v103) = -1;
      v71 = ZwUpdateWnfStateData(&WNF_PO_POWER_STATE_CHANGE, &v103, 8u, 0LL, 0LL, 0, 0);
      if ( (unsigned int)dword_140C021E8 > 5 )
      {
        v98 = v71;
        v147 = 4LL;
        v146 = &v98;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C021E8,
          (unsigned __int8 *)&dword_140028A04,
          0LL,
          0LL,
          3u,
          &v145);
      }
    }
  }
  PopBatteryReleaseLock();
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
