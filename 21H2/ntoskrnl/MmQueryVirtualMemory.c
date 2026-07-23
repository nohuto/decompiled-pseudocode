/*
 * XREFs of MmQueryVirtualMemory @ 0x1406885A0
 * Callers:
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x1402455B4 (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     NtQueryVirtualMemory @ 0x140688560 (NtQueryVirtualMemory.c)
 *     PfpVirtualQuery @ 0x1407337F8 (PfpVirtualQuery.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402745B0 (PsReferencePartitionSafe.c)
 *     MiUnlockVadShared @ 0x14027C67C (MiUnlockVadShared.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14027C780 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027C7C0 (MiUnlockAndDereferenceVadShared.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14027C880 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiVadDeleted @ 0x14027C8A0 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14027C8B4 (MiLockVadShared.c)
 *     MiReferenceVad @ 0x14027C900 (MiReferenceVad.c)
 *     MiGetControlAreaPartition @ 0x14027C914 (MiGetControlAreaPartition.c)
 *     MiQueryAddressSpan @ 0x14027C940 (MiQueryAddressSpan.c)
 *     MiIsSoftwareEnclave @ 0x14027CB30 (MiIsSoftwareEnclave.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiVadMapsLargeImage @ 0x1402C1520 (MiVadMapsLargeImage.c)
 *     MiLocateVadEvent @ 0x140309104 (MiLocateVadEvent.c)
 *     MiLockVad @ 0x1403214A8 (MiLockVad.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403534E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x140408410 (RtlCompareMemoryUlong.c)
 *     VslQueryVirtualMemory @ 0x1404FD140 (VslQueryVirtualMemory.c)
 *     MiGetWorkingSetInfo @ 0x140546E78 (MiGetWorkingSetInfo.c)
 *     MiGetAweVadPartition @ 0x14054C6C0 (MiGetAweVadPartition.c)
 *     MiGetVadPageSize @ 0x14055BFF0 (MiGetVadPageSize.c)
 *     MiWaitForVadDeletion @ 0x14055C050 (MiWaitForVadDeletion.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1406C5B10 (MiIsUserQueryVmCallerTrusted.c)
 *     ObQueryNameStringMode @ 0x1406C7460 (ObQueryNameStringMode.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D1400 (MiQueryMemoryPhysicalContiguity.c)
 */

