/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x1800E1B10
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007630C (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     NtOpenKey @ 0x18009D880 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D920 (NtQueryValueKey.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 *     memset @ 0x1800A4780 (memset.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E3AB8 (RtlpQueryEafPlusModuleList.c)
 */

__int64 __fastcall RtlQueryImageMitigationPolicy(__int64 a1, int a2, char a3, _QWORD *a4, int a5)
{
  unsigned __int64 v5; // rbx
  __int64 v7; // r12
  int v8; // r15d
  int inited; // esi
  const wchar_t *v11; // rdx
  int v12; // eax
  int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // r14d
  int v20; // r14d
  int v21; // r14d
  int v22; // r14d
  int v23; // r14d
  int v24; // r14d
  unsigned __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r9
  unsigned __int64 v28; // r15
  bool v29; // zf
  unsigned __int64 v30; // rdx
  __int64 v31; // r10
  __int64 v32; // r9
  unsigned __int64 v33; // rdx
  __int64 v34; // r9
  unsigned __int64 v35; // r13
  __int64 v36; // r11
  __int64 v37; // r9
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rdx
  bool v40; // zf
  int v41; // r14d
  int v42; // r14d
  int v43; // r14d
  int v44; // r14d
  int v45; // r14d
  int v46; // r14d
  unsigned __int64 v47; // r13
  unsigned __int64 v48; // r15
  __int64 v49; // r9
  __int64 v50; // r8
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r13
  bool v53; // zf
  unsigned __int64 v54; // r15
  __int64 v55; // r8
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // r15
  _OWORD *v58; // rdi
  _OWORD *v59; // rax
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int64 v67; // r9
  unsigned __int64 v68; // r8
  int v70; // [rsp+38h] [rbp-D0h]
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 v72[8]; // [rsp+48h] [rbp-C0h] BYREF
  char v73[8]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v74; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v75; // [rsp+78h] [rbp-90h]
  int v76; // [rsp+80h] [rbp-88h]
  _QWORD Src[2]; // [rsp+88h] [rbp-80h] BYREF
  int v78; // [rsp+98h] [rbp-70h]
  __int128 v79; // [rsp+A0h] [rbp-68h]
  _BYTE v80[1024]; // [rsp+B8h] [rbp-50h] BYREF

  v5 = 0LL;
  Handle = 0LL;
  v70 = a3 & 4;
  v7 = 8LL;
  v8 = a3 & 8;
  v75 = 0LL;
  v74 = 0LL;
  inited = RtlInitUnicodeStringEx((__int64)v72, a1);
  if ( inited >= 0 )
  {
    v11 = L"MitigationOptions";
    if ( v8 )
      v11 = L"MitigationAuditOptions";
    inited = RtlInitUnicodeStringEx((__int64)v73, (__int64)v11);
    if ( inited >= 0 )
    {
      v12 = v70;
      if ( v70 )
      {
        if ( v72[0] )
          return (unsigned int)-1073741811;
      }
      else
      {
        if ( v72[0] )
        {
          v13 = RtlpOpenImageFileOptionsKeyEx(v72, 9LL, 0, &Handle);
        }
        else
        {
          v76 = 48;
          Src[1] = &unk_18011DB70;
          Src[0] = 0LL;
          v78 = 576;
          v79 = 0LL;
          v13 = NtOpenKey();
        }
        inited = v13;
        v12 = v70;
      }
      if ( inited < 0 )
        return (unsigned int)inited;
      if ( v12 )
      {
        if ( v8 )
        {
          v17 = v74 & 0xEEEEEEEEEEEEEEEEuLL;
          v18 = 0x2222222222222222LL;
        }
        else
        {
          v17 = v74 & 0xEEEEECCCCCCCCCCCuLL | 0x12222111211LL;
          v18 = 0x2222200000000000LL;
        }
        v14 = v18 | v17;
        v16 = *((_QWORD *)&v74 + 1) & 0xCCCCFCCCCCCCFCCCuLL | 0x2222022222220222LL;
        v15 = 35782690LL;
      }
      else
      {
        inited = NtQueryValueKey();
        if ( inited >= 0 && a2 == 11 )
          inited = RtlpQueryEafPlusModuleList(Handle, v80);
        NtClose(Handle);
        if ( inited < 0 )
          return (unsigned int)inited;
        if ( LODWORD(Src[0]) > 0x18 )
          return (unsigned int)-1073741788;
        memmove(&v74, (char *)Src + 4, LODWORD(Src[0]));
        v14 = v74;
        v15 = v75;
        v16 = *((_QWORD *)&v74 + 1);
      }
      if ( a2 <= 9 )
      {
        if ( a2 == 9 )
        {
          if ( a5 != 8 )
            return (unsigned int)-1073741811;
          v14 >>= 48;
          goto LABEL_115;
        }
        if ( !a2 )
        {
          if ( a5 != 8 )
            return (unsigned int)-1073741811;
          goto LABEL_115;
        }
        v19 = a2 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                v23 = v22 - 2;
                if ( v23 )
                {
                  v24 = v23 - 1;
                  if ( v24 )
                  {
                    if ( v24 != 1 || a5 != 16 )
                      return (unsigned int)-1073741811;
                    v25 = v14 >> 44;
                    v26 = 0LL;
                    v27 = 0LL;
                    *(_OWORD *)a4 = 0LL;
                    if ( (v25 & 3) == 0 )
                      goto LABEL_42;
                    if ( (v25 & 3) != 1 )
                    {
                      if ( (v25 & 3) == 2 )
                      {
                        *a4 = 2LL;
                        v27 = 2LL;
                        goto LABEL_42;
                      }
                      if ( (v25 & 3) != 3 )
                      {
LABEL_42:
                        if ( (v25 & 4) != 0 )
                          *a4 = v27 | 4;
                        v28 = v16 >> 4;
                        goto LABEL_45;
                      }
                      v26 = 8LL;
                    }
                    v27 = v26 | 1;
                    *a4 = v26 | 1;
                    goto LABEL_42;
                  }
                  if ( a5 != 16 )
                    return (unsigned int)-1073741811;
                  v30 = v14 >> 40;
                  v31 = 0LL;
                  v32 = 0LL;
                  *(_OWORD *)a4 = 0LL;
                  if ( (v30 & 3) != 0 )
                  {
                    switch ( v30 & 3 )
                    {
                      case 1uLL:
LABEL_59:
                        v32 = v31 | 1;
                        *a4 = v31 | 1;
                        break;
                      case 2uLL:
                        *a4 = 2LL;
                        v32 = 2LL;
                        break;
                      case 3uLL:
                        v31 = 8LL;
                        goto LABEL_59;
                    }
                  }
                  if ( (v30 & 4) != 0 )
                    *a4 = v32 | 4;
                  v28 = v16 >> 8;
LABEL_45:
                  if ( (v28 & 3) != 0 )
                  {
                    if ( (v28 & 3) == 1 )
                    {
                      a4[1] = 1LL;
                      v5 = 1LL;
                      goto LABEL_50;
                    }
                    if ( (v28 & 3) != 2 )
                    {
LABEL_50:
                      v29 = (v28 & 4) == 0;
                      goto LABEL_80;
                    }
                    v5 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
                  }
                  a4[1] = v5;
                  goto LABEL_50;
                }
                if ( a5 != 8 )
                  return (unsigned int)-1073741811;
                v14 >>= 32;
                goto LABEL_85;
              }
              if ( a5 != 16 )
                return (unsigned int)-1073741811;
              v33 = v14 >> 28;
              v34 = 0LL;
              *(_OWORD *)a4 = 0LL;
              if ( (v33 & 3) != 0 )
              {
                if ( (v33 & 3) == 1 )
                {
                  *a4 = 1LL;
                  v34 = 1LL;
                }
                else if ( (v33 & 3) == 2 )
                {
                  *a4 = 2LL;
                  v34 = 2LL;
                }
              }
              if ( (v33 & 4) != 0 )
                *a4 = v34 | 4;
              v35 = v15 >> 24;
              if ( (v35 & 3) != 0 )
              {
                if ( (v35 & 3) == 1 )
                {
                  a4[1] = 1LL;
                  v5 = 1LL;
                  goto LABEL_79;
                }
                if ( (v35 & 3) != 2 )
                {
LABEL_79:
                  v29 = (v35 & 4) == 0;
LABEL_80:
                  if ( !v29 )
                    a4[1] = v5 | 4;
                  return (unsigned int)inited;
                }
                v5 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
              }
              a4[1] = v5;
              goto LABEL_79;
            }
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            v14 >>= 24;
LABEL_85:
            *a4 = 0LL;
            if ( (v14 & 3) == 0 )
              goto LABEL_121;
            if ( (v14 & 3) == 1 )
            {
              *a4 = 1LL;
              v5 = 1LL;
              goto LABEL_121;
            }
            if ( (v14 & 3) != 2 )
            {
LABEL_121:
              v40 = (v14 & 4) == 0;
              goto LABEL_122;
            }
LABEL_88:
            *a4 = 2LL;
            v5 = 2LL;
            goto LABEL_121;
          }
          if ( a5 != 8 )
            return (unsigned int)-1073741811;
          v14 >>= 36;
LABEL_115:
          *a4 = 0LL;
          if ( (v14 & 3) == 0 )
            goto LABEL_121;
          if ( (v14 & 3) != 1 )
          {
            if ( (v14 & 3) == 2 )
              goto LABEL_88;
            if ( (v14 & 3) != 3 )
              goto LABEL_121;
            v5 = 8LL;
          }
          v5 |= 1uLL;
          *a4 = v5;
          goto LABEL_121;
        }
        if ( a5 != 24 )
          return (unsigned int)-1073741811;
        v36 = 0LL;
        v37 = 0LL;
        *(_OWORD *)a4 = 0LL;
        a4[2] = 0LL;
        if ( (v14 & 0x300) != 0 )
        {
          if ( (BYTE1(v14) & 3) == 1 )
          {
LABEL_98:
            v37 = v36 | 1;
            *a4 = v36 | 1;
            goto LABEL_99;
          }
          if ( (BYTE1(v14) & 3) != 2 )
          {
            if ( (BYTE1(v14) & 3) != 3 )
              goto LABEL_99;
            v36 = 8LL;
            goto LABEL_98;
          }
          *a4 = 2LL;
          v37 = 2LL;
        }
LABEL_99:
        if ( (v14 & 0x400) != 0 )
          *a4 = v37 | 4;
        v38 = 0LL;
        if ( (v14 & 0x30000) != 0 )
        {
          if ( (BYTE2(v14) & 3) == 1 )
          {
            a4[1] = 1LL;
            v38 = 1LL;
          }
          else if ( (BYTE2(v14) & 3) == 2 )
          {
            v38 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
            a4[1] = v38;
          }
        }
        else
        {
          a4[1] = 0LL;
        }
        if ( (v14 & 0x40000) != 0 )
          a4[1] = v38 | 4;
        v39 = v14 >> 20;
        if ( (v39 & 3) != 0 )
        {
          if ( (v39 & 3) != 1 )
          {
            if ( (v39 & 3) == 2 )
            {
              a4[2] &= ~1uLL;
              a4[2] |= 2uLL;
            }
            goto LABEL_253;
          }
          goto LABEL_251;
        }
        goto LABEL_252;
      }
      v41 = a2 - 10;
      if ( !v41 )
      {
        if ( a5 != 24 )
          return (unsigned int)-1073741811;
        v67 = 0LL;
        *(_OWORD *)a4 = 0LL;
        a4[2] = 0LL;
        if ( ((v14 >> 52) & 3) != 0 )
        {
          if ( ((v14 >> 52) & 3) == 1 )
          {
            *a4 = 1LL;
            v67 = 1LL;
          }
          else if ( ((v14 >> 52) & 3) == 2 )
          {
            *a4 = 2LL;
            v67 = 2LL;
          }
        }
        if ( ((v14 >> 52) & 4) != 0 )
          *a4 = v67 | 4;
        v68 = 0LL;
        if ( (v14 & 0x300000000000000LL) != 0 )
        {
          if ( (HIBYTE(v14) & 3) == 1 )
          {
            a4[1] = 1LL;
            v68 = 1LL;
          }
          else if ( (HIBYTE(v14) & 3) == 2 )
          {
            v68 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
            a4[1] = v68;
          }
        }
        else
        {
          a4[1] = 0LL;
        }
        if ( (v14 & 0x400000000000000LL) != 0 )
          a4[1] = v68 | 4;
        v39 = v14 >> 60;
        if ( (v39 & 3) != 0 )
        {
          if ( (v39 & 3) != 1 )
          {
            if ( (v39 & 3) == 2 )
            {
              a4[2] &= ~1uLL;
              a4[2] |= 2uLL;
            }
            goto LABEL_253;
          }
LABEL_251:
          a4[2] &= ~2uLL;
          a4[2] |= 1uLL;
LABEL_253:
          v53 = (v39 & 4) == 0;
LABEL_254:
          if ( !v53 )
            a4[2] |= 4uLL;
          return (unsigned int)inited;
        }
LABEL_252:
        a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_253;
      }
      v42 = v41 - 1;
      if ( v42 )
      {
        v43 = v42 - 1;
        if ( v43 )
        {
          v44 = v43 - 1;
          if ( !v44 )
          {
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            v14 >>= 4;
            goto LABEL_115;
          }
          v45 = v44 - 1;
          if ( !v45 )
          {
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            v14 >>= 12;
            goto LABEL_85;
          }
          v46 = v45 - 1;
          if ( v46 )
          {
            if ( v46 != 1 || a5 != 8 )
              return (unsigned int)-1073741811;
            v47 = v15 >> 20;
            *a4 = 0LL;
            if ( (v47 & 3) != 0 )
            {
              if ( (v47 & 3) == 1 )
              {
                *a4 = 1LL;
                v5 = 1LL;
              }
              else if ( (v47 & 3) == 2 )
              {
                *a4 = 2LL;
                v5 = 2LL;
              }
            }
            v40 = (v47 & 4) == 0;
            goto LABEL_122;
          }
          if ( a5 != 24 )
            return (unsigned int)-1073741811;
          v48 = v16 >> 60;
          v49 = 0LL;
          v50 = 0LL;
          *(_OWORD *)a4 = 0LL;
          a4[2] = 0LL;
          if ( (v48 & 3) != 0 )
          {
            if ( (v48 & 3) == 1 )
            {
LABEL_146:
              v50 = v49 | 1;
              *a4 = v49 | 1;
              goto LABEL_147;
            }
            if ( (v48 & 3) != 2 )
            {
              if ( (v48 & 3) != 3 )
                goto LABEL_147;
              v49 = 8LL;
              goto LABEL_146;
            }
            *a4 = 2LL;
            v50 = 2LL;
          }
LABEL_147:
          if ( (v48 & 4) != 0 )
            *a4 = v50 | 4;
          v51 = 0LL;
          if ( (v15 & 3) != 0 )
          {
            if ( (v15 & 3) == 1 )
            {
              a4[1] = 1LL;
              v51 = 1LL;
            }
            else if ( (v15 & 3) == 2 )
            {
              v51 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
              a4[1] = v51;
            }
          }
          else
          {
            a4[1] = 0LL;
          }
          if ( (v15 & 4) != 0 )
            a4[1] = v51 | 4;
          v52 = v15 >> 4;
          if ( (v52 & 3) == 0 )
          {
            a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
            goto LABEL_166;
          }
          if ( (v52 & 3) != 1 )
          {
            if ( (v52 & 3) == 2 )
            {
              a4[2] &= ~1uLL;
              a4[2] |= 2uLL;
              goto LABEL_166;
            }
            if ( (v52 & 3) != 3 )
            {
LABEL_166:
              v53 = (v52 & 4) == 0;
              goto LABEL_254;
            }
            a4[2] |= 8uLL;
          }
          a4[2] &= ~2uLL;
          a4[2] |= 1uLL;
          goto LABEL_166;
        }
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        v54 = v16 >> 36;
        *a4 = 0LL;
        if ( (v54 & 3) != 0 )
        {
          switch ( v54 & 3 )
          {
            case 1uLL:
LABEL_177:
              v5 |= 1uLL;
              *a4 = v5;
              break;
            case 2uLL:
              *a4 = 2LL;
              v5 = 2LL;
              break;
            case 3uLL:
              v5 = 8LL;
              goto LABEL_177;
          }
        }
        v40 = (v54 & 4) == 0;
LABEL_122:
        if ( !v40 )
          *a4 = v5 | 4;
        return (unsigned int)inited;
      }
      if ( a5 != 1072 )
        return (unsigned int)-1073741811;
      memset(a4, 0, 0x430uLL);
      v55 = 0LL;
      if ( (v16 & 0x30000) != 0 )
      {
        if ( (BYTE2(v16) & 3) == 1 )
        {
          a4[3] = 1LL;
          v55 = 1LL;
        }
        else if ( (BYTE2(v16) & 3) == 2 )
        {
          a4[3] = 2LL;
          v55 = 2LL;
        }
      }
      if ( (v16 & 0x40000) != 0 )
        a4[3] = v55 | 4;
      v56 = 0LL;
      if ( ((v16 >> 20) & 3) != 0 )
      {
        if ( ((v16 >> 20) & 3) == 1 )
        {
          a4[4] = 1LL;
          v56 = 1LL;
        }
        else if ( ((v16 >> 20) & 3) == 2 )
        {
          v56 = a4[4] & 0xFFFFFFFFFFFFFFFCuLL | 2;
          a4[4] = v56;
        }
      }
      else
      {
        a4[4] = 0LL;
      }
      if ( ((v16 >> 20) & 4) != 0 )
        a4[4] = v56 | 4;
      if ( (v16 & 0x3000000) != 0 )
      {
        if ( (BYTE3(v16) & 3) == 1 )
        {
          a4[5] &= ~2uLL;
          a4[5] |= 1uLL;
        }
        else if ( (BYTE3(v16) & 3) == 2 )
        {
          a4[5] &= ~1uLL;
          a4[5] |= 2uLL;
        }
      }
      else
      {
        a4[5] &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v16 & 0x4000000) != 0 )
        a4[5] |= 4uLL;
      if ( ((v16 >> 28) & 3) != 0 )
      {
        if ( ((v16 >> 28) & 3) == 1 )
        {
          *a4 &= ~2uLL;
          *a4 |= 1uLL;
        }
        else if ( ((v16 >> 28) & 3) == 2 )
        {
          *a4 &= ~1uLL;
          *a4 |= 2uLL;
        }
      }
      else
      {
        *a4 &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( ((v16 >> 28) & 4) != 0 )
        *a4 |= 4uLL;
      if ( (v16 & 0x300000000LL) != 0 )
      {
        if ( (BYTE4(v16) & 3) == 1 )
        {
          a4[1] &= ~2uLL;
          a4[1] |= 1uLL;
        }
        else if ( (BYTE4(v16) & 3) == 2 )
        {
          a4[1] &= ~1uLL;
          a4[1] |= 2uLL;
        }
      }
      else
      {
        a4[1] &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v16 & 0x400000000LL) != 0 )
        a4[1] |= 4uLL;
      v57 = v16 >> 40;
      if ( (v57 & 3) != 0 )
      {
        if ( (v57 & 3) == 1 )
        {
          a4[2] &= ~2uLL;
          a4[2] |= 1uLL;
        }
        else if ( (v57 & 3) == 2 )
        {
          a4[2] &= ~1uLL;
          a4[2] |= 2uLL;
        }
      }
      else
      {
        a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v57 & 4) != 0 )
        a4[2] |= 4uLL;
      v58 = a4 + 6;
      v59 = v80;
      do
      {
        v60 = v59[1];
        *v58 = *v59;
        v61 = v59[2];
        v58[1] = v60;
        v62 = v59[3];
        v58[2] = v61;
        v63 = v59[4];
        v58[3] = v62;
        v64 = v59[5];
        v58[4] = v63;
        v65 = v59[6];
        v58[5] = v64;
        v66 = v59[7];
        v59 += 8;
        v58[6] = v65;
        v58 += 8;
        *(v58 - 1) = v66;
        --v7;
      }
      while ( v7 );
    }
  }
  return (unsigned int)inited;
}
