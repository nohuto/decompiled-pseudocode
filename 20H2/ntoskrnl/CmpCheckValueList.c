/*
 * XREFs of CmpCheckValueList @ 0x1406731E0
 * Callers:
 *     CmpCheckKey @ 0x140673FC0 (CmpCheckKey.c)
 * Callees:
 *     RtlClearBits @ 0x140268180 (RtlClearBits.c)
 *     SetFailureLocation @ 0x1403238E8 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     HvIsCellAllocated @ 0x140675890 (HvIsCellAllocated.c)
 *     HvpMarkCellDirty @ 0x140707C20 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpCheckValueList(
        ULONG_PTR a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        PRTL_BITMAP BitMapHeader,
        __int64 a8,
        _DWORD *a9,
        unsigned int *a10)
{
  unsigned int v10; // esi
  char v11; // r13
  PRTL_BITMAP v12; // r9
  unsigned int v14; // r14d
  unsigned __int64 v15; // r12
  void *v16; // r15
  bool v17; // zf
  __int64 v18; // rsi
  unsigned int v19; // ecx
  __int64 v20; // rsi
  __int64 v21; // rax
  int *v22; // rax
  int v23; // r8d
  int v24; // eax
  unsigned int v25; // r8d
  unsigned int v26; // edx
  __int64 v27; // r9
  bool v28; // si
  _WORD *v29; // rax
  _WORD *v30; // r15
  unsigned int v31; // ecx
  int v32; // edx
  __int16 v33; // r8
  unsigned int v34; // esi
  unsigned __int16 v35; // cx
  unsigned int v36; // esi
  unsigned int v37; // r14d
  __int64 v38; // r13
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // r14
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int v47; // eax
  char v48; // r13
  unsigned int v49; // r12d
  __int64 v50; // rsi
  __int64 v51; // rax
  int v52; // eax
  int v54; // [rsp+20h] [rbp-B1h]
  unsigned int v55; // [rsp+30h] [rbp-A1h]
  char v56; // [rsp+34h] [rbp-9Dh]
  _DWORD v57[2]; // [rsp+38h] [rbp-99h] BYREF
  char v58; // [rsp+40h] [rbp-91h]
  void *v59; // [rsp+48h] [rbp-89h]
  _DWORD v60[2]; // [rsp+50h] [rbp-81h] BYREF
  __int64 v61; // [rsp+58h] [rbp-79h] BYREF
  _DWORD v62[2]; // [rsp+60h] [rbp-71h] BYREF
  unsigned int v63; // [rsp+68h] [rbp-69h]
  _DWORD v64[2]; // [rsp+70h] [rbp-61h] BYREF
  PRTL_BITMAP v65; // [rsp+78h] [rbp-59h]
  _DWORD v66[2]; // [rsp+80h] [rbp-51h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-49h]
  __int64 v68; // [rsp+90h] [rbp-41h]
  _DWORD *v69; // [rsp+98h] [rbp-39h]
  unsigned int *v70; // [rsp+A0h] [rbp-31h]
  _QWORD v71[3]; // [rsp+A8h] [rbp-29h] BYREF

  v10 = a4;
  LODWORD(BugCheckParameter3) = a5;
  v11 = a2;
  v63 = a4;
  v12 = BitMapHeader;
  v14 = 0;
  v57[1] = 0;
  v58 = a2;
  v68 = a3;
  v65 = BitMapHeader;
  v69 = a9;
  v70 = a10;
  v55 = 0;
  v57[0] = -1;
  v60[0] = -1;
  v60[1] = 0;
  v66[0] = -1;
  v66[1] = 0;
  v64[0] = -1;
  v64[1] = 0;
  v62[0] = -1;
  v62[1] = 0;
  v56 = 0;
  strcpy((char *)v71, "SymbolicLinkValue");
  if ( a8 )
  {
    *(_QWORD *)(a8 + 272) = a3;
    *(_DWORD *)(a8 + 280) = -1;
    *(_DWORD *)(a8 + 284) = 0;
    *(_QWORD *)(a8 + 288) = 0LL;
  }
  *a9 = 0;
  *a10 = 0;
  if ( !v10 )
    return 0;
  while ( 1 )
  {
    v15 = *(unsigned int *)(a3 + 4LL * v14);
    v16 = (void *)(a3 + 4LL * v14);
    v59 = v16;
    if ( v11 && v10 != 1 )
    {
      v34 = -1073741492;
      SetFailureLocation(a8, 0, 15, -1073741492, 64);
      goto LABEL_140;
    }
    if ( (_DWORD)v15 == -1 )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 80);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 284) = -1;
        goto LABEL_129;
      }
      goto LABEL_130;
    }
    v61 = 0LL;
    v17 = (*(_BYTE *)(a1 + 140) & 1) == 0;
    LODWORD(v61) = -1;
    if ( v17 )
    {
      v18 = 632LL * ((unsigned int)v15 >> 31);
      v19 = *(_DWORD *)(v18 + a1 + 272);
      if ( (v15 & 0x7FFFFFFF) >= v19 || (v15 & 7) != 0 )
        goto LABEL_27;
      if ( v12 && (v15 & 0x80000000) == 0LL )
      {
        if ( !_bittest64((const signed __int64 *)v12->Buffer, (unsigned int)v15 >> 3) )
          goto LABEL_27;
        RtlClearBits(v12, (unsigned int)v15 >> 3, 1u);
        v19 = *(_DWORD *)(v18 + a1 + 272);
      }
      if ( (unsigned int)v15 + (v15 & 0x80000000) >= v19 )
        goto LABEL_27;
      v20 = *(_QWORD *)(*(_QWORD *)(v18 + a1 + 280) + 8 * ((v15 >> 21) & 0x3FF)) + 24 * ((v15 >> 12) & 0x1FF);
      if ( !v20 || (*(_BYTE *)(v20 + 8) & 2) != 0 )
        goto LABEL_27;
      v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(a1 + 8))(a1, (unsigned int)v15, &v61);
      if ( v21 )
      {
        v22 = (int *)(v21 - 4);
        if ( v22 )
        {
          v23 = (int)v22;
          v24 = *v22;
          v25 = v23 - (*(_DWORD *)(v20 + 8) & 0xFFFFFFF0);
          v26 = -v24;
          v28 = 0;
          if ( v24 < 0 && v26 - 8 <= 0xFFFF8 )
          {
            v27 = *(unsigned int *)((*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
            if ( v26 <= (unsigned __int64)(v27 - 32) && v25 - v24 <= (unsigned int)v27 && v25 >= 0x20 )
              v28 = 1;
          }
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v61);
          if ( !v28 )
          {
LABEL_27:
            SetFailureLocation(a8, 1, 15, -1073741492, 96);
            if ( a8 )
            {
              *(_DWORD *)(a8 + 284) = v15;
LABEL_129:
              *(_DWORD *)(a8 + 280) = v14;
              goto LABEL_130;
            }
            goto LABEL_130;
          }
        }
      }
    }
    v29 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, (unsigned int)v15, v57);
    v30 = v29;
    if ( !v29 )
    {
      v34 = -1073741670;
      SetFailureLocation(a8, 0, 15, -1073741670, 112);
LABEL_140:
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v14;
        *(_DWORD *)(a8 + 284) = v15;
      }
      return v34;
    }
    v31 = -4 - *((_DWORD *)v29 - 1);
    if ( v31 < 0x14 )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 128);
      goto LABEL_124;
    }
    if ( *v29 != 27510 )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 136);
      goto LABEL_124;
    }
    v32 = (unsigned __int16)v29[1];
    if ( v32 + 20 > v31 )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 144);
      goto LABEL_124;
    }
    v33 = v29[8];
    if ( (v33 & 1) == 0 )
    {
      if ( (v32 & 1) != 0 )
      {
        SetFailureLocation(a8, 1, 15, -1073741492, 148);
      }
      else
      {
        if ( (unsigned __int16)v32 <= 0x7FFFu )
          goto LABEL_38;
        SetFailureLocation(a8, 1, 15, -1073741492, 150);
      }
LABEL_124:
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v14;
        *(_DWORD *)(a8 + 284) = v15;
        *(_QWORD *)(a8 + 288) = v30;
      }
      goto LABEL_126;
    }
    if ( (unsigned __int16)v32 > 0x3FFFu )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 146);
      goto LABEL_124;
    }
LABEL_38:
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 2) == 0 && (v33 & 2) != 0 )
    {
      v56 = 1;
      v34 = -1073741492;
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v14;
        *(_DWORD *)(a8 + 284) = v15;
        *(_QWORD *)(a8 + 288) = v29;
      }
      if ( (a6 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a8, 0, 15, -1073741492, 156);
        goto LABEL_144;
      }
      SetFailureLocation(a8, 1, 15, -1073741492, 152);
      if ( !(unsigned __int8)HvpMarkCellDirty(a1, (unsigned int)v15) )
      {
        v34 = -1073741443;
        SetFailureLocation(a8, 1, 15, -1073741443, 154);
LABEL_144:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v57);
        return v34;
      }
      v11 = v58;
      v30[8] &= ~2u;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    }
    if ( v11 )
    {
      if ( *(_QWORD *)(v30 + 10) != v71[0] || *(_QWORD *)(v30 + 14) != v71[1] || *((_BYTE *)v30 + 36) != LOBYTE(v71[2]) )
      {
        v54 = 160;
        goto LABEL_147;
      }
      if ( *((_DWORD *)v30 + 3) != 6 && (v30[8] & 2) == 0 )
      {
        v54 = 176;
        goto LABEL_147;
      }
    }
    v35 = 2 * v30[1];
    if ( (v30[8] & 1) == 0 )
      v35 = v30[1];
    if ( *v69 < (unsigned int)v35 )
      *v69 = v35;
    v36 = *((_DWORD *)v30 + 1);
    if ( v11 )
    {
      if ( (v36 & 1) != 0 )
      {
        v54 = 192;
      }
      else
      {
        if ( v36 <= 0xFFFF )
          goto LABEL_60;
        v54 = 208;
      }
LABEL_147:
      v34 = -1073741492;
      SetFailureLocation(a8, 0, 15, -1073741492, v54);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v14;
        *(_DWORD *)(a8 + 284) = v15;
        *(_QWORD *)(a8 + 288) = v30;
      }
      goto LABEL_144;
    }
LABEL_60:
    if ( (v30[8] & 2) != 0 )
    {
      if ( v36 || *((_DWORD *)v30 + 3) )
      {
        SetFailureLocation(a8, 1, 15, -1073741492, 224);
        goto LABEL_124;
      }
    }
    else if ( v36 >= 0x80000000 )
    {
      if ( v36 + 0x80000000 <= 4 )
        goto LABEL_113;
      SetFailureLocation(a8, 1, 15, -1073741492, 416);
      goto LABEL_124;
    }
    v37 = *((_DWORD *)v30 + 2);
    v38 = 0LL;
    if ( !v36 )
    {
      if ( v37 != -1 )
      {
        SetFailureLocation(a8, 1, 15, -1073741492, 224);
        v14 = v55;
        goto LABEL_124;
      }
      goto LABEL_70;
    }
    if ( !(unsigned __int8)HvIsCellAllocated(a1, v37, v65) )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 240);
      v14 = v55;
      goto LABEL_124;
    }
    v38 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v37, v60);
    if ( !v38 )
    {
      v34 = -1073741670;
      SetFailureLocation(a8, 0, 15, -1073741670, 256);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v55;
        *(_DWORD *)(a8 + 284) = v37;
      }
      goto LABEL_144;
    }
LABEL_70:
    if ( *(_DWORD *)(a1 + 212) < 4u || v36 <= 0x3FD8 )
    {
      if ( !v36 || v36 <= -4 - *(_DWORD *)(v38 - 4) )
        goto LABEL_87;
      SetFailureLocation(a8, 1, 15, -1073741492, 400);
      v14 = v55;
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v55;
        *(_DWORD *)(a8 + 284) = v15;
        *(_QWORD *)(a8 + 288) = v30;
      }
LABEL_104:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v60);
LABEL_126:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v57);
      v16 = v59;
      goto LABEL_130;
    }
    if ( (unsigned int)(-4 - *(_DWORD *)(v38 - 4)) < 8
      || *(_WORD *)v38 != 25188
      || !*(_WORD *)(v38 + 2)
      || (v39 = *(unsigned int *)(v38 + 4), (_DWORD)v39 == -1) )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 272);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v55;
        *(_DWORD *)(a8 + 284) = v37;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v60);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v57);
      v14 = v55;
      v16 = v59;
      goto LABEL_130;
    }
    if ( !(unsigned __int8)HvIsCellAllocated(a1, v39, v65) )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 288);
      v14 = v55;
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v55;
        *(_DWORD *)(a8 + 284) = *(_DWORD *)(v38 + 4);
        *(_QWORD *)(a8 + 288) = v38;
      }
      goto LABEL_104;
    }
    v40 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v38 + 4), v62);
    v61 = v40;
    v41 = v40;
    if ( !v40 )
    {
      v34 = -1073741670;
      SetFailureLocation(a8, 0, 15, -1073741670, 304);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v55;
        *(_DWORD *)(a8 + 284) = *(_DWORD *)(v38 + 4);
      }
LABEL_158:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v60);
      goto LABEL_144;
    }
    v42 = *(unsigned __int16 *)(v38 + 2);
    if ( (unsigned __int64)(4 * v42) < 4 || 4 * v42 > (unsigned __int64)(unsigned int)(-4 - *(_DWORD *)(v40 - 4)) )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 320);
      goto LABEL_99;
    }
    if ( (_DWORD)v42 != (v36 + 16343) / 0x3FD8 )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 336);
LABEL_99:
      v14 = v55;
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v55;
        *(_DWORD *)(a8 + 284) = v15;
        *(_QWORD *)(a8 + 288) = v30;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
      goto LABEL_104;
    }
    v43 = 0LL;
    if ( !(_DWORD)v42 )
    {
LABEL_86:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(a1 + 16))(a1, v62, v42, v41);
LABEL_87:
      if ( v38 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v60);
      v36 = *((_DWORD *)v30 + 1);
      v14 = v55;
LABEL_113:
      v47 = v36 + 0x80000000;
      if ( v36 < 0x80000000 )
        v47 = v36;
      if ( *v70 < v47 )
        *v70 = v47;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v57);
      v48 = v56;
      ++v14;
      v10 = v63;
      v55 = v14;
      goto LABEL_137;
    }
    while ( (unsigned __int8)HvIsCellAllocated(a1, *(unsigned int *)(v41 + 4 * v43), v65) )
    {
      v44 = v61;
      v45 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v61 + 4 * v43), v64);
      if ( !v45 )
      {
        v34 = -1073741670;
        SetFailureLocation(a8, 0, 15, -1073741670, 368);
        if ( a8 )
        {
          v51 = v61;
          *(_DWORD *)(a8 + 280) = v43;
          *(_DWORD *)(a8 + 284) = *(_DWORD *)(v51 + 4 * v43);
          *(_QWORD *)(a8 + 288) = v38;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
        goto LABEL_158;
      }
      if ( (unsigned int)(-4 - *(_DWORD *)(v45 - 4)) < 0x3FD8 )
      {
        SetFailureLocation(a8, 1, 15, -1073741492, 384);
        if ( a8 )
        {
          *(_DWORD *)(a8 + 280) = v43;
          *(_DWORD *)(a8 + 284) = *(_DWORD *)(v44 + 4 * v43);
          *(_QWORD *)(a8 + 288) = v38;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v64);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v60);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v57);
        v14 = v55;
        v16 = v59;
        goto LABEL_130;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v64);
      v43 = (unsigned int)(v43 + 1);
      v41 = v44;
      if ( (unsigned int)v43 >= *(unsigned __int16 *)(v38 + 2) )
        goto LABEL_86;
    }
    SetFailureLocation(a8, 1, 15, -1073741492, 352);
    if ( a8 )
    {
      v46 = v61;
      *(_DWORD *)(a8 + 280) = v43;
      *(_DWORD *)(a8 + 284) = *(_DWORD *)(v46 + 4 * v43);
      *(_QWORD *)(a8 + 288) = v38;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v60);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v57);
    v14 = v55;
    v16 = v59;
LABEL_130:
    if ( (a6 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a8, 0, 15, -1073741492, 48);
      return (unsigned int)-1073741492;
    }
    SetFailureLocation(a8, 1, 15, -1073741492, 0);
    v49 = BugCheckParameter3;
    v50 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, (unsigned int)BugCheckParameter3, v66);
    if ( !v50 )
    {
      v34 = -1073741670;
      SetFailureLocation(a8, 0, 15, -1073741670, 16);
      return v34;
    }
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, v49) )
      break;
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, *(unsigned int *)(v50 + 40)) )
    {
      v52 = 40;
      goto LABEL_164;
    }
    --*(_DWORD *)(v50 + 36);
    v10 = --v63;
    memmove(v16, (const void *)(v68 + 4LL * (v14 + 1)), 4LL * (v63 - v14));
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v66);
    v48 = 1;
    v56 = 1;
LABEL_137:
    if ( v14 >= v10 )
    {
      if ( v48 )
        return (unsigned int)-2147483606;
      return 0;
    }
    v12 = v65;
    v11 = v58;
    a3 = v68;
  }
  v52 = 24;
LABEL_164:
  v34 = -1073741443;
  SetFailureLocation(a8, 0, 15, -1073741443, v52);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v66);
  return v34;
}
