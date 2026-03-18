/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C002CD4C
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface @ 0x1C0022100 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C00144D4 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     McTemplateK0phhhquuuuu_EtwWriteTransfer @ 0x1C002B050 (McTemplateK0phhhquuuuu_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_Ddddd @ 0x1C002B258 (WPP_RECORDER_SF_Ddddd.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C0033084 (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0043B00 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rax
  KIRQL v7; // al
  __int64 v8; // r12
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r8d
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rsi
  int v14; // ebx
  _QWORD *v15; // r14
  _DWORD *v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // r8
  __int16 v19; // cx
  size_t v20; // r15
  unsigned __int16 v21; // r9
  unsigned int v23; // ebx
  unsigned __int8 *v24; // r8
  char *v25; // rsi
  unsigned __int64 v26; // r11
  __int64 v27; // r10
  _BYTE *v28; // rax
  unsigned __int16 v29; // r9
  __int64 v30; // rax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  unsigned __int16 v34; // ax
  char v35; // cl
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  unsigned int v41; // r9d
  unsigned int v42; // r8d
  char *v43; // rdx
  unsigned int v44; // r11d
  int v45; // r10d
  unsigned int *v46; // rdx
  int v47; // r8d
  _QWORD *v48; // r15
  __int64 v49; // rax
  _QWORD *v50; // rbx
  __int64 v51; // r9
  int v52; // r11d
  unsigned int v53; // edx
  unsigned int v54; // eax
  _QWORD *v55; // r13
  int v56; // ecx
  __int64 v57; // r12
  __int64 v58; // r8
  _QWORD *v59; // rax
  unsigned int v60; // r14d
  int v61; // r12d
  unsigned int v62; // eax
  void *v63; // rcx
  void *v64; // rcx
  void *v65; // rcx
  __int64 Pool2; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  void *v71; // rcx
  void *v72; // rcx
  void *v73; // rcx
  char v74; // al
  _QWORD *v75; // r9
  __int64 v76; // rdx
  _QWORD *v77; // rcx
  unsigned int v78; // r8d
  int v79; // ecx
  __int64 v80; // r8
  unsigned int i; // r9d
  __int64 v82; // rax
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  _QWORD *v85; // rsi
  __int64 v86; // [rsp+28h] [rbp-E0h]
  __int64 v87; // [rsp+30h] [rbp-D8h]
  __int64 v88; // [rsp+38h] [rbp-D0h]
  __int64 v89; // [rsp+40h] [rbp-C8h]
  __int64 v90; // [rsp+48h] [rbp-C0h]
  int v91; // [rsp+50h] [rbp-B8h]
  __int64 v92; // [rsp+78h] [rbp-90h] BYREF
  void *v93; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v94; // [rsp+88h] [rbp-80h]
  unsigned int v95; // [rsp+90h] [rbp-78h]
  unsigned int v96; // [rsp+94h] [rbp-74h]
  _QWORD *v97; // [rsp+98h] [rbp-70h]
  __int64 v98; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v99; // [rsp+A8h] [rbp-60h]
  __int128 v100; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v101; // [rsp+C0h] [rbp-48h]
  __int128 v102; // [rsp+D0h] [rbp-38h]
  __int64 v103; // [rsp+E0h] [rbp-28h]
  _OWORD v104[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v105; // [rsp+108h] [rbp+0h]

  LODWORD(v103) = 0;
  v98 = 0LL;
  LOBYTE(v92) = 0;
  v93 = 0LL;
  v97 = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFF7FFF);
  v2 = *(_QWORD *)(a1 + 456);
  v105 = 0LL;
  memset(v104, 0, sizeof(v104));
  LOWORD(v104[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v104);
  v3 = *((_QWORD *)&v104[0] + 1);
  v4 = (_DWORD *)(*((_QWORD *)&v104[0] + 1) + 32LL);
  if ( *(_WORD *)(*((_QWORD *)&v104[0] + 1) + 2LL) == 1 )
  {
    v5 = *((_QWORD *)&v104[0] + 1) + 32LL;
    *(_DWORD *)(a1 + 148) = 0;
    v6 = 0LL;
  }
  else
  {
    v5 = *((_QWORD *)&v104[0] + 1) + 48LL;
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
  v99 = *(_QWORD *)(a1 + 48);
  v8 = v99;
  v12 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                             (int)v8 + 32,
                             (int)v8 + 32,
                             v11,
                             v10,
                             -1,
                             -1,
                             -1,
                             (__int64)&v92,
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
        (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids);
    *(_DWORD *)(a1 + 1564) = -1073725440;
    goto LABEL_9;
  }
  v16 = *(_DWORD **)(a1 + 2448);
  if ( v16 )
  {
    v17 = 0;
    if ( *v16 )
    {
      while ( *((_BYTE *)v16 + 2 * v17 + 5) != v12[3] || *((_BYTE *)v16 + 2 * v17 + 4) != v12[2] )
      {
        if ( ++v17 >= *v16 )
          goto LABEL_17;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x8000u);
    }
  }
LABEL_17:
  v18 = (unsigned int)ExDefaultNonPagedPoolType;
  v19 = v12[4] + 1;
  *(_DWORD *)(v5 + 4) = 0;
  *(_WORD *)v5 = 24 * v19;
  *(_QWORD *)(v5 + 8) = 0LL;
  v94 = (_QWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 16) = v12[4];
  *(_QWORD *)&v101 = 0LL;
  v103 = 0LL;
  v100 = 0LL;
  LODWORD(v100) = 56;
  v102 = 0LL;
  *((_QWORD *)&v101 + 1) = 0x100000001LL;
  v20 = 72LL * *(unsigned int *)(v5 + 16) + 40;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64, size_t, __int64 *, void **))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v100,
          v18,
          1681082453LL,
          v20,
          &v98,
          &v93);
  if ( v14 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 35;
LABEL_20:
      LODWORD(v87) = v14;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        v21,
        (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids,
        v87);
    }
    goto LABEL_21;
  }
  memset(v93, 0, v20);
  *(_QWORD *)v93 = v98;
  *((_QWORD *)v93 + 4) = v13;
  *((_DWORD *)v93 + 6) = v13[4];
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_BYTE)v92 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)v93 + 7, 1u);
    _InterlockedOr((volatile signed __int32 *)v93 + 7, 2u);
    *(_QWORD *)(a1 + 64) = v93;
  }
  *(_BYTE *)(v5 + 4) = v13[5];
  v23 = 0;
  *(_BYTE *)(v5 + 5) = v13[6];
  *(_BYTE *)(v5 + 6) = v13[7];
  v24 = &v13[*v13];
  v25 = (char *)v93;
  v26 = *(unsigned __int16 *)(v8 + 34) + v8 + 32;
  if ( *(_DWORD *)(v5 + 16) )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v24 >= v26 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_108;
        v29 = 22;
        goto LABEL_107;
      }
      v27 = 9LL * v23;
      *(_DWORD *)&v25[8 * v27 + 64] = *(_DWORD *)(v5 + 24LL * v23 + 44);
      *(_DWORD *)&v25[8 * v27 + 48] = 1;
      v28 = v24 + 1;
      if ( (unsigned __int64)(v24 + 1) >= v26 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v29 = 23;
          goto LABEL_107;
        }
        goto LABEL_108;
      }
      while ( *v28 != 5 )
      {
        v30 = *v24;
        if ( !(_BYTE)v30 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_108;
          v29 = 24;
          goto LABEL_107;
        }
        v24 += v30;
        if ( (unsigned __int64)v24 >= v26 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_108;
          v29 = 25;
LABEL_107:
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            2u,
            5u,
            v29,
            (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids);
          goto LABEL_108;
        }
        v28 = v24 + 1;
        if ( (unsigned __int64)(v24 + 1) >= v26 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v29 = 26;
            goto LABEL_107;
          }
LABEL_108:
          v14 = -1073741823;
          *(_DWORD *)(a1 + 1564) = -1073725440;
LABEL_21:
          v15 = v94;
          goto LABEL_22;
        }
      }
      if ( (unsigned __int64)(v24 + 7) > v26 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_108;
        v29 = 28;
        goto LABEL_107;
      }
      v31 = *(_DWORD *)(v5 + 24LL * v23 + 44);
      v32 = 1;
      if ( (v31 & 1) != 0 )
      {
        *((_WORD *)v24 + 2) = *(_WORD *)(v5 + 24LL * v23 + 24);
        v32 = 1;
        v31 = *(_DWORD *)(v5 + 24LL * v23 + 44);
      }
      v33 = v31 & 0xF0;
      if ( v33 != 16 )
      {
        if ( v33 == 32 )
        {
          *(_DWORD *)&v25[72 * v23 + 104] = 2;
          goto LABEL_46;
        }
        v32 = 3;
        if ( v33 != 48 )
          v32 = 0;
      }
      *(_DWORD *)&v25[72 * v23 + 104] = v32;
