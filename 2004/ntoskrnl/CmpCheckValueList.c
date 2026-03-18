/*
 * XREFs of CmpCheckValueList @ 0x1406709B0
 * Callers:
 *     CmpCheckKey @ 0x140670F70 (CmpCheckKey.c)
 * Callees:
 *     RtlClearBits @ 0x140281070 (RtlClearBits.c)
 *     SetFailureLocation @ 0x140352EE8 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     HvIsCellAllocated @ 0x1406718D0 (HvIsCellAllocated.c)
 *     HvpMarkCellDirty @ 0x14069FC00 (HvpMarkCellDirty.c)
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
  __int64 v10; // r15
  __int64 v11; // r14
  unsigned int v12; // edi
  char v14; // al
  unsigned int v15; // esi
  PRTL_BITMAP v16; // r9
  unsigned __int64 v17; // r12
  bool v18; // zf
  __int64 v19; // rbx
  unsigned int v20; // ecx
  __int64 v21; // rbx
  __int64 v22; // rax
  int *v23; // rax
  int v24; // r8d
  int v25; // eax
  unsigned int v26; // r8d
  unsigned int v27; // edx
  __int64 v28; // r9
  bool v29; // bl
  _WORD *v30; // rax
  _WORD *v31; // rdi
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned __int16 v34; // dx
  __int16 v35; // cx
  unsigned __int16 v36; // ax
  unsigned int v37; // ebx
  unsigned int v38; // eax
  unsigned int v39; // ebx
  unsigned int v41; // r14d
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // r12
  unsigned __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rdi
  unsigned int v51; // r12d
  __int64 v52; // rbx
  void *v53; // rcx
  _DWORD *v54; // rdx
  int v55; // eax
  __int64 v56; // rdi
  int v57; // [rsp+20h] [rbp-A9h]
  unsigned int v58; // [rsp+30h] [rbp-99h]
  int v59; // [rsp+34h] [rbp-95h]
  char v60; // [rsp+38h] [rbp-91h]
  char v61; // [rsp+39h] [rbp-90h]
  _DWORD v62[2]; // [rsp+40h] [rbp-89h] BYREF
  _DWORD v63[2]; // [rsp+48h] [rbp-81h] BYREF
  __int64 v64; // [rsp+50h] [rbp-79h]
  __int64 v65; // [rsp+58h] [rbp-71h]
  _DWORD v66[2]; // [rsp+60h] [rbp-69h] BYREF
  int v67; // [rsp+68h] [rbp-61h]
  PRTL_BITMAP v68; // [rsp+70h] [rbp-59h]
  __int64 v69; // [rsp+78h] [rbp-51h] BYREF
  _DWORD v70[2]; // [rsp+80h] [rbp-49h] BYREF
  _DWORD v71[2]; // [rsp+88h] [rbp-41h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp-39h]
  _DWORD *v73; // [rsp+98h] [rbp-31h]
  unsigned int *v74; // [rsp+A0h] [rbp-29h]
  void *v75; // [rsp+A8h] [rbp-21h]
  _QWORD v76[3]; // [rsp+B0h] [rbp-19h] BYREF

  v10 = a8;
  v11 = a3;
  v12 = a4;
  v62[1] = 0;
  v14 = 0;
  v64 = a3;
  v59 = a4;
  v15 = 0;
  v16 = BitMapHeader;
  v61 = a2;
  v65 = a8;
  LODWORD(BugCheckParameter3) = a5;
  v68 = BitMapHeader;
  v73 = a9;
  v74 = a10;
  v58 = 0;
  v62[0] = -1;
  v63[0] = -1;
  v63[1] = 0;
  v71[0] = -1;
  v71[1] = 0;
  v70[0] = -1;
  v70[1] = 0;
  v66[0] = -1;
  v66[1] = 0;
  v60 = 0;
  strcpy((char *)v76, "SymbolicLinkValue");
  if ( a8 )
  {
    *(_QWORD *)(a8 + 272) = a3;
    *(_DWORD *)(a8 + 280) = -1;
    *(_DWORD *)(a8 + 284) = 0;
    *(_QWORD *)(a8 + 288) = 0LL;
  }
  *a9 = 0;
  *a10 = 0;
  while ( 1 )
  {
    if ( v15 >= v12 )
    {
      if ( v14 )
        return (unsigned int)-2147483606;
      else
        return 0;
    }
    v17 = *(unsigned int *)(v11 + 4LL * v15);
    v67 = *(_DWORD *)(v11 + 4LL * v15);
    v75 = (void *)(v11 + 4LL * v15);
    if ( a2 )
    {
      if ( v12 != 1 )
        break;
    }
    if ( (_DWORD)v17 == -1 )
    {
      SetFailureLocation(v10, 1, 15, -1073741492, 80);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 284) = -1;
        goto LABEL_142;
      }
LABEL_143:
      if ( (a6 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v10, 0, 15, -1073741492, 48);
        return (unsigned int)-1073741492;
      }
      SetFailureLocation(v10, 1, 15, -1073741492, 0);
      v51 = BugCheckParameter3;
      v52 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, (unsigned int)BugCheckParameter3, v71);
      if ( !v52 )
      {
        v39 = -1073741670;
        SetFailureLocation(v10, 0, 15, -1073741670, 16);
        return v39;
      }
      if ( !(unsigned __int8)HvpMarkCellDirty(a1, v51) )
      {
        v55 = 24;
LABEL_158:
        v39 = -1073741443;
        SetFailureLocation(v10, 0, 15, -1073741443, v55);
        v54 = v71;
        goto LABEL_159;
      }
      if ( !(unsigned __int8)HvpMarkCellDirty(a1, *(unsigned int *)(v52 + 40)) )
      {
        v55 = 40;
        goto LABEL_158;
      }
      v53 = v75;
      --*(_DWORD *)(v52 + 36);
      v59 = --v12;
      memmove(v53, (const void *)(v11 + 4LL * (v15 + 1)), 4LL * (v12 - v15));
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v71);
      v16 = v68;
      v14 = 1;
      a2 = v61;
      v60 = 1;
    }
    else
    {
      v69 = 0LL;
      v18 = (*(_BYTE *)(a1 + 140) & 1) == 0;
      LODWORD(v69) = -1;
      if ( !v18 )
        goto LABEL_26;
      v19 = 632LL * ((unsigned int)v17 >> 31);
      v20 = *(_DWORD *)(v19 + a1 + 272);
      if ( (v17 & 0x7FFFFFFF) >= v20 || (v17 & 7) != 0 )
        goto LABEL_81;
      if ( v16 && (v17 & 0x80000000) == 0LL )
      {
        if ( !_bittest64((const signed __int64 *)v16->Buffer, (unsigned int)v17 >> 3) )
          goto LABEL_81;
        RtlClearBits(v16, (unsigned int)v17 >> 3, 1u);
        v20 = *(_DWORD *)(v19 + a1 + 272);
      }
      if ( (unsigned int)v17 + (v17 & 0x80000000) >= v20 )
        goto LABEL_81;
      v21 = *(_QWORD *)(*(_QWORD *)(v19 + a1 + 280) + 8 * ((v17 >> 21) & 0x3FF)) + 24 * ((v17 >> 12) & 0x1FF);
      if ( !v21 || (*(_BYTE *)(v21 + 8) & 2) != 0 )
        goto LABEL_81;
      v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(a1 + 8))(a1, (unsigned int)v17, &v69);
      if ( v22 )
      {
        v23 = (int *)(v22 - 4);
        if ( v23 )
        {
          v24 = (int)v23;
          v25 = *v23;
          v26 = v24 - (*(_DWORD *)(v21 + 8) & 0xFFFFFFF0);
          v27 = -v25;
          v29 = 0;
          if ( v25 < 0 && v27 - 8 <= 0xFFFF8 )
          {
            v28 = *(unsigned int *)((*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
            if ( v27 <= (unsigned __int64)(v28 - 32) && v26 - v25 <= (unsigned int)v28 && v26 >= 0x20 )
              v29 = 1;
          }
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v69);
          if ( !v29 )
          {
LABEL_81:
            SetFailureLocation(v10, 1, 15, -1073741492, 96);
            if ( v10 )
            {
              *(_DWORD *)(v10 + 284) = v17;
LABEL_142:
              *(_DWORD *)(v10 + 280) = v15;
              goto LABEL_143;
            }
            goto LABEL_143;
          }
        }
      }
LABEL_26:
      v30 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, (unsigned int)v17, v62);
      v31 = v30;
      if ( !v30 )
      {
        v39 = -1073741670;
        SetFailureLocation(v10, 0, 15, -1073741670, 112);
        goto LABEL_151;
      }
      v32 = -4 - *((_DWORD *)v30 - 1);
      if ( v32 < 0x14 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 128);
        if ( v10 )
          goto LABEL_138;
        goto LABEL_139;
      }
      if ( *v30 != 27510 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 136);
        if ( v10 )
          goto LABEL_138;
        goto LABEL_139;
      }
      v33 = (unsigned __int16)v30[1] + 20;
      if ( v33 < 0x14 || v33 > v32 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 144);
        if ( v10 )
          goto LABEL_138;
        goto LABEL_139;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 2) == 0 && (v31[8] & 2) != 0 )
      {
        v60 = 1;
        v39 = -1073741492;
        if ( v10 )
        {
          *(_DWORD *)(v10 + 280) = v15;
          *(_DWORD *)(v10 + 284) = v17;
          *(_QWORD *)(v10 + 288) = v31;
        }
        if ( (a6 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v10, 0, 15, -1073741492, 156);
          goto LABEL_156;
        }
        SetFailureLocation(v10, 1, 15, -1073741492, 152);
        if ( !(unsigned __int8)HvpMarkCellDirty(a1, (unsigned int)v17) )
        {
          v39 = -1073741443;
          SetFailureLocation(v10, 1, 15, -1073741443, 154);
          goto LABEL_156;
        }
        v31[8] &= ~2u;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      }
      if ( v61 )
      {
        v48 = *(_QWORD *)(v31 + 10) - v76[0];
        if ( !v48 )
        {
          v48 = *(_QWORD *)(v31 + 14) - v76[1];
          if ( !v48 )
            v48 = *((unsigned __int8 *)v31 + 36) - (unsigned __int64)LOBYTE(v76[2]);
        }
        if ( v48 )
        {
          v57 = 160;
          goto LABEL_162;
        }
        if ( *((_DWORD *)v31 + 3) != 6 && (v31[8] & 2) == 0 )
        {
          v57 = 176;
LABEL_162:
          v39 = -1073741492;
          SetFailureLocation(v10, 0, 15, -1073741492, v57);
          if ( v10 )
          {
            *(_DWORD *)(v10 + 280) = v15;
            *(_DWORD *)(v10 + 284) = v17;
            *(_QWORD *)(v10 + 288) = v31;
          }
LABEL_156:
          v54 = v62;
LABEL_159:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v54);
          return v39;
        }
      }
      v34 = 2 * v31[1];
      v35 = v31[8] & 1;
      v36 = v34;
      if ( !v35 )
        v36 = v31[1];
      if ( *v73 < (unsigned int)v36 )
      {
        if ( !v35 )
          v34 = v31[1];
        *v73 = v34;
      }
      v37 = *((_DWORD *)v31 + 1);
      if ( v61 )
      {
        if ( (v37 & 1) != 0 )
        {
          v57 = 192;
          goto LABEL_162;
        }
        if ( v37 > 0xFFFF )
        {
          v57 = 208;
          goto LABEL_162;
        }
      }
      if ( (v31[8] & 2) != 0 )
      {
        if ( v37 || *((_DWORD *)v31 + 3) )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 224);
          if ( v10 )
            goto LABEL_138;
          goto LABEL_139;
        }
      }
      else if ( v37 >= 0x80000000 )
      {
        if ( v37 + 0x80000000 <= 4 )
          goto LABEL_44;
        SetFailureLocation(v10, 1, 15, -1073741492, 416);
        if ( v10 )
        {
LABEL_138:
          *(_DWORD *)(v10 + 280) = v15;
          *(_DWORD *)(v10 + 284) = v17;
          *(_QWORD *)(v10 + 288) = v31;
        }
LABEL_139:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
        v12 = v59;
        goto LABEL_143;
      }
      v41 = *((_DWORD *)v31 + 2);
      v42 = 0LL;
      if ( v37 )
      {
        if ( !(unsigned __int8)HvIsCellAllocated(a1, v41, v68) )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 240);
          v15 = v58;
          if ( !v10 )
            goto LABEL_109;
LABEL_106:
          *(_DWORD *)(v10 + 280) = v15;
          *(_DWORD *)(v10 + 284) = v17;
          *(_QWORD *)(v10 + 288) = v31;
          goto LABEL_109;
        }
        v42 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v41, v63);
        if ( !v42 )
        {
          v39 = -1073741670;
          SetFailureLocation(v10, 0, 15, -1073741670, 256);
          if ( v10 )
          {
            *(_DWORD *)(v10 + 280) = v58;
            *(_DWORD *)(v10 + 284) = v41;
          }
          goto LABEL_156;
        }
      }
      else if ( v41 != -1 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 224);
        v15 = v58;
        if ( !v10 )
          goto LABEL_109;
        goto LABEL_106;
      }
      if ( v37 <= 0x3FD8 || *(_DWORD *)(a1 + 212) < 4u )
      {
        if ( v37 && v37 > -4 - *(_DWORD *)(v42 - 4) )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 400);
          v15 = v58;
          if ( !v10 )
            goto LABEL_108;
          *(_DWORD *)(v10 + 284) = v17;
          *(_QWORD *)(v10 + 288) = v31;
LABEL_107:
          *(_DWORD *)(v10 + 280) = v15;
          goto LABEL_108;
        }
      }
      else
      {
        if ( (unsigned int)(-4 - *(_DWORD *)(v42 - 4)) < 8
          || *(_WORD *)v42 != 25188
          || !*(_WORD *)(v42 + 2)
          || (v43 = *(unsigned int *)(v42 + 4), (_DWORD)v43 == -1) )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 272);
          v15 = v58;
          if ( !v10 )
            goto LABEL_108;
          *(_DWORD *)(v10 + 284) = v41;
          goto LABEL_107;
        }
        if ( !(unsigned __int8)HvIsCellAllocated(a1, v43, v68) )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 288);
          if ( v10 )
          {
            *(_DWORD *)(v10 + 280) = v58;
            *(_DWORD *)(v10 + 284) = *(_DWORD *)(v42 + 4);
            *(_QWORD *)(v10 + 288) = v42;
          }
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v63);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
          v15 = v58;
          goto LABEL_111;
        }
        v44 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v42 + 4), v66);
        if ( !v44 )
        {
          v39 = -1073741670;
          SetFailureLocation(v10, 0, 15, -1073741670, 304);
          if ( v10 )
          {
            *(_DWORD *)(v10 + 280) = v58;
            *(_DWORD *)(v10 + 284) = *(_DWORD *)(v42 + 4);
          }
LABEL_155:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v63);
          goto LABEL_156;
        }
        v45 = 4LL * *(unsigned __int16 *)(v42 + 2);
        if ( v45 < 4 || v45 > (unsigned int)(-4 - *(_DWORD *)(v44 - 4)) )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 320);
          v15 = v58;
          if ( v10 )
          {
LABEL_122:
            *(_DWORD *)(v10 + 284) = v67;
            *(_DWORD *)(v10 + 280) = v15;
            *(_QWORD *)(v10 + 288) = v31;
          }
LABEL_123:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v66);
LABEL_108:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v63);
LABEL_109:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
LABEL_111:
          v12 = v59;
          v11 = v64;
          goto LABEL_143;
        }
        if ( *(unsigned __int16 *)(v42 + 2) != (v37 + 16343) / 0x3FD8 )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 336);
          v15 = v58;
          if ( v10 )
            goto LABEL_122;
          goto LABEL_123;
        }
        v46 = 0LL;
        if ( *(_WORD *)(v42 + 2) )
        {
          while ( (unsigned __int8)HvIsCellAllocated(a1, *(unsigned int *)(v44 + 4 * v46), v68) )
          {
            v47 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(
                    a1,
                    *(unsigned int *)(v44 + 4 * v46),
                    v70);
            if ( !v47 )
            {
              v56 = v65;
              v39 = -1073741670;
              SetFailureLocation(v65, 0, 15, -1073741670, 368);
              if ( v56 )
              {
                *(_DWORD *)(v56 + 280) = v46;
                *(_DWORD *)(v56 + 284) = *(_DWORD *)(v44 + 4 * v46);
                *(_QWORD *)(v56 + 288) = v42;
              }
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v66);
              goto LABEL_155;
            }
            if ( (unsigned int)(-4 - *(_DWORD *)(v47 - 4)) < 0x3FD8 )
            {
              v49 = v65;
              SetFailureLocation(v65, 1, 15, -1073741492, 384);
              v10 = v49;
              if ( v49 )
              {
                *(_DWORD *)(v49 + 280) = v46;
                *(_DWORD *)(v49 + 284) = *(_DWORD *)(v44 + 4 * v46);
                *(_QWORD *)(v49 + 288) = v42;
              }
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v70);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v66);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v63);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
              v15 = v58;
              goto LABEL_111;
            }
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v70);
            v46 = (unsigned int)(v46 + 1);
            if ( (unsigned int)v46 >= *(unsigned __int16 *)(v42 + 2) )
            {
              v10 = v65;
              goto LABEL_77;
            }
          }
          v50 = v65;
          SetFailureLocation(v65, 1, 15, -1073741492, 352);
          v10 = v50;
          if ( v50 )
          {
            *(_DWORD *)(v50 + 280) = v46;
            *(_DWORD *)(v50 + 284) = *(_DWORD *)(v44 + 4 * v46);
            *(_QWORD *)(v50 + 288) = v42;
          }
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v66);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v63);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
          v15 = v58;
          goto LABEL_111;
        }
LABEL_77:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v66);
      }
      if ( v42 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v63);
      v37 = *((_DWORD *)v31 + 1);
      v15 = v58;
      v11 = v64;
LABEL_44:
      v38 = v37 + 0x80000000;
      if ( v37 < 0x80000000 )
        v38 = v37;
      if ( *v74 < v38 )
        *v74 = v38;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
      v12 = v59;
      ++v15;
      v16 = v68;
      a2 = v61;
      v14 = v60;
      v58 = v15;
    }
  }
  v39 = -1073741492;
  SetFailureLocation(v10, 0, 15, -1073741492, 64);
LABEL_151:
  if ( v10 )
  {
    *(_DWORD *)(v10 + 280) = v15;
    *(_DWORD *)(v10 + 284) = v17;
  }
  return v39;
}
