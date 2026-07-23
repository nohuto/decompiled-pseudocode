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
        ACCESS_MASK *Src,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 *a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        __int64 a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  char v16; // r14
  _DWORD *v18; // r11
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  void **v23; // r9
  __int64 v24; // rdi
  ACCESS_MASK *v25; // r14
  unsigned int v26; // esi
  ACCESS_MASK *v27; // r13
  int v28; // ecx
  unsigned int GenericAll; // r15d
  ACCESS_MASK v30; // r15d
  int v31; // r15d
  char *v32; // r12
  char *v33; // rbx
  int v34; // esi
  unsigned int v35; // esi
  _BYTE *v36; // rcx
  ACCESS_MASK v38; // ecx
  ACCESS_MASK *v39; // rax
  int v40; // eax
  __int64 v41; // rax
  ACCESS_MASK v42; // ecx
  ACCESS_MASK v43; // ecx
  ACCESS_MASK v44; // ecx
  unsigned __int8 *v45; // rax
  int v46; // eax
  int v47; // eax
  unsigned __int8 *v48; // rcx
  int v49; // eax
  __int64 v50; // rdx
  ACCESS_MASK *v51; // r8
  __int64 v52; // rcx
  unsigned int v53; // edx
  __int64 v54; // rax
  ACCESS_MASK v55; // ecx
  ACCESS_MASK v56; // ecx
  char v58; // [rsp+21h] [rbp-B8h]
  int v60; // [rsp+24h] [rbp-B5h]
  unsigned __int8 *v61; // [rsp+30h] [rbp-A9h]
  ACCESS_MASK AccessMask; // [rsp+38h] [rbp-A1h] BYREF
  void **v63; // [rsp+40h] [rbp-99h]
  _BYTE *v64; // [rsp+48h] [rbp-91h]
  __int64 v65; // [rsp+50h] [rbp-89h]
  __int64 v66; // [rsp+58h] [rbp-81h]
  __int64 v67; // [rsp+60h] [rbp-79h]
  __int64 v68; // [rsp+68h] [rbp-71h]
  unsigned __int8 *v69; // [rsp+70h] [rbp-69h]
  void *Srca; // [rsp+78h] [rbp-61h]
  __int64 v71; // [rsp+80h] [rbp-59h]
  __int16 Sid2; // [rsp+88h] [rbp-51h] BYREF
  int v73; // [rsp+8Ah] [rbp-4Fh]
  __int16 v74; // [rsp+8Eh] [rbp-4Bh]
  int v75; // [rsp+90h] [rbp-49h]
  char v76[8]; // [rsp+B8h] [rbp-21h] BYREF
  int v77; // [rsp+C0h] [rbp-19h]

  v16 = a2;
  v18 = a12;
  v20 = a7;
  v21 = a13;
  v22 = a6;
  v69 = (unsigned __int8 *)a4;
  v23 = a11;
  if ( !a6 )
    v22 = a4;
  if ( !a7 )
    v20 = (__int64)a5;
  v73 = 0;
  v67 = v20;
  v71 = (__int64)a5;
  v63 = a11;
  v66 = (__int64)a12;
  v65 = a13;
  v64 = a16;
  v58 = 0;
  Sid2 = 257;
  v74 = 768;
  v75 = 0;
  v68 = v22;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v24 = *((unsigned __int16 *)Src + 1);
  if ( *(_BYTE *)Src > 0xAu && (unsigned __int8)(*(_BYTE *)Src - 13) > 1u )
  {
    if ( v24 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      v36 = v64;
      *v64 = 1;
      goto LABEL_35;
    }
    memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
    v23 = v63;
    goto LABEL_28;
  }
  Srca = 0LL;
  v60 = 0;
  v61 = 0LL;
  if ( *(_BYTE *)Src <= 3u )
  {
    v25 = Src + 2;
LABEL_10:
    v26 = 8;
    v27 = Src;
    goto LABEL_11;
  }
  if ( ((*(_BYTE *)Src - 9) & 0xFA) == 0 )
  {
    v25 = Src + 2;
    v41 = *((unsigned __int8 *)Src + 9);
    Srca = &Src[v41 + 4];
    v60 = v24 - (4 * v41 + 16);
    goto LABEL_10;
  }
  if ( *(_BYTE *)Src == 4 )
  {
    v61 = (unsigned __int8 *)(Src + 3);
    v26 = 12;
    v25 = &Src[*((unsigned __int8 *)Src + 13) + 5];
    if ( !RtlEqualPrefixSid(Src + 3, &Sid2) )
    {
      v49 = *((unsigned __int8 *)Src + 13);
      goto LABEL_69;
    }
    v42 = Src[5];
    if ( v42 )
    {
      v43 = v42 - 1;
      if ( v43 )
      {
        v44 = v43 - 1;
        if ( !v44 )
        {
          v45 = (unsigned __int8 *)v68;
          goto LABEL_60;
        }
        if ( v44 == 1 )
        {
          v45 = (unsigned __int8 *)v67;
LABEL_60:
          v61 = v45;
          v46 = v45[1];
          *a15 = 1;
          LODWORD(v24) = v24 + 4 * v46 - 4;
LABEL_70:
          v27 = Src;
LABEL_88:
          v23 = v63;
          goto LABEL_11;
        }
        goto LABEL_65;
      }
      if ( !a5 )
      {
LABEL_65:
        v48 = (unsigned __int8 *)(Src + 3);
        goto LABEL_66;
      }
      v47 = a5[1];
      v48 = a5;
      v61 = a5;
    }
    else
    {
      v48 = v69;
      v61 = v69;
      v47 = v69[1];
    }
    *a15 = 1;
    LODWORD(v24) = v24 + 4 * v47 - 4;
LABEL_66:
    if ( *a15 )
      goto LABEL_70;
    v49 = v48[1];
LABEL_69:
    v26 = 4 * v49 + 20;
    v61 = 0LL;
    goto LABEL_70;
  }
  v50 = 4 * (Src[2] & 1LL);
  v25 = (ACCESS_MASK *)((char *)&Src[v50] + ((Src[2] & 2) != 0 ? 28LL : 12LL));
  v26 = v50 * 4 + ((Src[2] & 2) != 0 ? 28 : 12);
  if ( (Src[2] & 2) != 0 )
    v51 = &Src[v50 + 3];
  else
    v51 = 0LL;
  v27 = Src;
  if ( a14 && v51 )
  {
    v52 = a9;
    if ( !a9 || (v53 = 0, !a10) )
    {
LABEL_82:
      LODWORD(v24) = 0;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v54 = *(_QWORD *)v51 - **(_QWORD **)v52;
      if ( *(_QWORD *)v51 == **(_QWORD **)v52 )
        v54 = *((_QWORD *)v51 + 1) - *(_QWORD *)(*(_QWORD *)v52 + 8LL);
      if ( !v54 )
        break;
      ++v53;
      v52 += 8LL;
      if ( v53 >= a10 )
        goto LABEL_82;
    }
    *a14 = 1;
    if ( !a3 )
    {
      *a15 = 1;
      if ( (Src[2] & 1) != 0 )
      {
        v26 -= 16;
        LODWORD(v24) = v24 - 16;
        memmove(v76, Src, v26);
        v77 &= ~2u;
      }
      else
      {
        v26 -= 20;
        LODWORD(v24) = v24 - 20;
        memmove(v76, Src, v26);
        v76[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
      }
      v27 = (ACCESS_MASK *)v76;
      goto LABEL_88;
    }
    v58 = 1;
  }
LABEL_11:
  if ( !(_DWORD)v24 )
  {
LABEL_27:
    v21 = v65;
    v16 = a2;
LABEL_28:
    v36 = v64;
    goto LABEL_29;
  }
  AccessMask = Src[1];
  RtlMapGenericMask(&AccessMask, GenericMapping);
  if ( *(_BYTE *)Src <= 0xAu && (v28 = 1651, _bittest(&v28, *(unsigned __int8 *)Src)) )
    GenericAll = GenericMapping->GenericAll;
  else
    GenericAll = GenericMapping->GenericAll | 0x1000000;
  v30 = AccessMask & GenericAll;
  if ( v30 != Src[1] )
    *a15 = 1;
  v31 = v30 & 0x11FFFFF;
  if ( !v31 && !RtlEqualPrefixSid(v25, &Sid2) )
  {
    v23 = v63;
    LODWORD(v24) = 0;
    goto LABEL_27;
  }
  if ( RtlEqualPrefixSid(v25, &Sid2) )
  {
    v38 = v25[2];
    if ( v38 )
    {
      v55 = v38 - 1;
      if ( v55 )
      {
        v56 = v55 - 1;
        if ( v56 )
        {
          if ( v56 != 1 )
            goto LABEL_19;
          v39 = (ACCESS_MASK *)v67;
        }
        else
        {
          v39 = (ACCESS_MASK *)v68;
        }
      }
      else
      {
        v39 = (ACCESS_MASK *)v71;
        if ( !v71 )
          goto LABEL_19;
      }
    }
    else
    {
      v39 = (ACCESS_MASK *)v69;
    }
    v25 = v39;
    v40 = *((unsigned __int8 *)v39 + 1);
    *a15 = 1;
    LODWORD(v24) = v24 + 4 * v40 - 4;
  }
LABEL_19:
  if ( v58 && *a15 )
  {
    if ( (Src[2] & 1) != 0 )
    {
      v26 -= 16;
      LODWORD(v24) = v24 - 16;
      memmove(v76, Src, v26);
      v77 &= ~2u;
    }
    else
    {
      v26 -= 20;
      LODWORD(v24) = v24 - 20;
      memmove(v76, Src, v26);
      v76[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
    }
    v27 = (ACCESS_MASK *)v76;
  }
  v23 = v63;
  v32 = (char *)*v63;
  if ( *v63 && (unsigned int)v24 <= v65 + *(unsigned __int16 *)(v65 + 2) - (_QWORD)v32 )
  {
    memmove(*v63, v27, v26);
    v33 = &v32[v26];
    if ( v61 )
    {
      memmove(v33, v61, 4LL * v61[1] + 8);
      v33 += 4 * v61[1] + 8;
    }
    memmove(v33, v25, 4LL * *((unsigned __int8 *)v25 + 1) + 8);
    v34 = (_DWORD)v33 + 4 * (*((unsigned __int8 *)v25 + 1) + 2);
    if ( Srca && v60 > 0 )
    {
      memmove(&v33[4 * *((unsigned __int8 *)v25 + 1) + 8], Srca, v60);
      v34 += v60;
    }
    v23 = v63;
    v35 = v34 - *(_DWORD *)v63;
    if ( (unsigned int)v24 < v35 )
      return 0;
    LODWORD(v24) = v35;
    *((_WORD *)*v63 + 1) = v35;
    *((_DWORD *)*v23 + 1) = v31;
    goto LABEL_27;
  }
  v36 = v64;
  v21 = v65;
  v16 = a2;
  *v64 = 1;
LABEL_29:
  if ( !*v36 && (_DWORD)v24 )
  {
    *((_BYTE *)*v23 + 1) &= 0xE0u;
    if ( v16 )
      *((_BYTE *)*v23 + 1) |= 0x10u;
    ++*(_WORD *)(v21 + 4);
  }
  v18 = (_DWORD *)v66;
LABEL_35:
  if ( (unsigned int)v24 > 0xFFFF )
    return 0;
  if ( !*v36 )
    *v23 = (char *)*v23 + (unsigned int)v24;
  *v18 = v24;
  return 1;
}