NTSTATUS __fastcall MmQueryVirtualMemory(
        HANDLE Handle,
        unsigned __int64 a2,
        int a3,
        _OWORD *a4,
        SIZE_T Length,
        _QWORD *a6,
        int a7)
{
  SIZE_T v10; // r13
  struct _KTHREAD *CurrentThread; // rsi
  KPROCESSOR_MODE PreviousMode; // cl
  unsigned int v13; // ebx
  int v14; // r15d
  __int64 v15; // rcx
  struct _KPROCESS *v16; // rsi
  __int64 *p_Lock; // r15
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  int v27; // r10d
  int v28; // r9d
  int v29; // eax
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // rdx
  int v33; // r10d
  __int64 v34; // rcx
  unsigned __int64 v35; // r8
  int v36; // r10d
  __int64 v37; // r11
  unsigned __int64 v38; // rdx
  NTSTATUS result; // eax
  __int64 v40; // rax
  int v41; // r13d
  unsigned __int64 v42; // r15
  __int64 v43; // rax
  unsigned __int64 v44; // r14
  unsigned __int16 *ProcessPartition; // r8
  __int64 v46; // r10
  __int64 v47; // r9
  int v48; // eax
  __int64 *v49; // rax
  __int64 AweVadPartition; // rax
  unsigned __int16 v51; // r12
  int v52; // edi
  unsigned __int64 v53; // r14
  char v54; // bl
  _QWORD *v55; // r8
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // edx
  int v60; // eax
  int v61; // ecx
  unsigned __int64 AddressSpan; // rax
  __int64 v63; // rax
  ACCESS_MASK v64; // edx
  bool v65; // cf
  __int64 v66; // rdx
  unsigned __int64 i; // rcx
  _QWORD *v68; // rdx
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // rdi
  unsigned __int64 v71; // rdi
  int IsUserQueryVmCallerTrusted; // eax
  int MemoryPhysicalContiguity; // ebx
  __int64 *v74; // rax
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // rbx
  __int64 VadEvent; // rax
  __int64 v78; // r9
  __int64 v79; // rax
  unsigned int v80; // [rsp+40h] [rbp-168h]
  unsigned __int8 v81; // [rsp+44h] [rbp-164h]
  unsigned int v82; // [rsp+48h] [rbp-160h] BYREF
  _QWORD *v83; // [rsp+50h] [rbp-158h]
  unsigned __int64 v84; // [rsp+58h] [rbp-150h]
  struct _KTHREAD *v85; // [rsp+60h] [rbp-148h]
  unsigned __int8 v86; // [rsp+68h] [rbp-140h]
  PVOID Object; // [rsp+70h] [rbp-138h] BYREF
  PRKPROCESS PROCESS; // [rsp+78h] [rbp-130h]
  __m256i v89; // [rsp+80h] [rbp-128h] BYREF
  __int128 v90; // [rsp+A0h] [rbp-108h]
  __int128 v91; // [rsp+B0h] [rbp-F8h]
  __int64 v92; // [rsp+C0h] [rbp-E8h]
  int v93; // [rsp+C8h] [rbp-E0h]
  unsigned __int64 v94; // [rsp+D0h] [rbp-D8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+D8h] [rbp-D0h]
  __int64 P; // [rsp+E0h] [rbp-C8h] BYREF
  unsigned __int64 v97; // [rsp+E8h] [rbp-C0h]
  _QWORD *v98; // [rsp+F8h] [rbp-B0h]
  __int128 Source; // [rsp+100h] [rbp-A8h] BYREF
  __int128 v100; // [rsp+110h] [rbp-98h]
  __int128 v101; // [rsp+120h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+130h] [rbp-78h] BYREF

  v98 = a4;
  v93 = a3;
  v84 = a2;
  v83 = a6;
  v82 = 0;
  Object = 0LL;
  P = 0LL;
  memset(&v89, 0, sizeof(v89));
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v80 = 0;
  DmaAdapter = 0LL;
  v97 = 0LL;
  if ( a3 == 6 )
  {
    v10 = Length;
    if ( Length >= 0x18 )
      goto LABEL_6;
    return -1073741820;
  }
  if ( a3 != 3 )
  {
    if ( a3 )
    {
      switch ( a3 )
      {
        case 1:
          v10 = Length;
          v65 = Length < 8;
          goto LABEL_137;
        case 2:
          v10 = Length;
          goto LABEL_6;
        case 4:
          v10 = Length;
          v65 = Length < 0x10;
LABEL_137:
          if ( !v65 )
            goto LABEL_138;
          return -1073741820;
        case 5:
          v10 = Length;
          if ( Length < 8 )
            return -1073741820;
          goto LABEL_6;
        case 7:
          v10 = Length;
          if ( Length < 0x20 )
            return -1073741820;
          goto LABEL_6;
        case 8:
          break;
        case 11:
          v10 = Length;
          if ( Length < 0x28 )
            return -1073741820;
LABEL_138:
          v80 = 64;
          goto LABEL_6;
        default:
          return -1073741821;
      }
    }
    v10 = Length;
    if ( Length >= 0x30 )
      goto LABEL_6;
    return -1073741820;
  }
  v10 = Length;
  if ( Length < 0x18 )
    return -1073741820;
LABEL_6:
  CurrentThread = KeGetCurrentThread();
  v85 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v81 = PreviousMode;
  v13 = v80;
  if ( v80 < 0x40
    || !PreviousMode
    || (IsUserQueryVmCallerTrusted = MiIsUserQueryVmCallerTrusted(CurrentThread),
        PreviousMode = v81,
        IsUserQueryVmCallerTrusted) )
  {
    v14 = a7;
  }
  else
  {
    v14 = a7 | 0x40000000;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(a4, v10, 8u);
    if ( v83 )
    {
      v15 = (__int64)v83;
      if ( (unsigned __int64)v83 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v15 = *(_QWORD *)v15;
      v13 = v80;
    }
    PreviousMode = v81;
  }
  if ( v84 > 0x7FFFFFFEFFFFLL )
    return -1073741811;
  v94 = v84 & 0xFFFFFFFFFFFFF000uLL;
  if ( a3 != 10 )
    goto LABEL_16;
  Source = *a4;
  v100 = a4[1];
  v101 = a4[2];
  v75 = *((_QWORD *)&v100 + 1);
  *((_QWORD *)&v100 + 1) = 0LL;
  if ( RtlCompareMemoryUlong(&Source, 0x30uLL, 0) != 48 || v75 > 0x7FFFFFFF0000LL - v84 )
    return -1073741811;
  v97 = (((v84 & 0xFFF) + v75 + 4095) & 0xFFFFFFFFFFFFF000uLL) + v94;
  CurrentThread = v85;
  PreviousMode = v81;
LABEL_16:
  if ( Handle == (HANDLE)-1LL )
  {
    v16 = CurrentThread->ApcState.Process;
    PROCESS = v16;
    Object = v16;
  }
  else
  {
    v64 = 4096;
    if ( (v14 & 0x40000000) != 0 )
      v64 = 1024;
    result = ObReferenceObjectByHandleWithTag(
               Handle,
               v64,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x6D566D4Du,
               &Object,
               0LL);
    if ( result < 0 )
      return result;
    v16 = (struct _KPROCESS *)Object;
    PROCESS = (PRKPROCESS)Object;
    if ( (*((_DWORD *)Object + 543) & 0x1000) != 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      return -1073741790;
    }
  }
  switch ( a3 )
  {
    case 11:
      MemoryPhysicalContiguity = MiQueryMemoryPhysicalContiguity(v16, a4, v10, v81);
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v16, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v83 )
          *v83 = v10;
        return 0;
      }
      return MemoryPhysicalContiguity;
    case 4:
      MemoryPhysicalContiguity = MiGetWorkingSetInfoList((ULONG_PTR)v16, v14, (unsigned __int64)a4, v10);
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v16, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v83 )
          *v83 = v10;
        return 0;
      }
      return MemoryPhysicalContiguity;
    case 1:
      MemoryPhysicalContiguity = MiGetWorkingSetInfo((__int64)v16, v14, (__int64)a4, v10, &P);
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v16, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v83 )
          *v83 = 8 * P + 8;
        return 0;
      }
      return MemoryPhysicalContiguity;
    case 5:
      v76 = v16[2].Affinity.Bitmap[12];
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      *(_QWORD *)a4 = v76;
      if ( v83 )
        *v83 = 8LL;
      return 0;
  }
  p_Lock = (__int64 *)&PROCESS->Header.Lock;
  if ( Handle != (HANDLE)-1LL )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v13 |= 1u;
    LOBYTE(v80) = v13;
  }
  if ( a3 == 8 && p_Lock[124] && VslQueryVirtualMemory((__int64)p_Lock, v84, &v89) >= 0 )
  {
    if ( (_DWORD)v90 == 4096 )
      v89.m256i_i16[10] = *(_WORD *)MiGetProcessPartition((__int64)p_Lock);
    else
      v89.m256i_i16[10] = 0;
    if ( (v13 & 1) != 0 )
    {
      KeUnstackDetachProcess(&ApcState);
      ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
    }
    *(__m256i *)a4 = v89;
    a4[2] = v90;
    if ( v83 )
      *v83 = 48LL;
    return 0;
  }
  while ( 2 )
  {
    v18 = (__int64)v85;
    while ( 1 )
    {
      LOCK_ADDRESS_SPACE_SHARED(v18, (__int64)p_Lock);
      if ( (*((_DWORD *)p_Lock + 281) & 0x20) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_SHARED(v18, (__int64)p_Lock);
        if ( (v13 & 1) != 0 )
        {
          KeUnstackDetachProcess(&ApcState);
          ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
        }
        return -1073741558;
      }
      v19 = 0LL;
      v20 = 0LL;
      if ( p_Lock[253] )
      {
        v19 = p_Lock[251];
        v20 = v84 >> 12;
        while ( v19 )
        {
          v21 = *(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32);
          if ( v20 < v21 )
            goto LABEL_35;
          if ( v20 <= (*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) )
          {
            v13 |= 2u;
            LOBYTE(v80) = v13;
            break;
          }
          if ( v20 < v21 )
          {
LABEL_35:
            if ( !*(_QWORD *)v19 )
              break;
            v19 = *(_QWORD *)v19;
          }
          else
          {
            if ( !*(_QWORD *)(v19 + 8) )
              break;
            v19 = *(_QWORD *)(v19 + 8);
          }
        }
      }
      if ( (v13 & 2) == 0 )
      {
        if ( v19 )
        {
          v66 = *(unsigned int *)(v19 + 24);
          if ( (v66 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) < v20 )
          {
            i = *(_QWORD *)(v19 + 8);
            if ( i )
            {
              v68 = *(_QWORD **)i;
              if ( *(_QWORD *)i )
              {
                do
                {
                  i = (unsigned __int64)v68;
                  v68 = (_QWORD *)*v68;
                }
                while ( v68 );
              }
            }
            else
            {
              for ( i = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
              {
                if ( *(_QWORD *)i == v19 )
                  break;
                v19 = i;
              }
            }
            v69 = v84 & 0xFFFFFFFFFFFFF000uLL;
            if ( i )
              v70 = (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12;
            else
              v70 = 0x7FFFFFFF0000LL;
LABEL_150:
            v84 = v69;
            v71 = v70 - v69;
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v85, (__int64)p_Lock);
            if ( (v13 & 1) != 0 )
            {
              KeUnstackDetachProcess(&ApcState);
              ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
            }
            if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
            {
              *((_QWORD *)a4 + 1) = 0LL;
              *((_DWORD *)a4 + 4) = 0;
              *(_QWORD *)a4 = v84;
              *((_QWORD *)a4 + 3) = v71;
              *((_DWORD *)a4 + 8) = 0x10000;
              *(_QWORD *)((char *)a4 + 36) = 1LL;
              *((_WORD *)a4 + 10) = 0;
              if ( v83 )
                *v83 = 48LL;
              return 0;
            }
            return -1073741503;
          }
          v70 = (v66 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12;
        }
        else
        {
          v70 = 0x7FFFFFFF0000LL;
        }
        v69 = v84 & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_150;
      }
      MiReferenceVad(v19);
      v22 = (__int64)v85;
      --v85->KernelApcDisable;
      UNLOCK_ADDRESS_SPACE_SHARED(v22, (__int64)p_Lock);
      MiLockVadShared((__int64)v85, v19);
      KeLeaveCriticalRegionThread((__int64)v85, v23, v24, v25);
      if ( (unsigned int)MiVadDeleted(v19) != 1 )
        break;
      v18 = (__int64)v85;
      MiUnlockVadShared((__int64)v85, v19);
      MiLockVad((__int64)v85, v19);
      MiWaitForVadDeletion(v19);
      MiUnlockAndDereferenceVad((char *)v19);
      v13 &= ~2u;
      LOBYTE(v80) = v13;
    }
    if ( v20 < (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
      || v20 > (*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) )
    {
      MiUnlockAndDereferenceVadShared((char *)v19);
      v13 &= ~2u;
      LOBYTE(v80) = v13;
      continue;
    }
    break;
  }
  memset(&v89.m256i_u64[1], 0, 24);
  v90 = 0LL;
  v89.m256i_i64[0] = v94;
  v89.m256i_i64[1] = (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12;
  v89.m256i_i32[4] = MmProtectToValue[(*(_DWORD *)(v19 + 48) >> 7) & 0x1F];
  v26 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v19);
  v89.m256i_i32[4] = v28 | v26;
  v29 = *(_DWORD *)(v19 + 48);
  if ( (v29 & 0x100000) == 0 )
  {
    if ( (v29 & 0x70) == 0x20 )
    {
      DWORD2(v90) = 0x1000000;
      if ( a3 == 7 && (*(_DWORD *)(**(_QWORD **)(v19 + 72) + 56LL) & 0x40000000) != 0 )
      {
LABEL_235:
        LOBYTE(v13) = v13 | 4;
        LOBYTE(v80) = v13;
      }
    }
    else
    {
      DWORD2(v90) = 0x40000;
      if ( a3 == 3 && v10 >= 0x30 || a3 == 7 )
      {
        v40 = *(_QWORD *)(v19 + 72);
        if ( !*(_QWORD *)(*(_QWORD *)v40 + 64LL) )
        {
          DWORD2(v90) = 0x8000000;
          goto LABEL_45;
        }
        if ( a3 == 7 && (*(_DWORD *)(*(_QWORD *)v40 + 56LL) & 0x40000000) != 0 )
          goto LABEL_235;
      }
    }
LABEL_45:
    if ( a3 == 2 )
    {
      v74 = *(__int64 **)(v19 + 72);
      v30 = *(_QWORD *)(*v74 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v30 )
      {
        v30 = MiReferenceControlAreaFile(*v74);
        v27 = v94;
      }
      if ( !v30 )
        v30 = 1LL;
    }
    else
    {
      v30 = (__int64)DmaAdapter;
    }
    goto LABEL_47;
  }
  DWORD2(v90) = 0x20000;
  if ( (unsigned int)MiIsSoftwareEnclave(v19) )
  {
    LOBYTE(v13) = v13 | 0x10;
    LOBYTE(v80) = v13;
  }
  v63 = *(unsigned int *)(v19 + 52);
  LODWORD(v63) = v63 & 0x7FFFFFFF;
  if ( (v63 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31)) == 0x7FFFFFFFDLL )
  {
    LOBYTE(v13) = v13 | 0x20;
    LOBYTE(v80) = v13;
  }
  v30 = (__int64)DmaAdapter;
  if ( (*(_DWORD *)(v19 + 48) & 0x70) == 0x10 )
  {
    LOBYTE(v13) = v13 | 8;
    LOBYTE(v80) = v13;
  }
LABEL_47:
  if ( ((a3 - 3) & 0xFFFFFFFB) != 0 )
  {
    if ( a3 == 6 )
    {
      v91 = 0LL;
      v92 = 0LL;
      v31 = *(_DWORD *)(v19 + 48);
      if ( (v31 & 0x100000) == 0 && (v31 & 0x70) == 0x20 )
      {
        v32 = ***(_QWORD ***)(v19 + 72);
        *(_QWORD *)&v91 = (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12;
        *((_QWORD *)&v91 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 24), -1LL, -1LL);
        v33 = v92 & 0xFFFFFFC3 | (*(unsigned __int8 *)(v32 + 15) >> 2) & 0x3FFFFFFC;
        LODWORD(v92) = v33;
        if ( (*(_DWORD *)(v19 + 48) & 0xF80) == 0x80 )
          LODWORD(v92) = v33 | 2;
        if ( MiVadMapsLargeImage(v19) )
        {
          VadEvent = MiLocateVadEvent(v34);
          v86 = *(_BYTE *)(VadEvent + 8);
          v38 = *(_QWORD *)(VadEvent + 16);
          *(_QWORD *)&v91 = v78 + ((unsigned __int64)v86 << 16);
        }
        else
        {
          v38 = (*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32))
              - (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
              + 1;
        }
        if ( (v35 & 0xFFF) == 0 )
          v37 = 0LL;
        p_Lock = (__int64 *)Object;
        LOBYTE(v13) = v80;
        if ( v38 < v37 + (v35 >> 12) )
          LODWORD(v92) = v36 | 1;
      }
      MiUnlockAndDereferenceVadShared((char *)v19);
      if ( (v13 & 1) != 0 )
      {
        KeUnstackDetachProcess(&ApcState);
        ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
      }
      v82 = 24;
      *a4 = v91;
      *((_QWORD *)a4 + 2) = v92;
      if ( v83 )
        *v83 = 24LL;
      return 0;
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      AddressSpan = MiQueryAddressSpan((__int64)&v89, v27, v97, v19);
      v89.m256i_i64[3] = AddressSpan - v89.m256i_i64[0];
    }
    MiUnlockAndDereferenceVadShared((char *)v19);
    if ( (v13 & 1) != 0 )
    {
      KeUnstackDetachProcess(&ApcState);
      ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      *(__m256i *)a4 = v89;
      a4[2] = v90;
      if ( v83 )
        *v83 = 48LL;
      return 0;
    }
    if ( !v30 )
      return -1073741503;
    if ( v30 == 1 )
      return -1073741672;
    if ( (unsigned int)v10 < v10 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v30);
      return -1073741581;
    }
    v82 = 0;
    MemoryPhysicalContiguity = ObQueryNameStringMode(v30, (_DWORD)a4, v10, (unsigned int)&v82, v81);
    HalPutDmaAdapter((PADAPTER_OBJECT)v30);
    if ( v83 )
      *v83 = v82;
    return MemoryPhysicalContiguity;
  }
  v41 = 0;
  v42 = ((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32))
       - (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
       + 1) << 12;
  v43 = *(unsigned int *)(v19 + 52);
  LODWORD(v43) = v43 & 0x7FFFFFFF;
  v44 = v43 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31);
  if ( v44 >= 0x7FFFFFFFDLL )
    v44 = 0LL;
  ProcessPartition = (unsigned __int16 *)MiGetProcessPartition((__int64)PROCESS);
  v47 = v46;
  v48 = *(_DWORD *)(v19 + 48);
  if ( (v48 & 0x100000) != 0 )
  {
    if ( (v48 & 0x70) != 0x30 )
    {
      if ( (v48 & 0x400000) != 0 || (v48 & 0xC0000u) >= 0x80000 )
      {
        v79 = MiLocateVadEvent(v19);
        if ( v79 )
        {
          v47 = *(_QWORD *)(v79 + 24);
          if ( v47 )
          {
            if ( !PsReferencePartitionSafe(*(_QWORD *)(v79 + 24)) )
            {
              v41 = -1073740640;
              v47 = v46;
            }
          }
        }
      }
      goto LABEL_77;
    }
    AweVadPartition = MiGetAweVadPartition(v19);
    goto LABEL_76;
  }
  v49 = *(__int64 **)(v19 + 72);
  if ( v49 && *v49 )
  {
    AweVadPartition = MiGetControlAreaPartition(*v49);
LABEL_76:
    ProcessPartition = (unsigned __int16 *)AweVadPartition;
  }
