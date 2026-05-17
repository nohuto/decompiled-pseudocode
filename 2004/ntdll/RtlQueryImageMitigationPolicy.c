/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x1800E19B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800751DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenKey @ 0x18009D050 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D0F0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E37D8 (RtlpQueryEafPlusModuleList.c)
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
  unsigned __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // r9
  unsigned __int64 v27; // r15
  __int64 v28; // r11
  __int64 v29; // r9
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdx
  bool v32; // zf
  unsigned __int64 v33; // rdx
  __int64 v34; // r10
  __int64 v35; // r9
  int v36; // r14d
  int v37; // r14d
  int v38; // r14d
  int v39; // r14d
  int v40; // r14d
  int v41; // r14d
  unsigned __int64 v42; // r15
  __int64 v43; // r9
  __int64 v44; // r8
  int v45; // edx
  int v46; // edx
  unsigned __int64 v47; // rdx
  int v48; // r8d
  unsigned __int64 v49; // r13
  int v50; // edx
  int v51; // edx
  unsigned __int64 v52; // r15
  bool v53; // zf
  __int64 v54; // r8
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r15
  _OWORD *v57; // rdi
  _OWORD *v58; // rax
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int64 v66; // r9
  unsigned __int64 v67; // r8
  int v69; // [rsp+38h] [rbp-D0h]
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 v71[8]; // [rsp+48h] [rbp-C0h] BYREF
  char v72[8]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v73; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v74; // [rsp+78h] [rbp-90h]
  int v75; // [rsp+80h] [rbp-88h]
  _QWORD Src[2]; // [rsp+88h] [rbp-80h] BYREF
  int v77; // [rsp+98h] [rbp-70h]
  __int128 v78; // [rsp+A0h] [rbp-68h]
  _BYTE v79[1024]; // [rsp+B8h] [rbp-50h] BYREF

  v5 = 0LL;
  Handle = 0LL;
  v69 = a3 & 4;
  v7 = 8LL;
  v8 = a3 & 8;
  v74 = 0LL;
  v73 = 0LL;
  inited = RtlInitUnicodeStringEx((__int64)v71, a1);
  if ( inited >= 0 )
  {
    v11 = L"MitigationOptions";
    if ( v8 )
      v11 = L"MitigationAuditOptions";
    inited = RtlInitUnicodeStringEx((__int64)v72, (__int64)v11);
    if ( inited >= 0 )
    {
      v12 = v69;
      if ( v69 )
      {
        if ( v71[0] )
          return (unsigned int)-1073741811;
      }
      else
      {
        if ( v71[0] )
        {
          v13 = RtlpOpenImageFileOptionsKeyEx(v71, 9LL, 0, &Handle);
        }
        else
        {
          v75 = 48;
          Src[1] = &unk_18011CB30;
          Src[0] = 0LL;
          v77 = 576;
          v78 = 0LL;
          v13 = NtOpenKey();
        }
        inited = v13;
        v12 = v69;
      }
      if ( inited < 0 )
        return (unsigned int)inited;
      if ( v12 )
      {
        if ( v8 )
        {
          v17 = v73 & 0xEEEEEEEEEEEEEEEEuLL;
          v18 = 0x2222222222222222LL;
        }
        else
        {
          v17 = v73 & 0xEEEEECCCCCCCCCCCuLL | 0x12222111211LL;
          v18 = 0x2222200000000000LL;
        }
        v14 = v18 | v17;
        v16 = *((_QWORD *)&v73 + 1) & 0xCCCCFCCCCCCCFCCCuLL | 0x2222022222220222LL;
        v15 = 131106LL;
      }
      else
      {
        inited = NtQueryValueKey();
        if ( inited >= 0 && a2 == 11 )
          inited = RtlpQueryEafPlusModuleList(Handle, v79);
        NtClose(Handle);
        if ( inited < 0 )
          return (unsigned int)inited;
        if ( LODWORD(Src[0]) > 0x18 )
          return (unsigned int)-1073741788;
        memmove(&v73, (char *)Src + 4, LODWORD(Src[0]));
        v14 = v73;
        v15 = v74;
        v16 = *((_QWORD *)&v73 + 1);
      }
      if ( a2 <= 8 )
      {
        if ( a2 != 8 )
        {
          if ( !a2 )
          {
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            goto LABEL_226;
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
                    if ( v23 != 1 || a5 != 16 )
                      return (unsigned int)-1073741811;
                    v24 = v14 >> 40;
                    v25 = 0LL;
                    v26 = 0LL;
                    *(_OWORD *)a4 = 0LL;
                    if ( (v24 & 3) == 0 )
                      goto LABEL_41;
                    if ( (v24 & 3) != 1 )
                    {
                      if ( (v24 & 3) == 2 )
                      {
                        *a4 = 2LL;
                        v26 = 2LL;
                        goto LABEL_41;
                      }
                      if ( (v24 & 3) != 3 )
                      {
LABEL_41:
                        if ( (v24 & 4) != 0 )
                          *a4 = v26 | 4;
                        v27 = v16 >> 8;
                        goto LABEL_97;
                      }
                      v25 = 8LL;
                    }
                    v26 = v25 | 1;
                    *a4 = v25 | 1;
                    goto LABEL_41;
                  }
                  if ( a5 != 8 )
                    return (unsigned int)-1073741811;
                  v14 >>= 32;
                }
                else
                {
                  if ( a5 != 8 )
                    return (unsigned int)-1073741811;
                  v14 >>= 28;
                }
              }
              else
              {
                if ( a5 != 8 )
                  return (unsigned int)-1073741811;
                v14 >>= 24;
              }
              goto LABEL_47;
            }
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            v14 >>= 36;
LABEL_226:
            *a4 = 0LL;
            if ( (v14 & 3) == 0 )
              goto LABEL_232;
            if ( (v14 & 3) != 1 )
            {
              if ( (v14 & 3) == 2 )
                goto LABEL_50;
              if ( (v14 & 3) != 3 )
                goto LABEL_232;
              v5 = 8LL;
            }
            v5 |= 1uLL;
            *a4 = v5;
            goto LABEL_232;
          }
          if ( a5 != 24 )
            return (unsigned int)-1073741811;
          v28 = 0LL;
          v29 = 0LL;
          *(_OWORD *)a4 = 0LL;
          a4[2] = 0LL;
          if ( (v14 & 0x300) != 0 )
          {
            if ( (BYTE1(v14) & 3) == 1 )
            {
LABEL_64:
              v29 = v28 | 1;
              *a4 = v28 | 1;
              goto LABEL_65;
            }
            if ( (BYTE1(v14) & 3) != 2 )
            {
              if ( (BYTE1(v14) & 3) != 3 )
                goto LABEL_65;
              v28 = 8LL;
              goto LABEL_64;
            }
            *a4 = 2LL;
            v29 = 2LL;
          }
