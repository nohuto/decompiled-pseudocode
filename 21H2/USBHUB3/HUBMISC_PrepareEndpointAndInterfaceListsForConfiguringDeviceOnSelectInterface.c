/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C002C690
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface @ 0x1C0021CB0 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C001402C (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     McTemplateK0phhhquuuuu_EtwWriteTransfer @ 0x1C002A970 (McTemplateK0phhhquuuuu_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_Ddddd @ 0x1C002AB78 (WPP_RECORDER_SF_Ddddd.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C003281C (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rax
  KIRQL v7; // al
  __int64 v8; // r13
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r8d
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rsi
  int v14; // ebx
  void **v15; // r12
  int USBDErrorFromNTStatus; // eax
  _DWORD *v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // r8
  __int16 v20; // cx
  __int64 v21; // rax
  size_t v22; // r15
  int v23; // eax
  __int64 v24; // rax
  _DWORD *v25; // r11
  __int64 v26; // rcx
  unsigned __int8 *v27; // r8
  unsigned int v28; // esi
  unsigned __int64 v29; // rbx
  __int64 v30; // r10
  _BYTE *v31; // rax
  unsigned __int16 v32; // r9
  __int64 v33; // rax
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  unsigned __int16 v37; // ax
  char v38; // cl
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  unsigned int v42; // ecx
  int v43; // eax
  unsigned int v44; // r8d
  unsigned int v45; // r9d
  char *v46; // rdx
  unsigned int v47; // r11d
  unsigned int *v48; // rdx
  int v49; // r10d
  unsigned int i; // r8d
  unsigned int v51; // edx
  _QWORD *v52; // r15
  _QWORD *v53; // rax
  char v54; // r12
  _QWORD *v55; // r12
  unsigned int v56; // r9d
  unsigned int v57; // eax
  _QWORD *v58; // r10
  unsigned int v59; // ecx
  __int64 v60; // r11
  __int64 v61; // r8
  _QWORD *v62; // r13
  __int64 v63; // r13
  unsigned int v64; // r14d
  unsigned int v65; // eax
  void *v66; // rcx
  void *v67; // rcx
  void *v68; // rcx
  PVOID PoolWithTag; // rax
  PVOID v70; // rax
  PVOID v71; // rax
  void *v72; // rcx
  void *v73; // rcx
  void *v74; // rcx
  _QWORD *v75; // r9
  __int64 v76; // rdx
  _QWORD *v77; // rcx
  unsigned int j; // r8d
  int v79; // ecx
  _QWORD *k; // rax
  unsigned int m; // r9d
  __int64 v82; // rax
  _QWORD *v83; // r8
  _QWORD *v84; // rdx
  _QWORD *v85; // rax
  int v87; // [rsp+28h] [rbp-E0h]
  __int64 v88; // [rsp+30h] [rbp-D8h]
  char v89; // [rsp+78h] [rbp-90h] BYREF
  char v90; // [rsp+79h] [rbp-8Fh]
  void *v91; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int8 v92; // [rsp+88h] [rbp-80h]
  unsigned int v93; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v94; // [rsp+90h] [rbp-78h]
  _QWORD *v95; // [rsp+98h] [rbp-70h]
  void **v96; // [rsp+A0h] [rbp-68h]
  __int64 v97; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD *v98; // [rsp+B0h] [rbp-58h]
  __int64 v99; // [rsp+B8h] [rbp-50h]
  __int64 v100; // [rsp+C0h] [rbp-48h]
  __int128 v101; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v102; // [rsp+D8h] [rbp-30h]
  __int128 v103; // [rsp+E8h] [rbp-20h]
  __int64 v104; // [rsp+F8h] [rbp-10h]
  _OWORD v105[2]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v106; // [rsp+120h] [rbp+18h]

  v104 = 0LL;
  v97 = 0LL;
  v89 = 0;
  v91 = 0LL;
  v95 = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFF7FFF);
  v2 = *(_QWORD *)(a1 + 456);
  v106 = 0LL;
  memset(v105, 0, sizeof(v105));
  LOWORD(v105[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v105);
  v3 = *((_QWORD *)&v105[0] + 1);
  v4 = (_DWORD *)(*((_QWORD *)&v105[0] + 1) + 32LL);
  if ( *(_WORD *)(*((_QWORD *)&v105[0] + 1) + 2LL) == 1 )
  {
    v5 = *((_QWORD *)&v105[0] + 1) + 32LL;
    *(_DWORD *)(a1 + 148) = 0;
    v6 = 0LL;
  }
  else
  {
    v5 = *((_QWORD *)&v105[0] + 1) + 48LL;
    *(_DWORD *)(a1 + 148) = *v4;
    v6 = 0LL;
    if ( *v4 )
      v6 = *(_QWORD *)(v3 + 40);
  }
  *(_QWORD *)(a1 + 152) = v6;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFEF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v7);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(unsigned __int8 *)(v5 + 3);
  v11 = *(unsigned __int8 *)(v5 + 2);
  v100 = *(_QWORD *)(a1 + 48);
  v8 = v100;
  v12 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                             (int)v8 + 32,
                             (int)v8 + 32,
                             v11,
                             v10,
                             -1,
                             -1,
                             -1,
                             (__int64)&v89,
                             *(_QWORD *)(v9 + 1432));
  v13 = v12;
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x22u,
        (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids);
    *(_DWORD *)(a1 + 1564) = -1073725440;
    goto LABEL_9;
  }
  v17 = *(_DWORD **)(a1 + 2448);
  if ( v17 )
  {
    v18 = 0;
    if ( *v17 )
    {
      while ( *((_BYTE *)v17 + 2 * v18 + 5) != v12[3] || *((_BYTE *)v17 + 2 * v18 + 4) != v12[2] )
      {
        if ( ++v18 >= *v17 )
          goto LABEL_22;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x8000u);
    }
  }
LABEL_22:
  v19 = (unsigned int)ExDefaultNonPagedPoolType;
  v20 = v12[4] + 1;
  *(_DWORD *)(v5 + 4) = 0;
  v15 = (void **)(v5 + 8);
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_WORD *)v5 = 24 * v20;
  *(_DWORD *)(v5 + 16) = v12[4];
  *((_QWORD *)&v102 + 1) = 0x100000001LL;
  LODWORD(v101) = 56;
  v21 = *(unsigned int *)(v5 + 16);
  v96 = (void **)(v5 + 8);
  v22 = 72 * v21 + 40;
  v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64, size_t, __int64 *, void **))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v101,
          v19,
          1681082453LL,
          v22,
          &v97,
          &v91);
  v14 = v23;
  if ( v23 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v88) = v23;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x23u,
        (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids,
        v88);
    }
    goto LABEL_174;
  }
  memset(v91, 0, v22);
  *(_QWORD *)v91 = v97;
  *((_QWORD *)v91 + 4) = v13;
  *((_DWORD *)v91 + 6) = v13[4];
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v89 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)v91 + 7, 1u);
    _InterlockedOr((volatile signed __int32 *)v91 + 7, 2u);
    *(_QWORD *)(a1 + 64) = v91;
  }
  *(_BYTE *)(v5 + 4) = v13[5];
  *(_BYTE *)(v5 + 5) = v13[6];
  *(_BYTE *)(v5 + 6) = v13[7];
  v24 = *v13;
  v25 = v91;
  v26 = *(unsigned __int16 *)(v8 + 34) - v24 - (_QWORD)v13;
  v27 = &v13[v24];
  v28 = 0;
  v29 = (unsigned __int64)&v27[v26 + 32 + v8];
  if ( !*(_DWORD *)(v5 + 16) )
  {
LABEL_80:
    v44 = 0;
    v45 = *((_DWORD *)v91 + 6);
    if ( v45 )
    {
      v46 = (char *)v91 + 72;
      while ( (*(_BYTE *)(*(_QWORD *)v46 + 2LL) & 0xF) != 0 )
      {
        ++v44;
        v46 += 72;
        if ( v44 >= v45 )
          goto LABEL_84;
      }
      goto LABEL_107;
    }
LABEL_84:
    v47 = *(_DWORD *)(a1 + 148);
    v48 = *(unsigned int **)(a1 + 152);
    v49 = 0;
    if ( v47 )
    {
      while ( 1 )
      {
        for ( i = 0; i < v45; ++i )
        {
          if ( *(unsigned __int8 *)(*((_QWORD *)v91 + 9 * i + 9) + 2LL) == *((_WORD *)v48 + 2) )
            break;
        }
        if ( i == v45 )
          break;
        v48 = (unsigned int *)((char *)v48 + *v48);
        if ( ++v49 >= v47 )
          goto LABEL_108;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v88) = *((unsigned __int16 *)v48 + 2);
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x24u,
          (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids,
          v88);
      }
LABEL_107:
      *(_DWORD *)(a1 + 1564) = -1072693239;
LABEL_9:
      v14 = -1073741823;
      v15 = (void **)(v5 + 8);
      goto LABEL_10;
    }
