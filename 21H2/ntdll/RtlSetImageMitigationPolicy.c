/*
 * XREFs of RtlSetImageMitigationPolicy @ 0x1800E2620
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007630C (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     NtOpenKey @ 0x18009D880 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D920 (NtQueryValueKey.c)
 *     ZwSetValueKey @ 0x18009E230 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x18009F110 (ZwDeleteValueKey.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800E3858 (RtlpDeleteEmptyImageFileOptionsKey.c)
 */

__int64 __fastcall RtlSetImageMitigationPolicy(__int64 a1, int a2, char a3, _QWORD *a4, int a5)
{
  int v5; // r14d
  char v6; // si
  const wchar_t *v10; // rdx
  int v11; // r12d
  int inited; // ebx
  int v13; // eax
  int ValueKey; // eax
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // r9d
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  bool v57; // cf
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r9
  __int64 v61; // r10
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r9
  unsigned __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // r10
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  int v77; // edi
  int v78; // edi
  int v79; // edi
  int v80; // edi
  int v81; // edi
  int v82; // edi
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // r10
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rcx
  int v91; // r10d
  __int64 v92; // rcx
  __int64 v93; // rax
  unsigned __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  unsigned __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rax
  unsigned __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rcx
  unsigned __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // r8
  unsigned __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rax
  unsigned __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r8
  unsigned __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rcx
  unsigned __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rdx
  unsigned __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // r8
  __int64 v132; // r11
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // r9
  __int64 v136; // rdx
  __int64 v137; // rdx
  __int64 v138; // r8
  unsigned __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rcx
  __int64 v142; // r11
  __int64 v143; // rax
  HANDLE Handle; // [rsp+40h] [rbp-89h] BYREF
  char v146[16]; // [rsp+48h] [rbp-81h] BYREF
  char v147[16]; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int16 v148[8]; // [rsp+70h] [rbp-59h] BYREF
  int v149; // [rsp+80h] [rbp-49h]
  __int64 v150; // [rsp+88h] [rbp-41h]
  void *v151; // [rsp+90h] [rbp-39h]
  int v152; // [rsp+98h] [rbp-31h]
  __int128 v153; // [rsp+A0h] [rbp-29h]
  __int128 v154; // [rsp+B0h] [rbp-19h] BYREF
  unsigned __int64 v155; // [rsp+C0h] [rbp-9h]
  unsigned int Size; // [rsp+D0h] [rbp+7h]
  size_t Size_4; // [rsp+D4h] [rbp+Bh] BYREF

  Handle = 0LL;
  v155 = 0LL;
  v5 = a3 & 2;
  v6 = a3 & 1;
  v10 = L"MitigationOptions";
  v154 = 0LL;
  v11 = a3 & 8;
  if ( (a3 & 8) != 0 )
    v10 = L"MitigationAuditOptions";
  inited = RtlInitUnicodeStringEx((__int64)v146, (__int64)v10);
  if ( inited >= 0 )
  {
    inited = RtlInitUnicodeStringEx((__int64)v147, (__int64)L"EAFModules");
    if ( inited >= 0 )
    {
      if ( (v6 || v5) && (a5 || a4) )
        goto LABEL_300;
      inited = RtlInitUnicodeStringEx((__int64)v148, a1);
      if ( inited < 0 )
        goto LABEL_303;
      if ( a1 )
      {
        v13 = RtlpOpenImageFileOptionsKeyEx(v148, 131087LL, v5 == 0, &Handle);
      }
      else
      {
        v150 = 0LL;
        v151 = &unk_18011DB70;
        v149 = 48;
        v152 = 576;
        v153 = 0LL;
        v13 = NtOpenKey();
      }
      inited = v13;
      if ( v13 < 0 )
        goto LABEL_301;
      ValueKey = NtQueryValueKey();
      inited = ValueKey;
      if ( ValueKey >= 0 )
      {
        if ( Size > 0x18 )
        {
          inited = -1073741788;
          goto LABEL_301;
        }
        memmove(&v154, &Size_4, Size);
      }
      else if ( ValueKey != -1073741772 )
      {
        goto LABEL_301;
      }
      if ( a2 <= 9 )
      {
        if ( a2 == 9 )
        {
          if ( v6 )
          {
            v21 = 0xFFF0FFFFFFFFFFFFuLL;
            goto LABEL_32;
          }
          if ( a5 != 8 )
            goto LABEL_300;
          v44 = 0xFFF0FFFFFFFFFFFFuLL;
          v75 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v76 = v75 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v76 = v75 != 0 ? 7LL : 3LL;
            }
            else
            {
              v76 = v75 != 0 ? 5LL : 1LL;
            }
            v43 = v76 << 48;
            goto LABEL_76;
          }
          v57 = v75 != 0;
          v58 = 0x4000000000000LL;
          goto LABEL_154;
        }
        if ( !a2 )
        {
          if ( v6 )
          {
            *(_QWORD *)&v154 = v154 & 0xFFFFFFFFFFFFFFF0uLL;
            goto LABEL_299;
          }
          if ( a5 != 8 )
            goto LABEL_300;
          v74 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v43 = v74 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v43 = v74 != 0 ? 7LL : 3LL;
            }
            else
            {
              v43 = v74 != 0 ? 5LL : 1LL;
            }
          }
          else
          {
            v43 = v74 != 0 ? 4 : 0;
          }
          v46 = v154 & 0xFFFFFFFFFFFFFFF0uLL;
          goto LABEL_148;
        }
        v15 = a2 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 2;
                if ( v19 )
                {
                  v20 = v19 - 1;
                  if ( v20 )
                  {
                    if ( v20 != 1 )
                      goto LABEL_301;
                    if ( v6 )
                    {
                      v21 = 0xFFFF0FFFFFFFFFFFuLL;
LABEL_32:
                      *(_QWORD *)&v154 = v21 & v154;
LABEL_299:
                      inited = ZwSetValueKey();
                      goto LABEL_301;
                    }
                    if ( a5 == 16 )
                    {
                      v22 = a4[1];
                      v23 = v22 & 4;
                      v24 = *a4 & 4LL;
                      if ( (*a4 & 3) != 0 )
                      {
                        if ( (*a4 & 3LL) == 2 )
                        {
                          v26 = v24 != 0 ? 6LL : 2LL;
                        }
                        else if ( (*(_BYTE *)a4 & 8) != 0 )
                        {
                          v26 = v24 != 0 ? 7LL : 3LL;
                        }
                        else
                        {
                          v26 = v24 != 0 ? 5LL : 1LL;
                        }
                        v25 = v26 << 44;
                      }
                      else
                      {
                        v25 = -(__int64)(v24 != 0) & 0x400000000000LL;
                      }
                      *(_QWORD *)&v154 = v154 & 0xFFFF0FFFFFFFFFFFuLL | v25;
                      v27 = v22 & 3;
                      if ( v27 )
                      {
                        if ( v27 == 2LL )
                        {
                          v28 = (v23 != 0 ? 6LL : 2LL) << 44;
                          v30 = v23 != 0 ? 96LL : 32LL;
                        }
                        else
                        {
                          v28 = (v23 != 0 ? 5LL : 1LL) << 44;
                          v30 = v23 != 0 ? 80LL : 16LL;
                        }
                        v29 = v30 & 0xFFFF0FFFFFFFFFFFuLL;
                      }
                      else
                      {
                        v28 = v23 != 0 ? 0x40uLL : 0;
                        v29 = -(__int64)(v23 != 0) & 0x400000000000LL;
                      }
                      v31 = v29 | v28;
                      v32 = 0xFFFF0FFFFFFFFF0FuLL;
                      goto LABEL_49;
                    }
                    goto LABEL_300;
                  }
                  if ( v6 )
                  {
                    v154 &= __PAIR128__(-3841LL, 0xFFFFF0FFFFFFFFFFuLL);
                    goto LABEL_299;
                  }
                  if ( a5 == 16 )
                  {
                    v34 = a4[1];
                    v35 = v34 & 4;
                    v36 = *a4 & 4LL;
                    if ( (*a4 & 3) != 0 )
                    {
                      if ( (*a4 & 3LL) == 2 )
                      {
                        v39 = v154 & 0xFFFFF0FFFFFFFFFFuLL | ((v36 != 0 ? 6LL : 2LL) << 40);
                        v38 = *((_QWORD *)&v154 + 1);
                        *(_QWORD *)&v154 = v39;
                        v31 = v35 != 0 ? 1536LL : 512LL;
                        goto LABEL_66;
                      }
                      if ( (*(_BYTE *)a4 & 8) != 0 )
                        v40 = v36 != 0 ? 7LL : 3LL;
                      else
                        v40 = v36 != 0 ? 5LL : 1LL;
                      v38 = *((_QWORD *)&v154 + 1);
                      *(_QWORD *)&v154 = v154 & 0xFFFFF0FFFFFFFFFFuLL | (v40 << 40);
                      v41 = v34 & 3;
                      if ( v41 )
                      {
                        if ( v41 != 2LL )
                        {
                          v31 = v35 != 0 ? 1280LL : 256LL;
                          goto LABEL_66;
                        }
                        goto LABEL_56;
                      }
                    }
                    else
                    {
                      v37 = v154 & 0xFFFFF0FFFFFFFFFFuLL | -(__int64)(v36 != 0) & 0x40000000000LL;
                      v38 = *((_QWORD *)&v154 + 1);
                      *(_QWORD *)&v154 = v37;
                      if ( (v34 & 3) == 2 )
                      {
LABEL_56:
                        v31 = v35 != 0 ? 1536LL : 512LL;
LABEL_66:
                        v33 = v38 & 0xFFFFFFFFFFFFF0FFuLL;
                        goto LABEL_50;
                      }
                    }
                    v31 = v35 != 0 ? 0x400 : 0;
                    goto LABEL_66;
                  }
LABEL_300:
                  inited = -1073741811;
                  goto LABEL_301;
                }
                if ( v6 )
                {
                  v21 = 0xFFFFFFF0FFFFFFFFuLL;
                  goto LABEL_32;
                }
                if ( a5 != 8 )
                  goto LABEL_300;
                v42 = *a4 & 4LL;
                if ( (*a4 & 3) != 0 )
                {
                  v44 = 0xFFFFFFF0FFFFFFFFuLL;
                  if ( (*a4 & 3LL) == 2 )
                    v45 = v42 != 0 ? 6LL : 2LL;
                  else
                    v45 = v42 != 0 ? 5LL : 1LL;
                  v43 = v45 << 32;
                }
                else
                {
                  v43 = -(__int64)(v42 != 0) & 0x400000000LL;
                  v44 = 0xFFFFFFF0FFFFFFFFuLL;
                }
                goto LABEL_76;
              }
              if ( v6 )
              {
                *(_QWORD *)&v154 = v154 & 0xFFFFFFFF0FFFFFFFuLL;
                v155 &= 0xFFFFFFFFF0FFFFFFuLL;
                goto LABEL_299;
              }
              if ( a5 != 16 )
                goto LABEL_300;
              v47 = *a4 & 4LL;
              if ( (*a4 & 3) != 0 )
              {
                if ( (*a4 & 3LL) == 2 )
                  v49 = v47 != 0 ? 6LL : 2LL;
                else
                  v49 = v47 != 0 ? 5LL : 1LL;
                v48 = v49 << 28;
              }
              else
              {
                v48 = v47 != 0 ? 0x40000000 : 0;
              }
              *(_QWORD *)&v154 = v154 & 0xFFFFFFFF0FFFFFFFuLL | v48;
              v50 = a4[1] & 4LL;
              if ( (a4[1] & 3) != 0 )
              {
                if ( (a4[1] & 3LL) == 2 )
                  v52 = v50 != 0 ? 6LL : 2LL;
                else
                  v52 = v50 != 0 ? 5LL : 1LL;
                v51 = v52 << 24;
              }
              else
              {
                v51 = v50 != 0 ? 0x4000000 : 0;
              }
              v53 = v155 & 0xFFFFFFFFF0FFFFFFuLL;
