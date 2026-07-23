/*
 * XREFs of _RtlpCopyEffectiveAce@64 @ 0x4B2D7FF4
 * Callers:
 *     _RtlpGenerateInheritedAce@56 @ 0x4B2D7D3F (_RtlpGenerateInheritedAce@56.c)
 *     _RtlpCopyAces@56 @ 0x4B2D886D (_RtlpCopyAces@56.c)
 * Callees:
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _RtlEqualPrefixSid@8 @ 0x4B2D8300 (_RtlEqualPrefixSid@8.c)
 *     _RtlMapGenericMask@8 @ 0x4B2D83B0 (_RtlMapGenericMask@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpGuidPresentInGuidList@12 @ 0x4B34906E (_RtlpGuidPresentInGuidList@12.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        ACCESS_MASK *Src,
        char a2,
        char a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        int a6,
        int a7,
        PGENERIC_MAPPING GenericMapping,
        int a9,
        int a10,
        void **a11,
        unsigned int *a12,
        int a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  unsigned __int8 v17; // cl
  unsigned int v18; // esi
  int v19; // edi
  unsigned __int8 v20; // al
  unsigned int GenericAll; // eax
  ACCESS_MASK v22; // eax
  _BYTE *v23; // eax
  void **v24; // edx
  char *v25; // ebx
  char *v26; // edi
  unsigned __int8 *v27; // ebx
  unsigned __int8 *v28; // ebx
  char *v29; // edi
  unsigned int v30; // edi
  ACCESS_MASK v31; // ecx
  int v32; // edi
  _BYTE *v33; // eax
  _BYTE *v34; // edi
  char result; // al
  int v36; // eax
  unsigned __int8 *v37; // eax
  unsigned int v38; // esi
  unsigned __int8 *v39; // ecx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  unsigned __int8 *v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  _BYTE *v47; // eax
  int v48; // eax
  int v49; // eax
  unsigned int v50; // esi
  int v51; // ecx
  int v52; // edx
  ACCESS_MASK *v53; // ecx
  int v54; // eax
  int v55; // eax
  int v56; // ebx
  size_t v57; // [esp-4h] [ebp-ACh]
  size_t v58; // [esp-4h] [ebp-ACh]
  size_t v59; // [esp-4h] [ebp-ACh]
  char *v60; // [esp+10h] [ebp-98h]
  ACCESS_MASK *Srca; // [esp+1Ch] [ebp-8Ch]
  int v62; // [esp+20h] [ebp-88h]
  int v63; // [esp+24h] [ebp-84h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [esp+28h] [ebp-80h] BYREF
  int v65; // [esp+30h] [ebp-78h]
  void **v66; // [esp+34h] [ebp-74h]
  char v67; // [esp+3Bh] [ebp-6Dh]
  ACCESS_MASK AccessMask; // [esp+3Ch] [ebp-6Ch] BYREF
  _BYTE *v69; // [esp+40h] [ebp-68h]
  void *v70; // [esp+44h] [ebp-64h]
  PSID Sid1; // [esp+48h] [ebp-60h]
  char v72; // [esp+4Fh] [ebp-59h]
  _BYTE *v73; // [esp+50h] [ebp-58h]
  _BYTE Sid[8]; // [esp+54h] [ebp-54h] BYREF
  int v75; // [esp+5Ch] [ebp-4Ch]
  _BYTE v76[8]; // [esp+84h] [ebp-24h] BYREF
  int v77; // [esp+8Ch] [ebp-1Ch]

  v62 = a6;
  v63 = a7;
  v66 = a11;
  v65 = a13;
  v69 = a16;
  v72 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v67 = a2;
  AccessMask = (ACCESS_MASK)a14;
  v73 = a15;
  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
  if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) < 0 )
    return 0;
  v75 = 0;
  if ( !a6 )
    v62 = (int)a4;
  if ( !a7 )
    v63 = (int)a5;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *v69 = 0;
  v17 = *(_BYTE *)Src;
  v18 = *((unsigned __int16 *)Src + 1);
  if ( *(_BYTE *)Src > 8u && v17 > 0xAu && (unsigned __int8)(v17 - 13) > 1u )
  {
    v32 = v65;
    v24 = v66;
    if ( v18 > v65 + *(unsigned __int16 *)(v65 + 2) - (unsigned int)*v66 )
    {
      v34 = v69;
      *v69 = 1;
      goto LABEL_34;
    }
    LODWORD(v57) = *((unsigned __int16 *)Src + 1);
    memcpy(*v66, Src, v57);
    goto LABEL_46;
  }
  *(_DWORD *)IdentifierAuthority.Value = 0;
  Srca = Src;
  v70 = 0;
  v60 = 0;
  if ( v17 <= 3u )
  {
    Sid1 = Src + 2;
    v19 = 8;
    goto LABEL_11;
  }
  if ( v17 >= 9u && v17 <= 0xAu || (unsigned __int8)(v17 - 13) <= 1u )
  {
    v44 = *((unsigned __int8 *)Src + 9);
    Sid1 = Src + 2;
    v19 = 8;
    v45 = 4 * v44 + 8;
    v60 = (char *)Src + v45 + 8;
    *(_DWORD *)IdentifierAuthority.Value = v18 - v45 - 8;
    goto LABEL_11;
  }
  if ( v17 == 4 )
  {
    v19 = 12;
    Sid1 = &Src[*((unsigned __int8 *)Src + 13) + 5];
    v70 = Src + 3;
    if ( !RtlEqualPrefixSid(Src + 3, Sid) )
    {
      v48 = *((unsigned __int8 *)v70 + 1);
LABEL_69:
      v19 = 4 * v48 + 20;
      v70 = 0;
      goto LABEL_11;
    }
    v39 = (unsigned __int8 *)v70;
    v40 = *((_DWORD *)v70 + 2);
    if ( v40 )
    {
      v41 = v40 - 1;
      if ( v41 )
      {
        v42 = v41 - 1;
        if ( !v42 )
        {
          v43 = (unsigned __int8 *)v62;
          goto LABEL_61;
        }
        if ( v42 == 1 )
        {
          v43 = (unsigned __int8 *)v63;
LABEL_61:
          v70 = v43;
          v18 = v18 + 4 * v43[1] - 4;
          *v73 = 1;
          goto LABEL_11;
        }
        goto LABEL_63;
      }
      v46 = (int)a5;
      if ( !a5 )
      {
LABEL_63:
        v47 = v73;
LABEL_64:
        if ( *v47 )
          goto LABEL_11;
        v48 = v39[1];
        goto LABEL_69;
      }
    }
    else
    {
      v46 = (int)a4;
    }
    v39 = (unsigned __int8 *)v46;
    v49 = *(unsigned __int8 *)(v46 + 1);
    v70 = v39;
    v50 = v18 + 4 * v49;
    v47 = v73;
    v18 = v50 - 4;
    *v73 = 1;
    goto LABEL_64;
  }
  v51 = Src[2] & 2;
  v52 = 4 * (Src[2] & 1);
  v19 = (v51 != 0 ? 0x10 : 0) + v52 * 4 + 12;
  Sid1 = (char *)Src + v19;
  if ( v51 )
    v53 = &Src[v52 + 3];
  else
    v53 = 0;
  if ( AccessMask && v53 )
  {
    if ( a9 && (unsigned __int8)RtlpGuidPresentInGuidList(v53, a10) )
    {
      *(_BYTE *)AccessMask = 1;
      if ( a3 )
      {
        v72 = 1;
      }
      else
      {
        *v73 = 1;
        if ( (Src[2] & 1) != 0 )
        {
          v19 -= 16;
          v18 -= 16;
          LODWORD(v57) = v19;
          memcpy(v76, Src, v57);
          v77 &= ~2u;
        }
        else
        {
          v19 -= 20;
          v18 -= 20;
          LODWORD(v57) = v19;
          memcpy(v76, Src, v57);
          v76[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
        }
        Srca = (ACCESS_MASK *)v76;
      }
    }
    else
    {
      v18 = 0;
    }
  }
LABEL_11:
  if ( !v18 )
  {
LABEL_47:
    v32 = v65;
LABEL_46:
    v24 = v66;
LABEL_27:
    v33 = v69;
    goto LABEL_28;
  }
  AccessMask = Src[1];
  RtlMapGenericMask(&AccessMask, GenericMapping);
  v20 = *(_BYTE *)Src;
  if ( !*(_BYTE *)Src || v20 == 1 || v20 == 4 || v20 == 5 || v20 == 6 || v20 == 9 || v20 == 10 )
    GenericAll = GenericMapping->GenericAll;
  else
    GenericAll = GenericMapping->GenericAll | 0x1000000;
  v22 = AccessMask & GenericAll;
  if ( v22 != Src[1] )
    *v73 = 1;
  AccessMask = v22 & 0x11FFFFF;
  if ( (v22 & 0x11FFFFF) == 0 && !RtlEqualPrefixSid(Sid1, Sid) )
  {
    v18 = 0;
    goto LABEL_47;
  }
  if ( !RtlEqualPrefixSid(Sid1, Sid) )
    goto LABEL_18;
  v36 = *((_DWORD *)Sid1 + 2);
  if ( !v36 )
  {
    v37 = a4;
LABEL_40:
    Sid1 = v37;
    v38 = v18 + 4 * v37[1];
    v23 = v73;
    v18 = v38 - 4;
    *v73 = 1;
    goto LABEL_19;
  }
  v54 = v36 - 1;
  if ( v54 )
  {
    v55 = v54 - 1;
    if ( !v55 )
    {
      v37 = (unsigned __int8 *)v62;
      goto LABEL_40;
    }
    if ( v55 == 1 )
    {
      v37 = (unsigned __int8 *)v63;
      goto LABEL_40;
    }
  }
  else
  {
    v37 = a5;
    if ( a5 )
      goto LABEL_40;
  }
LABEL_18:
  v23 = v73;
LABEL_19:
  if ( v72 && *v23 )
  {
    if ( (Src[2] & 1) != 0 )
    {
      v19 -= 16;
      v18 -= 16;
      LODWORD(v57) = v19;
      memcpy(v76, Src, v57);
      v77 &= ~2u;
      Srca = (ACCESS_MASK *)v76;
    }
    else
    {
      v19 -= 20;
      v18 -= 20;
      LODWORD(v57) = v19;
      memcpy(v76, Src, v57);
      Srca = (ACCESS_MASK *)v76;
      v76[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
    }
  }
  v24 = v66;
  v25 = (char *)*v66;
  if ( *v66 && v18 <= v65 + *(unsigned __int16 *)(v65 + 2) - (unsigned int)v25 )
  {
    LODWORD(v57) = v19;
    memcpy(v25, Srca, v57);
    v26 = &v25[v19];
    v27 = (unsigned __int8 *)v70;
    if ( v70 )
    {
      LODWORD(v58) = 4 * *((unsigned __int8 *)v70 + 1) + 8;
      memcpy(v26, v70, v58);
      v26 += 4 * v27[1] + 8;
    }
    v28 = (unsigned __int8 *)Sid1;
    LODWORD(v58) = 4 * *((unsigned __int8 *)Sid1 + 1) + 8;
    memcpy(v26, Sid1, v58);
    v29 = &v26[4 * v28[1] + 8];
    if ( v60 )
    {
      v56 = *(_DWORD *)IdentifierAuthority.Value;
      if ( *(int *)IdentifierAuthority.Value > 0 )
      {
        LODWORD(v59) = *(_DWORD *)IdentifierAuthority.Value;
        memcpy(v29, v60, v59);
        v29 += v56;
      }
    }
    v24 = v66;
    v30 = v29 - (_BYTE *)*v66;
    if ( v18 < v30 )
      return 0;
    v31 = AccessMask;
    v18 = v30;
    v32 = v65;
    *((_WORD *)*v66 + 1) = v18;
    *((_DWORD *)*v24 + 1) = v31;
    goto LABEL_27;
  }
  v33 = v69;
  v32 = v65;
  *v69 = 1;
LABEL_28:
  if ( !*v33 && v18 )
  {
    *((_BYTE *)*v24 + 1) &= 0xE0u;
    if ( v67 )
      *((_BYTE *)*v24 + 1) |= 0x10u;
    ++*(_WORD *)(v32 + 4);
  }
  v34 = v69;
LABEL_34:
  if ( v18 > 0xFFFF )
    return 0;
  if ( !*v34 )
    *v24 = (char *)*v24 + v18;
  result = 1;
  *a12 = v18;
  return result;
}