LABEL_65:
          if ( (v14 & 0x400) != 0 )
            *a4 = v29 | 4;
          v30 = 0LL;
          if ( (v14 & 0x30000) != 0 )
          {
            if ( (BYTE2(v14) & 3) == 1 )
            {
              a4[1] = 1LL;
              v30 = 1LL;
            }
            else if ( (BYTE2(v14) & 3) == 2 )
            {
              v30 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
              a4[1] = v30;
            }
          }
          else
          {
            a4[1] = 0LL;
          }
          if ( (v14 & 0x40000) != 0 )
            a4[1] = v30 | 4;
          v31 = v14 >> 20;
          if ( (v31 & 3) != 0 )
          {
            if ( (v31 & 3) != 1 )
            {
              if ( (v31 & 3) == 2 )
              {
                a4[2] &= ~1uLL;
                a4[2] |= 2uLL;
              }
              goto LABEL_82;
            }
            goto LABEL_80;
          }
          goto LABEL_81;
        }
        if ( a5 != 16 )
          return (unsigned int)-1073741811;
        v33 = v14 >> 44;
        v34 = 0LL;
        v35 = 0LL;
        *(_OWORD *)a4 = 0LL;
        if ( (v33 & 3) != 0 )
        {
          switch ( v33 & 3 )
          {
            case 1uLL:
LABEL_93:
              v35 = v34 | 1;
              *a4 = v34 | 1;
              break;
            case 2uLL:
              *a4 = 2LL;
              v35 = 2LL;
              break;
            case 3uLL:
              v34 = 8LL;
              goto LABEL_93;
          }
        }
        if ( (v33 & 4) != 0 )
          *a4 = v35 | 4;
        v27 = v16 >> 4;