LABEL_93:
              v155 = v53 | v51;
              goto LABEL_299;
            }
            if ( v6 )
            {
              *(_QWORD *)&v154 = v154 & 0xFFFFFFFFF0FFFFFFuLL;
              goto LABEL_299;
            }
            if ( a5 != 8 )
              goto LABEL_300;
            v54 = *a4 & 4LL;
            if ( (*a4 & 3) != 0 )
            {
              if ( (*a4 & 3LL) == 2 )
                v55 = v54 != 0 ? 6LL : 2LL;
              else
                v55 = v54 != 0 ? 5LL : 1LL;
              v43 = v55 << 24;
            }
            else
            {
              v43 = v54 != 0 ? 0x4000000 : 0;
            }
            v46 = v154 & 0xFFFFFFFFF0FFFFFFuLL;
            goto LABEL_148;
          }
          if ( v6 )
          {
            v21 = 0xFFFFFF0FFFFFFFFFuLL;
            goto LABEL_32;
          }
          if ( a5 != 8 )
            goto LABEL_300;
          v44 = 0xFFFFFF0FFFFFFFFFuLL;
          v56 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v59 = v56 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v59 = v56 != 0 ? 7LL : 3LL;
            }
            else
            {
              v59 = v56 != 0 ? 5LL : 1LL;
            }
            v43 = v59 << 36;
            goto LABEL_76;
          }
          v57 = v56 != 0;
          v58 = 0x4000000000LL;