LABEL_108:
    v51 = 0;
    v52 = (_QWORD *)(v8 + 16);
    *(_QWORD *)(a1 + 72) = 0LL;
    v53 = *(_QWORD **)(v8 + 16);
    v54 = 0;
    v90 = 0;
    while ( 1 )
    {
      v62 = v53 - 1;
      if ( v52 == v53 )
        break;
      v99 = v62[4];
      v92 = *(_BYTE *)(v99 + 2);
      if ( v92 == *(_BYTE *)(v5 + 2) )
      {
        v95 = v53 - 1;
        v54 = 1;
        v90 = 1;
      }
      else
      {
        v14 = 0;
        v55 = v91;
        v56 = 0;
        v93 = *((_DWORD *)v62 + 6);
        if ( v93 )
        {
          v57 = *((_DWORD *)v91 + 6);
          v58 = v62;
          v59 = v93;
          v94 = v57;
          v98 = v62;
          while ( !v57 )
          {
LABEL_120:
            v58 += 9;
            ++v56;
            v51 = 0;
            v98 = v58;
            if ( v56 >= v59 )
              goto LABEL_127;
          }
          v60 = v58[9];
          v89 = *(_BYTE *)(v60 + 2);
          while ( 1 )
          {
            v61 = *((_QWORD *)v91 + 9 * v51 + 9);
            if ( v89 == *(_BYTE *)(v61 + 2) && *(_WORD *)(v60 + 4) && *(_WORD *)(v61 + 4) )
              break;
            v57 = v94;
            if ( ++v51 >= v94 )
            {
              v59 = v93;
              goto LABEL_120;
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Ddddd(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
              *(unsigned __int8 *)(*((_QWORD *)v91 + 4) + 2LL),
              *(unsigned __int8 *)(v99 + 3),
              v92,
              v87);
          if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x10) != 0 )
          {
            LOWORD(v87) = *(_WORD *)(a1 + 1996);
            McTemplateK0phhhquuuuu_EtwWriteTransfer(v55[4], v62[4], (const GUID *)(a1 + 1516), *(_QWORD *)(a1 + 24));
          }
          v14 = -1073741811;
          v51 = 0;
        }
LABEL_127:
        if ( v14 < 0 )
          goto LABEL_173;
        v54 = v90;
      }
      v53 = (_QWORD *)v62[1];
    }
    v14 = 0;
    v63 = v100;
    v64 = *(_DWORD *)(v100 + 8) + *((_DWORD *)v91 + 6);
    v65 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v65 )
    {
      if ( v64 <= v65 )
      {
LABEL_154:
        v75 = v95;
        if ( v54 )
          v64 -= *((_DWORD *)v95 + 6);
        *(_DWORD *)(a1 + 144) = 0;
        *(_DWORD *)(a1 + 128) = 0;
        if ( v54 )
        {
          v76 = v75[1];
          if ( *(_QWORD **)(v76 + 8) != v75 + 1 )
            goto LABEL_171;
          v77 = (_QWORD *)v75[2];
          if ( (_QWORD *)*v77 != v75 + 1 )
            goto LABEL_171;
          *v77 = v76;
          *(_QWORD *)(v76 + 8) = v77;
          *(_QWORD *)(a1 + 72) = v75;
          for ( j = 0; j < *((_DWORD *)v75 + 6); ++j )
          {
            v79 = v75[9 * j + 6];
            if ( v79 == 4 )
            {
              LODWORD(v75[9 * j + 6]) = 5;
              *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = v75[9 * j + 5];
            }
            else if ( v79 == 6 )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = v75[9 * j + 5];
            }
          }
        }
        for ( k = (_QWORD *)*v52; ; k = (_QWORD *)v83[1] )
        {
          v83 = k - 1;
          if ( v52 == k )
            break;
          for ( m = 0; m < *((_DWORD *)v83 + 6); ++*(_DWORD *)(a1 + 144) )
          {
            v82 = m++;
            *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(a1 + 144)) = v83[9 * v82 + 5];
          }
        }
        v84 = (_QWORD *)v52[1];
        v85 = (char *)v91 + 8;
        if ( (_QWORD *)*v84 != v52 )
