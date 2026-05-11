/*
 * XREFs of PinBuildDescriptors @ 0x1C0024BD0
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0023B88 (FilterCreateFilterFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00142C0 (memset.c)
 */

__int64 __fastcall PinBuildDescriptors(__int64 a1, char **a2, _DWORD *a3, _DWORD *a4)
{
  char *PoolWithTag; // r13
  __int64 *v7; // r14
  int v8; // edi
  __int64 *v9; // rax
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  unsigned int v12; // r9d
  unsigned int v13; // r12d
  unsigned int v14; // ecx
  __int64 v15; // rsi
  unsigned int v16; // ebx
  int v17; // eax
  NTSTATUS v18; // edi
  unsigned int v19; // ebx
  unsigned int v20; // edx
  unsigned __int64 v21; // rcx
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // edi
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // r10d
  unsigned __int64 v30; // rax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // r9d
  unsigned __int64 v34; // rax
  unsigned int v35; // ecx
  size_t v36; // rbx
  unsigned int v37; // ebx
  char *v38; // r9
  char *v39; // r15
  char *v40; // r8
  unsigned int v41; // esi
  __int64 *v42; // r10
  char *v43; // rbx
  __int64 *v44; // r13
  _QWORD *v45; // r15
  __int64 v46; // rax
  char v47; // cl
  __int64 v48; // rcx
  bool v49; // si
  __int64 v50; // rdx
  char *v51; // rcx
  unsigned int v52; // ecx
  bool v53; // r8
  __int64 v54; // r10
  unsigned int v55; // r11d
  __int64 v56; // rdx
  __int64 v57; // r9
  __int64 v58; // rcx
  unsigned int v59; // edx
  __int64 v60; // rax
  char v61; // cl
  __int64 v62; // rcx
  __int64 v63; // rax
  char v64; // cl
  __int64 v65; // rcx
  unsigned int v66; // r11d
  __int64 v67; // r12
  __int64 v68; // rax
  char v69; // cl
  char v70; // cl
  bool v71; // r10
  __int64 v72; // r8
  __int64 v73; // rax
  char v74; // cl
  char v75; // r9
  __int64 v76; // rcx
  _UNKNOWN **v77; // rax
  char *v78; // rdx
  char v79; // cl
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  char v83; // cl
  bool v84; // cf
  unsigned __int16 *v85; // rcx
  __int64 v86; // r9
  __int64 v87; // r8
  int v88; // ecx
  GUID v89; // xmm0
  int v90; // eax
  GUID v91; // xmm0
  unsigned int v93; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v94; // [rsp+54h] [rbp-25h] BYREF
  int v95; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v96; // [rsp+5Ch] [rbp-1Dh]
  char *v97; // [rsp+60h] [rbp-19h] BYREF
  __int64 *v98; // [rsp+68h] [rbp-11h] BYREF
  char *v99; // [rsp+70h] [rbp-9h]
  char *v100; // [rsp+78h] [rbp-1h]
  char *v101; // [rsp+80h] [rbp+7h]
  char *v102; // [rsp+88h] [rbp+Fh]
  __int64 v103; // [rsp+90h] [rbp+17h]
  unsigned int v105; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v106; // [rsp+F8h] [rbp+7Fh] BYREF

  v103 = *(_QWORD *)(a1 + 16);
  v95 = 0;
  v105 = 0;
  PoolWithTag = 0LL;
  v7 = (__int64 *)(v103 + 80);
  v94 = 0;
  v106 = 0;
  v8 = 0;
  v9 = *(__int64 **)(v103 + 80);
  v10 = 0;
  v99 = 0LL;
  v11 = 0;
  v96 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  if ( v9 != (__int64 *)(v103 + 80) )
  {
    do
    {
      if ( *((_DWORD *)v9 + 5) <= 1u )
      {
        if ( *((_BYTE *)v9 + 72) )
          ++v13;
        else
          ++v14;
      }
      v9 = (__int64 *)*v9;
    }
    while ( v9 != v7 );
    v96 = v14;
  }
  v15 = v14 + v13;
  *a3 = v15;
  *a4 = 176;
  v16 = 0;
  if ( v13 )
  {
    do
    {
      v93 = 0;
      LODWORD(v97) = 0;
      LODWORD(v98) = 0;
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int *, unsigned int *, char **, __int64 **))(pExtBusDeviceDispatchTable + 72))(
              a1,
              v16,
              0LL,
              0LL,
              0LL,
              &v95,
              &v93,
              &v97,
              &v98);
      v10 = v105;
      v11 = v94;
      v18 = v17;
      v12 = v106;
      if ( v17 >= 0 )
      {
        v10 = v93 + v105;
        v11 = (_DWORD)v97 + v94;
        v12 = (_DWORD)v98 + v106;
        v106 += (unsigned int)v98;
        v105 += v93;
        v94 += (unsigned int)v97;
      }
      ++v16;
    }
    while ( v16 < v13 );
    PoolWithTag = 0LL;
    if ( v17 < 0 )
      return (unsigned int)v18;
    v8 = v95;
  }
  v19 = 336 * v15;
  v20 = -1;
  if ( (unsigned __int64)(336 * v15) > 0xFFFFFFFF )
  {
    v22 = -1;
LABEL_33:
    v18 = -1073741436;
    v36 = v22;
    goto LABEL_34;
  }
  v21 = v10 * (unsigned __int64)(unsigned int)(v8 + 8);
  v22 = 336 * v15;
  if ( v21 > 0xFFFFFFFF )
    goto LABEL_33;
  v23 = v21 + v19;
  v24 = -1;
  if ( v23 >= v19 )
    v24 = v23;
  v22 = v24;
  v25 = v24;
  if ( v23 < v19 )
    goto LABEL_33;
  v26 = 8LL * v11;
  if ( v26 > 0xFFFFFFFF )
    goto LABEL_33;
  v27 = v25 + v26;
  v28 = -1;
  if ( v27 >= v25 )
    v28 = v27;
  v22 = v28;
  v29 = v28;
  if ( v27 < v25 )
    goto LABEL_33;
  v30 = 16LL * v12;
  if ( v30 > 0xFFFFFFFF )
    goto LABEL_33;
  v31 = v29 + v30;
  v32 = -1;
  if ( v31 >= v29 )
    v32 = v31;
  v22 = v32;
  v33 = v32;
  if ( v31 < v29 )
    goto LABEL_33;
  v34 = 16LL * v96;
  if ( v34 > 0xFFFFFFFF )
    goto LABEL_33;
  v35 = v33 + v34;
  if ( v33 + (unsigned int)v34 >= v33 )
    v20 = v33 + v34;
  v22 = v20;
  v18 = v35 < v33 ? 0xC0000095 : 0;
  if ( v35 < v33 )
    goto LABEL_33;
  v36 = v20;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v20, 0x41627845u);
  v99 = PoolWithTag;
  *a2 = PoolWithTag;
