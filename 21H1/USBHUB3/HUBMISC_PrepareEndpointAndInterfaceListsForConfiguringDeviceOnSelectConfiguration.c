/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C002B9E0
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration @ 0x1C001CF30 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C001402C (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C002ACAC (WPP_RECORDER_SF_Dq.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C003281C (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0042A80 (memmove.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  unsigned __int16 *v4; // r13
  KIRQL v5; // al
  __int64 *v6; // r15
  size_t v7; // r14
  int v8; // ebx
  unsigned __int8 *v9; // r8
  _QWORD *v10; // r12
  unsigned __int16 *v11; // rbx
  unsigned __int8 *v12; // rcx
  _QWORD *v13; // r10
  unsigned __int64 v14; // rax
  int v15; // r15d
  __int64 v16; // rax
  unsigned __int16 *v17; // r12
  int v18; // r8d
  int v19; // r9d
  unsigned __int8 *v20; // rax
  unsigned __int8 *v21; // r14
  _DWORD *v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // r8
  int v25; // r15d
  char *v26; // rbx
  size_t v27; // r15
  _QWORD *v28; // r15
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  unsigned int *v31; // r15
  __int64 v32; // rcx
  _DWORD *v33; // rbx
  __int64 v34; // r11
  unsigned int v35; // r14d
  unsigned __int64 v36; // r11
  __int64 v37; // r10
  _BYTE *v38; // rax
  unsigned __int16 v39; // r9
  __int64 v40; // rax
  int v41; // ecx
  int v42; // ecx
  int v43; // eax
  unsigned __int16 v44; // ax
  char v45; // cl
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  unsigned int v49; // ecx
  int v50; // eax
  int USBDErrorFromNTStatus; // eax
  unsigned __int8 *i; // rax
  unsigned __int8 *v53; // rdx
  unsigned int v54; // ebx
  unsigned int v55; // r10d
  _QWORD *v56; // r9
  unsigned __int16 v57; // r10
  unsigned __int8 *k; // rax
  unsigned __int8 *v59; // rbx
  unsigned int v60; // r12d
  unsigned int v61; // r14d
  char *v62; // r11
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int16 *v65; // r9
  __int64 v66; // r14
  unsigned int v67; // eax
  void *v68; // rcx
  void *v69; // rcx
  void *v70; // rcx
  PVOID PoolWithTag; // rax
  PVOID v72; // rax
  PVOID v73; // rax
  void *v74; // rcx
  void *v75; // rcx
  void *v76; // rcx
  __int64 v77; // rcx
  _QWORD *v78; // rcx
  unsigned int j; // r9d
  int v80; // ecx
  __int64 v81; // rcx
  _QWORD *v82; // r14
  _QWORD **v83; // rdi
  _QWORD *v84; // rax
  _QWORD *v85; // rcx
  int v87; // [rsp+28h] [rbp-E0h]
  __int64 v88; // [rsp+30h] [rbp-D8h]
  __int64 v89; // [rsp+48h] [rbp-C0h]
  char v90; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v91; // [rsp+5Ch] [rbp-ACh] BYREF
  void *v92; // [rsp+60h] [rbp-A8h] BYREF
  int v93; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v94; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v95; // [rsp+70h] [rbp-98h]
  __int64 v96; // [rsp+78h] [rbp-90h] BYREF
  __int64 v97; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v98; // [rsp+90h] [rbp-78h]
  _QWORD *v99; // [rsp+98h] [rbp-70h]
  __int64 v100; // [rsp+A0h] [rbp-68h]
  __int128 v101; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v102; // [rsp+B8h] [rbp-50h]
  __int64 v103; // [rsp+C0h] [rbp-48h]
  __int128 v104; // [rsp+C8h] [rbp-40h]
  __int64 v105; // [rsp+D8h] [rbp-30h]
  unsigned int *v106; // [rsp+E0h] [rbp-28h]
  unsigned __int16 *v107; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v108; // [rsp+F0h] [rbp-18h]
  _OWORD v109[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v110; // [rsp+118h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 456);
  v2 = 0LL;
  v110 = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  memset(v109, 0, sizeof(v109));
  v96 = 0LL;
  LOWORD(v109[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    v109);
  v4 = (unsigned __int16 *)*((_QWORD *)&v109[0] + 1);
  v100 = *((_QWORD *)&v109[0] + 1);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFEF);
  v6 = (__int64 *)(a1 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFF7FFF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v5);
  v105 = 0LL;
  v102 = 0LL;
  v101 = 0LL;
  v103 = 0x100000001LL;
  v104 = 0LL;
  LODWORD(v101) = 56;
  v7 = *(unsigned __int16 *)(*((_QWORD *)v4 + 3) + 2LL);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, size_t, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v101,
         (unsigned int)ExDefaultNonPagedPoolType,
         1681082453LL,
         v7 + 39,
         &v96,
         a1 + 48);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v88) = v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x1Fu,
        (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids,
        v88);
    }
    goto LABEL_89;
  }
  v10 = (_QWORD *)*v6;
  v99 = v10;
  *v10 = v96;
  memmove((void *)(*v6 + 32), *((const void **)v4 + 3), v7);
  LODWORD(v95) = 0;
  v10[3] = v10 + 2;
  v11 = v4 + 20;
  v10[2] = v10 + 2;
  v12 = (unsigned __int8 *)(v4 + 21);
  LODWORD(v13) = (_DWORD)v10 + 32;
  v14 = (unsigned __int64)v4 + *v4;
  v98 = v10 + 4;
  v108 = v14;
  v15 = 0;
  if ( (unsigned __int64)(v4 + 21) < v14 )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      v97 = 0LL;
      v17 = v11;
      v92 = 0LL;
      v18 = *v12;
      v19 = *((unsigned __int8 *)v11 + 3);
      v89 = *(_QWORD *)(v16 + 1432);
      v90 = 0;
      v20 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                                 (_DWORD)v13,
                                 (_DWORD)v13,
                                 v18,
                                 v19,
                                 -1,
                                 -1,
                                 -1,
                                 (__int64)&v90,
                                 v89);
      v21 = v20;
      if ( !v20 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_94;
        v39 = 32;
        goto LABEL_93;
      }
      v22 = *(_DWORD **)(a1 + 2448);
      if ( v22 )
      {
        v23 = 0;
        if ( *v22 )
        {
          while ( *((_BYTE *)v22 + 2 * v23 + 5) != v20[3] || *((_BYTE *)v22 + 2 * v23 + 4) != v20[2] )
          {
            if ( ++v23 >= *v22 )
              goto LABEL_13;
          }
          _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x8000u);
        }
      }
