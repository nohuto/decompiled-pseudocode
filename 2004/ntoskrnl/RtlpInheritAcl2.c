/*
 * XREFs of RtlpInheritAcl2 @ 0x14067C780
 * Callers:
 *     RtlpNewSecurityObject @ 0x14067B050 (RtlpNewSecurityObject.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RtlpCopyAces @ 0x14067D350 (RtlpCopyAces.c)
 *     RtlFirstFreeAce @ 0x14067D9C0 (RtlFirstFreeAce.c)
 *     RtlpGenerateInheritAcl @ 0x14068E510 (RtlpGenerateInheritAcl.c)
 */

__int64 __fastcall RtlpInheritAcl2(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        __int16 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PGENERIC_MAPPING a11,
        int a12,
        __int64 a13,
        int a14,
        unsigned int *a15,
        PACL Acl,
        _BYTE *a17,
        int *a18)
{
  char v18; // r11
  int v19; // esi
  unsigned int v20; // r12d
  unsigned int v21; // ebx
  unsigned __int8 *v23; // r10
  int v24; // r8d
  int v25; // r14d
  _BYTE *v26; // r9
  int v27; // ecx
  char v28; // al
  __int64 result; // rax
  char v30; // r12
  int v31; // ecx
  int v32; // ebx
  UCHAR v33; // bp
  __int64 v34; // rax
  unsigned int v35; // ecx
  int v36; // eax
  __int64 v37; // [rsp+80h] [rbp-68h] BYREF
  unsigned int v38; // [rsp+88h] [rbp-60h]
  _DWORD v39[3]; // [rsp+8Ch] [rbp-5Ch] BYREF
  PVOID FirstFree; // [rsp+98h] [rbp-50h] BYREF
  char v43; // [rsp+100h] [rbp+18h]

  v18 = 0;
  v19 = 0;
  memset(v39, 0, sizeof(v39));
  v20 = 2;
  v21 = *a15;
  FirstFree = 0LL;
  v23 = a2;
  v24 = 0;
  v37 = 256LL;
  v25 = 0;
  v43 = 0;
  v38 = 2;
  if ( v21 - 8 <= 0xFFF4 )
  {
    memset(Acl, 0, v21);
    v24 = HIDWORD(v37);
    v23 = a2;
    Acl->AclSize = v21 & 0xFFFC;
    v18 = 0;
    *(_WORD *)&Acl->AclRevision = 2;
    *(_DWORD *)&Acl->AceCount = 0;
  }
  v26 = a17;
  v27 = a5 != 0 ? 0x400 : 0;
  *a17 = 0;
  *a18 = v27;
  if ( (a3 & 8) != 0 )
    goto LABEL_40;
  if ( (a3 & 0x1000) != 0 )
  {
    v18 = 1;
    v43 = 1;
    *a18 = v27 | 0x1000;
  }
  if ( (a3 & 0x1004) == 0 )
  {
LABEL_40:
    v30 = 0;
    goto LABEL_21;
  }
  if ( v23 )
  {
    if ( *v23 >= 2u )
      v38 = *v23;
    BYTE1(v37) = 0;
    if ( a5 )
    {
      if ( (a3 & 0x1000) != 0 )
      {
        LOBYTE(v26) = 16;
      }
      else
      {
        v20 = 1;
        LOBYTE(v26) = 0;
      }
      v28 = 1;
    }
    else
    {
      LOBYTE(v26) = 0;
      v28 = 0;
    }
    result = RtlpCopyAces(v23, a11, v20, v26, v28, a7, a8, a9, a10, a4, 0, a12, (char *)&v37 + 4, Acl);
    v24 = HIDWORD(v37);
    v19 = HIDWORD(v37);
    if ( (_DWORD)result == -1073741789 )
    {
      v30 = 1;
    }
    else
    {
      if ( (int)result < 0 )
        return result;
      v30 = 0;
    }
    if ( a6 && HIDWORD(v37) )
    {
      WORD1(v37) = Acl->AceCount;
      if ( !RtlFirstFreeAce(Acl, &FirstFree) )
        return 3221225597LL;
      v24 = HIDWORD(v37);
    }
    v23 = a2;
    v26 = a17;
    v18 = v43;
  }
  else
  {
    if ( a5 )
    {
      v31 = a12;
      if ( a12 == 1 )
      {
        if ( (a3 & 0x1004) == 4 )
          return 3221225591LL;
        v30 = 0;
        goto LABEL_46;
      }
      v30 = 0;
      goto LABEL_20;
    }
    v30 = 0;
  }
  v31 = a12;
  if ( a12 == 1 )
    goto LABEL_46;
LABEL_20:
  if ( v31 != 2 )
    goto LABEL_21;
  if ( v24 || v18 )
  {
LABEL_46:
    *v26 = 1;
    goto LABEL_21;
  }
  if ( v23 && !*((_WORD *)v23 + 2) )
    *v26 = 1;
LABEL_21:
  if ( (a5 || (a3 & 4) != 0) && (a3 & 8) == 0 && (!a5 || v18) || !a1 )
  {
    v32 = HIDWORD(v37);
    v33 = v38;
LABEL_27:
    v34 = (unsigned int)(v25 + v19);
    if ( !(_DWORD)v34 )
    {
      if ( !*a17 )
      {
        *a15 = 0;
        return 2147483659LL;
      }
      if ( BYTE1(v37) )
      {
        *a15 = 0;
        return 0LL;
      }
    }
    if ( (unsigned __int64)(v34 + 8) <= 0xFFFF )
    {
      *a15 = v25 + v32 + 8;
      if ( v30 )
        return 3221225507LL;
      Acl->AclRevision = v33;
      Acl->AclSize = v25 + v19 + 8;
      return 0LL;
    }
    return 3221225597LL;
  }
  v35 = *a1;
  if ( (unsigned __int8)(v35 - 2) > 2u )
    return 3221225560LL;
  v33 = v38;
  if ( v38 <= v35 )
  {
    v38 = *a1;
    v33 = v35;
  }
  result = RtlpGenerateInheritAcl(
             (int)a1,
             a4,
             a5,
             a7,
             a8,
             a9,
             a10,
             a11,
             a13,
             a14,
             a12,
             v30,
             (__int64)v39,
             Acl,
             (__int64)&v37);
  if ( (_DWORD)result == -1073741789 )
  {
    v30 = 1;
LABEL_38:
    v32 = HIDWORD(v37);
    if ( a6 && HIDWORD(v37) && (_BYTE)v37 && !v30 )
    {
      if ( !RtlFirstFreeAce(Acl, (PVOID *)&v39[1]) )
        return 3221225597LL;
      v36 = v39[1];
      if ( !*(_QWORD *)&v39[1] )
        v36 = (_DWORD)Acl + Acl->AclSize;
      memmove(&Acl[1], FirstFree, (unsigned int)(v36 - (_DWORD)FirstFree));
      Acl->AceCount -= WORD1(v37);
      v19 = 0;
    }
    v25 = v39[0];
    goto LABEL_27;
  }
  if ( (int)result >= 0 )
    goto LABEL_38;
  return result;
}
