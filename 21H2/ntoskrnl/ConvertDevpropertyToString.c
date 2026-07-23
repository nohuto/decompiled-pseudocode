/*
 * XREFs of ConvertDevpropertyToString @ 0x14097F324
 * Callers:
 *     ExpressionConvertToString @ 0x14097F9F0 (ExpressionConvertToString.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x140240E00 (RtlStringCbCopyExW.c)
 *     RtlStringCbPrintfExW @ 0x1402F3F10 (RtlStringCbPrintfExW.c)
 *     ConvertDevpropcompkeyToString @ 0x14097F1E8 (ConvertDevpropcompkeyToString.c)
 */

__int64 __fastcall ConvertDevpropertyToString(__int64 a1, unsigned int a2, wchar_t *a3, unsigned int *a4)
{
  unsigned __int64 v4; // r14
  wchar_t *v5; // r13
  __int64 v6; // r15
  size_t v7; // rdi
  int v8; // edx
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  const wchar_t *v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned int v32; // r12d
  unsigned __int8 *v33; // rbx
  unsigned int v34; // r8d
  NTSTATUS v35; // eax
  double v36; // xmm0_8
  const wchar_t *v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v43; // [rsp+38h] [rbp-69h]
  __int64 v44; // [rsp+40h] [rbp-61h]
  __int64 v45; // [rsp+48h] [rbp-59h]
  __int64 v46; // [rsp+50h] [rbp-51h]
  __int64 v47; // [rsp+58h] [rbp-49h]
  __int64 v48; // [rsp+60h] [rbp-41h]
  __int64 v49; // [rsp+68h] [rbp-39h]
  __int64 v50; // [rsp+70h] [rbp-31h]
  __int64 v51; // [rsp+78h] [rbp-29h]
  __int64 v52; // [rsp+80h] [rbp-21h]
  __int64 v53; // [rsp+88h] [rbp-19h]
  size_t cbDest; // [rsp+98h] [rbp-9h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v56; // [rsp+A8h] [rbp+7h]
  unsigned __int64 v59; // [rsp+118h] [rbp+77h] BYREF
  unsigned int *v60; // [rsp+120h] [rbp+7Fh]

  v60 = a4;
  v4 = a2;
  v5 = a3;
  LODWORD(v59) = 0;
  v6 = a1;
  if ( a2 >= 2 )
    *a3 = 0;
  ppszDestEnd = a3;
  cbDest = a2;
  v7 = a2;
  v8 = ConvertDevpropcompkeyToString(a1, a3, a2, (unsigned int *)&v59);
  if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741789 )
    return (unsigned int)v8;
  v8 = 0;
  v9 = (unsigned int)v59 - 2LL;
  if ( v4 >= v9 )
  {
    v7 = 2LL - (unsigned int)v59 + v4;
    cbDest = v7;
    v5 += v9 >> 1;
    ppszDestEnd = v5;
  }
  v10 = *(_DWORD *)(v6 + 32);
  if ( v10 > 0x1003 )
  {
    if ( v10 == 4109 )
    {
      v15 = L"GUID_ARRAY";
    }
    else
    {
      if ( v10 != 8210 )
        return (unsigned int)-1073741811;
      v15 = L"STRING_LIST";
    }
  }
  else if ( v10 == 4099 )
  {
    v15 = L"BINARY";
  }
  else if ( v10 > 0xD )
  {
    if ( v10 > 0x14 )
    {
      v26 = v10 - 21;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              if ( v29 != 1 )
                return (unsigned int)-1073741811;
              v15 = L"STRING_INDIRECT";
            }
            else
            {
              v15 = L"NTSTATUS";
            }
          }
          else
          {
            v15 = L"ERROR";
          }
        }
        else
        {
          v15 = L"DEVPROPTYPE";
        }
      }
      else
      {
        v15 = L"DEVPROPKEY";
      }
    }
    else if ( v10 == 20 )
    {
      v15 = L"SECURITY_DESCRIPTOR_STRING";
    }
    else
    {
      v21 = v10 - 14;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                if ( v25 != 1 )
                  return (unsigned int)-1073741811;
                v15 = L"SECURITY_DESCRIPTOR";
              }
              else
              {
                v15 = L"STRING";
              }
            }
            else
            {
              v15 = L"BOOLEAN";
            }
          }
          else
          {
            v15 = L"FILETIME";
          }
        }
        else
        {
          v15 = L"DATE";
        }
      }
      else
      {
        v15 = L"CURRENCY";
      }
    }
  }
  else if ( v10 == 13 )
  {
    v15 = L"GUID";
  }
  else if ( v10 > 6 )
  {
    v16 = v10 - 7;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              if ( v20 != 1 )
                return (unsigned int)-1073741811;
              v15 = L"DECIMAL";
            }
            else
            {
              v15 = L"DOUBLE";
            }
          }
          else
          {
            v15 = L"FLOAT";
          }
        }
        else
        {
          v15 = L"UINT64";
        }
      }
      else
      {
        v15 = L"INT64";
      }
    }
    else
    {
      v15 = L"UINT32";
    }
  }
  else if ( v10 == 6 )
  {
    v15 = L"INT32";
  }
  else if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 == 1 )
            {
              v15 = L"UINT16";
              goto LABEL_70;
            }
            return (unsigned int)-1073741811;
          }
          v15 = L"INT16";
        }
        else
        {
          v15 = L"BYTE";
        }
      }
      else
      {
        v15 = L"SBYTE";
      }
    }
    else
    {
      v15 = L"NULL";
    }
  }
  else
  {
    v15 = L"EMPTY";
  }
