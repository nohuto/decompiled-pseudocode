/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x1405EC514
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x140226068 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlULongLongSub @ 0x140281B84 (RtlULongLongSub.c)
 *     RtlULongLongAdd @ 0x1402F1E70 (RtlULongLongAdd.c)
 *     LdrpResCompareResourceNames @ 0x1405ED09C (LdrpResCompareResourceNames.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x1405ED6DC (LdrpSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        __int64 a2,
        ULONGLONG a3,
        ULONGLONG a4,
        __int64 a5,
        ULONGLONG ullSubtrahendb,
        _QWORD *a7,
        int a8,
        signed __int16 *a9,
        ULONGLONG *a10,
        ULONGLONG *a11,
        int a12,
        _WORD *a13)
{
  ULONGLONG v14; // r11
  unsigned int v16; // ebx
  unsigned int v17; // edx
  _QWORD *v18; // r8
  int v19; // r10d
  int v20; // ecx
  ULONGLONG v21; // rdi
  unsigned int *v22; // r14
  int v23; // eax
  int v24; // ecx
  ULONGLONG v25; // rdx
  unsigned int *v26; // rcx
  unsigned int v27; // r9d
  __int64 v28; // r10
  unsigned int *v29; // r8
  unsigned int *v30; // r9
  char v31; // al
  int v32; // ecx
  __int64 result; // rax
  ULONGLONG v34; // rax
  bool v35; // zf
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // r10d
  int v40; // r9d
  ULONGLONG v41; // rdi
  ULONGLONG v42; // rsi
  ULONGLONG v43; // r11
  ULONGLONG v44; // r10
  ULONGLONG v45; // r15
  ULONGLONG v46; // r9
  ULONGLONG *v47; // r11
  __int64 v48; // r10
  ULONGLONG v49; // rax
  ULONGLONG *v50; // r10
  __int64 v51; // r11
  __int64 v52; // r9
  int v53; // r8d
  __int16 v54; // ax
  unsigned int v55; // r10d
  __int64 v56; // rsi
  __int64 v57; // rax
  int v58; // r8d
  int v59; // r9d
  __int64 v60; // rax
  int v61; // r8d
  int v62; // r9d
  __int64 v63; // rax
  __int64 v64; // r10
  __int64 v65; // r10
  unsigned int v66; // r9d
  unsigned __int64 v67; // r11
  __int64 v68; // r11
  int v69; // r9d
  unsigned __int64 v70; // r15
  int v71; // [rsp+40h] [rbp-D8h]
  ULONGLONG pullResult; // [rsp+48h] [rbp-D0h] BYREF
  unsigned int v73; // [rsp+50h] [rbp-C8h]
  int v74; // [rsp+54h] [rbp-C4h]
  int v75; // [rsp+58h] [rbp-C0h] BYREF
  ULONGLONG v76; // [rsp+60h] [rbp-B8h]
  ULONGLONG v77; // [rsp+68h] [rbp-B0h]
  __int16 v78; // [rsp+70h] [rbp-A8h]
  int v79; // [rsp+74h] [rbp-A4h]
  int v80; // [rsp+78h] [rbp-A0h]
  ULONGLONG v81; // [rsp+80h] [rbp-98h]
  __int64 v82; // [rsp+88h] [rbp-90h]
  __int64 v83; // [rsp+90h] [rbp-88h]
  __int64 v84; // [rsp+98h] [rbp-80h]
  unsigned int *v85; // [rsp+A0h] [rbp-78h]
  unsigned int *v86; // [rsp+A8h] [rbp-70h]
  __int16 v87; // [rsp+B0h] [rbp-68h]
  __int64 v88; // [rsp+B8h] [rbp-60h]
  unsigned int *v89; // [rsp+C0h] [rbp-58h]
  int v90; // [rsp+C8h] [rbp-50h]
  ULONGLONG v91; // [rsp+D0h] [rbp-48h]
  _QWORD *v92; // [rsp+D8h] [rbp-40h]
  char v93; // [rsp+128h] [rbp+10h]
  char v95; // [rsp+138h] [rbp+20h]
  unsigned int v96; // [rsp+138h] [rbp+20h]
  signed __int16 ullSubtrahend; // [rsp+148h] [rbp+30h]
  unsigned int ullSubtrahenda; // [rsp+148h] [rbp+30h]

  v14 = a3;
  v16 = 0;
  v75 = 0;
  ullSubtrahend = 0;
  LOWORD(v17) = 0;
  v79 = 0;
  pullResult = 0LL;
  if ( !a4 )
    return 3221225485LL;
  if ( !a5 )
    return 3221225485LL;
  v18 = a7;
  if ( !a7 )
    return 3221225485LL;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  v19 = a12;
  v74 = a12;
  if ( (a12 & 0x8000) != 0 )
    return 3221225485LL;
  v93 = (a12 & 0x1000) != 0;
  if ( (a12 & 0x1000) != 0 && !v14 )
    return 3221225485LL;
  if ( (a12 & 0x8800) == 0x8800 || !a1 )
    return 3221225485LL;
  v20 = a8;
  v80 = a8;
  v21 = a4;
  v22 = 0LL;
  v81 = 0LL;
  if ( a13 )
    *a13 = 0;
LABEL_12:
  if ( !v21 )
    goto LABEL_58;
  v23 = v20;
  v24 = v20 - 1;
  v80 = v24;
  v90 = v24;
  if ( !v23 )
    goto LABEL_58;
  v82 = *v18;
  v84 = v82;
  if ( !v24 && a8 == 3 )
  {
    v81 = v21;
    v91 = v21;
    if ( !a9 )
      return (unsigned int)-1073741811;
    ullSubtrahend = *a9;
    v87 = *a9;
    v79 = 0;
    v78 = 0;
    if ( (~(_BYTE)v19 & 4) != 0 )
    {
      v82 = (unsigned __int16)a9[2];
      v84 = v82;
    }
  }
  if ( (a12 & 0x1000) != 0
    && (RtlULongLongAdd(v21, 0x18uLL, &pullResult) < 0 || v21 + 24 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)) )
  {
    return (unsigned int)-1073741701;
  }
  v25 = *(unsigned __int16 *)(v21 + 12);
  v73 = v25;
  if ( (_DWORD)v25 && (a12 & 0x1000) != 0 )
  {
    v83 = 8 * v25;
    if ( RtlULongLongAdd(v21, (unsigned int)(8 * v25) + 16LL, &pullResult) < 0
      || v52 + v21 + 16 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      return (unsigned int)-1073741701;
    }
    v25 = v73;
  }
  v26 = (unsigned int *)(v21 + 16);
  v83 = v21 + 16;
  v86 = (unsigned int *)(v21 + 16);
  v27 = v25;
  if ( (v82 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (_DWORD)v25 )
    {
      if ( (a12 & 0x1000) != 0 )
      {
        if ( RtlULongLongAdd((ULONGLONG)v26, v25, &pullResult) < 0 )
          return (unsigned int)-1073741701;
        LODWORD(v25) = v73;
      }
      v26 += 2 * (unsigned int)v25;
      v83 = (__int64)v26;
      v86 = v26;
    }
    v25 = *(unsigned __int16 *)(v21 + 14);
    v73 = v25;
    v27 = v25;
    if ( (a12 & 0x1000) != 0 )
    {
      v88 = 8LL * (unsigned int)v25;
      if ( RtlULongLongAdd((ULONGLONG)v26, (unsigned int)(8 * v25), &pullResult) < 0 )
        return (unsigned int)-1073741701;
      v25 = v27;
      v73 = v27;
      if ( v28 + v83 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        return (unsigned int)-1073741701;
      v19 = v74;
      v26 = (unsigned int *)v83;
    }
  }
  if ( !v27 )
  {
    v77 = 0LL;
LABEL_106:
    switch ( a8 - v80 )
    {
      case 1:
        return (unsigned int)-1073741686;
      case 2:
        return (unsigned int)-1073741685;
      case 3:
        return (unsigned int)-1073741308;
    }
    return (unsigned int)-1073741811;
  }
LABEL_26:
  if ( v81 && (v19 & 0x20) != 0 )
  {
    v21 = 0LL;
    v77 = 0LL;
    v38 = v26[1];
    if ( (a12 & 0x1000) != 0 )
    {
      if ( RtlULongLongAdd(a4, (unsigned int)v38, &pullResult) < 0 )
        return (unsigned int)-1073741701;
      v22 = (unsigned int *)pullResult;
      v76 = pullResult;
      v26 = (unsigned int *)v83;
    }
    else
    {
      v22 = (unsigned int *)(v38 + a4);
      v76 = v38 + a4;
    }
    v17 = *v26;
    v84 = *v26;
LABEL_58:
    v39 = v19 & 2;
    if ( v22 && !v39 )
    {
      if ( (a12 & 0x1000) != 0
        && ((unsigned __int64)v22 <= a4 || (unsigned __int64)(v22 + 4) > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)) )
      {
        goto LABEL_151;
      }
      v40 = (int)a13;
      if ( a13 )
        *a13 = v17;
      v41 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (a1 & 1) != 0 )
      {
        v53 = a5;
        v54 = *(_WORD *)(a5 + 24);
        if ( v54 == 267 )
        {
          v55 = *(_DWORD *)(a5 + 136);
        }
        else if ( v54 == 523 )
        {
          v55 = *(_DWORD *)(a5 + 152);
        }
        else
        {
          v55 = 0;
        }
        if ( !v55 )
        {
          v76 = 0LL;
          return (unsigned int)-1073741687;
        }
        v56 = v55;
        if ( (a12 & 0x1000) != 0 )
        {
          if ( RtlULongLongAdd(a1 & 0xFFFFFFFFFFFFFFFCuLL, v55, &pullResult) < 0
            || RtlULongLongSub(pullResult, a4, &pullResult) < 0 )
          {
            return (unsigned int)-1073741701;
          }
          v53 = a5;
        }
        v42 = v41 + v56 - a4;
        v57 = LdrpSectionTableFromVirtualAddress((unsigned int)a1 & 0xFFFFFFFC, v14, v53, v40, v55, v93);
        if ( !v57 )
          goto LABEL_151;
        if ( *v22 > *(_DWORD *)(v57 + 8) )
        {
          ullSubtrahenda = *(_DWORD *)(v57 + 12);
          v60 = LdrpSectionTableFromVirtualAddress((unsigned int)a1 & 0xFFFFFFFC, a3, v58, v59, *v22, v93);
          if ( !v60 )
            goto LABEL_151;
          v96 = *(_DWORD *)(v60 + 12);
          v63 = LdrpSectionTableFromVirtualAddress((unsigned int)a1 & 0xFFFFFFFC, a3, v61, v62, v96, v93);
          v64 = v63;
          if ( v63 )
          {
            if ( (a12 & 0x1000) != 0 )
            {
              if ( RtlULongLongAdd(
                     a1 & 0xFFFFFFFFFFFFFFFCuLL,
                     v96 - (unsigned __int64)*(unsigned int *)(v63 + 12),
                     &pullResult) < 0
                || RtlULongLongAdd(pullResult, *(unsigned int *)(v65 + 20), &pullResult) < 0 )
              {
                return (unsigned int)-1073741701;
              }
            }
            else
            {
              v66 = v96;
            }
            v67 = v41 + *(unsigned int *)(v64 + 20) - (unsigned __int64)*(unsigned int *)(v64 + 12) + v66;
          }
          else
          {
            v67 = 0LL;
          }
          if ( (a12 & 0x1000) != 0
            && (RtlULongLongSub(*(unsigned int *)(v64 + 12), ullSubtrahenda, &pullResult) < 0
             || RtlULongLongSub(pullResult, v68 - a4, &pullResult) < 0) )
          {
            return (unsigned int)-1073741701;
          }
          v42 += a4 + *(unsigned int *)(v64 + 12) - (unsigned __int64)ullSubtrahenda - v67;
        }
      }
      else
      {
        v42 = 0LL;
      }
      if ( (a12 & 0x1000) == 0 )
      {
        v44 = 0LL;
        v46 = v22[1];
        v45 = a3;
LABEL_74:
        v47 = a10;
        if ( a10 )
        {
          if ( (a12 & 0x1000) != 0 )
          {
            if ( RtlULongLongAdd(v41, v44, &pullResult) < 0
              || pullResult < v41
              || pullResult > v45 + (v41 & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              return (unsigned int)-1073741701;
            }
            v49 = v48 + v41;
          }
          else
          {
            v49 = v41 + *v22 - v42;
          }
          *v47 = v49;
        }
        v50 = a11;
        if ( a11 )
        {
          if ( (a12 & 0x1000) != 0 && v47 && (RtlULongLongAdd(*v47, v46, &pullResult) < 0 || v51 + v46 > v41 + v45) )
            return (unsigned int)-1073741701;
          *v50 = v46;
        }
        return v16;
      }
      if ( RtlULongLongSub(*v22, v42, &pullResult) < 0 )
        return (unsigned int)-1073741701;
      v44 = pullResult;
      if ( pullResult >= a4 - a1 )
      {
        v45 = a3;
        if ( pullResult <= a3 )
        {
          if ( (_DWORD)v43 )
          {
            v46 = (unsigned int)v43;
            if ( v43 <= a3 && pullResult + v43 <= a3 )
              goto LABEL_74;
          }
        }
      }
LABEL_151:
      v76 = 0LL;
      return (unsigned int)-1073741701;
    }
    if ( v21 && v39 )
    {
      if ( (a12 & 0x1000) != 0 )
      {
        if ( RtlULongLongAdd(v21, 0x18uLL, &pullResult) < 0 || (v70 = a1 & 0xFFFFFFFFFFFFFFFCuLL, v21 + 24 > v70 + v14) )
        {
          v77 = 0LL;
          return (unsigned int)-1073741701;
        }
      }
      else
      {
        v70 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( a10 )
      {
        if ( (a12 & 0x1000) != 0 && (v21 < v70 || v21 > v70 + v14) )
          return (unsigned int)-1073741701;
        *a10 = v21;
      }
      return v16;
    }
    goto LABEL_106;
  }
LABEL_27:
  v21 = 0LL;
  v77 = 0LL;
  v29 = v26;
  v86 = v26;
  v30 = &v26[2 * (unsigned int)v25 - 2];
  v89 = v30;
  v31 = v25;
  while ( 1 )
  {
    if ( v29 > v30 )
      goto LABEL_40;
    v32 = (int)v25 >> 1;
    LODWORD(v88) = (int)v25 >> 1;
    if ( !((int)v25 >> 1) )
    {
      if ( !(_DWORD)v25 )
        goto LABEL_40;
      result = LdrpResCompareResourceNames(a1, v25, v14, v82, a4, v29, v19, &v75, v71);
      v71 = result;
      if ( (int)result < 0 )
        return result;
      if ( !v75 )
      {
        v34 = v86[1];
        if ( (v34 & 0x80000000) == 0LL )
          goto LABEL_100;
LABEL_34:
        if ( (a12 & 0x1000) != 0 )
        {
          if ( v81 || RtlULongLongAdd(a4, v34 & 0x7FFFFFFF, &pullResult) < 0 )
            return (unsigned int)-1073741701;
          v21 = pullResult;
        }
        else
        {
          v21 = a4 + (v34 & 0xFFFFFFFF7FFFFFFFuLL);
        }
        v77 = v21;
      }
LABEL_39:
      v14 = a3;
LABEL_40:
      v19 = v74;
      if ( !v81 || v22 )
        goto LABEL_41;
      if ( (v74 & 4) != 0 )
      {
        LOWORD(v17) = v82;
        goto LABEL_58;
      }
      HIWORD(v69) = HIWORD(v79);
      LOWORD(v69) = v79 + 1;
      v79 = v69;
      v78 = v69;
      if ( (unsigned __int16)v69 >= ullSubtrahend )
      {
        if ( *((_BYTE *)a9 + 516) )
        {
LABEL_41:
          v18 = a7 + 1;
          a7 = v18;
          v92 = v18;
          LOWORD(v17) = v82;
          v20 = v80;
          goto LABEL_12;
        }
        v19 = v74 | 0x20;
        v74 |= 0x20u;
        v25 = v73;
        v26 = (unsigned int *)v83;
        goto LABEL_26;
      }
      v82 = (unsigned __int16)a9[4 * (unsigned __int16)v69 + 2];
      v84 = v82;
      v25 = v73;
      v26 = (unsigned int *)v83;
      goto LABEL_27;
    }
    v85 = v29;
    v36 = v31 & 1;
    v35 = v36 == 0;
    v95 = v36;
    LODWORD(v37) = v32 - 1;
    LODWORD(v84) = v32 - 1;
    if ( v35 )
      v37 = (int)v37;
    else
      v37 = v32;
    v85 = &v29[2 * v37];
    result = LdrpResCompareResourceNames(a1, v25, v14, v82, a4, v85, v19, &v75, v71);
    v71 = result;
    if ( (int)result < 0 )
      return result;
    if ( !v75 )
      break;
    if ( v75 < 0 )
    {
      v30 = v85 - 2;
      v89 = v85 - 2;
      if ( v95 )
      {
        v31 = v88;
        v25 = (unsigned int)v88;
      }
      else
      {
        v31 = v84;
        v25 = (unsigned int)v84;
      }
      v29 = v86;
    }
    else
    {
      v29 = v85 + 2;
      v86 = v85 + 2;
      v31 = v88;
      v25 = (unsigned int)v88;
      v30 = v89;
    }
    v14 = a3;
    v19 = v74;
  }
  v34 = v85[1];
  if ( (v34 & 0x80000000) != 0LL )
    goto LABEL_34;
  v21 = 0LL;
  v77 = 0LL;
LABEL_100:
  if ( (a12 & 0x1000) == 0 )
  {
    v22 = (unsigned int *)(v34 + a4);
LABEL_104:
    v76 = (ULONGLONG)v22;
    goto LABEL_39;
  }
  if ( v81 && RtlULongLongAdd(a4, v34, &pullResult) >= 0 )
  {
    v22 = (unsigned int *)pullResult;
    goto LABEL_104;
  }
  return (unsigned int)-1073741701;
}
