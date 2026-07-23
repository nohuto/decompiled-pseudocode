/*
 * XREFs of LocalGetStringForRelativeAttribute @ 0x140929374
 * Callers:
 *     LocalGetAceCondition @ 0x140669250 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14024789C (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _i64tow_s @ 0x1403D6DF0 (_i64tow_s.c)
 *     _ui64tow_s @ 0x1403D6E50 (_ui64tow_s.c)
 *     _ultow_s @ 0x1403D6E70 (_ultow_s.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     SddlpAlloc @ 0x140669778 (SddlpAlloc.c)
 *     LocalGetStringForSid @ 0x140926240 (LocalGetStringForSid.c)
 *     EncodeAttributeName @ 0x140927028 (EncodeAttributeName.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalGetStringForRelativeAttribute(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7)
{
  void *v9; // rdi
  unsigned int StringForSid; // esi
  __int64 v11; // r13
  int v12; // r15d
  __int64 v13; // rcx
  unsigned __int16 *v14; // r11
  __int64 v15; // r12
  __int64 v16; // r12
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // edi
  unsigned int v21; // r8d
  unsigned int *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r9d
  unsigned __int64 v25; // rax
  unsigned int v26; // r12d
  unsigned int *v27; // r15
  __int64 v28; // rcx
  unsigned int v29; // edx
  __int64 v30; // rcx
  unsigned int v31; // eax
  _BYTE *v32; // rcx
  __int64 v33; // rax
  _WORD *v34; // rax
  unsigned int v35; // r15d
  unsigned int *v36; // r11
  __int64 v37; // rcx
  __int64 v38; // r11
  unsigned int v39; // r12d
  unsigned int *v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // r12d
  unsigned int *v44; // r15
  __int64 v45; // rcx
  __int64 v46; // rax
  void *v47; // rdx
  _WORD *v48; // rdi
  _WORD *v49; // rdi
  __int64 v50; // rax
  size_t v51; // rbx
  char *v52; // rdi
  __int64 v53; // r9
  char *v54; // rdi
  int v55; // r15d
  int v56; // r15d
  int v57; // r15d
  int v58; // r15d
  int v59; // r15d
  unsigned int *v60; // r8
  __int64 v61; // r12
  __int64 v62; // rcx
  unsigned int v63; // r9d
  unsigned __int8 *v64; // rdx
  __int64 v65; // r10
  unsigned int v66; // ecx
  unsigned int v67; // r15d
  _DWORD *v68; // r12
  __int64 v69; // r8
  char *v70; // rdi
  __int64 v71; // rax
  size_t v72; // rbx
  __int64 v73; // r12
  unsigned int *v74; // r15
  __int64 v75; // rax
  char *v76; // rdi
  _WORD *v77; // rdx
  size_t v78; // rbx
  char *v79; // rdi
  unsigned int *v80; // r15
  __int64 v81; // r12
  char *v82; // rdi
  __int64 v83; // rax
  size_t v84; // rbx
  unsigned int *v85; // r15
  __int64 v86; // r12
  char *v87; // rdi
  __int64 v88; // rax
  size_t v89; // rbx
  _QWORD *v90; // rax
  int v92; // [rsp+20h] [rbp-E0h]
  int v93; // [rsp+30h] [rbp-D0h]
  size_t pcbLength; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v96; // [rsp+48h] [rbp-B8h]
  void *Src; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v98; // [rsp+60h] [rbp-A0h]
  __int64 v99; // [rsp+68h] [rbp-98h]
  wchar_t v100[72]; // [rsp+70h] [rbp-90h] BYREF
  wchar_t DstBuf[40]; // [rsp+100h] [rbp+0h] BYREF

  v98 = a3;
  v99 = a7;
  Src = 0LL;
  v9 = 0LL;
  memset(DstBuf, 0, 0x46uLL);
  memset(v100, 0, 0x8CuLL);
  P = 0LL;
  pcbLength = 0LL;
  if ( !a1 || !a2 || !a7 )
  {
    StringForSid = 87;
LABEL_133:
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    goto LABEL_135;
  }
  if ( a2 < 0x14 )
    return 1336;
  v11 = a1[3];
  v12 = *((unsigned __int16 *)a1 + 2);
  if ( !(_DWORD)v11 )
    return 1336;
  ultow_s(a1[2], DstBuf, 0x23uLL, 16);
  v13 = *a1;
  if ( a2 < (unsigned int)v13
    || a2 - (unsigned int)v13 < 4
    || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v13), a2 - (unsigned int)v13, &pcbLength) < 0
    || !(_DWORD)pcbLength )
  {
    return 1336;
  }
  StringForSid = EncodeAttributeName(v14, pcbLength, (__int64 *)&Src);
  if ( !StringForSid )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_WORD *)Src + v15) );
    v16 = (unsigned int)(2 * v15);
    v96 = v16;
    if ( (unsigned __int64)(2 * v11) > 0xFFFFFFFF )
      goto LABEL_131;
    v17 = 2 * v11 + 24;
    if ( v17 < 0x18 )
      goto LABEL_131;
    v18 = v17 + v16;
    if ( v17 + (unsigned int)v16 < v17 )
      goto LABEL_131;
    v19 = -1LL;
    do
      ++v19;
    while ( DstBuf[v19] );
    v20 = v18 + 2 * v19;
    if ( v20 < v18 || (unsigned __int64)(4 * v11) > 0xFFFFFFFF )
      goto LABEL_131;
    if ( a2 - 16 < 4 * (int)v11 )
      goto LABEL_28;
    v93 = v12;
    if ( v12 != 1 )
    {
      switch ( v12 )
      {
        case 2:
          goto LABEL_63;
        case 3:
          v35 = 0;
          v36 = a1 + 4;
          while ( 1 )
          {
            v37 = *v36;
            if ( a2 < (unsigned int)v37
              || a2 - (unsigned int)v37 < 2
              || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v37), a2 - (unsigned int)v37, &pcbLength) < 0 )
            {
              goto LABEL_28;
            }
            if ( v20 + (_DWORD)pcbLength + 4 < v20 )
              goto LABEL_131;
            ++v35;
            v36 = (unsigned int *)(v38 + 4);
            v20 += pcbLength + 4;
            if ( v35 >= (unsigned int)v11 )
            {
              v12 = v93;
              goto LABEL_53;
            }
          }
        case 5:
          v26 = 0;
          v27 = a1 + 4;
          while ( 1 )
          {
            v28 = *v27;
            if ( a2 < (unsigned int)v28 )
              goto LABEL_28;
            if ( a2 - (unsigned int)v28 < 4 )
              goto LABEL_28;
            v29 = *(unsigned int *)((char *)a1 + v28);
            v30 = (unsigned int)(v28 + 4);
            if ( !v29 )
              goto LABEL_28;
            v31 = a2 - v30;
            if ( a2 - (unsigned int)v30 < v29 )
              goto LABEL_28;
            if ( v31 < 8 )
              goto LABEL_28;
            v32 = (char *)a1 + v30;
            if ( !v32[1] || v31 - 8 < 4 * (unsigned __int64)(unsigned __int8)v32[1] )
              goto LABEL_28;
            StringForSid = LocalGetStringForSid(v32, (wchar_t **)&P, v98, 0LL, v92, a6);
            if ( StringForSid )
              goto LABEL_135;
            v33 = -1LL;
            do
              ++v33;
            while ( *((_WORD *)P + v33) );
            if ( v20 + 2 * (_DWORD)v33 < v20 )
              goto LABEL_131;
            v20 += 2 * v33;
            if ( P )
            {
              ExFreePoolWithTag(P, 0);
              P = 0LL;
            }
            ++v26;
            ++v27;
            if ( v26 >= (unsigned int)v11 )
              goto LABEL_52;
          }
        case 6:
LABEL_63:
          v39 = 0;
          v40 = a1 + 4;
          while ( 1 )
          {
            v41 = *v40;
            if ( a2 < (unsigned int)v41 || a2 - (unsigned int)v41 < 8 )
              break;
            ui64tow_s(*(_QWORD *)((char *)a1 + v41), v100, 0x46uLL, 10);
            v42 = -1LL;
            do
              ++v42;
            while ( v100[v42] );
            if ( v20 + 2 * (_DWORD)v42 < v20 )
              goto LABEL_131;
            ++v39;
            ++v40;
            v20 += 2 * v42;
            if ( v39 >= (unsigned int)v11 )
              goto LABEL_52;
          }
          break;
        case 16:
          v21 = 0;
          v22 = a1 + 4;
          while ( 1 )
          {
            v23 = *v22;
            if ( a2 < (unsigned int)v23 )
              break;
            if ( a2 - (unsigned int)v23 < 4 )
              break;
            v24 = *(unsigned int *)((char *)a1 + v23);
            if ( a2 - (unsigned int)v23 - 4 < v24 )
              break;
            v25 = 4LL * v24;
            if ( v25 > 0xFFFFFFFF || (unsigned int)v25 + v20 < v20 )
              goto LABEL_131;
            ++v21;
            ++v22;
            v20 += v25;
            if ( v21 >= (unsigned int)v11 )
              goto LABEL_53;
          }
          break;
      }
LABEL_28:
      StringForSid = 1336;
      goto LABEL_135;
    }
    v43 = 0;
    v44 = a1 + 4;
    do
    {
      v45 = *v44;
      if ( a2 < (unsigned int)v45 || a2 - (unsigned int)v45 < 8 )
        goto LABEL_28;
      i64tow_s(*(_QWORD *)((char *)a1 + v45), v100, 0x46uLL, 10);
      v46 = -1LL;
      do
        ++v46;
      while ( v100[v46] );
      if ( v20 + 2 * (_DWORD)v46 < v20 )
        goto LABEL_131;
      ++v43;
      ++v44;
      v20 += 2 * v46;
    }
    while ( v43 < (unsigned int)v11 );
LABEL_52:
    v12 = v93;
    LODWORD(v16) = v96;
LABEL_53:
    if ( v20 + 3 < v20 )
    {
LABEL_131:
      StringForSid = 534;
      goto LABEL_135;
    }
    v34 = SddlpAlloc((v20 + 3) & 0xFFFFFFFC);
    pcbLength = (size_t)v34;
    if ( !v34 )
    {
      StringForSid = 8;
      goto LABEL_135;
    }
    v47 = Src;
    *v34 = 40;
    v34[1] = 34;
    v48 = v34 + 2;
    memmove(v34 + 2, v47, (unsigned int)v16);
    v49 = &v48[(unsigned __int64)(unsigned int)v16 >> 1];
    *(_DWORD *)v49 = 2883618;
    switch ( v12 )
    {
      case 1:
        *((_DWORD *)v49 + 1) = 4784212;
        break;
      case 2:
        *((_DWORD *)v49 + 1) = 5570644;
        break;
      case 3:
        *((_DWORD *)v49 + 1) = 5439572;
        break;
      case 5:
        *((_DWORD *)v49 + 1) = 4456532;
        break;
      case 6:
        *((_DWORD *)v49 + 1) = 4325460;
        break;
      case 16:
        *((_DWORD *)v49 + 1) = 5767252;
        break;
      default:
LABEL_85:
        StringForSid = 1336;
LABEL_86:
        v9 = (void *)pcbLength;
        goto LABEL_133;
    }
    v50 = -1LL;
    v49[4] = 44;
    do
      ++v50;
    while ( DstBuf[v50] );
    *(_DWORD *)(v49 + 5) = 7864368;
    v51 = 2LL * (unsigned int)v50;
    v52 = (char *)(v49 + 7);
    memmove(v52, DstBuf, v51);
    v54 = &v52[v51];
    v55 = v12 - 1;
    if ( !v55 )
    {
      v85 = a1 + 4;
      v86 = v11;
      do
      {
        *(_WORD *)v54 = 44;
        v87 = v54 + 2;
        i64tow_s(*(_QWORD *)((char *)a1 + *v85), v100, 0x46uLL, 10);
        v88 = -1LL;
        do
          ++v88;
        while ( v100[v88] );
        v89 = 2LL * (unsigned int)v88;
        memmove(v87, v100, v89);
        v54 = &v87[v89];
        ++v85;
        --v86;
      }
      while ( v86 );
      goto LABEL_129;
    }
    v56 = v55 - 1;
    if ( v56 )
    {
      v57 = v56 - 1;
      if ( !v57 )
      {
        v73 = v11;
        v74 = a1 + 4;
        do
        {
          *(_DWORD *)v54 = 2228268;
          v75 = -1LL;
          v76 = v54 + 4;
          v77 = (_WORD *)((char *)a1 + *v74);
          do
            ++v75;
          while ( v77[v75] );
          v78 = 2LL * (unsigned int)v75;
          memmove(v76, v77, v78);
          v79 = &v76[v78];
          ++v74;
          *(_WORD *)v79 = 34;
          v54 = v79 + 2;
          --v73;
        }
        while ( v73 );
        goto LABEL_129;
      }
      v58 = v57 - 2;
      if ( !v58 )
      {
        v67 = 0;
        v68 = a1 + 4;
        while ( 1 )
        {
          v69 = v98;
          *(_WORD *)v54 = 44;
          v70 = v54 + 2;
          StringForSid = LocalGetStringForSid((char *)a1 + (unsigned int)(*v68 + 4), (wchar_t **)&P, v69, v53, v92, a6);
          if ( StringForSid )
            goto LABEL_86;
          v71 = -1LL;
          do
            ++v71;
          while ( *((_WORD *)P + v71) );
          v72 = 2LL * (unsigned int)v71;
          memmove(v70, P, v72);
          v54 = &v70[v72];
          if ( P )
          {
            ExFreePoolWithTag(P, 0);
            P = 0LL;
          }
          ++v67;
          ++v68;
          if ( v67 >= (unsigned int)v11 )
            goto LABEL_130;
        }
      }
      v59 = v58 - 1;
      if ( v59 )
      {
        if ( v59 != 10 )
          goto LABEL_85;
        v60 = a1 + 4;
        v61 = v11;
        do
        {
          *(_WORD *)v54 = 44;
          v54 += 2;
          v62 = *v60;
          v63 = *(unsigned int *)((char *)a1 + v62);
          v64 = (unsigned __int8 *)a1 + (unsigned int)(v62 + 4);
          if ( v63 )
          {
            v65 = v63;
            do
            {
              v66 = *v64++;
              *(_WORD *)v54 = a0123456789abcd[(unsigned __int64)v66 >> 4];
              *((_WORD *)v54 + 1) = a0123456789abcd[v66 & 0xF];
              v54 += 4;
              --v65;
            }
            while ( v65 );
          }
          ++v60;
          --v61;
        }
        while ( v61 );
LABEL_130:
        v90 = (_QWORD *)v99;
        *(_DWORD *)v54 = 41;
        *v90 = pcbLength;
        goto LABEL_135;
      }
    }
    v80 = a1 + 4;
    v81 = v11;
    do
    {
      *(_WORD *)v54 = 44;
      v82 = v54 + 2;
      ui64tow_s(*(_QWORD *)((char *)a1 + *v80), v100, 0x46uLL, 10);
      v83 = -1LL;
      do
        ++v83;
      while ( v100[v83] );
      v84 = 2LL * (unsigned int)v83;
      memmove(v82, v100, v84);
      v54 = &v82[v84];
      ++v80;
      --v81;
    }
    while ( v81 );
LABEL_129:
    StringForSid = 0;
    goto LABEL_130;
  }
LABEL_135:
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return StringForSid;
}
