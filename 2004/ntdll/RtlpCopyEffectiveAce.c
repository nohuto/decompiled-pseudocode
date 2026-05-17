/*
 * XREFs of RtlpCopyEffectiveAce @ 0x180037A3C
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x180036F8C (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x18003D288 (RtlpCopyAces.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x180037DE0 (RtlEqualPrefixSid.c)
 *     RtlMapGenericMask @ 0x180037EA0 (RtlMapGenericMask.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        unsigned __int16 *Src,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        unsigned __int16 *a16)
{
  char v16; // r14
  _DWORD *v18; // r11
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  void **v23; // r9
  unsigned __int16 *v24; // r8
  __int64 v25; // rdi
  unsigned __int16 *v26; // r14
  unsigned int v27; // esi
  char *v28; // r13
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // ecx
  int v32; // r15d
  int v33; // r15d
  int v34; // r15d
  char *v35; // r12
  char *v36; // rbx
  int v37; // esi
  unsigned int v38; // esi
  unsigned __int16 *v39; // rcx
  int v41; // ecx
  unsigned __int16 *v42; // rax
  int v43; // eax
  __int64 v44; // rax
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  unsigned __int8 *v48; // rax
  int v49; // eax
  int v50; // eax
  unsigned __int8 *v51; // rcx
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned int v55; // edx
  __int64 v56; // rax
  int v57; // ecx
  int v58; // ecx
  char v60; // [rsp+21h] [rbp-B8h]
  int v62; // [rsp+24h] [rbp-B5h]
  unsigned __int8 *v63; // [rsp+30h] [rbp-A9h]
  int v64; // [rsp+38h] [rbp-A1h] BYREF
  void **v65; // [rsp+40h] [rbp-99h]
  unsigned __int16 *v66; // [rsp+48h] [rbp-91h]
  __int64 v67; // [rsp+50h] [rbp-89h]
  __int64 v68; // [rsp+58h] [rbp-81h]
  __int64 v69; // [rsp+60h] [rbp-79h]
  __int64 v70; // [rsp+68h] [rbp-71h]
  unsigned __int8 *v71; // [rsp+70h] [rbp-69h]
  void *Srca; // [rsp+78h] [rbp-61h]
  __int64 v73; // [rsp+80h] [rbp-59h]
  __int16 v74; // [rsp+88h] [rbp-51h] BYREF
  int v75; // [rsp+8Ah] [rbp-4Fh]
  __int16 v76; // [rsp+8Eh] [rbp-4Bh]
  int v77; // [rsp+90h] [rbp-49h]
  char v78[8]; // [rsp+B8h] [rbp-21h] BYREF
  int v79; // [rsp+C0h] [rbp-19h]

  v16 = a2;
  v18 = a12;
  v20 = a7;
  v21 = a13;
  v22 = a6;
  v71 = (unsigned __int8 *)a4;
  v23 = a11;
  if ( !a6 )
    v22 = a4;
  v24 = a16;
  if ( !a7 )
    v20 = (__int64)a5;
  v75 = 0;
  v69 = v20;
  v73 = (__int64)a5;
  v65 = a11;
  v68 = (__int64)a12;
  v67 = a13;
  v66 = a16;
  v60 = 0;
  v74 = 257;
  v76 = 768;
  v77 = 0;
  v70 = v22;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *(_BYTE *)a16 = 0;
  v25 = Src[1];
  if ( *(_BYTE *)Src > 0xAu && (unsigned __int8)(*(_BYTE *)Src - 13) > 1u )
  {
    if ( v25 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      v39 = v66;
      *(_BYTE *)v66 = 1;
      goto LABEL_35;
    }
    memmove(*a11, Src, Src[1]);
    v23 = v65;
    goto LABEL_28;
  }
  Srca = 0LL;
  v62 = 0;
  v63 = 0LL;
  if ( *(_BYTE *)Src <= 3u )
  {
    v26 = Src + 4;
LABEL_10:
    v27 = 8;
    v28 = (char *)Src;
    goto LABEL_11;
  }
  if ( ((*(_BYTE *)Src - 9) & 0xFA) == 0 )
  {
    v26 = Src + 4;
    v44 = *((unsigned __int8 *)Src + 9);
    Srca = &Src[2 * v44 + 8];
    v62 = v25 - (4 * v44 + 16);
    goto LABEL_10;
  }
  if ( *(_BYTE *)Src == 4 )
  {
    v63 = (unsigned __int8 *)(Src + 6);
    v27 = 12;
    v26 = &Src[2 * *((unsigned __int8 *)Src + 13) + 10];
    if ( !(unsigned __int8)RtlEqualPrefixSid(Src + 6, &v74, a16, a11) )
    {
      v52 = *((unsigned __int8 *)Src + 13);
      goto LABEL_69;
    }
    v45 = *((_DWORD *)Src + 5);
    if ( v45 )
    {
      v46 = v45 - 1;
      if ( v46 )
      {
        v47 = v46 - 1;
        if ( !v47 )
        {
          v48 = (unsigned __int8 *)v70;
          goto LABEL_60;
        }
        if ( v47 == 1 )
        {
          v48 = (unsigned __int8 *)v69;
LABEL_60:
          v63 = v48;
          v49 = v48[1];
          *a15 = 1;
          LODWORD(v25) = v25 + 4 * v49 - 4;
LABEL_70:
          v28 = (char *)Src;
LABEL_88:
          v23 = v65;
          goto LABEL_11;
        }
        goto LABEL_65;
      }
      if ( !a5 )
      {
LABEL_65:
        v51 = (unsigned __int8 *)(Src + 6);
        goto LABEL_66;
      }
      v50 = a5[1];
      v51 = a5;
      v63 = a5;
    }
    else
    {
      v51 = v71;
      v63 = v71;
      v50 = v71[1];
    }
    *a15 = 1;
    LODWORD(v25) = v25 + 4 * v50 - 4;
LABEL_66:
    if ( *a15 )
      goto LABEL_70;
    v52 = v51[1];
LABEL_69:
    v27 = 4 * v52 + 20;
    v63 = 0LL;
    goto LABEL_70;
  }
  v53 = 8 * (*((_DWORD *)Src + 2) & 1LL);
  v26 = (unsigned __int16 *)((char *)&Src[v53] + ((*((_DWORD *)Src + 2) & 2) != 0 ? 28LL : 12LL));
  v27 = v53 * 2 + ((*((_DWORD *)Src + 2) & 2) != 0 ? 28 : 12);
  if ( (*((_DWORD *)Src + 2) & 2) != 0 )
    v24 = &Src[v53 + 6];
  else
    v24 = 0LL;
  v28 = (char *)Src;
  if ( a14 && v24 )
  {
    v54 = a9;
    if ( !a9 || (v55 = 0, !a10) )
    {
LABEL_82:
      LODWORD(v25) = 0;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v56 = *(_QWORD *)v24 - **(_QWORD **)v54;
      if ( *(_QWORD *)v24 == **(_QWORD **)v54 )
        v56 = *((_QWORD *)v24 + 1) - *(_QWORD *)(*(_QWORD *)v54 + 8LL);
      if ( !v56 )
        break;
      ++v55;
      v54 += 8LL;
      if ( v55 >= a10 )
        goto LABEL_82;
    }
    *a14 = 1;
    if ( !a3 )
    {
      *a15 = 1;
      if ( (Src[4] & 1) != 0 )
      {
        v27 -= 16;
        LODWORD(v25) = v25 - 16;
        memmove(v78, Src, v27);
        v79 &= ~2u;
      }
      else
      {
        v27 -= 20;
        LODWORD(v25) = v25 - 20;
        memmove(v78, Src, v27);
        v78[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
      }
      v28 = v78;
      goto LABEL_88;
    }
    v60 = 1;
  }
LABEL_11:
  if ( !(_DWORD)v25 )
  {
LABEL_27:
    v21 = v67;
    v16 = a2;
LABEL_28:
    v39 = v66;
    goto LABEL_29;
  }
  v64 = *((_DWORD *)Src + 1);
  RtlMapGenericMask(&v64, a8, v24, v23);
  if ( *(_BYTE *)Src <= 0xAu && (v31 = 1651, _bittest(&v31, *(unsigned __int8 *)Src)) )
    v32 = *(_DWORD *)(a8 + 12);
  else
    v32 = *(_DWORD *)(a8 + 12) | 0x1000000;
  v33 = v64 & v32;
  if ( v33 != *((_DWORD *)Src + 1) )
    *a15 = 1;
  v34 = v33 & 0x11FFFFF;
  if ( !v34 && !(unsigned __int8)RtlEqualPrefixSid(v26, &v74, v29, v30) )
  {
    v23 = v65;
    LODWORD(v25) = 0;
    goto LABEL_27;
  }
  if ( (unsigned __int8)RtlEqualPrefixSid(v26, &v74, v29, v30) )
  {
    v41 = *((_DWORD *)v26 + 2);
    if ( v41 )
    {
      v57 = v41 - 1;
      if ( v57 )
      {
        v58 = v57 - 1;
        if ( v58 )
        {
          if ( v58 != 1 )
            goto LABEL_19;
          v42 = (unsigned __int16 *)v69;
        }
        else
        {
          v42 = (unsigned __int16 *)v70;
        }
      }
      else
      {
        v42 = (unsigned __int16 *)v73;
        if ( !v73 )
          goto LABEL_19;
      }
    }
    else
    {
      v42 = (unsigned __int16 *)v71;
    }
    v26 = v42;
    v43 = *((unsigned __int8 *)v42 + 1);
    *a15 = 1;
    LODWORD(v25) = v25 + 4 * v43 - 4;
  }
LABEL_19:
  if ( v60 && *a15 )
  {
    if ( (Src[4] & 1) != 0 )
    {
      v27 -= 16;
      LODWORD(v25) = v25 - 16;
      memmove(v78, Src, v27);
      v79 &= ~2u;
    }
    else
    {
      v27 -= 20;
      LODWORD(v25) = v25 - 20;
      memmove(v78, Src, v27);
      v78[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
    }
    v28 = v78;
  }
  v23 = v65;
  v35 = (char *)*v65;
  if ( *v65 && (unsigned int)v25 <= v67 + *(unsigned __int16 *)(v67 + 2) - (_QWORD)v35 )
  {
    memmove(*v65, v28, v27);
    v36 = &v35[v27];
    if ( v63 )
    {
      memmove(v36, v63, 4LL * v63[1] + 8);
      v36 += 4 * v63[1] + 8;
    }
    memmove(v36, v26, 4LL * *((unsigned __int8 *)v26 + 1) + 8);
    v37 = (_DWORD)v36 + 4 * (*((unsigned __int8 *)v26 + 1) + 2);
    if ( Srca && v62 > 0 )
    {
      memmove(&v36[4 * *((unsigned __int8 *)v26 + 1) + 8], Srca, v62);
      v37 += v62;
    }
    v23 = v65;
    v38 = v37 - *(_DWORD *)v65;
    if ( (unsigned int)v25 < v38 )
      return 0;
    LODWORD(v25) = v38;
    *((_WORD *)*v65 + 1) = v38;
    *((_DWORD *)*v23 + 1) = v34;
    goto LABEL_27;
  }
  v39 = v66;
  v21 = v67;
  v16 = a2;
  *(_BYTE *)v66 = 1;
LABEL_29:
  if ( !*(_BYTE *)v39 && (_DWORD)v25 )
  {
    *((_BYTE *)*v23 + 1) &= 0xE0u;
    if ( v16 )
      *((_BYTE *)*v23 + 1) |= 0x10u;
    ++*(_WORD *)(v21 + 4);
  }
  v18 = (_DWORD *)v68;
LABEL_35:
  if ( (unsigned int)v25 > 0xFFFF )
    return 0;
  if ( !*(_BYTE *)v39 )
    *v23 = (char *)*v23 + (unsigned int)v25;
  *v18 = v25;
  return 1;
}
