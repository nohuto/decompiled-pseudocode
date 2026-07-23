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
        void *a1,
        unsigned __int8 *a2,
        __int16 a3,
        char a4,
        char a5,
        char a6,
        int a7,
        int a8,
        int a9,
        int a10,
        PGENERIC_MAPPING GenericMapping,
        int a12,
        int a13,
        int a14,
        ULONG *a15,
        PACL Acl,
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
  ULONG v29; // [esp-8h] [ebp-44h]
  size_t v30; // [esp-4h] [ebp-40h]
  unsigned __int16 AceCount; // [esp+Ch] [ebp-30h]
  PVOID FirstFree; // [esp+10h] [ebp-2Ch] BYREF
  PVOID v33; // [esp+14h] [ebp-28h] BYREF
  char v34[4]; // [esp+18h] [ebp-24h]
  int v35; // [esp+1Ch] [ebp-20h] BYREF
  unsigned __int8 *v36; // [esp+20h] [ebp-1Ch]
  char v37[4]; // [esp+24h] [ebp-18h]
  char v38[4]; // [esp+28h] [ebp-14h]
  unsigned int v39; // [esp+2Ch] [ebp-10h]
  int v40; // [esp+30h] [ebp-Ch] BYREF
  int v41; // [esp+34h] [ebp-8h]
  char v42; // [esp+39h] [ebp-3h]
  int var2; // [esp+3Ah] [ebp-2h] BYREF

  v33 = a1;
  v36 = a2;
  v18 = 0;
  v34[0] = 0;
  v19 = 0;
  v39 = 2;
  v40 = 0;
  v35 = 0;
  AceCount = 0;
  v29 = *a15;
  FirstFree = 0;
  LOWORD(var2) = 0;
  v42 = 1;
  RtlCreateAcl(Acl, v29, 2u);
  *a17 = 0;
  v20 = a5 != 0 ? 0x400 : 0;
  v21 = a3 & 8;
  *a18 = v20;
  v41 = v21;
  if ( (a3 & 8) != 0 )
    goto LABEL_6;
  if ( (a3 & 0x1000) != 0 )
  {
    LOBYTE(var2) = 1;
    *a18 = v20 | 0x1000;
  }
  if ( (a3 & 0x1004) != 0 )
  {
    if ( !v36 )
    {
      v27 = 0;
      if ( a5 )
      {
        if ( a12 == 1 )
        {
          if ( (a3 & 0x1004) == 4 )
            return -1073741705;
          goto LABEL_42;
        }
LABEL_46:
        if ( a12 != 2 || !v27 && !(_BYTE)var2 && (!v36 || *((_WORD *)v36 + 2)) )
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
    if ( *v36 >= 2u )
      v39 = *v36;
    v42 = 0;
    if ( a5 )
    {
      v38[0] = 1;
      if ( (a3 & 0x1000) != 0 )
      {
        v26 = 2;
        v37[0] = 16;
        goto LABEL_36;
      }
      v26 = 1;
    }
    else
    {
      v26 = 2;
      v38[0] = 0;
    }
    v37[0] = 0;
LABEL_36:
    result = RtlpCopyAces(v26, v37[0], v38[0], a7, a8, a9, a10, a4, 0, a12, (int)&v40, Acl);
    v19 = v40;
    if ( result == -1073741789 )
    {
      BYTE1(var2) = 1;
      v34[0] = 1;
      result = 0;
    }
    if ( result < 0 )
      return result;
    if ( a6 )
    {
      if ( v40 )
      {
        AceCount = Acl->AceCount;
        if ( !RtlFirstFreeAce(Acl, &FirstFree) )
          return -1073741699;
      }
    }
    v27 = v19;
    goto LABEL_41;
  }
LABEL_5:
  v21 = v41;
LABEL_6:
  if ( (a5 || (a3 & 4) != 0) && !v21 && (!a5 || (_BYTE)var2) || !v33 )
    goto LABEL_17;
  v22 = *(_BYTE *)v33;
  if ( (unsigned __int8)(*(_BYTE *)v33 - 2) > 2u )
    return -1073741736;
  if ( v39 <= v22 )
    v39 = v22;
  result = RtlpGenerateInheritAcl(
             a5,
             a7,
             a8,
             a9,
             a10,
             GenericMapping,
             a13,
             a14,
             a12,
             v34[0],
             (int)&v35,
             Acl,
             (int)&var2);
  if ( result == -1073741789 )
  {
    v24 = 1;
    result = 0;
    BYTE1(var2) = 1;
  }
  else
  {
    v24 = BYTE1(var2);
  }
  if ( result >= 0 )
  {
    if ( a6 && v40 && (_BYTE)var2 && !v24 )
    {
      if ( !RtlFirstFreeAce(Acl, &v33) )
        return -1073741699;
      v28 = (unsigned __int8 *)v33;
      if ( !v33 )
        v28 = &Acl->AclRevision + Acl->AclSize;
      LODWORD(v30) = v28 - (_BYTE *)FirstFree;
      memmove(&Acl[1], FirstFree, v30);
      Acl->AceCount -= AceCount;
      v18 = v35;
      v19 = 0;
    }
    else
    {
      v18 = v35;
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
      if ( v42 )
      {
        result = 0;
        goto LABEL_20;
      }
    }
    if ( (unsigned int)(v18 + v19 + 8) <= 0xFFFF )
    {
      v25 = BYTE1(var2) == 0;
      *a15 = v18 + v40 + 8;
      if ( !v25 )
        return -1073741789;
      Acl->AclSize = v19 + v18 + 8;
      Acl->AclRevision = v39;
      return 0;
    }
    return -1073741699;
  }
  return result;
}
