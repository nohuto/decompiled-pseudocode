/*
 * XREFs of sub_180018AF0 @ 0x180018AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800030B4 @ 0x1800030B4 (sub_1800030B4.c)
 *     sub_180005AF0 @ 0x180005AF0 (sub_180005AF0.c)
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_180006278 @ 0x180006278 (sub_180006278.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 *     sub_1800066B0 @ 0x1800066B0 (sub_1800066B0.c)
 *     sub_1800067F0 @ 0x1800067F0 (sub_1800067F0.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000DA20 @ 0x18000DA20 (sub_18000DA20.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18000FFE4 @ 0x18000FFE4 (sub_18000FFE4.c)
 *     sub_180017EA0 @ 0x180017EA0 (sub_180017EA0.c)
 *     sub_180018A60 @ 0x180018A60 (sub_180018A60.c)
 *     sub_1800197C0 @ 0x1800197C0 (sub_1800197C0.c)
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_180019CB0 @ 0x180019CB0 (sub_180019CB0.c)
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800223BC @ 0x1800223BC (sub_1800223BC.c)
 *     sub_180023230 @ 0x180023230 (sub_180023230.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_1800277CC @ 0x1800277CC (sub_1800277CC.c)
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     sub_180027D94 @ 0x180027D94 (sub_180027D94.c)
 *     sub_180032BA8 @ 0x180032BA8 (sub_180032BA8.c)
 *     sub_180033C98 @ 0x180033C98 (sub_180033C98.c)
 *     sub_1800355F8 @ 0x1800355F8 (sub_1800355F8.c)
 *     sub_1800356D8 @ 0x1800356D8 (sub_1800356D8.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_1800468FC @ 0x1800468FC (sub_1800468FC.c)
 *     sub_18006B648 @ 0x18006B648 (sub_18006B648.c)
 *     sub_18007D3AC @ 0x18007D3AC (sub_18007D3AC.c)
 *     sub_18007F36C @ 0x18007F36C (sub_18007F36C.c)
 *     sub_18007F6D0 @ 0x18007F6D0 (sub_18007F6D0.c)
 *     sub_18007F818 @ 0x18007F818 (sub_18007F818.c)
 *     sub_18007F87C @ 0x18007F87C (sub_18007F87C.c)
 */