LABEL_34:
  if ( v18 >= 0 && PoolWithTag )
  {
    memset(PoolWithTag, 0, v36);
    v37 = v96;
    v38 = &PoolWithTag[176 * v15];
    v39 = &v38[160 * v15];
    v40 = &v39[16 * v96];
    v101 = v38;
    v102 = v39;
    v41 = 0;
    v100 = &v40[16 * v106];
    v97 = v40;
    v93 = 0;
    v42 = (__int64 *)&v100[8 * v105 + 8 * (unsigned __int64)v94];
    v98 = v42;
    if ( v13 )
    {
      v43 = PoolWithTag + 68;
      v44 = (__int64 *)v100;
      v45 = v38 + 8;
      do
      {
        if ( v18 < 0 )
          break;
        v46 = *v7;
        v47 = 0;
        while ( (__int64 *)v46 != v7 && !v47 )
        {
          if ( *(_DWORD *)(v46 + 20) < 2u && *(_DWORD *)(v46 + 64) == v41 )
            v47 = 1;
          else
            v46 = *(_QWORD *)v46;
        }
        v48 = v46 & -(__int64)(v47 != 0);
        v49 = v48 && *(_DWORD *)(v48 + 68) == 257 && *(_DWORD *)(v48 + 76) == 2;
        *(_QWORD *)(v43 - 68) = &PinDispatch;
        if ( v49 )
        {
          *(_QWORD *)(v43 - 60) = 0LL;
        }
        else
        {
          *(_QWORD *)(v43 - 60) = &v38[48 * v93];
          *((_DWORD *)v45 - 2) = 5;
          *((_DWORD *)v45 - 1) = 72;
          *v45 = &off_1C0016240;
        }
        *(_QWORD *)(v43 - 44) = &PinInterface;
        v50 = v93;
        *((_DWORD *)v43 - 13) = 1;
        *((_DWORD *)v43 - 9) = 1;
        *(_QWORD *)(v43 - 28) = &PinMedium;
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *, char *, int *, unsigned int *, unsigned int *, unsigned int *))(pExtBusDeviceDispatchTable + 72))(
                a1,
                v50,
                v44,
                v42,
                v40,
                &v95,
                &v105,
                &v94,
                &v106);
        if ( v18 < 0 )
        {
          v42 = v98;
        }
        else
        {
          v51 = v97;
          *(_QWORD *)(v43 + 100) = v97;
          *((_DWORD *)v43 + 23) = v106;
          v97 = &v51[16 * v106];
          v52 = v105 + v94;
          *((_DWORD *)v43 - 5) = v105 + v94;
          *(_QWORD *)(v43 - 12) = v44;
          if ( v105 <= 1 )
          {
            v43[80] = 0;
            *((_DWORD *)v43 + 10) = 1;
            *((_DWORD *)v43 + 17) = 1;
          }
          else
          {
            *((_DWORD *)v43 + 17) = 1;
            v53 = 0;
            v54 = *v44;
            v55 = v52;
            v56 = (unsigned int)((*(_DWORD *)(*v44 + 4) & 2) != 0) + 1;
            if ( (unsigned int)v56 < v52 )
            {
              do
              {
                if ( v53 )
                  break;
                v57 = v44[v56];
                v58 = *(_QWORD *)(v54 + 32) - *(_QWORD *)(v57 + 32);
                if ( !v58 )
                  v58 = *(_QWORD *)(v54 + 40) - *(_QWORD *)(v57 + 40);
                v53 = v58 != 0;
                v56 = ((*(_DWORD *)(v57 + 4) & 2) != 0) + 1 + (unsigned int)v56;
              }
              while ( (unsigned int)v56 < v55 );
            }
            v43[80] = v53;
            *((_DWORD *)v43 + 10) = v53 + 1;
          }
          *((_DWORD *)v43 + 11) = 0;
          v18 = -1073741275;
          *((_DWORD *)v43 + 18) = 0;
          v44 += v105 + v94;
          v59 = v93;
          v42 = (__int64 *)((char *)v98 + v95 * v105);
          v60 = *v7;
          v61 = 0;
          v98 = v42;
          while ( (__int64 *)v60 != v7 && !v61 )
          {
            if ( *(_DWORD *)(v60 + 20) < 2u && *(_DWORD *)(v60 + 64) == v93 )
              v61 = 1;
            else
              v60 = *(_QWORD *)v60;
          }
          v62 = v60 & -(__int64)(v61 != 0);
          if ( v62 )
          {
            *((_DWORD *)v43 - 1) = (*(_DWORD *)(v62 + 20) != 0) + 1;
            v18 = 0;
          }
          if ( v18 >= 0 )
          {
            *((_DWORD *)v43 + 9) = 2;
            if ( v49 )
            {
              *(_QWORD *)(v43 + 60) = PinMIDIDataFormatIntersection;
              *(_QWORD *)(v43 + 4) = &KSCATEGORY_WDMAUD_USE_PIN_NAME;
              if ( *((_DWORD *)v43 - 1) == 1 )
              {
                *(_DWORD *)v43 = 1;
                *((_DWORD *)v43 + 9) |= 0x210000u;
              }
              else
              {
                *(_DWORD *)v43 = 3;
                *((_DWORD *)v43 + 9) |= 8u;
              }
            }
            else
            {
              *(_QWORD *)(v43 + 60) = PinDataFormatIntersection;
              if ( *((_DWORD *)v43 - 1) == 1 )
              {
                *(_DWORD *)v43 = 1;
                *(_QWORD *)(v43 + 4) = &KSCATEGORY_AUDIO;
                *((_DWORD *)v43 + 9) |= 0x210000u;
              }
              else
              {
                *(_DWORD *)v43 = 3;
                *(_QWORD *)(v43 + 4) = &PINNAME_VIDEO_CAPTURE;
                *((_DWORD *)v43 + 9) |= 0x10000u;
              }
              v63 = *v7;
              v18 = -1073741275;
              v64 = 0;
              while ( (__int64 *)v63 != v7 && !v64 )
              {
                if ( *(_DWORD *)(v63 + 20) < 2u && *(_DWORD *)(v63 + 64) == v59 )
                  v64 = 1;
                else
                  v63 = *(_QWORD *)v63;
              }
              v65 = v63 & -(__int64)(v64 != 0);
              if ( v65 )
              {
                v18 = 0;
                *((_DWORD *)v43 + 19) = *(_DWORD *)(v65 + 28);
              }
            }
            *(_QWORD *)(v43 + 52) = &AllocatorFraming;
          }
        }
        v40 = v97;
        v41 = v93 + 1;
        v45 += 6;
        v38 = v101;
        v43 += 176;
        v93 = v41;
      }
      while ( v41 < v13 );
      PoolWithTag = v99;
      v37 = v96;
      v39 = v102;
    }
    v66 = 0;
    if ( v37 )
    {
      v67 = v103;
      while ( 1 )
      {
        if ( v18 < 0 )
          goto LABEL_170;
        v68 = *v7;
        v69 = 0;
        while ( (__int64 *)v68 != v7 && !v69 )
        {
          if ( *(_DWORD *)(v68 + 20) < 2u && *(_DWORD *)(v68 + 64) == v41 )
            v69 = 1;
          else
            v68 = *(_QWORD *)v68;
        }
        v70 = -v69;
        v71 = (v68 & -(__int64)(v70 != 0)) != 0 && *(_DWORD *)((v68 & -(__int64)(v70 != 0)) + 0x44) == 2305;
        v72 = 176LL * v41;
        *(_DWORD *)&PoolWithTag[v72 + 136] = 0;
        *(_DWORD *)&PoolWithTag[v72 + 140] = 0;
        v73 = *v7;
        v74 = 0;
        while ( (__int64 *)v73 != v7 && !v74 )
        {
          if ( *(_DWORD *)(v73 + 20) < 2u && *(_DWORD *)(v73 + 64) == v41 )
            v74 = 1;
          else
            v73 = *(_QWORD *)v73;
        }
        v75 = 0;
        v76 = v73 & -(__int64)(v74 != 0);
        if ( v76 && *(_DWORD *)(v76 + 20) == 1 && (*(_DWORD *)(v76 + 68) == 1538 || *(_DWORD *)(v76 + 68) == 1541) )
          v75 = 1;
        PoolWithTag[v72 + 149] = v75;
        *(_QWORD *)&PoolWithTag[v72] = 0LL;
        *(_QWORD *)&PoolWithTag[v72 + 8] = 0LL;
        v18 = -1073741275;
        *(_DWORD *)&PoolWithTag[v72 + 108] = 0;
        *(_DWORD *)&PoolWithTag[v72 + 112] = 0;
        *(_QWORD *)&PoolWithTag[v72 + 24] = &PinInterface;
        *(_QWORD *)&PoolWithTag[v72 + 40] = &PinMedium;
        v77 = &pAudioBridgePinFormats;
        if ( v71 )
          v77 = &pMIDIBridgePinFormats;
        *(_DWORD *)&PoolWithTag[v72 + 16] = 1;
        v78 = &v39[16 * v66];
        *(_DWORD *)&PoolWithTag[v72 + 32] = 1;
        *(_QWORD *)&PoolWithTag[v72 + 72] = v78;
        v79 = 0;
        *(_DWORD *)&PoolWithTag[v72 + 48] = 1;
        *(_QWORD *)&PoolWithTag[v72 + 56] = v77;
        *(_DWORD *)&PoolWithTag[v72 + 68] = 4;
        v80 = *v7;
        while ( (__int64 *)v80 != v7 && !v79 )
        {
          if ( *(_DWORD *)(v80 + 20) < 2u && *(_DWORD *)(v80 + 64) == v41 )
            v79 = 1;
          else
            v80 = *(_QWORD *)v80;
        }
        v81 = v80 & -(__int64)(v79 != 0);
        if ( v81 )
        {
          *(_DWORD *)&PoolWithTag[v72 + 64] = (*(_DWORD *)(v81 + 20) != 0) + 1;
          v18 = 0;
        }
        if ( v18 >= 0 )
        {
          v82 = *v7;
          v83 = 0;
          while ( (__int64 *)v82 != v7 && !v83 )
          {
            if ( *(_DWORD *)(v82 + 20) < 2u && *(_DWORD *)(v82 + 64) == v41 )
              v83 = 1;
            else
              v82 = *(_QWORD *)v82;
          }
          v84 = v83 != 0;
          v85 = (unsigned __int16 *)&unk_1C0016D32;
          v86 = v82 & -(__int64)v84;
          v87 = 0LL;
          while ( *(_DWORD *)(v67 + 40) != *(v85 - 1) || *(_DWORD *)(v67 + 44) != *v85 )
          {
            v87 = (unsigned int)(v87 + 1);
            v85 += 4;
            if ( (unsigned int)v87 >= 0xA )
            {
              LOBYTE(v88) = 0;
              goto LABEL_143;
            }
          }
          v88 = dword_1C0016D34[2 * v87];
LABEL_143:
          *(GUID *)v78 = GUID_NULL;
          if ( v86 )
            break;
        }
LABEL_167:
        ++v66;
        ++v41;
        if ( v66 >= v37 )
          goto LABEL_168;
      }
      if ( *(_DWORD *)((v82 & -(__int64)v84) + 0x44) == 2305 )
      {
        v89 = KSCATEGORY_AUDIO;
LABEL_166:
        *(GUID *)v78 = v89;
        goto LABEL_167;
      }
      v90 = *(unsigned __int16 *)((v82 & -(__int64)v84) + 0x44) - 537781792;
      *((_DWORD *)v78 + 1) = 298907407;
      *(_DWORD *)v78 = v90;
      *((_DWORD *)v78 + 2) = -1610606663;
      *((_DWORD *)v78 + 3) = -1775164727;
      if ( (v88 & 1) != 0 )
      {
        if ( *(_QWORD *)v78 == *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
          && *((_QWORD *)v78 + 1) == *(_QWORD *)KSNODETYPE_SPEAKER.Data4 )
        {
          v91 = KSNODETYPE_COMMUNICATION_SPEAKER;
        }
        else
        {
          if ( *(_QWORD *)v78 != *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
            || *((_QWORD *)v78 + 1) != *(_QWORD *)KSNODETYPE_MICROPHONE.Data4 )
          {
            goto LABEL_161;
          }
          v91 = KSNODETYPE_PERSONAL_MICROPHONE;
        }
      }
      else
      {
        if ( (v88 & 2) == 0
          || (*(_QWORD *)v78 != *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
           || *((_QWORD *)v78 + 1) != *(_QWORD *)KSNODETYPE_SPEAKER.Data4)
          && (*(_QWORD *)v78 != *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
           || *((_QWORD *)v78 + 1) != *(_QWORD *)KSNODETYPE_MICROPHONE.Data4) )
        {
          goto LABEL_161;
        }
        v91 = KSNODETYPE_HANDSET;
      }
      *(GUID *)v78 = v91;
LABEL_161:
      if ( *(_QWORD *)v78 != *(_QWORD *)&KSNODETYPE_HEADSET.Data1
        || *((_QWORD *)v78 + 1) != *(_QWORD *)KSNODETYPE_HEADSET.Data4 )
      {
        goto LABEL_167;
      }
      if ( *(_DWORD *)(v86 + 20) )
        v89 = KSNODETYPE_COMMUNICATION_SPEAKER;
      else
        v89 = KSNODETYPE_PERSONAL_MICROPHONE;
      goto LABEL_166;
    }
LABEL_168:
    if ( v18 < 0 || (v18 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), PoolWithTag, ExFreePool), v18 < 0) )
LABEL_170:
      ExFreePool(PoolWithTag);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v18;
}
