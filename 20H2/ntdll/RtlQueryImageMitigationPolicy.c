/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x1800E1D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800752DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenKey @ 0x18009D2F0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D390 (NtQueryValueKey.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E3C28 (RtlpQueryEafPlusModuleList.c)
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
  unsigned __int64 v29; // rdx
  __int64 v30; // r10
  __int64 v31; // r9
  __int64 v32; // r11
  __int64 v33; // r9
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rdx
  bool v36; // zf
  int v37; // r14d
  int v38; // r14d
  int v39; // r14d
  int v40; // r14d
  int v41; // r14d
  int v42; // r14d
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r15
  __int64 v45; // r9
  __int64 v46; // r8
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r13
  bool v49; // zf
  unsigned __int64 v50; // r15
  __int64 v51; // r8
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r15
  _OWORD *v54; // rdi
  _OWORD *v55; // rax
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int64 v63; // r9
  unsigned __int64 v64; // r8
  int v66; // [rsp+38h] [rbp-D0h]
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 v68[8]; // [rsp+48h] [rbp-C0h] BYREF
  char v69[8]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v70; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v71; // [rsp+78h] [rbp-90h]
  int v72; // [rsp+80h] [rbp-88h]
  _QWORD Src[2]; // [rsp+88h] [rbp-80h] BYREF
  int v74; // [rsp+98h] [rbp-70h]
  __int128 v75; // [rsp+A0h] [rbp-68h]
  _BYTE v76[1024]; // [rsp+B8h] [rbp-50h] BYREF

  v5 = 0LL;
  Handle = 0LL;
  v66 = a3 & 4;
  v7 = 8LL;
  v8 = a3 & 8;
  v71 = 0LL;
  v70 = 0LL;
  inited = RtlInitUnicodeStringEx((__int64)v68, a1);
  if ( inited >= 0 )
  {
    v11 = L"MitigationOptions";
    if ( v8 )
      v11 = L"MitigationAuditOptions";
    inited = RtlInitUnicodeStringEx((__int64)v69, (__int64)v11);
    if ( inited >= 0 )
    {
      v12 = v66;
      if ( v66 )
      {
        if ( v68[0] )
          return (unsigned int)-1073741811;
      }
      else
      {
        if ( v68[0] )
        {
          v13 = RtlpOpenImageFileOptionsKeyEx(v68, 9LL, 0, &Handle);
        }
        else
        {
          v72 = 48;
          Src[1] = &unk_18011DB70;
          Src[0] = 0LL;
          v74 = 576;
          v75 = 0LL;
          v13 = NtOpenKey();
        }
        inited = v13;
        v12 = v66;
      }
      if ( inited < 0 )
        return (unsigned int)inited;
      if ( v12 )
      {
        if ( v8 )
        {
          v17 = v70 & 0xEEEEEEEEEEEEEEEEuLL;
          v18 = 0x2222222222222222LL;
        }
        else
        {
          v17 = v70 & 0xEEEEECCCCCCCCCCCuLL | 0x12222111211LL;
          v18 = 0x2222200000000000LL;
        }
        v14 = v18 | v17;
        v16 = *((_QWORD *)&v70 + 1) & 0xCCCCFCCCCCCCFCCCuLL | 0x2222022222220222LL;
        v15 = 2228258LL;
      }
      else
      {
        inited = NtQueryValueKey();
        if ( inited >= 0 && a2 == 11 )
          inited = RtlpQueryEafPlusModuleList(Handle, v76);
        NtClose(Handle);
        if ( inited < 0 )
          return (unsigned int)inited;
        if ( LODWORD(Src[0]) > 0x18 )
          return (unsigned int)-1073741788;
        memmove(&v70, (char *)Src + 4, LODWORD(Src[0]));
        v14 = v70;
        v15 = v71;
        v16 = *((_QWORD *)&v70 + 1);
      }
      if ( a2 <= 9 )
      {
        if ( a2 == 9 )
        {
          if ( a5 != 8 )
            return (unsigned int)-1073741811;
          v14 >>= 48;
          goto LABEL_101;
        }
        if ( !a2 )
        {
          if ( a5 != 8 )
            return (unsigned int)-1073741811;
          goto LABEL_101;
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
                  v29 = v14 >> 40;
                  v30 = 0LL;
                  v31 = 0LL;
                  *(_OWORD *)a4 = 0LL;
                  if ( (v29 & 3) != 0 )
                  {
                    switch ( v29 & 3 )
                    {
                      case 1uLL:
LABEL_60:
                        v31 = v30 | 1;
                        *a4 = v30 | 1;
                        break;
                      case 2uLL:
                        *a4 = 2LL;
                        v31 = 2LL;
                        break;
                      case 3uLL:
                        v30 = 8LL;
                        goto LABEL_60;
                    }
                  }
                  if ( (v29 & 4) != 0 )
                    *a4 = v31 | 4;
                  v28 = v16 >> 8;
LABEL_45:
                  if ( (v28 & 3) != 0 )
                  {
                    if ( (v28 & 3) == 1 )
                    {
                      a4[1] = 1LL;
                      v5 = 1LL;
LABEL_50:
                      if ( (v28 & 4) != 0 )
                        a4[1] = v5 | 4;
                      return (unsigned int)inited;
                    }
                    if ( (v28 & 3) != 2 )
                      goto LABEL_50;
                    v5 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
                  }
                  a4[1] = v5;
                  goto LABEL_50;
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
            goto LABEL_69;
          }
          if ( a5 != 8 )
            return (unsigned int)-1073741811;
          v14 >>= 36;
LABEL_101:
          *a4 = 0LL;
          if ( (v14 & 3) == 0 )
            goto LABEL_107;
          if ( (v14 & 3) != 1 )
          {
            if ( (v14 & 3) == 2 )
              goto LABEL_72;
            if ( (v14 & 3) != 3 )
              goto LABEL_107;
            v5 = 8LL;
          }
          v5 |= 1uLL;
          *a4 = v5;
          goto LABEL_107;
        }
        if ( a5 != 24 )
          return (unsigned int)-1073741811;
        v32 = 0LL;
        v33 = 0LL;
        *(_OWORD *)a4 = 0LL;
        a4[2] = 0LL;
        if ( (v14 & 0x300) != 0 )
        {
          if ( (BYTE1(v14) & 3) == 1 )
          {
LABEL_84:
            v33 = v32 | 1;
            *a4 = v32 | 1;
            goto LABEL_85;
          }
          if ( (BYTE1(v14) & 3) != 2 )
          {
            if ( (BYTE1(v14) & 3) != 3 )
              goto LABEL_85;
            v32 = 8LL;
            goto LABEL_84;
          }
          *a4 = 2LL;
          v33 = 2LL;
        }
LABEL_85:
        if ( (v14 & 0x400) != 0 )
          *a4 = v33 | 4;
        v34 = 0LL;
        if ( (v14 & 0x30000) != 0 )
        {
          if ( (BYTE2(v14) & 3) == 1 )
          {
            a4[1] = 1LL;
            v34 = 1LL;
          }
          else if ( (BYTE2(v14) & 3) == 2 )
          {
            v34 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
            a4[1] = v34;
          }
        }
        else
        {
          a4[1] = 0LL;
        }
        if ( (v14 & 0x40000) != 0 )
          a4[1] = v34 | 4;
        v35 = v14 >> 20;
        if ( (v35 & 3) != 0 )
        {
          if ( (v35 & 3) != 1 )
          {
            if ( (v35 & 3) == 2 )
            {
              a4[2] &= ~1uLL;
              a4[2] |= 2uLL;
            }
            goto LABEL_239;
          }
          goto LABEL_237;
        }
        goto LABEL_238;
      }
      v37 = a2 - 10;
      if ( !v37 )
      {
        if ( a5 != 24 )
          return (unsigned int)-1073741811;
        v63 = 0LL;
        *(_OWORD *)a4 = 0LL;
        a4[2] = 0LL;
        if ( ((v14 >> 52) & 3) != 0 )
        {
          if ( ((v14 >> 52) & 3) == 1 )
          {
            *a4 = 1LL;
            v63 = 1LL;
          }
          else if ( ((v14 >> 52) & 3) == 2 )
          {
            *a4 = 2LL;
            v63 = 2LL;
          }
        }
        if ( ((v14 >> 52) & 4) != 0 )
          *a4 = v63 | 4;
        v64 = 0LL;
        if ( (v14 & 0x300000000000000LL) != 0 )
        {
          if ( (HIBYTE(v14) & 3) == 1 )
          {
            a4[1] = 1LL;
            v64 = 1LL;
          }
          else if ( (HIBYTE(v14) & 3) == 2 )
          {
            v64 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
            a4[1] = v64;
          }
        }
        else
        {
          a4[1] = 0LL;
        }
        if ( (v14 & 0x400000000000000LL) != 0 )
          a4[1] = v64 | 4;
        v35 = v14 >> 60;
        if ( (v35 & 3) != 0 )
        {
          if ( (v35 & 3) != 1 )
          {
            if ( (v35 & 3) == 2 )
            {
              a4[2] &= ~1uLL;
              a4[2] |= 2uLL;
            }
            goto LABEL_239;
          }
LABEL_237:
          a4[2] &= ~2uLL;
          a4[2] |= 1uLL;
LABEL_239:
          v49 = (v35 & 4) == 0;
LABEL_240:
          if ( !v49 )
            a4[2] |= 4uLL;
          return (unsigned int)inited;
        }
LABEL_238:
        a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_239;
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
            goto LABEL_101;
          }
          v41 = v40 - 1;
          if ( !v41 )
          {
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            v14 >>= 12;
LABEL_69:
            *a4 = 0LL;
            if ( (v14 & 3) == 0 )
              goto LABEL_107;
            if ( (v14 & 3) == 1 )
            {
              *a4 = 1LL;
              v5 = 1LL;
              goto LABEL_107;
            }
            if ( (v14 & 3) != 2 )
            {
LABEL_107:
              v36 = (v14 & 4) == 0;
              goto LABEL_108;
            }
LABEL_72:
            *a4 = 2LL;
            v5 = 2LL;
            goto LABEL_107;
          }
          v42 = v41 - 1;
          if ( v42 )
          {
            if ( v42 != 1 || a5 != 8 )
              return (unsigned int)-1073741811;
            v43 = v15 >> 20;
            *a4 = 0LL;
            if ( (v43 & 3) != 0 )
            {
              if ( (v43 & 3) == 1 )
              {
                *a4 = 1LL;
                v5 = 1LL;
              }
              else if ( (v43 & 3) == 2 )
              {
                *a4 = 2LL;
                v5 = 2LL;
              }
            }
            v36 = (v43 & 4) == 0;
            goto LABEL_108;
          }
          if ( a5 != 24 )
            return (unsigned int)-1073741811;
          v44 = v16 >> 60;
          v45 = 0LL;
          v46 = 0LL;
          *(_OWORD *)a4 = 0LL;
          a4[2] = 0LL;
          if ( (v44 & 3) != 0 )
          {
            if ( (v44 & 3) == 1 )
            {
LABEL_132:
              v46 = v45 | 1;
              *a4 = v45 | 1;
              goto LABEL_133;
            }
            if ( (v44 & 3) != 2 )
            {
              if ( (v44 & 3) != 3 )
                goto LABEL_133;
              v45 = 8LL;
              goto LABEL_132;
            }
            *a4 = 2LL;
            v46 = 2LL;
          }
LABEL_133:
          if ( (v44 & 4) != 0 )
            *a4 = v46 | 4;
          v47 = 0LL;
          if ( (v15 & 3) != 0 )
          {
            if ( (v15 & 3) == 1 )
            {
              a4[1] = 1LL;
              v47 = 1LL;
            }
            else if ( (v15 & 3) == 2 )
            {
              v47 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
              a4[1] = v47;
            }
          }
          else
          {
            a4[1] = 0LL;
          }
          if ( (v15 & 4) != 0 )
            a4[1] = v47 | 4;
          v48 = v15 >> 4;
          if ( (v48 & 3) == 0 )
          {
            a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
            goto LABEL_152;
          }
          if ( (v48 & 3) != 1 )
          {
            if ( (v48 & 3) == 2 )
            {
              a4[2] &= ~1uLL;
              a4[2] |= 2uLL;
              goto LABEL_152;
            }
            if ( (v48 & 3) != 3 )
            {
LABEL_152:
              v49 = (v48 & 4) == 0;
              goto LABEL_240;
            }
            a4[2] |= 8uLL;
          }
          a4[2] &= ~2uLL;
          a4[2] |= 1uLL;
          goto LABEL_152;
        }
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        v50 = v16 >> 36;
        *a4 = 0LL;
        if ( (v50 & 3) != 0 )
        {
          switch ( v50 & 3 )
          {
            case 1uLL:
LABEL_163:
              v5 |= 1uLL;
              *a4 = v5;
              break;
            case 2uLL:
              *a4 = 2LL;
              v5 = 2LL;
              break;
            case 3uLL:
              v5 = 8LL;
              goto LABEL_163;
          }
        }
        v36 = (v50 & 4) == 0;
LABEL_108:
        if ( !v36 )
          *a4 = v5 | 4;
        return (unsigned int)inited;
      }
      if ( a5 != 1072 )
        return (unsigned int)-1073741811;
      memset(a4, 0, 0x430uLL);
      v51 = 0LL;
      if ( (v16 & 0x30000) != 0 )
      {
        if ( (BYTE2(v16) & 3) == 1 )
        {
          a4[3] = 1LL;
          v51 = 1LL;
        }
        else if ( (BYTE2(v16) & 3) == 2 )
        {
          a4[3] = 2LL;
          v51 = 2LL;
        }
      }
      if ( (v16 & 0x40000) != 0 )
        a4[3] = v51 | 4;
      v52 = 0LL;
      if ( ((v16 >> 20) & 3) != 0 )
      {
        if ( ((v16 >> 20) & 3) == 1 )
        {
          a4[4] = 1LL;
          v52 = 1LL;
        }
        else if ( ((v16 >> 20) & 3) == 2 )
        {
          v52 = a4[4] & 0xFFFFFFFFFFFFFFFCuLL | 2;
          a4[4] = v52;
        }
      }
      else
      {
        a4[4] = 0LL;
      }
      if ( ((v16 >> 20) & 4) != 0 )
        a4[4] = v52 | 4;
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
      v53 = v16 >> 40;
      if ( (v53 & 3) != 0 )
      {
        if ( (v53 & 3) == 1 )
        {
          a4[2] &= ~2uLL;
          a4[2] |= 1uLL;
        }
        else if ( (v53 & 3) == 2 )
        {
          a4[2] &= ~1uLL;
          a4[2] |= 2uLL;
        }
      }
      else
      {
        a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v53 & 4) != 0 )
        a4[2] |= 4uLL;
      v54 = a4 + 6;
      v55 = v76;
      do
      {
        v56 = v55[1];
        *v54 = *v55;
        v57 = v55[2];
        v54[1] = v56;
        v58 = v55[3];
        v54[2] = v57;
        v59 = v55[4];
        v54[3] = v58;
        v60 = v55[5];
        v54[4] = v59;
        v61 = v55[6];
        v54[5] = v60;
        v62 = v55[7];
        v55 += 8;
        v54[6] = v61;
        v54 += 8;
        *(v54 - 1) = v62;
        --v7;
      }
      while ( v7 );
    }
  }
  return (unsigned int)inited;
}