LABEL_154:
          v43 = v58 & -(__int64)v57;
LABEL_76:
          v46 = v44 & v154;
          goto LABEL_148;
        }
        if ( v6 )
        {
          *(_QWORD *)&v154 = v154 & 0xFFFFFFFFFF00F0FFuLL;
          goto LABEL_299;
        }
        if ( a5 != 24 )
          goto LABEL_300;
        v60 = a4[1];
        v61 = a4[2];
        v62 = v60 & 4;
        v63 = v61 & 4;
        v64 = *a4 & 4LL;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) == 2 )
          {
            v65 = (((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400) + 512;
          }
          else if ( (*(_BYTE *)a4 & 8) != 0 )
          {
            v65 = (((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400) + 768;
          }
          else
          {
            v65 = (((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400) + 256;
          }
        }
        else
        {
          v65 = ((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400;
        }
        v66 = v60 & 3;
        v67 = v154 & 0xFFFFFFFFFFF0F0FFuLL | v65 & 0xFFFFFFFFFFF0FFFFuLL;
        if ( v66 )
        {
          if ( v66 == 2 )
            v69 = v62 != 0 ? 6LL : 2LL;
          else
            v69 = v62 != 0 ? 5LL : 1LL;
          v68 = v69 << 16;
        }
        else
        {
          v68 = v62 != 0 ? 0x40000 : 0;
        }
        v70 = v61 & 3;
        v71 = (v67 | v68) & 0xFFFFFFFFFF0FFFFFuLL;
        if ( v70 )
        {
          if ( v70 == 2 )
            v73 = v63 != 0 ? 6LL : 2LL;
          else
            v73 = v63 != 0 ? 5LL : 1LL;
          v72 = v73 << 20;
        }
        else
        {
          v72 = v63 != 0 ? 0x400000 : 0;
        }
LABEL_298:
        *(_QWORD *)&v154 = v71 | v72;
        goto LABEL_299;
      }
      v77 = a2 - 10;
      if ( !v77 )
      {
        if ( v6 )
        {
          *(_QWORD *)&v154 = v154 & 0xFFFFFFFFFFFFFLL;
          goto LABEL_299;
        }
        if ( a5 != 24 )
          goto LABEL_300;
        v131 = a4[1];
        v132 = a4[2];
        v133 = *a4 & 4LL;
        v134 = v131 & 4;
        v135 = v132 & 4;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) == 2 )
            v137 = (((unsigned __int128)-(__int128)(unsigned __int64)v133 >> 64) & 4) + 2;
          else
            v137 = (((unsigned __int128)-(__int128)(unsigned __int64)v133 >> 64) & 4) + 1;
          v136 = v137 << 52;
        }
        else
        {
          v136 = -(__int64)(v133 != 0) & 0x40000000000000LL;
        }
        v138 = v131 & 3;
        v139 = v154 & 0xF00FFFFFFFFFFFFFuLL | v136 & 0xF0FFFFFFFFFFFFFFuLL;
        if ( v138 )
        {
          if ( v138 == 2 )
            v141 = v134 != 0 ? 6LL : 2LL;
          else
            v141 = v134 != 0 ? 5LL : 1LL;
          v140 = v141 << 56;
        }
        else
        {
          v140 = -(__int64)(v134 != 0) & 0x400000000000000LL;
        }
        v71 = (v139 | v140) & 0xFFFFFFFFFFFFFFFLL;
        v142 = v132 & 3;
        if ( v142 )
        {
          if ( v142 == 2 )
            v143 = v135 != 0 ? 6LL : 2LL;
          else
            v143 = v135 != 0 ? 5LL : 1LL;
          v72 = v143 << 60;
        }
        else
        {
          v72 = -(__int64)(v135 != 0) & 0x4000000000000000LL;
        }
        goto LABEL_298;
      }
      v78 = v77 - 1;
      if ( !v78 )
      {
        if ( v6 )
        {
          *((_QWORD *)&v154 + 1) &= 0xFFFFF0F00000FFFFuLL;
          if ( !v11 )
            ZwDeleteValueKey();
          goto LABEL_299;
        }
        if ( a5 == 1072 )
        {
          if ( v11 || (inited = ZwSetValueKey(), inited >= 0) )
          {
            v100 = a4[3] & 4LL;
            if ( (a4[3] & 3) != 0 )
            {
              if ( (a4[3] & 3LL) == 2 )
                v102 = v100 != 0 ? 6LL : 2LL;
              else
                v102 = v100 != 0 ? 5LL : 1LL;
              v101 = v102 << 16;
            }
            else
            {
              v101 = v100 != 0 ? 0x40000 : 0;
            }
            v103 = a4[4] & 4LL;
            v104 = a4[4] & 3LL;
            v105 = *((_QWORD *)&v154 + 1) & 0xFFFFFFFFFF00FFFFuLL | v101 & 0xFFFFFFFFFF0FFFFFuLL;
            if ( v104 )
            {
              if ( v104 == 2 )
                v107 = v103 != 0 ? 6LL : 2LL;
              else
                v107 = v103 != 0 ? 5LL : 1LL;
              v106 = v107 << 20;
            }
            else
            {
              v106 = v103 != 0 ? 0x400000 : 0;
            }
            v108 = (v105 | v106) & 0xFFFFFFFFF0FFFFFFuLL;
            v109 = a4[5] & 4LL;
            v110 = a4[5] & 3LL;
            if ( v110 )
            {
              if ( v110 == 2 )
                v112 = v109 != 0 ? 6LL : 2LL;
              else
                v112 = v109 != 0 ? 5LL : 1LL;
              v111 = v112 << 24;
            }
            else
            {
              v111 = v109 != 0 ? 0x4000000 : 0;
            }
            v113 = v108 | v111;
            v114 = *a4 & 4LL;
            v115 = *a4 & 3LL;
            v116 = v113 & 0xFFFFFFFF0FFFFFFFuLL;
            if ( v115 )
            {
              if ( v115 == 2 )
                v118 = v114 != 0 ? 6LL : 2LL;
              else
                v118 = v114 != 0 ? 5LL : 1LL;
              v117 = v118 << 28;
            }
            else
            {
              v117 = v114 != 0 ? 0x40000000 : 0;
            }
            v119 = v116 | v117;
            v120 = a4[1] & 4LL;
            v121 = a4[1] & 3LL;
            v122 = v119 & 0xFFFFFFF0FFFFFFFFuLL;
            if ( v121 )
            {
              if ( v121 == 2 )
                v124 = v120 != 0 ? 6LL : 2LL;
              else
                v124 = v120 != 0 ? 5LL : 1LL;
              v123 = v124 << 32;
            }
            else
            {
              v123 = -(__int64)(v120 != 0) & 0x400000000LL;
            }
            v125 = v122 | v123;
            v126 = a4[2] & 4LL;
            v127 = a4[2] & 3LL;
            v128 = v125 & 0xFFFFF0FFFFFFFFFFuLL;
            if ( v127 )
            {
              if ( v127 == 2 )
                v130 = v126 != 0 ? 6LL : 2LL;
              else
                v130 = v126 != 0 ? 5LL : 1LL;
              v129 = v130 << 40;
            }
            else
            {
              v129 = -(__int64)(v126 != 0) & 0x40000000000LL;
            }
            *((_QWORD *)&v154 + 1) = v128 | v129;
            goto LABEL_299;
          }
LABEL_301:
          if ( Handle )
            NtClose(Handle);
          goto LABEL_303;
        }
        goto LABEL_300;
      }
      v79 = v78 - 1;
      if ( v79 )
      {
        v80 = v79 - 1;
        if ( v80 )
        {
          v81 = v80 - 1;
          if ( v81 )
          {
            v82 = v81 - 1;
            if ( !v82 )
            {
              if ( v6 )
              {
                *((_QWORD *)&v154 + 1) &= 0xFFFFFFFFFFFFFFFuLL;
                v155 &= 0xFFFFFFFFFFFFFF00uLL;
                goto LABEL_299;
              }
              if ( a5 == 24 )
              {
                v85 = a4[1];
                v86 = v85 & 4;
                v87 = *a4 & 4LL;
                v88 = a4[2] & 4LL;
                if ( (*a4 & 3) != 0 )
                {
                  if ( (*a4 & 3LL) == 2 )
                  {
                    v90 = v87 != 0 ? 6LL : 2LL;
                  }
                  else if ( (*(_BYTE *)a4 & 8) != 0 )
                  {
                    v90 = v87 != 0 ? 7LL : 3LL;
                  }
                  else
                  {
                    v90 = v87 != 0 ? 5LL : 1LL;
                  }
                  v89 = v90 << 60;
                }
                else
                {
                  v89 = -(__int64)(v87 != 0) & 0x4000000000000000LL;
                }
                *((_QWORD *)&v154 + 1) = *((_QWORD *)&v154 + 1) & 0xFFFFFFFFFFFFFFFLL | v89;
                v91 = v85 & 3;
                if ( v91 )
                {
                  if ( v91 == 2LL )
                    v92 = v86 != 0 ? 6LL : 2LL;
                  else
                    v92 = v86 != 0 ? 5LL : 1LL;
                }
                else
                {
                  v92 = v86 != 0 ? 4 : 0;
                }
                v93 = a4[2] & 3LL;
                v94 = v155 & 0xFFFFFFFFFFFFFF00uLL | v92 & 0xFFFFFFFFFFFFFF0FuLL;
                if ( v93 )
                {
                  if ( v93 == 2 )
                  {
                    v95 = v88 != 0 ? 96LL : 32LL;
                  }
                  else if ( (a4[2] & 8) != 0 )
                  {
                    v95 = v88 != 0 ? 112LL : 48LL;
                  }
                  else
                  {
                    v95 = v88 != 0 ? 80LL : 16LL;
                  }
                }
                else
                {
                  v95 = v88 != 0 ? 0x40 : 0;
                }
                v155 = v94 | v95;
                goto LABEL_299;
              }
              goto LABEL_300;
            }
            if ( v82 != 1 )
              goto LABEL_301;
            if ( v6 )
            {
              v155 &= 0xFFFFFFFFFF0FFFFFuLL;
              goto LABEL_299;
            }
            if ( a5 != 8 )
              goto LABEL_300;
            v83 = *a4 & 4LL;
            if ( (*a4 & 3) != 0 )
            {
              if ( (*a4 & 3LL) == 2 )
                v84 = v83 != 0 ? 6LL : 2LL;
              else
                v84 = v83 != 0 ? 5LL : 1LL;
              v51 = v84 << 20;
            }
            else
            {
              v51 = v83 != 0 ? 0x400000 : 0;
            }
            v53 = v155 & 0xFFFFFFFFFF0FFFFFuLL;
            goto LABEL_93;
          }
          if ( v6 )
          {
            *(_QWORD *)&v154 = v154 & 0xFFFFFFFFFFFF0FFFuLL;
            goto LABEL_299;
          }
          if ( a5 != 8 )
            goto LABEL_300;
          v96 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
              v43 = v96 != 0 ? 24576LL : 0x2000LL;
            else
              v43 = v96 != 0 ? 20480LL : 4096LL;
          }
          else
          {
            v43 = v96 != 0 ? 0x4000 : 0;
          }
          v46 = v154 & 0xFFFFFFFFFFFF0FFFuLL;
        }
        else
        {
          if ( v6 )
          {
            *(_QWORD *)&v154 = v154 & 0xFFFFFFFFFFFFFF0FuLL;
            goto LABEL_299;
          }
          if ( a5 != 8 )
            goto LABEL_300;
          v97 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v43 = v97 != 0 ? 96LL : 32LL;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v43 = v97 != 0 ? 112LL : 48LL;
            }
            else
            {
              v43 = v97 != 0 ? 80LL : 16LL;
            }
          }
          else
          {
            v43 = v97 != 0 ? 0x40 : 0;
          }
          v46 = v154 & 0xFFFFFFFFFFFFFF0FuLL;
        }
LABEL_148:
        *(_QWORD *)&v154 = v46 | v43;
        goto LABEL_299;
      }
      if ( v6 )
      {
        *((_QWORD *)&v154 + 1) &= 0xFFFFFF0FFFFFFFFFuLL;
        goto LABEL_299;
      }
      if ( a5 != 8 )
        goto LABEL_300;
      v98 = *a4 & 4LL;
      if ( (*a4 & 3) != 0 )
      {
        if ( (*a4 & 3LL) != 2 )
        {
          v32 = 0xFFFFFF0FFFFFFFFFuLL;
          if ( (*(_BYTE *)a4 & 8) != 0 )
            v99 = v98 != 0 ? 7LL : 3LL;
          else
            v99 = v98 != 0 ? 5LL : 1LL;
          v31 = v99 << 36;
          goto LABEL_49;
        }
        v31 = (v98 != 0 ? 6LL : 2LL) << 36;
      }
      else
      {
        v31 = -(__int64)(v98 != 0) & 0x4000000000LL;
      }
      v32 = 0xFFFFFF0FFFFFFFFFuLL;
LABEL_49:
      v33 = v32 & *((_QWORD *)&v154 + 1);
LABEL_50:
      *((_QWORD *)&v154 + 1) = v33 | v31;
      goto LABEL_299;
    }
  }
LABEL_303:
  if ( inited == -1073741772 && v5 )
    return 0;
  return (unsigned int)inited;
}