LABEL_97:
        if ( (v27 & 3) != 0 )
        {
          if ( (v27 & 3) == 1 )
          {
            a4[1] = 1LL;
            v5 = 1LL;
LABEL_102:
            if ( (v27 & 4) != 0 )
              a4[1] = v5 | 4;
            return (unsigned int)inited;
          }
          if ( (v27 & 3) != 2 )
            goto LABEL_102;
          v5 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
        }
        a4[1] = v5;
        goto LABEL_102;
      }
      v36 = a2 - 9;
      if ( !v36 )
      {
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        v14 >>= 48;
        goto LABEL_226;
      }
      v37 = v36 - 1;
      if ( !v37 )
      {
        if ( a5 != 24 )
          return (unsigned int)-1073741811;
        v66 = 0LL;
        *(_OWORD *)a4 = 0LL;
        a4[2] = 0LL;
        if ( ((v14 >> 52) & 3) != 0 )
        {
          if ( ((v14 >> 52) & 3) == 1 )
          {
            *a4 = 1LL;
            v66 = 1LL;
          }
          else if ( ((v14 >> 52) & 3) == 2 )
          {
            *a4 = 2LL;
            v66 = 2LL;
          }
        }
        if ( ((v14 >> 52) & 4) != 0 )
          *a4 = v66 | 4;
        v67 = 0LL;
        if ( (v14 & 0x300000000000000LL) != 0 )
        {
          if ( (HIBYTE(v14) & 3) == 1 )
          {
            a4[1] = 1LL;
            v67 = 1LL;
          }
          else if ( (HIBYTE(v14) & 3) == 2 )
          {
            v67 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
            a4[1] = v67;
          }
        }
        else
        {
          a4[1] = 0LL;
        }
        if ( (v14 & 0x400000000000000LL) != 0 )
          a4[1] = v67 | 4;
        v31 = v14 >> 60;
        if ( (v31 & 3) != 0 )
        {
          if ( (v31 & 3) != 1 )
          {
            if ( (v31 & 3) == 2 )
            {
              a4[2] &= ~1uLL;
              a4[2] |= 2uLL;
            }
            goto LABEL_82;
          }
LABEL_80:
          a4[2] &= ~2uLL;
          a4[2] |= 1uLL;
LABEL_82:
          v32 = (v31 & 4) == 0;
          goto LABEL_83;
        }
LABEL_81:
        a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_82;
      }
      v38 = v37 - 1;
      if ( v38 )
      {
        v39 = v38 - 1;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( !v40 )
          {
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            v14 >>= 4;
            goto LABEL_226;
          }
          v41 = v40 - 1;
          if ( !v41 )
          {
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            v14 >>= 12;
LABEL_47:
            *a4 = 0LL;
            if ( (v14 & 3) == 0 )
              goto LABEL_232;
            if ( (v14 & 3) == 1 )
            {
              *a4 = 1LL;
              v5 = 1LL;
              goto LABEL_232;
            }
            if ( (v14 & 3) != 2 )
            {
LABEL_232:
              v53 = (v14 & 4) == 0;
LABEL_233:
              if ( !v53 )
                *a4 = v5 | 4;
              return (unsigned int)inited;
            }
LABEL_50:
            *a4 = 2LL;
            v5 = 2LL;
            goto LABEL_232;
          }
          if ( v41 != 1 || a5 != 24 )
            return (unsigned int)-1073741811;
          v42 = v16 >> 60;
          v43 = 0LL;
          v44 = 0LL;
          *(_OWORD *)a4 = 0LL;
          a4[2] = 0LL;
          if ( (v42 & 3) != 0 )
          {
            v45 = (v42 & 3) - v41;
            if ( !v45 )
            {
LABEL_119:
              v44 = v43 | 1;
              *a4 = v43 | 1;
              goto LABEL_120;
            }
            v46 = v45 - v41;
            if ( v46 )
            {
              if ( v46 != v41 )
                goto LABEL_120;
              v43 = 8LL;
              goto LABEL_119;
            }
            *a4 = 2LL;
            v44 = 2LL;
          }
LABEL_120:
          if ( (v42 & 4) != 0 )
            *a4 = v44 | 4;
          v47 = 0LL;
          if ( (v15 & 3) != 0 )
          {
            v48 = (v15 & 3) - v41;
            if ( v48 )
            {
              if ( v48 == v41 )
              {
                v47 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
                a4[1] = v47;
              }
            }
            else
            {
              a4[1] = 1LL;
              v47 = 1LL;
            }
          }
          else
          {
            a4[1] = 0LL;
          }
          if ( (v15 & 4) != 0 )
            a4[1] = v47 | 4;
          v49 = v15 >> 4;
          if ( (v49 & 3) == 0 )
          {
            a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
            goto LABEL_139;
          }
          v50 = (v49 & 3) - v41;
          if ( v50 )
          {
            v51 = v50 - v41;
            if ( !v51 )
            {
              a4[2] &= ~1uLL;
              a4[2] |= 2uLL;
              goto LABEL_139;
            }
            if ( v51 != v41 )
            {
LABEL_139:
              v32 = (v49 & 4) == 0;
LABEL_83:
              if ( !v32 )
                a4[2] |= 4uLL;
              return (unsigned int)inited;
            }
            a4[2] |= 8uLL;
          }
          a4[2] &= ~2uLL;
          a4[2] |= 1uLL;
          goto LABEL_139;
        }
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        v52 = v16 >> 36;
        *a4 = 0LL;
        if ( (v52 & 3) != 0 )
        {
          switch ( v52 & 3 )
          {
            case 1uLL:
LABEL_150:
              v5 |= 1uLL;
              *a4 = v5;
              break;
            case 2uLL:
              *a4 = 2LL;
              v5 = 2LL;
              break;
            case 3uLL:
              v5 = 8LL;
              goto LABEL_150;
          }
        }
        v53 = (v52 & 4) == 0;
        goto LABEL_233;
      }
      if ( a5 != 1072 )
        return (unsigned int)-1073741811;
      memset(a4, 0, 0x430uLL);
      v54 = 0LL;
      if ( (v16 & 0x30000) != 0 )
      {
        if ( (BYTE2(v16) & 3) == 1 )
        {
          a4[3] = 1LL;
          v54 = 1LL;
        }
        else if ( (BYTE2(v16) & 3) == 2 )
        {
          a4[3] = 2LL;
          v54 = 2LL;
        }
      }
      if ( (v16 & 0x40000) != 0 )
        a4[3] = v54 | 4;
      v55 = 0LL;
      if ( ((v16 >> 20) & 3) != 0 )
      {
        if ( ((v16 >> 20) & 3) == 1 )
        {
          a4[4] = 1LL;
          v55 = 1LL;
        }
        else if ( ((v16 >> 20) & 3) == 2 )
        {
          v55 = a4[4] & 0xFFFFFFFFFFFFFFFCuLL | 2;
          a4[4] = v55;
        }
      }
      else
      {
        a4[4] = 0LL;
      }
      if ( ((v16 >> 20) & 4) != 0 )
        a4[4] = v55 | 4;
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
      v56 = v16 >> 40;
      if ( (v56 & 3) != 0 )
      {
        if ( (v56 & 3) == 1 )
        {
          a4[2] &= ~2uLL;
          a4[2] |= 1uLL;
        }
        else if ( (v56 & 3) == 2 )
        {
          a4[2] &= ~1uLL;
          a4[2] |= 2uLL;
        }
      }
      else
      {
        a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v56 & 4) != 0 )
        a4[2] |= 4uLL;
      v57 = a4 + 6;
      v58 = v79;
      do
      {
        v59 = v58[1];
        *v57 = *v58;
        v60 = v58[2];
        v57[1] = v59;
        v61 = v58[3];
        v57[2] = v60;
        v62 = v58[4];
        v57[3] = v61;
        v63 = v58[5];
        v57[4] = v62;
        v64 = v58[6];
        v57[5] = v63;
        v65 = v58[7];
        v58 += 8;
        v57[6] = v64;
        v57 += 8;
        *(v57 - 1) = v65;
        --v7;
      }
      while ( v7 );
    }
  }
  return (unsigned int)inited;
}
