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
        int *Src,
        char a2,
        char a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        int a6,
        int a7,
        int a8,
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
  size_t v19; // edi
  unsigned __int8 v20; // al
  int v21; // eax
  int v22; // eax
  _BYTE *v23; // eax
  void **v24; // edx
  char *v25; // ebx
  char *v26; // edi
  unsigned __int8 *v27; // ebx
  unsigned __int8 *v28; // ebx
  char *v29; // edi
  unsigned int v30; // edi
  int v31; // ecx
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
  unsigned __int16 *v53; // ecx
  int v54; // eax
  int v55; // eax
  size_t v56; // ebx
  char *v57; // [esp+10h] [ebp-98h]
  int *Srca; // [esp+1Ch] [ebp-8Ch]
  int v59; // [esp+20h] [ebp-88h]
  int v60; // [esp+24h] [ebp-84h]
  size_t Size; // [esp+28h] [ebp-80h] BYREF
  __int16 v62; // [esp+2Ch] [ebp-7Ch]
  int v63; // [esp+30h] [ebp-78h]
  void **v64; // [esp+34h] [ebp-74h]
  char v65; // [esp+3Bh] [ebp-6Dh]
  int v66; // [esp+3Ch] [ebp-6Ch] BYREF
  _BYTE *v67; // [esp+40h] [ebp-68h]
  void *v68; // [esp+44h] [ebp-64h]
  void *v69; // [esp+48h] [ebp-60h]
  char v70; // [esp+4Fh] [ebp-59h]
  _BYTE *v71; // [esp+50h] [ebp-58h]
  _BYTE v72[8]; // [esp+54h] [ebp-54h] BYREF
  int v73; // [esp+5Ch] [ebp-4Ch]
  _BYTE v74[8]; // [esp+84h] [ebp-24h] BYREF
  int v75; // [esp+8Ch] [ebp-1Ch]

  v59 = a6;
  v60 = a7;
  v64 = a11;
  v63 = a13;
  v67 = a16;
  v70 = 0;
  Size = 0;
  v65 = a2;
  v66 = (int)a14;
  v71 = a15;
  v62 = 768;
  if ( (int)RtlInitializeSid(v72, &Size, 1) < 0 )
    return 0;
  v73 = 0;
  if ( !a6 )
    v59 = (int)a4;
  if ( !a7 )
    v60 = (int)a5;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *v67 = 0;
  v17 = *(_BYTE *)Src;
  v18 = *((unsigned __int16 *)Src + 1);
  if ( *(_BYTE *)Src > 8u && v17 > 0xAu && (unsigned __int8)(v17 - 13) > 1u )
  {
    v32 = v63;
    v24 = v64;
    if ( v18 > v63 + *(unsigned __int16 *)(v63 + 2) - (unsigned int)*v64 )
    {
      v34 = v67;
      *v67 = 1;
      goto LABEL_34;
    }
    memcpy(*v64, Src, *((unsigned __int16 *)Src + 1));
    goto LABEL_46;
  }
  Size = 0;
  Srca = Src;
  v68 = 0;
  v57 = 0;
  if ( v17 <= 3u )
  {
    v69 = Src + 2;
    v19 = 8;
    goto LABEL_11;
  }
  if ( v17 >= 9u && v17 <= 0xAu || (unsigned __int8)(v17 - 13) <= 1u )
  {
    v44 = *((unsigned __int8 *)Src + 9);
    v69 = Src + 2;
    v19 = 8;
    v45 = 4 * v44 + 8;
    v57 = (char *)Src + v45 + 8;
    Size = v18 - v45 - 8;
    goto LABEL_11;
  }
  if ( v17 == 4 )
  {
    v19 = 12;
    v69 = &Src[*((unsigned __int8 *)Src + 13) + 5];
    v68 = Src + 3;
    if ( !(unsigned __int8)RtlEqualPrefixSid(Src + 3, v72) )
    {
      v48 = *((unsigned __int8 *)v68 + 1);
LABEL_69:
      v19 = 4 * v48 + 20;
      v68 = 0;
      goto LABEL_11;
    }
    v39 = (unsigned __int8 *)v68;
    v40 = *((_DWORD *)v68 + 2);
    if ( v40 )
    {
      v41 = v40 - 1;
      if ( v41 )
      {
        v42 = v41 - 1;
        if ( !v42 )
        {
          v43 = (unsigned __int8 *)v59;
          goto LABEL_61;
        }
        if ( v42 == 1 )
        {
          v43 = (unsigned __int8 *)v60;
LABEL_61:
          v68 = v43;
          v18 = v18 + 4 * v43[1] - 4;
          *v71 = 1;
          goto LABEL_11;
        }
        goto LABEL_63;
      }
      v46 = (int)a5;
      if ( !a5 )
      {
LABEL_63:
        v47 = v71;
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
    v68 = v39;
    v50 = v18 + 4 * v49;
    v47 = v71;
    v18 = v50 - 4;
    *v71 = 1;
    goto LABEL_64;
  }
  v51 = Src[2] & 2;
  v52 = 4 * (Src[2] & 1);
  v19 = (v51 != 0 ? 0x10 : 0) + v52 * 4 + 12;
  v69 = (char *)Src + v19;
  if ( v51 )
    v53 = (unsigned __int16 *)&Src[v52 + 3];
  else
    v53 = 0;
  if ( v66 && v53 )
  {
    if ( a9 && (unsigned __int8)RtlpGuidPresentInGuidList(v53, a10) )
    {
      *(_BYTE *)v66 = 1;
      if ( a3 )
      {
        v70 = 1;
      }
      else
      {
        *v71 = 1;
        if ( (Src[2] & 1) != 0 )
        {
          v19 -= 16;
          v18 -= 16;
          memcpy(v74, Src, v19);
          v75 &= ~2u;
        }
        else
        {
          v19 -= 20;
          v18 -= 20;
          memcpy(v74, Src, v19);
          v74[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
        }
        Srca = (int *)v74;
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
    v32 = v63;
LABEL_46:
    v24 = v64;
LABEL_27:
    v33 = v67;
    goto LABEL_28;
  }
  v66 = Src[1];
  RtlMapGenericMask(&v66, a8);
  v20 = *(_BYTE *)Src;
  if ( !*(_BYTE *)Src || v20 == 1 || v20 == 4 || v20 == 5 || v20 == 6 || v20 == 9 || v20 == 10 )
    v21 = *(_DWORD *)(a8 + 12);
  else
    v21 = *(_DWORD *)(a8 + 12) | 0x1000000;
  v22 = v66 & v21;
  if ( v22 != Src[1] )
    *v71 = 1;
  v66 = v22 & 0x11FFFFF;
  if ( (v22 & 0x11FFFFF) == 0 && !(unsigned __int8)RtlEqualPrefixSid(v69, v72) )
  {
    v18 = 0;
    goto LABEL_47;
  }
  if ( !(unsigned __int8)RtlEqualPrefixSid(v69, v72) )
    goto LABEL_18;
  v36 = *((_DWORD *)v69 + 2);
  if ( !v36 )
  {
    v37 = a4;
LABEL_40:
    v69 = v37;
    v38 = v18 + 4 * v37[1];
    v23 = v71;
    v18 = v38 - 4;
    *v71 = 1;
    goto LABEL_19;
  }
  v54 = v36 - 1;
  if ( v54 )
  {
    v55 = v54 - 1;
    if ( !v55 )
    {
      v37 = (unsigned __int8 *)v59;
      goto LABEL_40;
    }
    if ( v55 == 1 )
    {
      v37 = (unsigned __int8 *)v60;
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
  v23 = v71;
LABEL_19:
  if ( v70 && *v23 )
  {
    if ( (Src[2] & 1) != 0 )
    {
      v19 -= 16;
      v18 -= 16;
      memcpy(v74, Src, v19);
      v75 &= ~2u;
      Srca = (int *)v74;
    }
    else
    {
      v19 -= 20;
      v18 -= 20;
      memcpy(v74, Src, v19);
      Srca = (int *)v74;
      v74[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
    }
  }
  v24 = v64;
  v25 = (char *)*v64;
  if ( *v64 && v18 <= v63 + *(unsigned __int16 *)(v63 + 2) - (unsigned int)v25 )
  {
    memcpy(v25, Srca, v19);
    v26 = &v25[v19];
    v27 = (unsigned __int8 *)v68;
    if ( v68 )
    {
      memcpy(v26, v68, 4 * *((unsigned __int8 *)v68 + 1) + 8);
      v26 += 4 * v27[1] + 8;
    }
    v28 = (unsigned __int8 *)v69;
    memcpy(v26, v69, 4 * *((unsigned __int8 *)v69 + 1) + 8);
    v29 = &v26[4 * v28[1] + 8];
    if ( v57 )
    {
      v56 = Size;
      if ( (int)Size > 0 )
      {
        memcpy(v29, v57, Size);
        v29 += v56;
      }
    }
    v24 = v64;
    v30 = v29 - (_BYTE *)*v64;
    if ( v18 < v30 )
      return 0;
    v31 = v66;
    v18 = v30;
    v32 = v63;
    *((_WORD *)*v64 + 1) = v18;
    *((_DWORD *)*v24 + 1) = v31;
    goto LABEL_27;
  }
  v33 = v67;
  v32 = v63;
  *v67 = 1;
LABEL_28:
  if ( !*v33 && v18 )
  {
    *((_BYTE *)*v24 + 1) &= 0xE0u;
    if ( v65 )
      *((_BYTE *)*v24 + 1) |= 0x10u;
    ++*(_WORD *)(v32 + 4);
  }
  v34 = v67;
LABEL_34:
  if ( v18 > 0xFFFF )
    return 0;
  if ( !*v34 )
    *v24 = (char *)*v24 + v18;
  result = 1;
  *a12 = v18;
  return result;
}
