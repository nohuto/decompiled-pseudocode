/*
 * XREFs of _RtlFormatMessageEx@40 @ 0x4B2E0E20
 * Callers:
 *     _RtlFormatMessage@36 @ 0x4B3625E0 (_RtlFormatMessage@36.c)
 * Callees:
 *     _RtlStringCbCopyExW@24 @ 0x4B2A763E (_RtlStringCbCopyExW@24.c)
 *     _RtlStringCchPrintfExW @ 0x4B2A76F1 (_RtlStringCchPrintfExW.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _RtlStringCchCopyW@12 @ 0x4B3475EA (_RtlStringCchCopyW@12.c)
 */

int __stdcall RtlFormatMessageEx(
        __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        unsigned int *a6,
        wchar_t *Buffer,
        unsigned int a8,
        unsigned int *a9,
        unsigned int *a10)
{
  __int16 *v10; // edx
  unsigned int *v11; // ecx
  unsigned int *v12; // ebx
  wchar_t *v13; // esi
  wchar_t *v14; // edi
  int v15; // ecx
  __int16 v16; // ax
  unsigned int v17; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // edx
  unsigned __int16 v22; // ax
  unsigned __int16 *v23; // ecx
  char *v24; // edi
  char v25; // al
  unsigned int v26; // eax
  char v27; // bl
  unsigned int *v28; // esi
  unsigned int v29; // edx
  unsigned int v30; // ecx
  int v31; // eax
  unsigned __int16 *v32; // ecx
  int v33; // edx
  unsigned int v34; // eax
  int v35; // edi
  int v36; // eax
  int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // ecx
  unsigned int v40; // edx
  unsigned int v41; // eax
  int v42; // edx
  char *v43; // edx
  unsigned __int16 v44; // cx
  unsigned __int16 v45; // ax
  unsigned __int16 v46; // dx
  unsigned int v47; // eax
  char v48; // ah
  char *v49; // ecx
  int v50; // eax
  int v51; // edx
  __int16 v52; // ax
  __int16 v53; // ax
  __int16 v54; // ax
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // ebx
  int *v59; // edi
  unsigned int *v60; // eax
  char *v61; // ecx
  unsigned int *v62; // eax
  unsigned int v63; // eax
  _WORD *v64; // esi
  unsigned int v65; // eax
  wchar_t *v66; // ecx
  __int16 v67; // ax
  unsigned int v68; // eax
  wchar_t *v69; // eax
  int v70; // eax
  _WORD *v71; // edi
  _WORD *v72; // esi
  __int16 v73; // [esp-4h] [ebp-714h]
  wchar_t *v74; // [esp+38h] [ebp-6D8h]
  unsigned int v75; // [esp+4Ch] [ebp-6C4h]
  int v76; // [esp+54h] [ebp-6BCh]
  char v77[4]; // [esp+58h] [ebp-6B8h]
  char v78[4]; // [esp+58h] [ebp-6B8h]
  int v79; // [esp+5Ch] [ebp-6B4h] BYREF
  unsigned int v80; // [esp+60h] [ebp-6B0h]
  unsigned __int16 *v81; // [esp+64h] [ebp-6ACh] BYREF
  unsigned int v82; // [esp+68h] [ebp-6A8h]
  wchar_t *v83; // [esp+6Ch] [ebp-6A4h]
  wchar_t *v84; // [esp+70h] [ebp-6A0h]
  unsigned int *v85; // [esp+74h] [ebp-69Ch]
  int v86; // [esp+78h] [ebp-698h]
  char v87; // [esp+7Eh] [ebp-692h]
  char v88; // [esp+7Fh] [ebp-691h]
  unsigned __int16 *v89; // [esp+80h] [ebp-690h]
  int v90; // [esp+84h] [ebp-68Ch]
  char Args[4]; // [esp+88h] [ebp-688h] BYREF
  _DWORD v92[399]; // [esp+8Ch] [ebp-684h]
  wchar_t Format; // [esp+6C8h] [ebp-48h] BYREF
  char v94[4]; // [esp+6CAh] [ebp-46h] BYREF
  char v95; // [esp+6CEh] [ebp-42h] BYREF
  char v96; // [esp+6D0h] [ebp-40h] BYREF
  char v97; // [esp+706h] [ebp-Ah] BYREF

  v82 = 0;
  v10 = a1;
  v11 = a6;
  v12 = a10;
  v85 = a6;
  v90 = a8 >> 1;
  if ( a10 )
  {
    if ( (*a10 & 1) != 0 )
    {
      v38 = a10[2];
      v39 = *a10 & 0xFFFFFFFE;
      *a10 = v39;
      v40 = a10[3];
      v89 = (unsigned __int16 *)&a1[v38];
      v76 = (int)v89;
      v86 = a10[1];
      v13 = &Buffer[v40];
      v41 = a10[4];
      v84 = v13;
      if ( v41 == -1 )
        v14 = 0;
      else
        v14 = &Buffer[v41];
      v90 -= v40;
      v83 = v14;
      if ( !a5 && v85 )
      {
        *v85 = a10[5];
        v39 = *a10;
      }
      if ( (v39 & 2) != 0 )
      {
        *a10 = v39 & 0xFFFFFFFD;
        v15 = v90;
        goto LABEL_153;
      }
      v10 = (__int16 *)v89;
      goto LABEL_6;
    }
    v11 = v85;
  }
  v13 = Buffer;
  v14 = 0;
  v84 = Buffer;
  v86 = 0;
  v83 = 0;
  v76 = (int)a1;
  if ( !a5 && v11 && a10 )
    a10[5] = *v11;
LABEL_6:
  v15 = v90;
  while ( 1 )
  {
    v16 = *v10;
    if ( !*v10 )
      break;
    ++v10;
    if ( v16 == 37 )
    {
      v19 = (unsigned __int16)*v10;
      v74 = v13;
      if ( (unsigned __int16)(v19 - 49) > 8u )
      {
        if ( (_WORD)v19 == 48 )
          break;
        if ( !(_WORD)v19 )
          return -1073741811;
        switch ( v19 )
        {
          case 'r':
            v15 = --v90;
            if ( v90 < 0 )
              goto LABEL_167;
            *v13++ = 13;
            ++v10;
            goto LABEL_126;
          case 'n':
            v15 = v90 - 2;
            v90 -= 2;
            if ( v90 < 0 )
              goto LABEL_167;
            *v13 = 13;
            v64 = v13 + 1;
            *v64 = 10;
            v13 = v64 + 1;
            ++v10;
LABEL_126:
            v84 = v13;
            v89 = (unsigned __int16 *)v10;
LABEL_127:
            v14 = 0;
            v17 = 0;
            v83 = 0;
            goto LABEL_15;
          case 't':
            v15 = --v90;
            if ( v90 < 0 )
              goto LABEL_167;
            if ( (v86 & 7) != 0 )
              v65 = (v86 + 7) & 0xFFFFFFF8;
            else
              v65 = v86 + 8;
            v86 = v65;
            v73 = 9;
            goto LABEL_137;
          case 'b':
            v15 = --v90;
            if ( v90 < 0 )
              goto LABEL_167;
            v73 = 32;
LABEL_137:
            v14 = v13;
            v83 = v13;
            *v13 = v73;
LABEL_146:
            ++v13;
            break;
          default:
            if ( !a3 )
            {
              if ( --v90 < 0 )
                goto LABEL_167;
              *v13 = v19;
              v15 = v90;
              goto LABEL_146;
            }
            v15 = v90 - 2;
            v90 -= 2;
            if ( v90 < 0 )
              goto LABEL_167;
            *v13 = 37;
            v13[1] = *v10;
            v13 += 2;
            break;
        }
        v89 = (unsigned __int16 *)++v10;
        goto LABEL_51;
      }
      v89 = (unsigned __int16 *)(v10 + 1);
      v20 = v19 - 48;
      v21 = (unsigned __int16)v10[1];
      v22 = v21;
      if ( (unsigned __int16)v21 < 0x30u )
        goto LABEL_31;
      v22 = v21;
      v23 = v89;
      if ( (unsigned __int16)v21 <= 0x39u )
      {
        v23 = v89 + 1;
        v89 = v23;
        v20 = v21 - 48 + 10 * v20;
        v42 = *v23;
        v22 = v42;
        if ( (unsigned __int16)v42 >= 0x30u && (unsigned __int16)v42 <= 0x39u )
        {
          ++v89;
          v20 = 10 * v20 + v42 - 48;
          v22 = *v89;
          if ( *v89 >= 0x30u && *v89 <= 0x39u )
            return -1073741811;
LABEL_31:
          v23 = v89;
        }
      }
      v80 = 0;
      *(_DWORD *)v77 = v20;
      v75 = v20 - 1;
      if ( v22 == 33 )
      {
        v87 = 0;
        Format = 37;
        v24 = v94;
        v89 = v23 + 1;
        v43 = v94;
        v44 = v23[1];
        v81 = (unsigned __int16 *)v94;
        if ( v44 != 33 )
        {
          v45 = v44;
          while ( v45 )
          {
            if ( v24 >= &v97 )
              break;
            v46 = v45;
            if ( v45 == 42 )
            {
              v47 = v80++;
              v46 = v44;
              if ( v47 > 1 )
                break;
            }
            *v81 = v46;
            v43 = v24 + 2;
            v24 = v43;
            v81 = (unsigned __int16 *)v43;
            v44 = *++v89;
            v45 = *v89;
            if ( *v89 == 33 )
              goto LABEL_77;
          }
          return -1073741811;
        }
LABEL_77:
        ++v89;
        v48 = 0;
        *(_WORD *)v24 = 0;
        v88 = 0;
        if ( &v96 > v43 )
        {
          v25 = 0;
        }
        else
        {
          v49 = &v95;
          while ( !v48 )
          {
            if ( *((_WORD *)v49 - 2) == 73 && *((_WORD *)v49 - 1) == 54 && *(_WORD *)v49 == 52 )
              v88 = 1;
            v49 += 2;
            if ( v49 + 2 > v24 )
              break;
            v48 = v88;
          }
          v25 = v87;
        }
      }
      else
      {
        RtlStringCbCopyExW(&Format, (int)v23, &v81, (int)v23, (int)v23);
        v24 = (char *)v81;
        v25 = 1;
        v88 = 0;
      }
      if ( !a3 )
      {
        if ( !v85 || v80 + v75 >= 0xC8 )
          return -1073741811;
        if ( !a4 )
          goto LABEL_38;
        v51 = *((unsigned __int16 *)v24 - 1);
        if ( (_WORD)v51 == 99 )
        {
          v52 = *((_WORD *)v24 - 2);
          if ( v52 != 104 && v52 != 119 && v52 != 108 )
          {
            RtlStringCchCopyW(L"hc");
LABEL_38:
            v26 = v82;
            if ( v75 >= v82 )
            {
              v27 = v88;
              v28 = v85;
              while ( 1 )
              {
                v29 = v26 + 1;
                if ( a5 )
                {
                  v30 = *v28;
                  v85 = v28 + 1;
                }
                else
                {
                  v55 = *v28;
                  if ( v27 )
                  {
                    v56 = v55 + 8;
                    *v28 = v56;
                    v30 = *(_DWORD *)(v56 - 8);
                    v31 = *(_DWORD *)(v56 - 4);
                    goto LABEL_43;
                  }
                  v57 = v55 + 4;
                  *v28 = v57;
                  v30 = *(_DWORD *)(v57 - 4);
                }
                v31 = 0;
LABEL_43:
                *(_DWORD *)&Args[8 * v82] = v30;
                v28 = v85;
                v92[2 * v82] = v31;
                v26 = v29;
                v82 = v29;
                if ( v29 > v75 )
                {
                  v13 = v84;
                  v12 = a10;
                  v82 = v29;
                  break;
                }
              }
            }
            v32 = *(unsigned __int16 **)&Args[8 * v75];
            v33 = 0;
            v34 = v80;
            v35 = 0;
            *(_DWORD *)v78 = v32;
            v81 = v32;
            if ( v80 )
            {
              if ( a5 )
              {
                v58 = v82;
                v59 = (int *)v85;
                v92[2 * v82] = 0;
                v35 = *v59;
                *(_DWORD *)&Args[8 * v58] = v35;
                ++v85;
                v82 = v58 + 1;
                v12 = a10;
              }
              else
              {
                v60 = v85;
                *v85 += 4;
                v35 = *(_DWORD *)(*v60 - 4);
                v34 = v80;
              }
              if ( v34 > 1 )
              {
                v61 = &Args[8 * v82++];
                v62 = v85;
                if ( a5 )
                {
                  v33 = *v85;
                  *((_DWORD *)v61 + 1) = 0;
                  v85 = v62 + 1;
                }
                else
                {
                  *v85 += 4;
                  v63 = *v62;
                  *((_DWORD *)v61 + 1) = 0;
                  v33 = *(_DWORD *)(v63 - 4);
                }
                *(_DWORD *)v61 = v33;
                v32 = *(unsigned __int16 **)v78;
              }
            }
            if ( v88 )
              v36 = RtlStringCchPrintfExW(
                      v13,
                      v90,
                      (wchar_t **)&v79,
                      0,
                      0,
                      &Format,
                      *(_DWORD *)&Args[8 * v75],
                      v92[2 * v75],
                      v35,
                      v33);
            else
              v36 = RtlStringCchPrintfExW(v13, v90, (wchar_t **)&v79, 0, 0, &Format, v32, v35, v33);
            goto LABEL_48;
          }
        }
        v53 = 115;
        if ( (_WORD)v51 == 115 )
        {
          v54 = *((_WORD *)v24 - 2);
          if ( v54 != 104 && v54 != 119 && v54 != 108 )
          {
            RtlStringCchCopyW(L"hs");
            goto LABEL_38;
          }
          v53 = 115;
        }
        if ( v51 != 83 )
        {
          if ( v51 != 67 )
            goto LABEL_38;
          v53 = 99;
        }
        *((_WORD *)v24 - 1) = v53;
        goto LABEL_38;
      }
      if ( v25 == 1 )
        goto LABEL_93;
      v50 = wcscmp(&Format, L"%s");
      if ( v50 )
        v50 = v50 < 0 ? -1 : 1;
      if ( !v50 )
LABEL_93:
        v36 = RtlStringCchPrintfExW(v13, v90, (wchar_t **)&v79, 0, 0, (wchar_t *)L"%%%u", *(_DWORD *)v77);
      else
        v36 = RtlStringCchPrintfExW(v13, v90, (wchar_t **)&v79, 0, 0, (wchar_t *)L"%%%u!%s!", *(_DWORD *)v77, v94);
LABEL_48:
      if ( v36 < 0 )
        goto LABEL_167;
      v37 = (v79 - (int)v13) >> 1;
      v15 = v90 - v37;
      v90 -= v37;
      if ( v90 < 0 )
        goto LABEL_167;
      v14 = v83;
      v13 += v37;
      v10 = (__int16 *)v89;
LABEL_51:
      v84 = v13;
      if ( !v74 )
        goto LABEL_127;
      v86 += v13 - v74;
      v17 = v86;
LABEL_16:
      v76 = (int)v10;
      if ( a2 && a2 != -1 && v17 >= a2 )
      {
LABEL_153:
        if ( v14 )
        {
          v66 = v14;
          do
          {
            if ( *v66 != 32 && *v66 != 9 )
              break;
            ++v66;
          }
          while ( v66 != v13 );
          if ( v14 > Buffer )
          {
            do
            {
              v67 = *(v14 - 1);
              if ( v67 != 32 && v67 != 9 )
                break;
              --v14;
            }
            while ( v14 > Buffer );
            v12 = a10;
            v83 = v14;
          }
          v68 = v66 - v14;
          if ( v68 == 1 )
          {
            if ( --v90 < 0 )
              goto LABEL_165;
          }
          else if ( v68 > 2 )
          {
            v90 = v68 + v90 - 2;
          }
          v86 = v13 - v66;
          memmove(v14 + 2, v66, 2 * v86);
          v15 = v90;
          *v14 = 13;
          v71 = v14 + 1;
          *v71 = 10;
          v72 = &v71[v86];
        }
        else
        {
          v15 -= 2;
          v90 = v15;
          if ( v15 < 0 )
          {
LABEL_165:
            if ( v12 )
            {
              *v12 |= 2u;
              goto LABEL_167;
            }
            return -2147483643;
          }
          *v13 = 13;
          v72 = v13 + 1;
          v86 = 0;
          *v72 = 10;
        }
        v10 = (__int16 *)v89;
        v14 = 0;
        v13 = v72 + 1;
        v83 = 0;
        v84 = v13;
      }
    }
    else
    {
      v89 = (unsigned __int16 *)v10;
      if ( v16 != 13 && v16 != 10 )
        goto LABEL_11;
      if ( v16 == 10 && *v10 == 13 || v16 == 13 && *v10 == 10 )
        v89 = (unsigned __int16 *)++v10;
      if ( a2 )
      {
        v14 = v13;
        v83 = v13;
        v16 = 32;
LABEL_11:
        v90 = --v15;
        if ( v15 < 0 )
          goto LABEL_167;
        if ( v16 == 32 )
        {
          v14 = v13;
          v83 = v13;
        }
        *v13++ = v16;
        v84 = v13;
        v17 = v86 + 1;
LABEL_15:
        v86 = v17;
        goto LABEL_16;
      }
      v15 -= 2;
      v90 = v15;
      if ( v15 < 0 )
        goto LABEL_167;
      *v13 = 13;
      v14 = 0;
      v13[1] = 10;
      v13 += 2;
      v86 = 0;
      v84 = v13;
      v83 = 0;
      v76 = (int)v10;
    }
  }
  if ( v90 < 1 )
  {
LABEL_167:
    if ( v12 )
    {
      v12[1] = v86;
      v12[2] = (v76 - (int)a1) >> 1;
      v69 = v83;
      v12[3] = v13 - Buffer;
      if ( v69 )
        v70 = v69 - Buffer;
      else
        v70 = -1;
      *v12 |= 1u;
      v12[4] = v70;
    }
    return -2147483643;
  }
  *v13 = 0;
  if ( a9 )
    *a9 = ((char *)v13 - (char *)Buffer + 2) & 0xFFFFFFFE;
  return 0;
}
