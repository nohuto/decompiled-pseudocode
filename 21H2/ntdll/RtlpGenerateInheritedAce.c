/*
 * XREFs of RtlpGenerateInheritedAce @ 0x180036F8C
 * Callers:
 *     RtlpGenerateInheritAcl @ 0x180036DA8 (RtlpGenerateInheritAcl.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180037710 (RtlFirstFreeAce.c)
 *     RtlpCopyEffectiveAce @ 0x180037A3C (RtlpCopyEffectiveAce.c)
 *     RtlpIsDuplicateAce @ 0x1800380D8 (RtlpIsDuplicateAce.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall RtlpGenerateInheritedAce(
        _BYTE *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        __int64 a9,
        int a10,
        unsigned int *a11,
        PACL Acl,
        unsigned int *a13,
        _BYTE *a14)
{
  unsigned int v15; // r14d
  unsigned int v16; // r15d
  __int64 v17; // r13
  unsigned int v18; // edi
  char v19; // r12
  void *v20; // rcx
  char v21; // al
  bool v22; // zf
  char v24; // al
  char v25; // al
  unsigned int v26; // eax
  char v27; // [rsp+88h] [rbp-9h] BYREF
  bool v28; // [rsp+89h] [rbp-8h]
  char v29; // [rsp+8Ah] [rbp-7h] BYREF
  unsigned int v30; // [rsp+8Ch] [rbp-5h] BYREF
  __int64 v31[7]; // [rsp+90h] [rbp-1h] BYREF

  v30 = 0;
  v15 = 0;
  v29 = 0;
  v16 = 0;
  v27 = 0;
  v17 = 0LL;
  *a14 = 0;
  v18 = 0;
  v19 = 0;
  v28 = a2 && (v24 = Src[1], (v24 & 4) == 0) && ((v24 & 1) != 0 || (v24 & 2) != 0);
  if ( !RtlFirstFreeAce(Acl, (PVOID *)v31) )
    return 3221225597LL;
  v20 = (void *)v31[0];
  if ( !v31[0] )
    return 3221225597LL;
  v21 = Src[1];
  if ( a2 )
    v22 = (v21 & 2) == 0;
  else
    v22 = (v21 & 1) == 0;
  if ( v22 )
    goto LABEL_15;
  v17 = v31[0];
  if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                           Src,
                           a5,
                           a6,
                           a7,
                           GenericMapping,
                           a9,
                           a10,
                           (__int64)v31,
                           (__int64)&v30,
                           (__int64)Acl,
                           (__int64)a14,
                           (__int64)&v29,
                           (__int64)&v27) )
    return 3221225597LL;
  v18 = v30;
  if ( !v27 && v30 )
  {
    if ( (unsigned __int8)RtlpIsDuplicateAce(Acl, v17) )
    {
      v16 = v30;
      v20 = (void *)v17;
      --Acl->AceCount;
      v18 = 0;
      v31[0] = v17;
      v30 = 0;
      goto LABEL_14;
    }
    v18 = v30;
  }
  v20 = (void *)v31[0];
LABEL_14:
  v19 = v29;
  v15 = v18;
LABEL_15:
  if ( !v28 )
    goto LABEL_16;
  if ( v18 && !v19 )
  {
    if ( !v27 )
    {
      v25 = *(_BYTE *)(v17 + 1) | Src[1] & 3;
      *(_BYTE *)(v17 + 1) = v25;
      if ( a3 )
        *(_BYTE *)(v17 + 1) = v25 | 0x10;
    }
    goto LABEL_16;
  }
  if ( *Src <= 8u && !*((_DWORD *)Src + 1) )
  {
LABEL_16:
    *a11 = v15;
    *a13 = v16;
    return v27 != 0 ? 0xC0000023 : 0;
  }
  v15 += *((unsigned __int16 *)Src + 1);
  if ( v15 <= 0xFFFF )
  {
    if ( *((unsigned __int16 *)Src + 1) > (__int64)Acl + Acl->AclSize - (_QWORD)v20 )
    {
      v27 = 1;
    }
    else if ( !v27 )
    {
      memmove(v20, Src, *((unsigned __int16 *)Src + 1));
      *(_BYTE *)(v31[0] + 1) |= 8u;
      ++Acl->AceCount;
      if ( a3 )
      {
        *(_BYTE *)(v31[0] + 1) |= 0x10u;
        if ( (unsigned __int8)RtlpIsDuplicateAce(Acl, v31[0]) )
        {
          --Acl->AceCount;
          v26 = *((unsigned __int16 *)Src + 1);
          v15 -= v26;
          if ( v16 <= v26 )
            v16 = *((unsigned __int16 *)Src + 1);
        }
      }
    }
    goto LABEL_16;
  }
  return 3221225597LL;
}