LABEL_171:
          __fastfail(3u);
        *((_QWORD *)v91 + 2) = v84;
        *v85 = v52;
        *v84 = v85;
        v52[1] = v85;
        *(_QWORD *)(a1 + 80) = v91;
        *(_DWORD *)(v63 + 8) = v64;
LABEL_173:
        v15 = v96;
LABEL_174:
        if ( v14 < 0 )
          goto LABEL_10;
        *v15 = v91;
        return ((v14 >> 31) & 0xFFFFFFF4) + 4077;
      }
      v66 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v66 )
      {
        ExFreePoolWithTag(v66, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v67 = *(void **)(a1 + 136);
      if ( v67 )
      {
        ExFreePoolWithTag(v67, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v68 = *(void **)(a1 + 120);
      if ( v68 )
      {
        ExFreePoolWithTag(v68, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
    }
    if ( !*(_DWORD *)(a1 + 96) && v64 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8LL * v64, 0x64334855u);
      *(_QWORD *)(a1 + 104) = PoolWithTag;
      if ( PoolWithTag )
      {
        v70 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8LL * v64, 0x64334855u);
        *(_QWORD *)(a1 + 136) = v70;
        if ( v70 )
        {
          v71 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8LL * v64, 0x64334855u);
          *(_QWORD *)(a1 + 120) = v71;
          if ( v71 )
          {
            *(_DWORD *)(a1 + 96) = v64;
            v14 = 0;
            goto LABEL_154;
          }
        }
      }
      v72 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v72 )
      {
        ExFreePoolWithTag(v72, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v73 = *(void **)(a1 + 136);
      if ( v73 )
      {
        ExFreePoolWithTag(v73, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v74 = *(void **)(a1 + 120);
      if ( v74 )
      {
        ExFreePoolWithTag(v74, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      v14 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v88) = -1073741670;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x1Eu,
          (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids,
          v88);
      }
    }
    if ( v14 < 0 )
      goto LABEL_173;
    goto LABEL_154;
  }
LABEL_28:
  if ( (unsigned __int64)v27 >= v29 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_104;
    v32 = 22;
    goto LABEL_103;
  }
  v30 = 9LL * v28;
  v25[2 * v30 + 16] = *(_DWORD *)(v5 + 24LL * v28 + 44);
  v25[2 * v30 + 12] = 1;
  v31 = v27 + 1;
  if ( (unsigned __int64)(v27 + 1) >= v29 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = 23;
      goto LABEL_103;
    }
    goto LABEL_104;
  }
  do
  {
    if ( *v31 == 5 )
    {
      if ( (unsigned __int64)(v27 + 7) > v29 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_104;
        v32 = 28;
        goto LABEL_103;
      }
      v34 = *(_DWORD *)(v5 + 24LL * v28 + 44);
      v35 = 1;
      if ( (v34 & 1) != 0 )
      {
        *((_WORD *)v27 + 2) = *(_WORD *)(v5 + 24LL * v28 + 24);
        v35 = 1;
        v34 = *(_DWORD *)(v5 + 24LL * v28 + 44);
      }
      v36 = v34 & 0xF0;
      if ( v36 == 16 )
        goto LABEL_43;
      if ( v36 != 32 )
      {
        v35 = 3;
        if ( v36 != 48 )
          v35 = 0;
LABEL_43:
        v25[18 * v28 + 26] = v35;
        goto LABEL_44;
      }
      v25[18 * v28 + 26] = 2;
LABEL_44:
      *(_QWORD *)&v25[18 * v28 + 18] = v27;
      v25[18 * v28 + 20] = v29 - (_DWORD)v27;
      v37 = *((_WORD *)v27 + 2);
      if ( *(_WORD *)(a1 + 1990) < 0x250u )
        v37 = (v37 & 0x7FF) * (((v37 >> 11) & 3) + 1);
      *(_WORD *)(v5 + 24LL * v28 + 24) = v37;
      v38 = 6;
      if ( v27[6] < 6u )
        v38 = v27[6];
      *(_BYTE *)(v5 + 24LL * v28 + 27) = v38;
      *(_BYTE *)(v5 + 24LL * v28 + 26) = v27[2];
      if ( (v27[3] & 3) != 0 )
      {
        switch ( v27[3] & 3 )
        {
          case 1:
            *(_DWORD *)(v5 + 24LL * v28 + 28) = 1;
            break;
          case 2:
            *(_DWORD *)(v5 + 24LL * v28 + 28) = 2;
            break;
          case 3:
            *(_DWORD *)(v5 + 24LL * v28 + 28) = 3;
            break;
        }
      }
      else
      {
        *(_DWORD *)(v5 + 24LL * v28 + 28) = 0;
      }
      if ( !*(_WORD *)(v5 + 24LL * v28 + 24) )
        _InterlockedOr(&v25[18 * v28 + 13], 1u);
      v39 = *v27;
      if ( !(_BYTE)v39 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_104;
        v32 = 29;
        goto LABEL_103;
      }
      v27 += v39;
      if ( (unsigned __int64)v27 < v29 && (unsigned __int64)(v27 + 1) < v29 && v27[1] == 48 )
      {
        if ( *v27 )
        {
          if ( (unsigned __int64)(v27 + 6) <= v29 )
          {
            v40 = *(_QWORD *)&v25[18 * v28 + 18];
            *(_QWORD *)&v25[18 * v28 + 22] = v27;
            if ( (*(_BYTE *)(v40 + 3) & 3) == 1 )
            {
              if ( (v25[18 * v28 + 13] & 1) == 0 )
                *(_WORD *)(v5 + 24LL * v28 + 24) = *((_WORD *)v27 + 2);
              if ( (v27[3] & 0x80u) != 0 )
              {
                v27 += *v27;
                if ( (unsigned __int64)v27 < v29 && (unsigned __int64)(v27 + 1) < v29 && v27[1] == 49 )
                {
                  if ( *v27 )
                  {
                    if ( (unsigned __int64)(v27 + 8) <= v29 )
                    {
                      v41 = v25[18 * v28 + 13];
                      *(_QWORD *)&v25[18 * v28 + 24] = v27;
                      if ( (v41 & 1) == 0 )
                      {
                        v42 = *((_DWORD *)v27 + 1);
                        if ( v42 > 0xFFFF )
                        {
                          v43 = *(_DWORD *)(v5 + 24LL * v28 + 44);
                          if ( (v43 & 0x100) != 0 )
                          {
                            *(_DWORD *)(v5 + 24LL * v28 + 40) = v42;
                            *(_DWORD *)(v5 + 24LL * v28 + 44) = v43 | 0x10000;
                          }
                        }
                        else
                        {
                          *(_WORD *)(v5 + 24LL * v28 + 24) = v42;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( ++v28 >= *(_DWORD *)(v5 + 16) )
        goto LABEL_80;
      goto LABEL_28;
    }
    v33 = *v27;
    if ( !(_BYTE)v33 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_104;
      v32 = 24;
      goto LABEL_103;
    }
    v27 += v33;
    if ( (unsigned __int64)v27 >= v29 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_104;
      v32 = 25;
LABEL_103:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        v32,
        (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids);
      goto LABEL_104;
    }
    v31 = v27 + 1;
  }
  while ( (unsigned __int64)(v27 + 1) < v29 );
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v32 = 26;
    goto LABEL_103;
  }
LABEL_104:
  v14 = -1073741823;
  *(_DWORD *)(a1 + 1564) = -1073725440;
LABEL_10:
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  *v15 = (void *)-1LL;
  if ( v91 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *(_QWORD *)v91);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 1560) = v14;
  if ( !*(_DWORD *)(a1 + 1564) )
  {
    if ( v14 == -1073741667 )
      USBDErrorFromNTStatus = -1073713152;
    else
      USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v14);
    *(_DWORD *)(a1 + 1564) = USBDErrorFromNTStatus;
  }
  return ((v14 >> 31) & 0xFFFFFFF4) + 4077;
}