LABEL_70:
  v30 = -1LL;
  v31 = -1LL;
  do
    ++v31;
  while ( v15[v31] );
  v32 = v59 + 2 * v31;
  if ( v32 <= (unsigned int)v4 )
  {
    v8 = RtlStringCbCopyExW(v5, v7, v15, &ppszDestEnd, &cbDest, 0x400u);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v5 = ppszDestEnd;
    v7 = cbDest;
  }
  if ( !*(_DWORD *)(v6 + 36) )
    goto LABEL_121;
  v33 = *(unsigned __int8 **)(v6 + 40);
  if ( !v33 )
    goto LABEL_121;
  v34 = *(_DWORD *)(v6 + 32);
  if ( v34 > 0x1003 )
  {
    if ( v34 == 4109 )
    {
LABEL_116:
      v40 = 0LL;
      v59 = 0LL;
      do
      {
        v32 += 80;
        v56 = *(_OWORD *)(v40 + *(_QWORD *)(v6 + 40));
        if ( v32 <= (unsigned int)v4 )
        {
          LODWORD(v53) = HIBYTE(*((_QWORD *)&v56 + 1));
          LODWORD(v52) = BYTE14(v56);
          LODWORD(v51) = BYTE13(v56);
          LODWORD(v50) = BYTE12(v56);
          LODWORD(v49) = BYTE11(v56);
          LODWORD(v48) = BYTE10(v56);
          LODWORD(v47) = BYTE9(v56);
          LODWORD(v46) = BYTE8(v56);
          LODWORD(v45) = WORD3(v56);
          LODWORD(v44) = WORD2(v56);
          LODWORD(v43) = v56;
          v8 = RtlStringCbPrintfExW(
                 v5,
                 cbDest,
                 &ppszDestEnd,
                 &cbDest,
                 0x400u,
                 L"({%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x})",
                 v43,
                 v44,
                 v45,
                 v46,
                 v47,
                 v48,
                 v49,
                 v50,
                 v51,
                 v52,
                 v53);
          if ( v8 < 0 )
            return (unsigned int)v8;
          v5 = ppszDestEnd;
          LODWORD(v4) = a2;
          v40 = v59;
          v6 = a1;
        }
        v41 = *(unsigned int *)(v6 + 36);
        v40 += 16LL;
        v59 = v40;
      }
      while ( v40 < v41 );
    }
    else if ( v34 == 8210 )
    {
      while ( *(_WORD *)v33 )
      {
        v38 = -1LL;
        do
          ++v38;
        while ( *(_WORD *)&v33[2 * v38] );
        v32 += 2 * v38 + 4;
        if ( v32 <= (unsigned int)v4 )
        {
          v8 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"[%s]", v33);
          if ( v8 < 0 )
            return (unsigned int)v8;
          v5 = ppszDestEnd;
        }
        v39 = -1LL;
        do
          ++v39;
        while ( *(_WORD *)&v33[2 * v39] );
        v7 = cbDest;
        v33 += 2 * v39 + 2;
      }
    }
    else
    {
LABEL_105:
      v8 = -1073741811;
    }
    goto LABEL_121;
  }
  if ( v34 == 4099 )
    goto LABEL_121;
  switch ( v34 )
  {
    case 0u:
    case 1u:
      return (unsigned int)-1073741811;
    case 2u:
    case 3u:
      v32 += 12;
      if ( v32 > (unsigned int)v4 )
        goto LABEL_121;
      v35 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(0x%.2x)", *v33);
      break;
    case 4u:
    case 5u:
      v32 += 16;
      if ( v32 > (unsigned int)v4 )
        goto LABEL_121;
      v35 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(0x%.4x)", *(__int16 *)v33);
      break;
    case 6u:
    case 7u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
      v32 += 24;
      if ( v32 > (unsigned int)v4 )
        goto LABEL_121;
      v35 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(0x%.8x)", *(_DWORD *)v33);
      break;
    case 8u:
    case 9u:
      v32 += 40;
      if ( v32 > (unsigned int)v4 )
        goto LABEL_121;
      v35 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(0x%.16I64x)", *(_QWORD *)v33);
      break;
    case 0xAu:
    case 0xBu:
      v32 += 32;
      if ( v32 > (unsigned int)v4 )
        goto LABEL_121;
      if ( v34 == 10 )
        v36 = *(float *)v33;
      else
        v36 = *(double *)v33;
      v35 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(%.6e)", v36);
      break;
    case 0xCu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x13u:
    case 0x15u:
      goto LABEL_121;
    case 0xDu:
      goto LABEL_116;
    case 0x11u:
      v37 = L"(TRUE)";
      if ( *v33 != 0xFF )
        v37 = L"(FALSE)";
      do
        ++v30;
      while ( v37[v30] );
      v32 += 2 * v30;
      if ( v32 > (unsigned int)v4 )
        goto LABEL_121;
      v35 = RtlStringCbCopyExW(v5, v7, v37, &ppszDestEnd, &cbDest, 0x400u);
      break;
    case 0x12u:
    case 0x14u:
    case 0x19u:
      do
        ++v30;
      while ( *(_WORD *)&v33[2 * v30] );
      v32 += 2 * v30;
      if ( v32 > (unsigned int)v4 )
        goto LABEL_121;
      v35 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(%s)", *(_QWORD *)(v6 + 40));
      break;
    default:
      goto LABEL_105;
  }
  v8 = v35;
  if ( v35 >= 0 )
  {
LABEL_121:
    if ( v60 )
      *v60 = v32;
    if ( v32 > (unsigned int)v4 )
      return (unsigned int)-1073741789;
  }
  return (unsigned int)v8;
}