LABEL_77:
  if ( v41 < 0 )
    v51 = v46;
  else
    v51 = *ProcessPartition;
  if ( v47 )
    PsDereferencePartition(v47);
  v52 = (*(_DWORD *)(v19 + 48) >> 12) & 0x3F;
  MiUnlockAndDereferenceVadShared((char *)v19);
  if ( (v13 & 1) != 0 )
  {
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(PROCESS, 0x6D566D4Du);
  }
  if ( v41 >= 0 )
  {
    v53 = v44 << 12;
    v54 = v13 & 0xFD;
    v55 = v98;
    *v98 = v89.m256i_i64[1];
    *((_DWORD *)v55 + 2) = v89.m256i_i32[4];
    v55[2] = v42;
    if ( v93 == 7 )
    {
      *((_DWORD *)v55 + 3) = 0;
      if ( DWORD2(v90) == 0x20000 )
      {
        *((_DWORD *)v55 + 3) = 1;
      }
      else if ( (v54 & 8) != 0 )
      {
        *((_DWORD *)v55 + 3) = 16;
      }
      else
      {
        switch ( DWORD2(v90) )
        {
          case 0x40000:
            *((_DWORD *)v55 + 3) = 2;
            break;
          case 0x1000000:
            *((_DWORD *)v55 + 3) = 4;
            break;
          case 0x8000000:
            *((_DWORD *)v55 + 3) = 8;
            break;
        }
      }
      if ( MiGetVadPageSize(v19) == 16 )
      {
        v59 |= 0x80u;
        *((_DWORD *)v55 + 3) = v59;
      }
      v60 = v59 | (8 * (v54 & 4));
      *((_DWORD *)v55 + 3) = v60;
      v61 = v60 | (4 * (v54 & 0x10));
      *((_DWORD *)v55 + 3) = v61;
      v56 = v61 | (8 * (v54 & 0x20));
    }
    else
    {
      v56 = DWORD2(v90);
    }
    *((_DWORD *)v55 + 3) = v56;
    v57 = 24LL;
    v82 = 24;
    if ( Length >= 0x20 )
    {
      v55[3] = v53;
      v57 = 32LL;
      v82 = 32;
    }
    if ( Length >= 0x28 )
    {
      v55[4] = v51;
      v57 = 40LL;
      v82 = 40;
    }
    if ( Length >= 0x30 )
    {
      if ( v52 )
        v58 = (unsigned int)(v52 - 1);
      else
        v58 = 0xFFFFFFFFLL;
      v55[5] = v58;
      v82 = 48;
      v57 = 48LL;
    }
    if ( v83 )
      *v83 = v57;
    return 0;
  }
  return v41;
}
