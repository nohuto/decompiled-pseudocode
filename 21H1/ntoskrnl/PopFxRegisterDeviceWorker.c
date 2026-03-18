/*
 * XREFs of PopFxRegisterDeviceWorker @ 0x14079CBDC
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x14079C6C0 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x14079CA3C (PopFxRegisterDevice.c)
 * Callees:
 *     PopFxAddRefDevice @ 0x140237700 (PopFxAddRefDevice.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IoAllocateIrp @ 0x1402E0EB0 (IoAllocateIrp.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14037BB20 (PopFxFindAcpiDeviceByUniqueId.c)
 *     IoInitializeRemoveLockEx @ 0x14037C1C0 (IoInitializeRemoveLockEx.c)
 *     PopPlRegisterComponent @ 0x1403BA258 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1403BA368 (PopPlRegisterDevice.c)
 *     PopFxRegisterDeviceWithPep @ 0x1403BA47C (PopFxRegisterDeviceWithPep.c)
 *     PopFxActivateComponent @ 0x1403BA820 (PopFxActivateComponent.c)
 *     PopFxCreateDeviceCommon @ 0x1403BA8E8 (PopFxCreateDeviceCommon.c)
 *     Feature_Servicing_27169067__private_IsEnabled @ 0x1403F0FA0 (Feature_Servicing_27169067__private_IsEnabled.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopFxBugCheck @ 0x1405638EC (PopFxBugCheck.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14056689C (PopFxReleaseAcpiRefDevice.c)
 *     PopFxVerifyDependencies @ 0x1408E1194 (PopFxVerifyDependencies.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopFxRegisterDeviceWorker(
        ULONG_PTR a1,
        const UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        ULONG_PTR *a9)
{
  __int64 v9; // r14
  unsigned int v10; // r12d
  volatile signed __int32 *v12; // rsi
  int v13; // ebx
  PVOID PoolWithTag; // rax
  unsigned int v15; // edi
  unsigned int v16; // r9d
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  __int64 v23; // r10
  __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r15
  __int64 v28; // rax
  size_t v29; // r12
  SIZE_T v30; // rbx
  int AcpiDeviceByUniqueId; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  ULONG_PTR v34; // rdi
  int v36; // eax
  char *v37; // r12
  _DWORD *v38; // rbx
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  size_t v43; // r8
  __int64 v44; // rsi
  _OWORD *v45; // r8
  char *v46; // rax
  unsigned int v47; // r10d
  char *v48; // rax
  __int64 v49; // rbx
  char *v50; // rcx
  char *v51; // r13
  char *v52; // rcx
  __int64 v53; // rcx
  size_t v54; // r11
  size_t v55; // rdx
  __int64 v56; // r9
  __int128 v57; // xmm0
  size_t v58; // rdx
  int v59; // eax
  int v60; // eax
  char *v61; // r9
  unsigned int v62; // r8d
  __int64 v63; // rcx
  unsigned int *v64; // r9
  __int64 v65; // rcx
  char *v66; // r10
  __int64 v67; // rcx
  __int128 v68; // xmm0
  unsigned int v69; // ecx
  size_t v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  char *v73; // rcx
  _QWORD *v74; // rcx
  unsigned int v75; // ebx
  _QWORD *v76; // r13
  __int64 v77; // r15
  unsigned int v78; // r9d
  __int64 v79; // r10
  __int64 v80; // r8
  __int64 v81; // rcx
  PIRP Irp; // rax
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // rdi
  _DWORD *v86; // rbx
  PVOID v87; // [rsp+38h] [rbp-C1h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-B9h] BYREF
  __int64 v89; // [rsp+48h] [rbp-B1h]
  unsigned int *v90; // [rsp+50h] [rbp-A9h]
  size_t v91; // [rsp+58h] [rbp-A1h]
  char *v92; // [rsp+60h] [rbp-99h]
  __int64 v93; // [rsp+68h] [rbp-91h]
  char *v94; // [rsp+70h] [rbp-89h]
  size_t v95; // [rsp+78h] [rbp-81h]
  _QWORD *v96; // [rsp+80h] [rbp-79h]
  PVOID P; // [rsp+88h] [rbp-71h]
  __int64 v98; // [rsp+90h] [rbp-69h]
  __int64 v99; // [rsp+98h] [rbp-61h]
  signed __int32 v100; // [rsp+A0h] [rbp-59h]
  int v101; // [rsp+A4h] [rbp-55h]
  size_t Size; // [rsp+A8h] [rbp-51h]
  PVOID v103; // [rsp+B0h] [rbp-49h]
  char *v104; // [rsp+B8h] [rbp-41h]
  __int64 v105; // [rsp+C0h] [rbp-39h]
  _QWORD *v106; // [rsp+C8h] [rbp-31h]
  __int64 v107; // [rsp+D0h] [rbp-29h]
  size_t v108; // [rsp+D8h] [rbp-21h]
  __int64 v109; // [rsp+E0h] [rbp-19h]
  char *v110; // [rsp+E8h] [rbp-11h]
  unsigned int v115; // [rsp+168h] [rbp+6Fh]

  v9 = a5;
  v10 = 0;
  v87 = 0LL;
  BugCheckParameter2 = 0LL;
  v12 = 0LL;
  if ( !a5 )
    return (unsigned int)-1073741811;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 12LL * a5, 0x4D584650u);
  P = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v115 = 0;
  v15 = 0;
  memset(PoolWithTag, 0, 12 * v9);
  v16 = 0;
  if ( (_DWORD)v9 )
  {
    while ( 1 )
    {
      v17 = a4 + 56LL * v16;
      v18 = *(_DWORD *)(v17 + 28);
      if ( !v18
        || v18 > 1 && (!*(_QWORD *)a3 || !*(_QWORD *)(a3 + 8) || !*(_QWORD *)(a3 + 16) || *(_DWORD *)(v17 + 24) >= v18) )
      {
        break;
      }
      v19 = v18 + v15;
      if ( v18 + v15 < v15 )
        break;
      v20 = *(_DWORD *)(v17 + 40);
      v15 = v19;
      if ( v20 )
      {
        if ( v20 < (unsigned int)v9 )
        {
          v21 = v20 + v10;
          if ( v20 + v10 >= v10 )
          {
            v10 += v20;
            v115 = v21;
            v22 = 0;
            while ( 1 )
            {
              v23 = *(unsigned int *)(*(_QWORD *)(v17 + 48) + 4LL * v22);
              if ( (unsigned int)v23 >= (unsigned int)v9 )
                break;
              ++v22;
              ++*((_DWORD *)P + 3 * v23 + 2);
              if ( v22 >= *(_DWORD *)(v17 + 40) )
                goto LABEL_19;
            }
          }
        }
        break;
      }
LABEL_19:
      if ( ++v16 >= (unsigned int)v9 )
        goto LABEL_20;
    }
    v13 = -1073741811;
    goto LABEL_32;
  }
LABEL_20:
  v91 = 8 * v9;
  v24 = 448 * v9;
  v89 = 0LL;
  v90 = 0LL;
  v25 = 24LL * v15;
  v26 = v25 + 448 * v9;
  v27 = v26 + 256;
  if ( a7 <= 0 )
  {
    v27 = v25 + v24;
    v26 = 0LL;
  }
  v109 = v26;
  if ( v10 )
  {
    v89 = v27;
    v28 = 8LL * v10;
    v90 = (unsigned int *)(v28 + v27);
    v27 += v28 + v28;
  }
  v101 = v9 * PopFxRuntimeLogNumberEntries;
  v29 = v27 + 24LL * (unsigned int)(v9 * PopFxRuntimeLogNumberEntries);
  Size = v29;
  v99 = 8 * (int)v9 + 16LL;
  v98 = v99 + 40 * v9;
  v30 = v25 + v98;
  v95 = v25 + v98;
  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a2, (__int64 **)&v87);
  if ( AcpiDeviceByUniqueId >= 0 )
  {
    v12 = (volatile signed __int32 *)v87;
    v34 = (ULONG_PTR)v87;
    BugCheckParameter2 = (ULONG_PTR)v87;
    if ( !(unsigned int)Feature_Servicing_27169067__private_IsEnabled() )
    {
      PopFxAddRefDevice((ULONG_PTR)v12);
      goto LABEL_38;
    }
    _InterlockedOr(v12 + 58, 1u);
    v34 = BugCheckParameter2;
LABEL_37:
    v12 = (volatile signed __int32 *)v87;
LABEL_38:
    if ( (unsigned int)Feature_Servicing_27169067__private_IsEnabled() )
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v34 + 240), 0x4D584650u, 0, 0, 0x20u);
    v37 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v29, 0x4D584650u);
    if ( !v37 || (v103 = ExAllocatePoolWithTag(NonPagedPoolNx, v30, 0x4D584650u), (v38 = v103) == 0LL) )
    {
      v13 = -1073741670;
      goto LABEL_86;
    }
    memset(v37, 0, Size);
    *(_DWORD *)(v34 + 828) = v9;
    *(_QWORD *)(v34 + 832) = v37;
    v106 = (_QWORD *)(v34 + 832);
    v39 = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v34 + 112) = *(_OWORD *)a3;
    v40 = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v34 + 128) = v39;
    v41 = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(v34 + 144) = v40;
    v42 = *(_OWORD *)(a3 + 64);
    *(_OWORD *)(v34 + 160) = v41;
    *(_OWORD *)(v34 + 176) = v42;
    *(_QWORD *)(v34 + 192) = a6;
    *(_QWORD *)(v34 + 600) = 0LL;
    v34 = BugCheckParameter2;
    v43 = v95;
    v100 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
    *(_DWORD *)(BugCheckParameter2 + 616) = v100;
    *(_DWORD *)(v34 + 612) = 5;
    memset(v38, 0, v43);
    v44 = (__int64)&v37[v91];
    v94 = &v37[v24];
    v45 = (_OWORD *)v44;
    v46 = (char *)v38 + v99;
    *(_QWORD *)v38 = a8;
    v110 = v46;
    v47 = 0;
    v92 = v46;
    v48 = (char *)v38 + v98;
    v38[2] = v9;
    v105 = v44;
    v96 = v48;
    LODWORD(v93) = 0;
    if ( (_DWORD)v9 )
    {
      v49 = v44 + 48;
      v50 = (char *)v90 + (_QWORD)v37;
      v51 = (char *)v103;
      if ( !v115 )
        v50 = 0LL;
      v98 = (__int64)v50;
      v52 = &v37[v89];
      if ( !v115 )
        v52 = 0LL;
      v104 = v52;
      v53 = 0LL;
      v89 = 0LL;
      v54 = Size - 440;
      v108 = Size - 440;
      v90 = (unsigned int *)((char *)P + 8);
      v55 = a4 + 32;
      v91 = a4 + 32;
      v56 = -48LL - (_QWORD)v37;
      v107 = -48LL - (_QWORD)v37;
      v99 = -16LL - (_QWORD)v103;
      while ( 1 )
      {
        *(_QWORD *)(v53 + *v106) = v45;
        if ( v56 + v49 > v54 )
          break;
        v57 = *(_OWORD *)(v55 - 32);
        *(_DWORD *)(v49 - 32) = v47;
        *(_QWORD *)(v49 + 32) = v34;
        *v45 = v57;
        *(_QWORD *)(v49 - 8) = PopFxComponentWork;
        *(_QWORD *)v49 = v45;
        *(_QWORD *)(v49 - 24) = 0LL;
        KeInitializeEvent((PRKEVENT)(v49 + 56), NotificationEvent, 1u);
        v58 = v91;
        *(_QWORD *)(v49 + 80) = 0LL;
        *(_DWORD *)(v49 + 108) = *(_DWORD *)(v58 - 4);
        *(_QWORD *)(v49 + 112) = v94;
        v59 = *(_DWORD *)(v58 - 8);
        *(_DWORD *)(v49 + 164) = -1;
        *(_DWORD *)(v49 + 120) = v59;
        *(_DWORD *)(v49 + 168) = v100;
        *(_QWORD *)(v49 + 152) = 0LL;
        v60 = *(_DWORD *)(v58 + 8);
        if ( v60 )
        {
          v61 = v104;
          v62 = 0;
          *(_QWORD *)(v49 + 128) = v104;
          *(_DWORD *)(v49 + 124) = v60;
          do
          {
            v63 = v62++;
            *(_DWORD *)v61 = *(_DWORD *)(*(_QWORD *)(v58 + 16) + 4 * v63);
            v61 += 8;
          }
          while ( v62 < *(_DWORD *)(v49 + 124) );
          v104 = v61;
        }
        v64 = v90;
        if ( *v90 )
        {
          v65 = v98;
          *(_QWORD *)(v49 + 144) = v98;
          v98 = v65 + 8LL * *v64;
        }
        v66 = v92;
        v67 = v99 + 16;
        *(_QWORD *)&v51[v89 + 16] = v92;
        if ( (unsigned __int64)&v66[v67] > v95 - 40 )
          break;
        v68 = *(_OWORD *)(v58 - 32);
        v69 = 0;
        LODWORD(v92) = 0;
        *(_OWORD *)v66 = v68;
        *((_QWORD *)v66 + 2) = *(_QWORD *)(v58 - 16);
        *((_DWORD *)v66 + 7) = *(_DWORD *)(v58 - 4);
        *((_QWORD *)v66 + 4) = v96;
        *((_DWORD *)v66 + 6) = *(_DWORD *)(v58 - 8);
        if ( *(_DWORD *)(v49 + 108) )
        {
          v70 = Size - 24;
          v91 = Size - 24;
          while ( v94 - v37 <= v70 )
          {
            v71 = *(_QWORD *)v58;
            v72 = v69;
            v73 = v94;
            *((_DWORD *)v94 + 4) = *(_DWORD *)(*(_QWORD *)v58 + 24 * v72 + 16);
            *(_QWORD *)v73 = *(_QWORD *)(v71 + 24 * v72);
            *((_QWORD *)v73 + 1) = *(_QWORD *)(v71 + 24 * v72 + 8);
            v94 = v73 + 24;
            if ( (unsigned __int64)v96 + v99 + 16 > v95 - 24 )
              break;
            v74 = v96;
            *((_DWORD *)v96 + 4) = *(_DWORD *)(v71 + 24 * v72 + 16);
            *v74 = *(_QWORD *)(v71 + 24 * v72);
            v70 = v91;
            v74[1] = *(_QWORD *)(v71 + 24 * v72 + 8);
            v96 = v74 + 3;
            v69 = (_DWORD)v92 + 1;
            LODWORD(v92) = v69;
            if ( v69 >= *(_DWORD *)(v49 + 108) )
            {
              v64 = v90;
              goto LABEL_63;
            }
          }
          break;
        }
LABEL_63:
        v92 = v66 + 40;
        v45 = (_OWORD *)(v105 + 440);
        v53 = v89 + 8;
        v47 = v93 + 1;
        v105 += 440LL;
        v55 = v58 + 56;
        LODWORD(v93) = v47;
        v89 += 8LL;
        v49 += 440LL;
        v91 = v55;
        v90 = v64 + 3;
        if ( v47 >= (unsigned int)v9 )
          goto LABEL_66;
        v56 = v107;
        v54 = v108;
      }
    }
    else
    {
      v51 = (char *)v38;
LABEL_66:
      *(_DWORD *)(v34 + 840) = v101;
      *(_QWORD *)(v34 + 848) = &v37[v27];
      if ( v115 )
      {
        v13 = PopFxVerifyDependencies(P, v34, (unsigned int)v9);
        if ( v13 < 0 )
          goto LABEL_85;
      }
      v75 = 0;
      if ( (_DWORD)v9 )
      {
        v76 = v106;
        v77 = 0LL;
        do
        {
          v78 = 0;
          v79 = *(_QWORD *)(v77 + *v76);
          if ( *(_DWORD *)(v79 + 172) )
          {
            do
            {
              v80 = *(_QWORD *)(*v76 + 8LL * *(unsigned int *)(*(_QWORD *)(v79 + 176) + 8LL * v78));
              v81 = *(unsigned int *)(v80 + 188);
              *(_DWORD *)(*(_QWORD *)(v80 + 192) + 8 * v81) = v75;
              *(_DWORD *)(*(_QWORD *)(v80 + 192) + 8 * v81 + 4) = v78++;
              ++*(_DWORD *)(v80 + 188);
            }
            while ( v78 < *(_DWORD *)(v79 + 172) );
          }
          PopFxActivateComponent(v34, v79, 0, 1);
          ++v75;
          v77 += 8LL;
        }
        while ( v75 < (unsigned int)v9 );
        v51 = (char *)v103;
      }
      if ( a7 <= 0
        || (*(_QWORD *)(v34 + 24) = &v37[v109], Irp = IoAllocateIrp(a7 + 2, 0), (*(_QWORD *)(v34 + 16) = Irp) != 0LL) )
      {
        if ( !(unsigned __int8)PopFxRegisterDeviceWithPep(a1, (int)a2, v34, (int)v51) )
          PopFxBugCheck(0x601uLL, v34, (ULONG_PTR)v51, 0LL);
        PopPlRegisterDevice(v34, v83, v84);
        if ( (_DWORD)v9 )
        {
          v85 = v9;
          v86 = v110 + 28;
          do
          {
            if ( (*(_BYTE *)(v86 - 3) & 2) != 0 )
              *(_DWORD *)(v44 + 92) |= 2u;
            *(_DWORD *)(v44 + 156) = *v86;
            PopPlRegisterComponent(v44);
            v44 += 440LL;
            v86 += 10;
            --v85;
          }
          while ( v85 );
          v34 = BugCheckParameter2;
        }
        v37 = 0LL;
        v13 = 0;
        *a9 = v34;
        v34 = 0LL;
        goto LABEL_85;
      }
    }
    v13 = -1073741670;
LABEL_85:
    ExFreePoolWithTag(v51, 0x4D584650u);
    v12 = (volatile signed __int32 *)v87;
LABEL_86:
    if ( v34 && !v12 )
      ExFreePoolWithTag((PVOID)v34, 0x4D584650u);
    if ( v37 )
      ExFreePoolWithTag(v37, 0x4D584650u);
    goto LABEL_32;
  }
  if ( AcpiDeviceByUniqueId == -1073741738 )
  {
    v13 = -1073741661;
  }
  else
  {
    v36 = PopFxCreateDeviceCommon((__int64)a2, v32, v33, 0, &BugCheckParameter2);
    v34 = BugCheckParameter2;
    v13 = v36;
    if ( BugCheckParameter2 )
    {
      v30 = v95;
      goto LABEL_37;
    }
  }
  v12 = (volatile signed __int32 *)v87;
LABEL_32:
  ExFreePoolWithTag(P, 0x4D584650u);
  if ( v12 )
    PopFxReleaseAcpiRefDevice((__int64)v12);
  return (unsigned int)v13;
}
