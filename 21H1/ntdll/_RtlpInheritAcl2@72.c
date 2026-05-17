/*
 * XREFs of _RtlpInheritAcl2@72 @ 0x4B2D7947
 * Callers:
 *     _RtlpInheritAcl@68 @ 0x4B2D7852 (_RtlpInheritAcl@68.c)
 * Callees:
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _RtlpGenerateInheritAcl@60 @ 0x4B2D7C3D (_RtlpGenerateInheritAcl@60.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 *     _RtlpCopyAces@56 @ 0x4B2D886D (_RtlpCopyAces@56.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

int __fastcall RtlpInheritAcl2(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        __int16 a3,
        char a4,
        int a5,
        char a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int *a15,
        int a16,
        _BYTE *a17,
        int *a18)
{
  int v18; // edi
  int v19; // ebx
  int v20; // eax
  int v21; // edx
  unsigned __int8 v22; // cl
  int result; // eax
  char v24; // cl
  bool v25; // zf
  int v26; // eax
  int v27; // eax
  unsigned __int8 *v28; // eax
  int v29; // [esp-8h] [ebp-44h]
  __int16 v30; // [esp+Ch] [ebp-30h]
  void *Src; // [esp+10h] [ebp-2Ch] BYREF
  unsigned __int8 *v32; // [esp+14h] [ebp-28h] BYREF
  int v33; // [esp+18h] [ebp-24h]
  int v34; // [esp+1Ch] [ebp-20h] BYREF
  unsigned __int8 *v35; // [esp+20h] [ebp-1Ch]
  int v36; // [esp+24h] [ebp-18h]
  int v37; // [esp+28h] [ebp-14h]
  unsigned int v38; // [esp+2Ch] [ebp-10h]
  int v39; // [esp+30h] [ebp-Ch] BYREF
  int v40; // [esp+34h] [ebp-8h]
  char v41; // [esp+39h] [ebp-3h]
  char v42; // [esp+3Ah] [ebp-2h] BYREF
  char v43; // [esp+3Bh] [ebp-1h]

  v32 = a1;
  v35 = a2;
  v43 = 0;
  v18 = 0;
  LOBYTE(v33) = 0;
  v19 = 0;
  v38 = 2;
  v39 = 0;
  v34 = 0;
  v30 = 0;
  v29 = *a15;
  Src = 0;
  v42 = 0;
  v41 = 1;
  RtlCreateAcl(a16, v29, 2);
  *a17 = 0;
  v20 = (unsigned __int8)a5 != 0 ? 0x400 : 0;
  v21 = a3 & 8;
  *a18 = v20;
  v40 = v21;
  if ( (a3 & 8) != 0 )
    goto LABEL_6;
  if ( (a3 & 0x1000) != 0 )
  {
    v42 = 1;
    *a18 = v20 | 0x1000;
  }
  if ( (a3 & 0x1004) != 0 )
  {
    if ( !v35 )
    {
      v27 = 0;
      if ( (_BYTE)a5 )
      {
        if ( a12 == 1 )
        {
          if ( (a3 & 0x1004) == 4 )
            return -1073741705;
          goto LABEL_42;
        }
LABEL_46:
        if ( a12 != 2 || !v27 && !v42 && (!v35 || *((_WORD *)v35 + 2)) )
          goto LABEL_5;
        goto LABEL_42;
      }
LABEL_41:
      if ( a12 == 1 )
      {
LABEL_42:
        *a17 = 1;
        goto LABEL_5;
      }
      goto LABEL_46;
    }
    if ( *v35 >= 2u )
      v38 = *v35;
    v41 = 0;
    if ( (_BYTE)a5 )
    {
      LOBYTE(v37) = 1;
      if ( (a3 & 0x1000) != 0 )
      {
        v26 = 2;
        LOBYTE(v36) = 16;
        goto LABEL_36;
      }
      v26 = 1;
    }
    else
    {
      v26 = 2;
      LOBYTE(v37) = 0;
    }
    LOBYTE(v36) = 0;
LABEL_36:
    result = RtlpCopyAces(v26, v36, v37, a7, a8, a9, a10, a4, 0, a12, &v39, a16);
    v19 = v39;
    if ( result == -1073741789 )
    {
      v43 = 1;
      LOBYTE(v33) = 1;
      result = 0;
    }
    if ( result < 0 )
      return result;
    if ( a6 )
    {
      if ( v39 )
      {
        v30 = *(_WORD *)(a16 + 4);
        if ( !(unsigned __int8)RtlFirstFreeAce(a16, &Src) )
          return -1073741699;
      }
    }
    v27 = v19;
    goto LABEL_41;
  }
LABEL_5:
  v21 = v40;
LABEL_6:
  if ( ((_BYTE)a5 || (a3 & 4) != 0) && !v21 && (!(_BYTE)a5 || v42) || !v32 )
    goto LABEL_17;
  v22 = *v32;
  if ( (unsigned __int8)(*v32 - 2) > 2u )
    return -1073741736;
  if ( v38 <= v22 )
    v38 = v22;
  result = RtlpGenerateInheritAcl(a5, a7, a8, a9, a10, a11, a13, a14, a12, v33, &v34, a16, &v42);
  if ( result == -1073741789 )
  {
    v24 = 1;
    result = 0;
    v43 = 1;
  }
  else
  {
    v24 = v43;
  }
  if ( result >= 0 )
  {
    if ( a6 && v39 && v42 && !v24 )
    {
      if ( !(unsigned __int8)RtlFirstFreeAce(a16, &v32) )
        return -1073741699;
      v28 = v32;
      if ( !v32 )
        v28 = (unsigned __int8 *)(a16 + *(unsigned __int16 *)(a16 + 2));
      memmove((void *)(a16 + 8), Src, v28 - (_BYTE *)Src);
      *(_WORD *)(a16 + 4) -= v30;
      v18 = v34;
      v19 = 0;
    }
    else
    {
      v18 = v34;
    }
LABEL_17:
    if ( !(v18 + v19) )
    {
      if ( !*a17 )
      {
        result = -2147483637;
LABEL_20:
        *a15 = 0;
        return result;
      }
      if ( v41 )
      {
        result = 0;
        goto LABEL_20;
      }
    }
    if ( (unsigned int)(v18 + v19 + 8) <= 0xFFFF )
    {
      v25 = v43 == 0;
      *a15 = v18 + v39 + 8;
      if ( !v25 )
        return -1073741789;
      *(_WORD *)(a16 + 2) = v19 + v18 + 8;
      *(_BYTE *)a16 = v38;
      return 0;
    }
    return -1073741699;
  }
  return result;
}