LABEL_13:
      v24 = (unsigned int)ExDefaultNonPagedPoolType;
      *((_DWORD *)v11 + 4) = v20[4];
      v25 = v20[4] + v15;
      v106 = (unsigned int *)(v11 + 8);
      v26 = (char *)v11 + *v11;
      LODWORD(v95) = v25;
      v107 = (unsigned __int16 *)v26;
      v105 = 0LL;
      v102 = 0LL;
      v103 = 0x100000001LL;
      v101 = 0LL;
      v104 = 0LL;
      LODWORD(v101) = 56;
      v27 = 72LL * *v106 + 40;
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64, size_t, __int64 *, void **))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             &v101,
             v24,
             1681082453LL,
             v27,
             &v97,
             &v92);
      if ( v8 < 0 )
        break;
      *((_QWORD *)v17 + 1) = v92;
      memset(v92, 0, v27);
      *(_QWORD *)v92 = v97;
      *((_QWORD *)v92 + 4) = v21;
      *((_DWORD *)v92 + 6) = v21[4];
      if ( v90 == 1 )
      {
        _InterlockedOr((volatile signed __int32 *)v92 + 7, 1u);
        _InterlockedOr((volatile signed __int32 *)v92 + 7, 2u);
      }
      v28 = v99 + 2;
      v29 = (char *)v92 + 8;
      v30 = (_QWORD *)v99[3];
      if ( (_QWORD *)*v30 != v99 + 2 )