char __fastcall sub_180018AF0(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  DWORD v5; // ebx
  __int64 v6; // r15
  __int64 v7; // rsi
  DWORD v8; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v11; // edi
  _QWORD *v12; // rbx
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edx
  unsigned __int64 v19; // r8
  __int64 v20; // r13
  DWORD v21; // edi
  __int64 v22; // rsi
  _QWORD *v23; // rbx
  int *v24; // r12
  unsigned int v25; // ebx
  _QWORD *v26; // rax
  bool v27; // zf
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // r13
  BOOL v32; // r12d
  DWORD v33; // edi
  __int64 v34; // r13
  _QWORD *v35; // rbx
  bool v36; // bl
  _QWORD *v37; // rax
  __int64 v38; // rax
  int v39; // eax
  int v40; // edx
  BOOL v41; // ebx
  _QWORD *v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  int v46; // eax
  _QWORD *v47; // rax
  signed __int64 v48; // rax
  bool v49; // cc
  signed __int64 v50; // rax
  DWORD v51; // ebx
  int v52; // eax
  DWORD v53; // edi
  _QWORD *v54; // rbx
  DWORD v55; // eax
  __int64 v56; // rcx
  _QWORD *v57; // rax
  int v59; // edi
  int v60; // ebx
  __int64 v61; // r13
  __int16 v62; // cx
  int v63; // eax
  unsigned int v64; // ecx
  int v65; // ebx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  int v69; // ecx
  void *v70; // rcx
  BOOL v71; // eax
  int v72; // ebx
  __int64 v73; // rcx
  __int64 v74; // rcx
  int v75; // eax
  int v76; // ecx
  void *v77; // rcx
  unsigned int v79; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v80; // [rsp+44h] [rbp-BCh]
  BOOL v81; // [rsp+48h] [rbp-B8h]
  int v82; // [rsp+4Ch] [rbp-B4h]
  __int64 v83; // [rsp+50h] [rbp-B0h]
  int v84; // [rsp+58h] [rbp-A8h] BYREF
  int v85; // [rsp+5Ch] [rbp-A4h] BYREF
  char v86[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v87[4]; // [rsp+64h] [rbp-9Ch] BYREF
  int v88; // [rsp+68h] [rbp-98h]
  char v89[4]; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v90; // [rsp+70h] [rbp-90h] BYREF
  int v91; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v92; // [rsp+78h] [rbp-88h]
  __int64 v93; // [rsp+80h] [rbp-80h] BYREF
  __int64 v94; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v95[3]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v96; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v97; // [rsp+B0h] [rbp-50h]
  __int64 v98; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE TlsValue[144]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+60h] BYREF
  void *v102; // [rsp+170h] [rbp+70h]
  int v103; // [rsp+178h] [rbp+78h]
  int v104; // [rsp+17Ch] [rbp+7Ch]
  __int64 *v105; // [rsp+180h] [rbp+80h]
  __int64 v106; // [rsp+188h] [rbp+88h]
  int *v107; // [rsp+190h] [rbp+90h]
  __int64 v108; // [rsp+198h] [rbp+98h]

  memset(TlsValue, 0, 0x88uLL);
  v5 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v5, TlsValue);
  }
  v6 = a2 + 64;
  v97 = *(_QWORD *)(a2 + 48);
  v7 = *(_QWORD *)(a2 + 32);
  v92 = v7;
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
  {
    v84 = *(_DWORD *)(a2 + 1244);
    v93 = v7;
    sub_1800030B4((int)&dword_1800B3218, (int)&unk_18009D01A, v3, v4, (__int64)&v93, (__int64)&v84);
  }
  v8 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( *(_QWORD *)TlsGetValue(v8) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&unk_1800B4210);
  CurrentThreadId = GetCurrentThreadId();
  v11 = dwTlsIndex;
  dword_1800B4218 = CurrentThreadId;
  if ( dwTlsIndex != -1 )
  {
    v12 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v11) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v12 |= 2uLL;
    ++v12[2];
  }
  RtlAcquireSRWLockExclusive(a2 + 64);
  *(_DWORD *)(a2 + 72) = GetCurrentThreadId();
  *(_DWORD *)(a2 + 704) = GetCurrentThreadId();