LABEL_46:
      *(_QWORD *)&v25[72 * v23 + 72] = v24;
      *(_DWORD *)&v25[72 * v23 + 80] = v26 - (_DWORD)v24;
      v34 = *((_WORD *)v24 + 2);
      if ( *(_WORD *)(a1 + 1990) < 0x250u )
        v34 = (v34 & 0x7FF) * (((v34 >> 11) & 3) + 1);
      *(_WORD *)(v5 + 24LL * v23 + 24) = v34;
      v35 = 6;
      if ( v24[6] < 6u )
        v35 = v24[6];
      *(_BYTE *)(v5 + 24LL * v23 + 27) = v35;
      *(_BYTE *)(v5 + 24LL * v23 + 26) = v24[2];
      if ( (v24[3] & 3) != 0 )
      {
        switch ( v24[3] & 3 )
        {
          case 1:
            *(_DWORD *)(v5 + 24LL * v23 + 28) = 1;
            break;
          case 2:
            *(_DWORD *)(v5 + 24LL * v23 + 28) = 2;
            break;
          case 3:
            *(_DWORD *)(v5 + 24LL * v23 + 28) = 3;
            break;
        }
      }
      else
      {
        *(_DWORD *)(v5 + 24LL * v23 + 28) = 0;
      }
      if ( !*(_WORD *)(v5 + 24LL * v23 + 24) )
        _InterlockedOr((volatile signed __int32 *)&v25[72 * v23 + 52], 1u);
      v36 = *v24;
      if ( !(_BYTE)v36 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_108;
        v29 = 29;
        goto LABEL_107;
      }
      v24 += v36;
      if ( (unsigned __int64)v24 < v26 && (unsigned __int64)(v24 + 1) < v26 && v24[1] == 48 )
      {
        if ( *v24 )
        {
          if ( (unsigned __int64)(v24 + 6) <= v26 )
          {
            v37 = *(_QWORD *)&v25[72 * v23 + 72];
            *(_QWORD *)&v25[72 * v23 + 88] = v24;
            if ( (*(_BYTE *)(v37 + 3) & 3) == 1 )
            {
              if ( (*(_DWORD *)&v25[72 * v23 + 52] & 1) == 0 )
                *(_WORD *)(v5 + 24LL * v23 + 24) = *((_WORD *)v24 + 2);
              if ( (v24[3] & 0x80u) != 0 )
              {
                v24 += *v24;
                if ( (unsigned __int64)v24 < v26 && (unsigned __int64)(v24 + 1) < v26 && v24[1] == 49 )
                {
                  if ( *v24 )
                  {
                    if ( (unsigned __int64)(v24 + 8) <= v26 )
                    {
                      v38 = *(_DWORD *)&v25[72 * v23 + 52];
                      *(_QWORD *)&v25[72 * v23 + 96] = v24;
                      if ( (v38 & 1) == 0 )
                      {
                        v39 = *((_DWORD *)v24 + 1);
                        if ( v39 > 0xFFFF )
                        {
                          v40 = *(_DWORD *)(v5 + 24LL * v23 + 44);
                          if ( (v40 & 0x100) != 0 )
                          {
                            *(_DWORD *)(v5 + 24LL * v23 + 40) = v39;
                            *(_DWORD *)(v5 + 24LL * v23 + 44) = v40 | 0x10000;
                          }
                        }
                        else
                        {
                          *(_WORD *)(v5 + 24LL * v23 + 24) = v39;
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
      if ( ++v23 >= *(_DWORD *)(v5 + 16) )
      {
        v25 = (char *)v93;
        break;
      }
    }
  }
  v41 = *((_DWORD *)v25 + 6);
  v42 = 0;
  if ( v41 )
  {
    v43 = v25 + 72;
    do
    {
      if ( (*(_BYTE *)(*(_QWORD *)v43 + 2LL) & 0xF) == 0 )
        goto LABEL_111;
      ++v42;
      v43 += 72;
    }
    while ( v42 < v41 );
  }
  v44 = *(_DWORD *)(a1 + 148);
  v45 = 0;
  v46 = *(unsigned int **)(a1 + 152);
  if ( !v44 )
  {
LABEL_112:
    *(_QWORD *)(a1 + 72) = 0LL;
    LOBYTE(v92) = 0;
    v48 = (_QWORD *)(v8 + 16);
    v49 = *(_QWORD *)(v8 + 16);
    v50 = (_QWORD *)(v49 - 8);
    if ( v8 + 16 == v49 )
      goto LABEL_126;
    do
    {
      v51 = v50[4];
      v52 = *(unsigned __int8 *)(v51 + 2);
      if ( (_BYTE)v52 == *(_BYTE *)(v5 + 2) )
      {
        v97 = v50;
        LOBYTE(v92) = 1;
      }
      else
      {
        v96 = *((_DWORD *)v50 + 6);
        v53 = 0;
        if ( v96 )
        {
          v54 = *((_DWORD *)v25 + 6);
          v55 = v50;
          v95 = v54;
          while ( 1 )
          {
            v56 = 0;
            if ( v54 )
              break;
LABEL_123:
            ++v53;
            v55 += 9;
            if ( v53 >= v96 )
              goto LABEL_124;
          }
          v57 = v55[9];
          while ( 1 )
          {
            v58 = *(_QWORD *)&v25[72 * v56 + 72];
            if ( *(_BYTE *)(v57 + 2) == *(_BYTE *)(v58 + 2) && *(_WORD *)(v57 + 4) && *(_WORD *)(v58 + 4) )
              break;
            v54 = v95;
            if ( ++v56 >= v95 )
              goto LABEL_123;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v69 = *((_QWORD *)v25 + 4);
            v91 = *(unsigned __int8 *)(v69 + 3);
            LODWORD(v90) = *(unsigned __int8 *)(v69 + 2);
            WORD1(v88) = HIWORD(v52);
            WORD1(v87) = 0;
            WPP_RECORDER_SF_Ddddd(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
              *(unsigned __int8 *)(v69 + 3),
              *(unsigned __int8 *)(v69 + 2),
              v51,
              v86);
          }
          if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x10) != 0 )
          {
            v70 = v50[4];
            LOBYTE(v91) = *(_BYTE *)(v70 + 2);
            LOBYTE(v90) = *(_BYTE *)(v55[9] + 2LL);
            LODWORD(v89) = *(_DWORD *)(a1 + 172);
            LOWORD(v88) = *(_WORD *)(a1 + 2000);
            LOWORD(v87) = *(_WORD *)(a1 + 1998);
            LOWORD(v86) = *(_WORD *)(a1 + 1996);
            McTemplateK0phhhquuuuu_EtwWriteTransfer(
              *((_QWORD *)v25 + 4),
              v70,
              (const GUID *)(a1 + 1516),
              *(_QWORD *)(a1 + 24),
              v86,
              v87,
              v88,
              v89,
              v90,
              v91,
              *(_BYTE *)(v70 + 3),
              *(_BYTE *)(*((_QWORD *)v25 + 4) + 2LL),
              *(_BYTE *)(*((_QWORD *)v25 + 4) + 3LL));
          }
          v14 = -1073741811;
          goto LABEL_21;
        }
      }
LABEL_124:
      v59 = (_QWORD *)v50[1];
      v50 = v59 - 1;
    }
    while ( v48 != v59 );
    v8 = v99;
LABEL_126:
    v60 = *(_DWORD *)(v8 + 8) + *((_DWORD *)v25 + 6);
    v61 = 0;
    v62 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v62 )
    {
      if ( v60 > v62 )
      {
        v63 = *(void **)(a1 + 104);
        *(_DWORD *)(a1 + 96) = 0;
        if ( v63 )
        {
          ExFreePoolWithTag(v63, 0x64334855u);
          v25 = (char *)v93;
          *(_QWORD *)(a1 + 104) = 0LL;
        }
        v64 = *(void **)(a1 + 136);
        if ( v64 )
        {
          ExFreePoolWithTag(v64, 0x64334855u);
          v25 = (char *)v93;
          *(_QWORD *)(a1 + 136) = 0LL;
        }
        v65 = *(void **)(a1 + 120);
        if ( v65 )
        {
          ExFreePoolWithTag(v65, 0x64334855u);
          *(_QWORD *)(a1 + 120) = 0LL;
          v25 = (char *)v93;
        }
        goto LABEL_134;
      }
      v14 = 0;
LABEL_156:
      v74 = v92;
      v75 = v97;
      if ( (_BYTE)v92 )
        v60 -= *((_DWORD *)v97 + 6);
      *(_DWORD *)(a1 + 144) = 0;
      *(_DWORD *)(a1 + 128) = 0;
      if ( v74 )
      {
        v76 = v75[1];
        if ( *(_QWORD **)(v76 + 8) == v75 + 1 )
        {
          v77 = (_QWORD *)v75[2];
          if ( (_QWORD *)*v77 == v75 + 1 )
          {
            *v77 = v76;
            v78 = 0;
            *(_QWORD *)(v76 + 8) = v77;
            for ( *(_QWORD *)(a1 + 72) = v75; v78 < *((_DWORD *)v75 + 6); ++v78 )
            {
              v79 = v75[9 * v78 + 6];
              if ( v79 == 4 )
              {
                LODWORD(v75[9 * v78 + 6]) = 5;
                *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = v75[9 * v78 + 5];
              }
              else if ( v79 == 6 )
              {
                *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = v75[9 * v78 + 5];
              }
            }
            v25 = (char *)v93;
            goto LABEL_168;
          }
        }
LABEL_174:
        __fastfail(3u);
      }
LABEL_168:
      v80 = *v48 - 8LL;
      if ( v48 != (_QWORD *)*v48 )
      {
        do
        {
          for ( i = 0; i < *(_DWORD *)(v80 + 24); ++*(_DWORD *)(a1 + 144) )
          {
            v82 = i++;
            *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(a1 + 144)) = *(_QWORD *)(v80 + 72 * v82 + 40);
          }
          v83 = *(_QWORD **)(v80 + 8);
          v80 = (__int64)(v83 - 1);
        }
        while ( v48 != v83 );
        v25 = (char *)v93;
      }
      v84 = (_QWORD *)v48[1];
      v85 = v25 + 8;
      if ( (_QWORD *)*v84 != v48 )
        goto LABEL_174;
      v85[1] = v84;
      *v85 = v48;
      *v84 = v85;
      v48[1] = v85;
      *(_QWORD *)(a1 + 80) = v93;
      *(_DWORD *)(v99 + 8) = v60;
      v25 = (char *)v93;
    }
    else
    {
LABEL_134:
      if ( !*(_DWORD *)(a1 + 96) && v60 )
      {
        Pool2 = ExAllocatePool2(64LL, 8LL * v60, 1681082453LL);
        *(_QWORD *)(a1 + 104) = Pool2;
        if ( Pool2 )
        {
          v67 = ExAllocatePool2(64LL, 8LL * v60, 1681082453LL);
          *(_QWORD *)(a1 + 136) = v67;
          if ( v67 )
          {
            v68 = ExAllocatePool2(64LL, 8LL * v60, 1681082453LL);
            *(_QWORD *)(a1 + 120) = v68;
            if ( v68 )
            {
              *(_DWORD *)(a1 + 96) = v60;
              v25 = (char *)v93;
              v14 = 0;
              goto LABEL_156;
            }
          }
        }
        v71 = *(void **)(a1 + 104);
        *(_DWORD *)(a1 + 96) = 0;
        if ( v71 )
        {
          ExFreePoolWithTag(v71, 0x64334855u);
          *(_QWORD *)(a1 + 104) = 0LL;
        }
        v72 = *(void **)(a1 + 136);
        if ( v72 )
        {
          ExFreePoolWithTag(v72, 0x64334855u);
          *(_QWORD *)(a1 + 136) = 0LL;
        }
        v73 = *(void **)(a1 + 120);
        if ( v73 )
        {
          ExFreePoolWithTag(v73, 0x64334855u);
          *(_QWORD *)(a1 + 120) = 0LL;
        }
        v14 = -1073741670;
        v61 = -1073741670;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = 30;
          goto LABEL_20;
        }
        v25 = (char *)v93;
      }
      v14 = v61;
      if ( v61 >= 0 )
        goto LABEL_156;
    }
    if ( v14 >= 0 )
    {
      *v94 = v25;
      return ((v14 >> 31) & 0xFFFFFFF4) + 4077;
    }
    goto LABEL_21;
  }
  while ( 1 )
  {
    v47 = 0;
    if ( v41 )
    {
      while ( *(unsigned __int8 *)(*(_QWORD *)&v25[72 * v47 + 72] + 2LL) != *((_WORD *)v46 + 2) )
      {
        if ( ++v47 >= v41 )
          goto LABEL_98;
      }
      goto LABEL_99;
    }
LABEL_98:
    if ( v47 == v41 )
      break;
LABEL_99:
    v46 = (unsigned int *)((char *)v46 + *v46);
    if ( ++v45 >= v44 )
      goto LABEL_112;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v87) = *((unsigned __int16 *)v46 + 2);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x24u,
      (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids,
      v87);
  }
LABEL_111:
  *(_DWORD *)(a1 + 1564) = -1072693239;
LABEL_9:
  v14 = -1073741823;
  v15 = (_QWORD *)(v5 + 8);
LABEL_22:
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  *v15 = -1LL;
  if ( v93 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *(_QWORD *)v93);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 1560) = v14;
  if ( !*(_DWORD *)(a1 + 1564) )
    *(_DWORD *)(a1 + 1564) = HUBPDO_GetUSBDErrorFromNTStatus(v14);
  return ((v14 >> 31) & 0xFFFFFFF4) + 4077;
}