LABEL_168:
        __fastfail(3u);
      v13 = v98;
      *v29 = v28;
      v29[1] = v30;
      *v30 = v29;
      v28[1] = v29;
      v31 = v106;
      *((_BYTE *)v17 + 4) = v21[5];
      *((_BYTE *)v17 + 5) = v21[6];
      *((_BYTE *)v17 + 6) = v21[7];
      v32 = *v21;
      v33 = v92;
      v9 = &v21[v32];
      v34 = *(unsigned __int16 *)(*(_QWORD *)(v100 + 24) + 2LL) - v32 - (_QWORD)v21;
      v35 = 0;
      v36 = (unsigned __int64)&v9[v34 + (_QWORD)v13];
      if ( *v31 )
      {
        do
        {
          if ( (unsigned __int64)v9 >= v36 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_94;
            v39 = 22;
            goto LABEL_93;
          }
          v37 = 9LL * v35;
          v33[2 * v37 + 16] = *(_DWORD *)&v17[12 * v35 + 22];
          v38 = v9 + 1;
          v33[2 * v37 + 12] = 1;
          if ( (unsigned __int64)(v9 + 1) >= v36 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_94;
            v39 = 23;
LABEL_93:
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
              2u,
              5u,
              v39,
              (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids);
            goto LABEL_94;
          }
          while ( *v38 != 5 )
          {
            v40 = *v9;
            if ( !(_BYTE)v40 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_94;
              v39 = 24;
              goto LABEL_93;
            }
            v9 += v40;
            if ( (unsigned __int64)v9 >= v36 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_94;
              v39 = 25;
              goto LABEL_93;
            }
            v38 = v9 + 1;
            if ( (unsigned __int64)(v9 + 1) >= v36 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_94;
              v39 = 26;
              goto LABEL_93;
            }
          }
          if ( (unsigned __int64)(v9 + 7) > v36 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_94;
            v39 = 28;
            goto LABEL_93;
          }
          v41 = *(_DWORD *)&v17[12 * v35 + 22];
          if ( (v41 & 1) != 0 )
          {
            *((_WORD *)v9 + 2) = v17[12 * v35 + 12];
            v41 = *(_DWORD *)&v17[12 * v35 + 22];
          }
          v42 = v41 & 0xF0;
          if ( v42 == 16 )
          {
            v33[18 * v35 + 26] = 1;
          }
          else if ( v42 == 32 )
          {
            v33[18 * v35 + 26] = 2;
          }
          else
          {
            v43 = 3;
            if ( v42 != 48 )
              v43 = 0;
            v33[18 * v35 + 26] = v43;
          }
          *(_QWORD *)&v33[18 * v35 + 18] = v9;
          v33[18 * v35 + 20] = v36 - (_DWORD)v9;
          v44 = *((_WORD *)v9 + 2);
          if ( *(_WORD *)(a1 + 1990) < 0x250u )
            v44 = (v44 & 0x7FF) * (((v44 >> 11) & 3) + 1);
          v17[12 * v35 + 12] = v44;
          v45 = 6;
          if ( v9[6] < 6u )
            v45 = v9[6];
          HIBYTE(v17[12 * v35 + 13]) = v45;
          LOBYTE(v17[12 * v35 + 13]) = v9[2];
          if ( (v9[3] & 3) != 0 )
          {
            switch ( v9[3] & 3 )
            {
              case 1:
                *(_DWORD *)&v17[12 * v35 + 14] = 1;
                break;
              case 2:
                *(_DWORD *)&v17[12 * v35 + 14] = 2;
                break;
              case 3:
                *(_DWORD *)&v17[12 * v35 + 14] = 3;
                break;
            }
          }
          else
          {
            *(_DWORD *)&v17[12 * v35 + 14] = 0;
          }
          if ( !v17[12 * v35 + 12] )
            _InterlockedOr(&v33[18 * v35 + 13], 1u);
          v46 = *v9;
          if ( !(_BYTE)v46 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_94;
            v39 = 29;
            goto LABEL_93;
          }
          v9 += v46;
          if ( (unsigned __int64)v9 < v36 && (unsigned __int64)(v9 + 1) < v36 && v9[1] == 48 )
          {
            if ( *v9 )
            {
              if ( (unsigned __int64)(v9 + 6) <= v36 )
              {
                v47 = *(_QWORD *)&v33[18 * v35 + 18];
                *(_QWORD *)&v33[18 * v35 + 22] = v9;
                if ( (*(_BYTE *)(v47 + 3) & 3) == 1 )
                {
                  if ( (v33[18 * v35 + 13] & 1) == 0 )
                    v17[12 * v35 + 12] = *((_WORD *)v9 + 2);
                  if ( (v9[3] & 0x80u) != 0 )
                  {
                    v9 += *v9;
                    if ( (unsigned __int64)v9 < v36 && (unsigned __int64)(v9 + 1) < v36 && v9[1] == 49 )
                    {
                      if ( *v9 )
                      {
                        if ( (unsigned __int64)(v9 + 8) <= v36 )
                        {
                          v48 = v33[18 * v35 + 13];
                          *(_QWORD *)&v33[18 * v35 + 24] = v9;
                          if ( (v48 & 1) == 0 )
                          {
                            v49 = *((_DWORD *)v9 + 1);
                            if ( v49 > 0xFFFF )
                            {
                              v50 = *(_DWORD *)&v17[12 * v35 + 22];
                              if ( (v50 & 0x100) != 0 )
                              {
                                *(_DWORD *)&v17[12 * v35 + 20] = v49;
                                *(_DWORD *)&v17[12 * v35 + 22] = v50 | 0x10000;
                              }
                            }
                            else
                            {
                              v17[12 * v35 + 12] = v49;
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
          ++v35;
        }
        while ( v35 < *v31 );
        LODWORD(v13) = (_DWORD)v98;
      }
      v11 = v107;
      v12 = (unsigned __int8 *)(v107 + 1);
      if ( (unsigned __int64)(v107 + 1) >= v108 )
        goto LABEL_98;
      v15 = v95;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v88) = v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        2u,
        0x21u,
        (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids,
        v88);
    }
    v6 = (__int64 *)(a1 + 48);
LABEL_89:
    if ( v8 < 0 )
      goto LABEL_95;
    v2 = *v6;
    goto LABEL_167;
  }
LABEL_98:
  v6 = (__int64 *)(a1 + 48);
  v9 = *(unsigned __int8 **)(a1 + 48);
  if ( v9 )
  {
    for ( i = (unsigned __int8 *)*((_QWORD *)v9 + 2); ; i = *(unsigned __int8 **)i )
    {
      v53 = i - 8;
      if ( v9 + 16 == i )
        break;
      v54 = *((_DWORD *)v53 + 6);
      v55 = 0;
      if ( v54 )
      {
        v56 = v53 + 72;
        while ( (*(_BYTE *)(*v56 + 2LL) & 0xF) != 0 )
        {
          ++v55;
          v56 += 9;
          if ( v55 >= v54 )
            goto LABEL_105;
        }
        v8 = -1073741823;
        *(_DWORD *)(a1 + 1564) = -1072693239;
        goto LABEL_95;
      }
LABEL_105:
      ;
    }
  }
  LOWORD(v93) = 0;
  v57 = 0;
  v94 = 0;
  v91 = 0;
  if ( !v9 )
  {
LABEL_125:
    v8 = 0;
    v66 = (unsigned int)v95;
    *((_DWORD *)v99 + 2) = v95;
    v67 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v67 )
    {
      if ( (unsigned int)v66 <= v67 )
      {
LABEL_148:
        v77 = *(_QWORD *)(a1 + 56);
        if ( v77 )
        {
          v78 = (_QWORD *)(v77 + 16);
          *(_DWORD *)(a1 + 144) = 0;
          *(_DWORD *)(a1 + 128) = 0;
          v9 = (unsigned __int8 *)(*v78 - 8LL);
          if ( v78 != (_QWORD *)*v78 )
          {
            do
            {
              for ( j = 0; j < *((_DWORD *)v9 + 6); ++j )
              {
                v80 = *(_DWORD *)&v9[72 * j + 48];
                if ( v80 == 4 )
                {
                  *(_DWORD *)&v9[72 * j + 48] = 5;
                  *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)&v9[72 * j + 40];
                }
                else if ( v80 == 6 )
                {
                  *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)&v9[72 * j + 40];
                }
              }
              v81 = *((_QWORD *)v9 + 1);
              v9 = (unsigned __int8 *)(v81 - 8);
            }
            while ( *(_QWORD *)(a1 + 56) + 16LL != v81 );
          }
        }
        goto LABEL_89;
      }
      v68 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v68 )
      {
        ExFreePoolWithTag(v68, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v69 = *(void **)(a1 + 136);
      if ( v69 )
      {
        ExFreePoolWithTag(v69, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v70 = *(void **)(a1 + 120);
      if ( v70 )
      {
        ExFreePoolWithTag(v70, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
    }
    if ( !*(_DWORD *)(a1 + 96) && (_DWORD)v66 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v66, 0x64334855u);
      *(_QWORD *)(a1 + 104) = PoolWithTag;
      if ( PoolWithTag )
      {
        v72 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v66, 0x64334855u);
        *(_QWORD *)(a1 + 136) = v72;
        if ( v72 )
        {
          v73 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v66, 0x64334855u);
          *(_QWORD *)(a1 + 120) = v73;
          if ( v73 )
          {
            *(_DWORD *)(a1 + 96) = v66;
            v8 = 0;
            goto LABEL_148;
          }
        }
      }
      v74 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v74 )
      {
        ExFreePoolWithTag(v74, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v75 = *(void **)(a1 + 136);
      if ( v75 )
      {
        ExFreePoolWithTag(v75, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v76 = *(void **)(a1 + 120);
      if ( v76 )
      {
        ExFreePoolWithTag(v76, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      v8 = -1073741670;
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
    if ( v8 < 0 )
      goto LABEL_95;
    goto LABEL_148;
  }
  for ( k = (unsigned __int8 *)*((_QWORD *)v9 + 2); ; k = *(unsigned __int8 **)k )
  {
    v59 = k - 8;
    if ( v9 + 16 == k )
    {
      v6 = (__int64 *)(a1 + 48);
      goto LABEL_125;
    }
    v60 = *((_DWORD *)v59 + 6);
    v61 = 0;
    if ( v60 )
      break;
LABEL_121:
    ;
  }
  v62 = (char *)(v59 + 52);
  while ( 1 )
  {
    v63 = *(_QWORD *)(v62 + 20);
    if ( (*(_DWORD *)v62 & 1) == 0 )
      break;
LABEL_120:
    ++v61;
    v62 += 72;
    if ( v61 >= v60 )
      goto LABEL_121;
  }
  v64 = *(unsigned __int8 *)(v63 + 2);
  if ( (*(_BYTE *)(v63 + 3) & 3) != 0 )
  {
    v65 = (__int16 *)&v93;
    if ( (v64 & 0x80u) == 0LL )
      v65 = &v94;
  }
  else
  {
    v65 = (__int16 *)&v91;
  }
  if ( ((v57 >> (v64 & 0xF)) & 1) == 0 && (((unsigned __int16)*v65 >> (v64 & 0xF)) & 1) == 0 )
  {
    *v65 |= 1 << (v64 & 0xF);
    v57 = v91;
    goto LABEL_120;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL), v64, (__int64)v9, (__int64)v65, v87);
LABEL_94:
  v8 = -1073741823;
  *(_DWORD *)(a1 + 1564) = -1073737984;
LABEL_95:
  *(_DWORD *)(a1 + 1560) = v8;
  if ( !*(_DWORD *)(a1 + 1564) )
  {
    if ( v8 == -1073741667 )
      USBDErrorFromNTStatus = -1073713152;
    else
      USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v8);
    *(_DWORD *)(a1 + 1564) = USBDErrorFromNTStatus;
  }
  v82 = *(_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x10u);
  if ( v82 )
  {
    v83 = (_QWORD **)(v82 + 2);
    while ( 1 )
    {
      v85 = *v83;
      if ( *v83 == v83 )
        break;
      if ( (_QWORD **)v85[1] != v83 )
        goto LABEL_168;
      v84 = (_QWORD *)*v85;
      if ( *(_QWORD **)(*v85 + 8LL) != v85 )
        goto LABEL_168;
      *v83 = v84;
      v84[1] = v83;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *(v85 - 1));
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, unsigned __int8 *))(WdfFunctions_01015 + 1664))(
      WdfDriverGlobals,
      *v82,
      v9);
  }
LABEL_167:
  *(_QWORD *)(v100 + 32) = v2;
  return ((v8 >> 31) & 0xFFFFFFF4) + 4077;
}