LABEL_16:
  v13 = 0;
  while ( *(int *)(a2 + 24) >= 0 )
  {
    v14 = *(_QWORD *)(v6 + 600);
    v15 = 0LL;
    v16 = v14 != v6 + 600;
    if ( v14 != v6 + 600 )
      v15 = v14 - 96;
    if ( v15 )
    {
      do
      {
        if ( *(_BYTE *)(v15 + 548) == 2 )
        {
          if ( *(_BYTE *)(v15 + 549) )
          {
            v52 = sub_180019CB0(v15, v16);
            if ( v52 )
            {
              if ( (unsigned int)dword_1800B3218 > 5 )
              {
                v85 = v52;
                v94 = *(_QWORD *)(v15 + 40);
                v107 = &v85;
                v105 = &v94;
                *(_DWORD *)&EventDescriptor.Level = 5;
                UserData.Ptr = (ULONGLONG)off_1800B3220;
                v108 = 4LL;
                v106 = 8LL;
                *(_DWORD *)&EventDescriptor.Id = 184549376;
                EventDescriptor.Keyword = 0LL;
                UserData.Size = *(unsigned __int16 *)off_1800B3220;
                UserData.Reserved = 2;
                v102 = &unk_1800A1424;
                v103 = 49;
                v104 = 1;
                v80 = (unsigned int)&unk_1800A3945 - (unsigned int)&unk_18009A4C0;
                EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
              }
            }
          }
        }
        v16 = *(_QWORD *)(v15 + 96);
        v17 = *(_QWORD *)(v15 + 80);
        v15 = 0LL;
        if ( v16 != v17 + 600 )
          v15 = v16 - 96;
      }
      while ( v15 );
      v6 = a2 + 64;
    }
    sub_1800468FC(v6, v86, v87);
    v19 = *(_QWORD *)(v6 + 648);
    switch ( (v19 >> 16) & 3 )
    {
      case 0uLL:
        goto LABEL_27;
      case 1uLL:
        if ( v86[0] >= 0 || v87[0] < 0 || (v19 & 0x40000000000LL) != 0 )
          goto LABEL_27;
        v67 = sub_180006258(v6);
        if ( v67 )
        {
          while ( (*(_BYTE *)(v67 + 544) & 0x28) != 0
               || !sub_180006278(v67, 5u)
               || (*(_DWORD *)(v67 + 112) & 0x2000) == 0 )
          {
            v67 = sub_1800062A4(v67);
            if ( !v67 )
              goto LABEL_153;
          }
          v19 = *(_QWORD *)(a2 + 712);
          goto LABEL_27;
        }
LABEL_153:
        if ( (v19 & 0x800000000LL) == 0 )
        {
          v71 = sub_1800067F0(v6, v18);
          *(_QWORD *)(v6 + 648) |= 0x800000000uLL;
          v72 = v71;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 16)) <= 1 )
            __fastfail(0xEu);
          TpPostWork(*(_QWORD *)(v6 + 624));
          sub_1800066B0(v6, v72);
          v19 = *(_QWORD *)(a2 + 712);
        }
        if ( (v19 & 0x30000) != 0 )
        {
          do
          {
            v95[0] = *(_QWORD *)(v6 + 800);
            sub_18000A110(v6);
            sub_18000F390();
            RtlWaitOnAddress(v6 + 800, v95, 8LL);
            sub_18001E380(v68);
            sub_1800093A0(v6, 0);
          }
          while ( (*(_DWORD *)(v6 + 648) & 0x30000) != 0 );
        }
        break;
      case 2uLL:
        if ( ((v19 >> 52) & 1) == 0 )
          goto LABEL_153;
        break;
      case 3uLL:
        goto LABEL_153;
      default:
