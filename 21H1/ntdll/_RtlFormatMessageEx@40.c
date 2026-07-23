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

NTSTATUS __cdecl RtlFormatMessageEx(
        PWSTR MessageFormat,
        ULONG MaximumWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG Length,
        PULONG ReturnLength,
        PPARSE_MESSAGE_CONTEXT ParseContext)
{
  PWSTR v10; // edx
  va_list *v11; // ecx
  PPARSE_MESSAGE_CONTEXT v12; // ebx
  wchar_t *v13; // esi
  WCHAR *v14; // edi
  int v15; // ecx
  __int16 v16; // ax
  ULONG v17; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // edx
  WCHAR v22; // ax
  WCHAR *v23; // ecx
  wchar_t *v24; // edi
  char v25; // al
  unsigned int v26; // eax
  char v27; // bl
  va_list *v28; // esi
  unsigned int v29; // edx
  va_list v30; // ecx
  int v31; // eax
  wchar_t *v32; // ecx
  unsigned int v33; // eax
  int v34; // eax
  int v35; // eax
  int iwSrc; // eax
  ULONG fFlags; // ecx
  int iwSrc_high; // edx
  int iwDst; // eax
  int v40; // edx
  wchar_t *v41; // edx
  unsigned __int16 v42; // cx
  WCHAR v43; // ax
  wchar_t v44; // dx
  unsigned int v45; // eax
  char v46; // ah
  char *v47; // ecx
  int v48; // eax
  int v49; // edx
  __int16 v50; // ax
  __int16 v51; // ax
  __int16 v52; // ax
  va_list v53; // eax
  va_list v54; // eax
  va_list v55; // eax
  unsigned int v56; // ebx
  va_list *v57; // edi
  va_list *v58; // eax
  va_list v59; // edx
  va_list v60; // eax
  _WORD *v61; // esi
  unsigned int v62; // eax
  wchar_t *v63; // ecx
  __int16 v64; // ax
  unsigned int v65; // eax
  WCHAR *v66; // eax
  int v67; // eax
  _WORD *v68; // edi
  _WORD *v69; // esi
  size_t v70; // [esp-4h] [ebp-714h]
  __int16 v71; // [esp-4h] [ebp-714h]
  wchar_t *v72; // [esp+38h] [ebp-6D8h]
  unsigned int v73; // [esp+4Ch] [ebp-6C4h]
  PWSTR v74; // [esp+54h] [ebp-6BCh]
  wchar_t v75; // [esp+58h] [ebp-6B8h]
  __int16 v76; // [esp+58h] [ebp-6B8h]
  int v77; // [esp+5Ch] [ebp-6B4h] BYREF
  unsigned int v78; // [esp+60h] [ebp-6B0h]
  wchar_t *v79; // [esp+64h] [ebp-6ACh] BYREF
  unsigned int v80; // [esp+68h] [ebp-6A8h]
  WCHAR *v81; // [esp+6Ch] [ebp-6A4h]
  PWSTR v82; // [esp+70h] [ebp-6A0h]
  va_list *v83; // [esp+74h] [ebp-69Ch]
  ULONG cwSavColumn; // [esp+78h] [ebp-698h]
  char v85; // [esp+7Eh] [ebp-692h]
  char v86; // [esp+7Fh] [ebp-691h]
  WCHAR *v87; // [esp+80h] [ebp-690h]
  int v88; // [esp+84h] [ebp-68Ch]
  wchar_t Format[2]; // [esp+88h] [ebp-688h] BYREF
  _DWORD v90[399]; // [esp+8Ch] [ebp-684h]
  int v91; // [esp+6C8h] [ebp-48h] BYREF
  char v92; // [esp+6CEh] [ebp-42h] BYREF
  char v93; // [esp+6D0h] [ebp-40h] BYREF
  wchar_t v94[3]; // [esp+706h] [ebp-Ah] BYREF

  v80 = 0;
  v10 = MessageFormat;
  v11 = Arguments;
  v12 = ParseContext;
  v83 = Arguments;
  v88 = Length >> 1;
  if ( ParseContext )
  {
    if ( (ParseContext->fFlags & 1) != 0 )
    {
      iwSrc = ParseContext->iwSrc;
      fFlags = ParseContext->fFlags & 0xFFFFFFFE;
      ParseContext->fFlags = fFlags;
      iwSrc_high = HIDWORD(ParseContext->iwSrc);
      v87 = &MessageFormat[iwSrc];
      v74 = v87;
      cwSavColumn = ParseContext->cwSavColumn;
      v13 = (wchar_t *)&Buffer[iwSrc_high];
      iwDst = ParseContext->iwDst;
      v82 = (PWSTR)v13;
      if ( iwDst == -1 )
        v14 = 0;
      else
        v14 = &Buffer[iwDst];
      v88 -= iwSrc_high;
      v81 = v14;
      if ( !ArgumentsAreAnArray && v83 )
      {
        *v83 = (va_list)HIDWORD(ParseContext->iwDst);
        fFlags = ParseContext->fFlags;
      }
      if ( (fFlags & 2) != 0 )
      {
        ParseContext->fFlags = fFlags & 0xFFFFFFFD;
        v15 = v88;
        goto LABEL_153;
      }
      v10 = v87;
      goto LABEL_6;
    }
    v11 = v83;
  }
  v13 = (wchar_t *)Buffer;
  v14 = 0;
  v82 = Buffer;
  cwSavColumn = 0;
  v81 = 0;
  v74 = MessageFormat;
  if ( !ArgumentsAreAnArray && v11 && ParseContext )
    HIDWORD(ParseContext->iwDst) = *v11;
LABEL_6:
  v15 = v88;
  while ( 1 )
  {
    v16 = *v10;
    if ( !*v10 )
      break;
    ++v10;
    if ( v16 == 37 )
    {
      v19 = (unsigned __int16)*v10;
      v72 = v13;
      if ( (unsigned __int16)(v19 - 49) > 8u )
      {
        if ( (_WORD)v19 == 48 )
          break;
        if ( !(_WORD)v19 )
          return -1073741811;
        switch ( v19 )
        {
          case 'r':
            v15 = --v88;
            if ( v88 < 0 )
              goto LABEL_167;
            *v13++ = 13;
            ++v10;
            goto LABEL_126;
          case 'n':
            v15 = v88 - 2;
            v88 -= 2;
            if ( v88 < 0 )
              goto LABEL_167;
            *v13 = 13;
            v61 = v13 + 1;
            *v61 = 10;
            v13 = v61 + 1;
            ++v10;
LABEL_126:
            v82 = (PWSTR)v13;
            v87 = v10;
LABEL_127:
            v14 = 0;
            v17 = 0;
            v81 = 0;
            goto LABEL_15;
          case 't':
            v15 = --v88;
            if ( v88 < 0 )
              goto LABEL_167;
            if ( (cwSavColumn & 7) != 0 )
              v62 = (cwSavColumn + 7) & 0xFFFFFFF8;
            else
              v62 = cwSavColumn + 8;
            cwSavColumn = v62;
            v71 = 9;
            goto LABEL_137;
          case 'b':
            v15 = --v88;
            if ( v88 < 0 )
              goto LABEL_167;
            v71 = 32;
LABEL_137:
            v14 = (WCHAR *)v13;
            v81 = (WCHAR *)v13;
            *v13 = v71;
LABEL_146:
            ++v13;
            break;
          default:
            if ( !IgnoreInserts )
            {
              if ( --v88 < 0 )
                goto LABEL_167;
              *v13 = v19;
              v15 = v88;
              goto LABEL_146;
            }
            v15 = v88 - 2;
            v88 -= 2;
            if ( v88 < 0 )
              goto LABEL_167;
            *v13 = 37;
            v13[1] = *v10;
            v13 += 2;
            break;
        }
        v87 = ++v10;
        goto LABEL_51;
      }
      v87 = v10 + 1;
      v20 = v19 - 48;
      v21 = (unsigned __int16)v10[1];
      v22 = v21;
      if ( (unsigned __int16)v21 < 0x30u )
        goto LABEL_31;
      v22 = v21;
      v23 = v87;
      if ( (unsigned __int16)v21 <= 0x39u )
      {
        v23 = v87 + 1;
        v87 = v23;
        v20 = v21 - 48 + 10 * v20;
        v40 = (unsigned __int16)*v23;
        v22 = v40;
        if ( (unsigned __int16)v40 >= 0x30u && (unsigned __int16)v40 <= 0x39u )
        {
          ++v87;
          v20 = 10 * v20 + v40 - 48;
          v22 = *v87;
          if ( (unsigned __int16)*v87 >= 0x30u && (unsigned __int16)*v87 <= 0x39u )
            return -1073741811;
LABEL_31:
          v23 = v87;
        }
      }
      v78 = 0;
      v75 = v20;
      v73 = v20 - 1;
      if ( v22 == 33 )
      {
        v85 = 0;
        LOWORD(v91) = 37;
        v24 = (wchar_t *)&v91 + 1;
        v87 = v23 + 1;
        v41 = (wchar_t *)&v91 + 1;
        v42 = v23[1];
        v79 = (wchar_t *)&v91 + 1;
        if ( v42 != 33 )
        {
          v43 = v42;
          while ( v43 )
          {
            if ( v24 >= v94 )
              break;
            v44 = v43;
            if ( v43 == 42 )
            {
              v45 = v78++;
              v44 = v42;
              if ( v45 > 1 )
                break;
            }
            *v79 = v44;
            v41 = v24 + 1;
            v24 = v41;
            v79 = v41;
            v42 = *++v87;
            v43 = *v87;
            if ( *v87 == 33 )
              goto LABEL_77;
          }
          return -1073741811;
        }
LABEL_77:
        ++v87;
        v46 = 0;
        *v24 = 0;
        v86 = 0;
        if ( &v93 > (char *)v41 )
        {
          v25 = 0;
        }
        else
        {
          v47 = &v92;
          while ( !v46 )
          {
            if ( *((_WORD *)v47 - 2) == 73 && *((_WORD *)v47 - 1) == 54 && *(_WORD *)v47 == 52 )
              v86 = 1;
            v47 += 2;
            if ( v47 + 2 > (char *)v24 )
              break;
            v46 = v86;
          }
          v25 = v85;
        }
      }
      else
      {
        RtlStringCbCopyExW(&v91, (int)v23, &v79, (int)v23, (int)v23);
        v24 = v79;
        v25 = 1;
        v86 = 0;
      }
      if ( !IgnoreInserts )
      {
        if ( !v83 || v78 + v73 >= 0xC8 )
          return -1073741811;
        if ( !ArgumentsAreAnsi )
          goto LABEL_38;
        v49 = *(v24 - 1);
        if ( (_WORD)v49 == 99 )
        {
          v50 = *(v24 - 2);
          if ( v50 != 104 && v50 != 119 && v50 != 108 )
          {
            RtlStringCchCopyW(L"hc");
LABEL_38:
            v26 = v80;
            if ( v73 >= v80 )
            {
              v27 = v86;
              v28 = v83;
              while ( 1 )
              {
                v29 = v26 + 1;
                if ( ArgumentsAreAnArray )
                {
                  v30 = *v28;
                  v83 = v28 + 1;
                }
                else
                {
                  v53 = *v28;
                  if ( v27 )
                  {
                    v54 = v53 + 8;
                    *v28 = v54;
                    v30 = (va_list)*((_DWORD *)v54 - 2);
                    v31 = *((_DWORD *)v54 - 1);
                    goto LABEL_43;
                  }
                  v55 = v53 + 4;
                  *v28 = v55;
                  v30 = (va_list)*((_DWORD *)v55 - 1);
                }
                v31 = 0;
LABEL_43:
                *(_DWORD *)&Format[4 * v80] = v30;
                v28 = v83;
                v90[2 * v80] = v31;
                v26 = v29;
                v80 = v29;
                if ( v29 > v73 )
                {
                  v13 = (wchar_t *)v82;
                  v12 = ParseContext;
                  v80 = v29;
                  break;
                }
              }
            }
            v32 = *(wchar_t **)&Format[4 * v73];
            v33 = v78;
            v76 = (__int16)v32;
            v79 = v32;
            if ( v78 )
            {
              if ( ArgumentsAreAnArray )
              {
                v56 = v80;
                v57 = v83;
                v90[2 * v80] = 0;
                *(_DWORD *)&Format[4 * v56] = *v57;
                ++v83;
                v80 = v56 + 1;
                v12 = ParseContext;
              }
              else
              {
                *v83 += 4;
                v33 = v78;
              }
              if ( v33 > 1 )
              {
                v32 = &Format[4 * v80++];
                v58 = v83;
                if ( ArgumentsAreAnArray )
                {
                  v59 = *v83;
                  *((_DWORD *)v32 + 1) = 0;
                  v83 = v58 + 1;
                }
                else
                {
                  *v83 += 4;
                  v60 = *v58;
                  *((_DWORD *)v32 + 1) = 0;
                  v59 = (va_list)*((_DWORD *)v60 - 1);
                }
                *(_DWORD *)v32 = v59;
                LOWORD(v32) = v76;
              }
            }
            if ( v86 )
              v34 = RtlStringCchPrintfExW(v13, v88, (wchar_t **)&v77, 0, 0, &v91, *(_DWORD *)&Format[4 * v73]);
            else
              v34 = RtlStringCchPrintfExW(v13, v88, (wchar_t **)&v77, 0, 0, &v91, (wchar_t)v32);
            goto LABEL_48;
          }
        }
        v51 = 115;
        if ( (_WORD)v49 == 115 )
        {
          v52 = *(v24 - 2);
          if ( v52 != 104 && v52 != 119 && v52 != 108 )
          {
            RtlStringCchCopyW(L"hs");
            goto LABEL_38;
          }
          v51 = 115;
        }
        if ( v49 != 83 )
        {
          if ( v49 != 67 )
            goto LABEL_38;
          v51 = 99;
        }
        *(v24 - 1) = v51;
        goto LABEL_38;
      }
      if ( v25 == 1 )
        goto LABEL_93;
      v48 = wcscmp((const unsigned __int16 *)&v91, L"%s");
      if ( v48 )
        v48 = v48 < 0 ? -1 : 1;
      if ( !v48 )
LABEL_93:
        v34 = RtlStringCchPrintfExW(v13, v88, (wchar_t **)&v77, 0, 0, (int *)L"%%%u", v75);
      else
        v34 = RtlStringCchPrintfExW(v13, v88, (wchar_t **)&v77, 0, 0, (int *)L"%%%u!%s!", v75);
LABEL_48:
      if ( v34 < 0 )
        goto LABEL_167;
      v35 = (v77 - (int)v13) >> 1;
      v15 = v88 - v35;
      v88 -= v35;
      if ( v88 < 0 )
        goto LABEL_167;
      v14 = v81;
      v13 += v35;
      v10 = v87;
LABEL_51:
      v82 = (PWSTR)v13;
      if ( !v72 )
        goto LABEL_127;
      cwSavColumn += v13 - v72;
      v17 = cwSavColumn;
LABEL_16:
      v74 = v10;
      if ( MaximumWidth && MaximumWidth != -1 && v17 >= MaximumWidth )
      {
LABEL_153:
        if ( v14 )
        {
          v63 = (wchar_t *)v14;
          do
          {
            if ( *v63 != 32 && *v63 != 9 )
              break;
            ++v63;
          }
          while ( v63 != v13 );
          if ( v14 > Buffer )
          {
            do
            {
              v64 = *(v14 - 1);
              if ( v64 != 32 && v64 != 9 )
                break;
              --v14;
            }
            while ( v14 > Buffer );
            v12 = ParseContext;
            v81 = v14;
          }
          v65 = ((char *)v63 - (char *)v14) >> 1;
          if ( v65 == 1 )
          {
            if ( --v88 < 0 )
              goto LABEL_165;
          }
          else if ( v65 > 2 )
          {
            v88 = v65 + v88 - 2;
          }
          cwSavColumn = v13 - v63;
          LODWORD(v70) = 2 * cwSavColumn;
          memmove(v14 + 2, v63, v70);
          v15 = v88;
          *v14 = 13;
          v68 = v14 + 1;
          *v68 = 10;
          v69 = &v68[cwSavColumn];
        }
        else
        {
          v15 -= 2;
          v88 = v15;
          if ( v15 < 0 )
          {
LABEL_165:
            if ( v12 )
            {
              v12->fFlags |= 2u;
              goto LABEL_167;
            }
            return -2147483643;
          }
          *v13 = 13;
          v69 = v13 + 1;
          cwSavColumn = 0;
          *v69 = 10;
        }
        v10 = v87;
        v14 = 0;
        v13 = v69 + 1;
        v81 = 0;
        v82 = (PWSTR)v13;
      }
    }
    else
    {
      v87 = v10;
      if ( v16 != 13 && v16 != 10 )
        goto LABEL_11;
      if ( v16 == 10 && *v10 == 13 || v16 == 13 && *v10 == 10 )
        v87 = ++v10;
      if ( MaximumWidth )
      {
        v14 = (WCHAR *)v13;
        v81 = (WCHAR *)v13;
        v16 = 32;
LABEL_11:
        v88 = --v15;
        if ( v15 < 0 )
          goto LABEL_167;
        if ( v16 == 32 )
        {
          v14 = (WCHAR *)v13;
          v81 = (WCHAR *)v13;
        }
        *v13++ = v16;
        v82 = (PWSTR)v13;
        v17 = cwSavColumn + 1;
LABEL_15:
        cwSavColumn = v17;
        goto LABEL_16;
      }
      v15 -= 2;
      v88 = v15;
      if ( v15 < 0 )
        goto LABEL_167;
      *v13 = 13;
      v14 = 0;
      v13[1] = 10;
      v13 += 2;
      cwSavColumn = 0;
      v82 = (PWSTR)v13;
      v81 = 0;
      v74 = v10;
    }
  }
  if ( v88 < 1 )
  {
LABEL_167:
    if ( v12 )
    {
      v12->cwSavColumn = cwSavColumn;
      LODWORD(v12->iwSrc) = v74 - MessageFormat;
      v66 = v81;
      HIDWORD(v12->iwSrc) = ((char *)v13 - (char *)Buffer) >> 1;
      if ( v66 )
        v67 = v66 - Buffer;
      else
        v67 = -1;
      v12->fFlags |= 1u;
      LODWORD(v12->iwDst) = v67;
    }
    return -2147483643;
  }
  *v13 = 0;
  if ( ReturnLength )
    *ReturnLength = ((char *)v13 - (char *)Buffer + 2) & 0xFFFFFFFE;
  return 0;
}