LABEL_27:
        if ( (v19 & 0x10000000000000LL) != 0 )
        {
          sub_18007D3AC(v6);
        }
        else
        {
          v20 = *(_QWORD *)(v6 + 776);
          if ( !(unsigned int)sub_1800197C0(v20, v6) )
          {
            if ( (*(_BYTE *)(a2 + 1244) & 8) == 0 && (*(_BYTE *)(v6 + 772) & 1) != 0 )
            {
              v21 = dwTlsIndex;
              v22 = *(_QWORD *)(v6 + 648) >> 62;
              if ( dwTlsIndex != -1 )
              {
                v23 = TlsGetValue(dwTlsIndex);
                if ( (*(_QWORD *)TlsGetValue(v21) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
                  __int2c();
                *v23 |= 0x20uLL;
                ++v23[6];
              }
              RtlAcquireSRWLockShared(v20 + 576);
              v24 = (int *)(v20 + 608);
              v25 = (*(_DWORD *)(v20 + 608) >> 23) & 3;
              if ( dwTlsIndex != -1 )
              {
                v26 = TlsGetValue(dwTlsIndex);
                if ( (*(_BYTE *)v26 & 0x20) == 0 )
                  __int2c();
                v27 = v26[6]-- == 1LL;
                if ( v27 )
                  *v26 &= ~0x20uLL;
              }
              RtlReleaseSRWLockShared(v20 + 576);
              if ( v25 < (unsigned int)v22 )
              {
                sub_18000A110(v6);
                sub_18000F390();
                sub_1800277CC(v20);
                v64 = *v24;
                if ( (((unsigned int)*v24 >> 23) & 3) < (unsigned int)v22 )
                {
                  while ( ((v64 >> 21) & 3) >= (unsigned int)v22 )
                  {
                    if ( (v64 & 0x100000) == 0 )
                    {
                      *v24 = v64 | 0x100000;
                      sub_180023230(v20);
                      v65 = sub_1800355F8(v20);
                      if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 )
                      {
                        v73 = qword_1800B3230 & 8;
                        if ( v73 == qword_1800B3230 )
                        {
                          v95[1] = *(_QWORD *)(v6 - 32);
                          v95[2] = v6 + 24;
                          v88 = v65;
                          sub_18007F36C(v73, &unk_1800A1838);
                        }
                      }
                      if ( v65 < 0 )
                        sub_18007F6D0(v20, (unsigned int)v65);
                      sub_1800277CC(v20);
                      *v24 &= ~0x100000u;
                      RtlWakeAddressAll(v20 + 608);
                      if ( v65 >= 0 )
                      {
                        *v24 &= 0xFE7FFFFF;
                        *v24 |= (_DWORD)v22 << 23;
                      }
                      sub_180023230(v20);
                      sub_1800356D8(v20, v6);
                      goto LABEL_145;
                    }
                    sub_18007F818(v6);
                    sub_18007F87C(v20);
                    v64 = *v24;
                    if ( (((unsigned int)*v24 >> 23) & 3) >= (unsigned int)v22 )
                      break;
                  }
                }
                sub_180023230(v20);
LABEL_145:
                sub_18001E380(v66);
                sub_1800093A0(v6, 0);
                goto LABEL_16;
              }
              v13 = 0;
            }
            if ( !(unsigned int)sub_1800199F0(v20, v6) )
            {
              v30 = *(_DWORD *)(a2 + 836);
              if ( (v30 & 1) != 0 )
              {
                v80 = sub_18001A3C0(v6);
                v30 = *(_DWORD *)(a2 + 836);
              }
              else
              {
                v80 = 0;
              }
              if ( (v30 & 1) != 0 )
              {
                v31 = *(_QWORD *)(a2 + 752);
                v83 = v31;
                if ( v31 )
                {
                  v53 = dwTlsIndex;
                  if ( dwTlsIndex != -1 )
                  {
                    v54 = TlsGetValue(dwTlsIndex);
                    if ( (*(_QWORD *)TlsGetValue(v53) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
                      __int2c();
                    *v54 |= 8uLL;
                    ++v54[4];
                  }
                  RtlAcquireSRWLockExclusive(v31 + 8);
                  v55 = GetCurrentThreadId();
                  v82 = 1;
                  *(_DWORD *)(v31 + 16) = v55;
                  v56 = *(_QWORD *)(a2 + 752);
                  v32 = *(_QWORD *)(v56 + 104) < *(_QWORD *)(a2 + 680);
                  v81 = *(_DWORD *)(v56 + 92) != 0;
                }
                else
                {
                  v32 = 0;
                  v81 = 0;
                  v82 = 0;
                }
                if ( (*(_BYTE *)(a2 + 836) & 1) == 0 )
                {
                  v79 = 0;
                  goto LABEL_63;
                }
                sub_1800468FC(v6, &v79, v89);
                v33 = dwTlsIndex;
                v34 = *(_QWORD *)(*(_QWORD *)(a2 + 840) + 88LL);
                if ( dwTlsIndex != -1 )
                {
                  v35 = TlsGetValue(dwTlsIndex);
                  if ( (*(_QWORD *)TlsGetValue(v33) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
                    __int2c();
                  *v35 |= 0x40uLL;
                  ++v35[7];
                }
                RtlAcquireSRWLockShared(v34 + 304);
                v36 = (*(_DWORD *)(v34 + 340) & 2) != 0;
                if ( dwTlsIndex != -1 )
                {
                  v37 = TlsGetValue(dwTlsIndex);
                  if ( (*(_BYTE *)v37 & 0x40) == 0 )
                    __int2c();
                  v27 = v37[7]-- == 1LL;
                  if ( v27 )
                    *v37 &= ~0x40uLL;
                }
                RtlReleaseSRWLockShared(v34 + 304);
                if ( !v36
                  || (v74 = *(_QWORD *)(a2 + 712), (v74 & 0x20000000000000LL) != 0)
                  || ((v79 & 0x80u) != 0 || v89[0] < 0 ? (v75 = 0) : (v75 = 1), (v74 & 0x30000) != 0 || !v75) )
                {
                  if ( !v32 )
                  {
                    v38 = *(_QWORD *)(a2 + 712);
                    v31 = v83;
                    if ( (v38 & 0x10000000000LL) != 0 )
                    {
                      if ( v81 )
                        v13 = v79;
                    }
                    else
                    {
                      if ( v83 && *(_DWORD *)(v83 + 88) )
                        v13 = v79 & 0x100 | 0x80;
                      else
                        v13 = 384;
                      if ( (v38 & 0x2080000000000LL) == 0x2000000000000LL )
                        v13 |= (v13 >> 5) & 8;
                    }
LABEL_63:
                    if ( v82 )
                    {
                      *(_DWORD *)(v31 + 16) = 0;
                      RtlReleaseSRWLockExclusive(v31 + 8);
                      if ( dwTlsIndex != -1 )
                      {
                        v57 = TlsGetValue(dwTlsIndex);
                        if ( (*(_BYTE *)v57 & 8) == 0 )
                          __int2c();
                        v27 = v57[4]-- == 1LL;
                        if ( v27 )
                          *v57 &= ~8uLL;
                      }
                    }
                    if ( *(_QWORD *)(a2 + 656) )
                    {
LABEL_65:
                      v39 = *(_DWORD *)(a2 + 624);
                      switch ( v39 )
                      {
                        case 2:
                          goto LABEL_66;
                        case 4:
                          if ( (*(_BYTE *)(a2 + 1240) & 1) != 0 )
                            v13 |= 0x40u;
LABEL_66:
                          if ( (v13 & 8) != 0 )
                          {
                            v59 = *(_DWORD *)(a2 + 1244);
                            v60 = 0;
                            v61 = *(_QWORD *)(a2 + 48);
                            v62 = *(_WORD *)(a2 + 1464);
                            if ( (v59 & 0x10) == 0 && (v62 & 0x200) == 0 )
                            {
                              v63 = *(_DWORD *)(v61 + 504);
                              v60 = 2 * (v63 & 1);
                              if ( (v62 & 0x100) == 0 )
                                v60 |= 2 * (v63 & 2);
                            }
                            v13 |= v60 | v59 & 0x27 | sub_18000FFE4(v61 + 400, a2);
                            if ( (unsigned int)sub_180033C98(v61 + 400, a2) )
                              v13 ^= ((unsigned __int8)v13 ^ (unsigned __int8)(8 * *(_DWORD *)(v61 + 508))) & 0x10;
                          }
                          break;
                        case 8:
                          goto LABEL_66;
                      }
                    }
LABEL_67:
                    if ( (*(_BYTE *)(a2 + 1244) & 8) == 0
                      && (v13 & 8) != 0
                      && (*(_QWORD *)(v6 + 648) & 0x200000000000LL) == 0
                      && !(unsigned __int8)sub_180032BA8(a2) )
                    {
                      *(_QWORD *)(v6 + 648) |= 0x200000000000uLL;
                    }
                    v40 = *(_DWORD *)(a2 + 1244);
                    if ( v40 != v13 )
                    {
                      if ( (unsigned int)dword_1800B3218 > 4
                        && (byte_1800B3228 & 0x40) != 0
                        && (qword_1800B3230 & 0x40) == qword_1800B3230 )
                      {
                        v96 = v92;
                        v90 = v13;
                        sub_1800030B4(
                          (int)&dword_1800B3218,
                          (int)&unk_18009CF9F,
                          v28,
                          v29,
                          (__int64)&v96,
                          (__int64)&v90);
                        v40 = *(_DWORD *)(a2 + 1244);
                      }
                      if ( (v40 & v13) == v13 )
                        sub_18000DA20(a2, ~(_BYTE)v13 & v40);
                      else
                        sub_18002785C(a2, v13 & ~v40);
                      RtlWakeAllConditionVariable(a2 + 1232);
                      goto LABEL_16;
                    }
                    if ( v80 && !sub_180018A60(a2) )
                      goto LABEL_16;
                    goto LABEL_70;
                  }
                  v13 = v79 & 0x188;
                }
                v31 = v83;
                goto LABEL_63;
              }
              if ( (unsigned int)sub_1800223BC(a2, 3LL) )
                goto LABEL_65;
              goto LABEL_67;
            }
          }
        }
        break;
    }
  }
LABEL_70:
  sub_180017EA0(v6);
  *(_DWORD *)(v6 + 640) = 0;
  *(_QWORD *)(v6 + 648) &= ~0x400000000uLL;
  v41 = sub_180018A60(a2);
  if ( dwTlsIndex != -1 )
  {
    v42 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v42 & 2) == 0 )
      __int2c();
    v27 = v42[2]-- == 1LL;
    if ( v27 )
      *v42 &= ~2uLL;
  }
  *(_DWORD *)(v6 + 8) = 0;
  RtlReleaseSRWLockExclusive(v6);
  v27 = *(_QWORD *)(a2 + 1424) == 0LL;
  *(_DWORD *)(a2 + 1468) = 0;
  if ( !v27 )
    sub_18006B648((PVOID)a2);
  v45 = *(_QWORD *)(v97 + 2720);
  v46 = *(_DWORD *)(v45 + 160);
  if ( (v46 & 3) == 0 )
  {
    *(_DWORD *)(v45 + 160) = v46 | 1;
    TpPostWork(*(_QWORD *)(v45 + 144));
  }
  if ( v41 )
    sub_180005AF0((__int64 *)a2);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v91 = *(_DWORD *)(a2 + 1244);
    v98 = v92;
    sub_1800030B4((int)&dword_1800B3218, (int)&unk_18009CF3F, v43, v44, (__int64)&v98, (__int64)&v91);
  }
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&unk_1800B4210);
  if ( dwTlsIndex != -1 )
  {
    v47 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v47 & 1) == 0 )
      __int2c();
    v27 = v47[1]-- == 1LL;
    if ( v27 )
      *v47 &= ~1uLL;
  }
  RtlWakeAllConditionVariable(a2 + 1232);
  v48 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 16), 0xFFFFFFFFFFFFFFFFuLL);
  v49 = v48 <= 1;
  v50 = v48 - 1;
  if ( v49 )
  {
    if ( v50 )
      __fastfail(0xEu);
    v69 = *(_DWORD *)(a2 + 40);
    if ( v69 )
    {
      v76 = v69 - 1;
      if ( v76 )
      {
        if ( v76 == 1 && !*(_DWORD *)(a2 + 96) && !*(_DWORD *)(a2 + 100) )
          NtDeleteWnfStateName(a2 + 96);
      }
      else
      {
        sub_180026650(*(PVOID *)v6);
        v77 = *(void **)(a2 + 72);
        if ( v77 )
          NtClose(v77);
      }
    }
    else
    {
      sub_180027D94(a2 + 1296);
      v70 = *(void **)(a2 + 56);
      if ( v70 )
        sub_180026650(v70);
      sub_180027CD0(v6);
    }
    LOBYTE(v50) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a2);
  }
  v51 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    LOBYTE(v50) = TlsSetValue(v51, 0LL);
  }
  return v50;
}
