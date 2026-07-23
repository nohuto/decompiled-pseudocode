/*
 * XREFs of RtlpCopyAces @ 0x18003D298
 * Callers:
 *     RtlpInheritAcl2 @ 0x18003A094 (RtlpInheritAcl2.c)
 *     RtlpComputeMergedAcl2 @ 0x1800E75E8 (RtlpComputeMergedAcl2.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180037710 (RtlFirstFreeAce.c)
 *     RtlpCopyEffectiveAce @ 0x180037A3C (RtlpCopyEffectiveAce.c)
 *     RtlMapGenericMask @ 0x180037EA0 (RtlMapGenericMask.c)
 *     RtlFindAceByType @ 0x18003C040 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall RtlpCopyAces(
        __int64 a1,
        GENERIC_MAPPING *a2,
        int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11,
        int a12,
        _DWORD *a13,
        PACL Acl)
{
  char v14; // r14
  __int64 v15; // rbx
  _DWORD *v16; // r12
  unsigned __int8 v17; // al
  __int64 v18; // rsi
  unsigned int v19; // edx
  unsigned int v20; // r13d
  ACCESS_MASK *v21; // rdi
  bool v22; // al
  int v23; // edx
  char v24; // al
  PVOID v25; // r9
  __int64 v26; // r12
  char v27; // bl
  char v28; // cl
  char v29; // r8
  int v31; // ecx
  unsigned int GenericAll; // eax
  int v33; // ecx
  _BYTE v35[15]; // [rsp+81h] [rbp-68h] BYREF
  PVOID FirstFree; // [rsp+90h] [rbp-59h] BYREF
  PGENERIC_MAPPING GenericMapping; // [rsp+98h] [rbp-51h]
  int v38; // [rsp+A0h] [rbp-49h]
  __int64 v39; // [rsp+A8h] [rbp-41h]
  __int64 v40; // [rsp+B0h] [rbp-39h]
  __int64 v41; // [rsp+B8h] [rbp-31h]
  __int64 v42; // [rsp+C0h] [rbp-29h]
  __int64 v43; // [rsp+C8h] [rbp-21h]
  __int64 v44; // [rsp+D0h] [rbp-19h]
  int v45; // [rsp+D8h] [rbp-11h]
  unsigned __int16 v46; // [rsp+DCh] [rbp-Dh]

  v14 = 0;
  v15 = a1;
  v16 = a13;
  v42 = a6;
  v41 = a7;
  v40 = a8;
  v39 = a9;
  v17 = Acl->AclRevision - 2;
  v38 = a3;
  GenericMapping = a2;
  v43 = a1;
  v44 = (__int64)a13;
  if ( v17 > 2u )
    return 3221225560LL;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225597LL;
  v18 = v15 + 8;
  v19 = 0;
  v20 = 0;
  *(_DWORD *)&v35[7] = 0;
  if ( !*(_WORD *)(v15 + 4) )
    goto LABEL_30;
  v21 = (ACCESS_MASK *)FirstFree;
  while ( *(_BYTE *)v18 != 17 )
  {
    if ( a12 == 3 )
      goto LABEL_27;
LABEL_7:
    if ( !v38 )
    {
      if ( (*(_BYTE *)(v18 + 1) & 0x10) != 0 )
        goto LABEL_11;
      v22 = 0;
      goto LABEL_10;
    }
    if ( v38 != 1 )
    {
      if ( v38 != 2 )
        goto LABEL_27;
LABEL_11:
      if ( a5 )
      {
        v23 = 0;
        v24 = *(_BYTE *)(v18 + 1);
        v25 = v21;
        *(_DWORD *)&v35[3] = 0;
        LODWORD(v26) = 0;
        v35[0] = 0;
        FirstFree = v21;
        if ( !a10 || (v27 = 1, (v24 & 3) == 0) )
          v27 = 0;
        if ( (v24 & 8) == 0 )
        {
          v28 = 0;
          if ( a11 )
            v28 = (v24 & 0x10) != 0;
          if ( !RtlpCopyEffectiveAce(
                  (ACCESS_MASK *)v18,
                  v28,
                  v27,
                  v42,
                  (unsigned __int8 *)v41,
                  v40,
                  v39,
                  GenericMapping,
                  0LL,
                  0,
                  &FirstFree,
                  &v35[3],
                  (__int64)Acl,
                  0LL,
                  v35,
                  &v35[1]) )
            return 3221225597LL;
          v23 = *(_DWORD *)&v35[3];
          LODWORD(v26) = *(_DWORD *)&v35[3];
          if ( v35[1] )
            v14 = 1;
          if ( !v14 && *(_DWORD *)&v35[3] )
          {
            v29 = a4;
            *((_BYTE *)v21 + 1) &= ~a4;
            v23 = *(_DWORD *)&v35[3];
            v25 = FirstFree;
            goto LABEL_23;
          }
          v25 = FirstFree;
        }
        v29 = a4;
LABEL_23:
        if ( !v27 )
        {
LABEL_24:
          if ( !v14 )
            goto LABEL_25;
LABEL_44:
          v21 = (ACCESS_MASK *)((char *)Acl + Acl->AclSize);
LABEL_26:
          v15 = v43;
          v20 += v26;
          v19 = *(_DWORD *)&v35[7];
          goto LABEL_27;
        }
        v45 = 0;
        v33 = *(_DWORD *)(v18 + 10);
        v46 = 768;
        if ( !v33 )
          v33 = *(unsigned __int16 *)(v18 + 14) - v46;
        if ( !v23 || v35[0] )
        {
          if ( *(_BYTE *)v18 <= 8u && !*(_DWORD *)(v18 + 4) && v33 )
            goto LABEL_24;
          LODWORD(v26) = *(unsigned __int16 *)(v18 + 2) + (_DWORD)v26;
          if ( (unsigned int)v26 > 0xFFFF )
            return 3221225597LL;
          if ( *(unsigned __int16 *)(v18 + 2) > (__int64)Acl + Acl->AclSize - (_QWORD)v25 )
          {
            v14 = 1;
          }
          else if ( !v14 )
          {
            memmove(v25, (const void *)v18, *(unsigned __int16 *)(v18 + 2));
            *((_BYTE *)FirstFree + 1) |= 8u;
            *((_BYTE *)FirstFree + 1) &= ~a4;
            ++Acl->AceCount;
            goto LABEL_24;
          }
          goto LABEL_44;
        }
        if ( v14 )
          goto LABEL_44;
        *((_BYTE *)v21 + 1) = ~v29 & (*((_BYTE *)v21 + 1) | *(_BYTE *)(v18 + 1) & 0x1F);
      }
      else
      {
        v26 = *(unsigned __int16 *)(v18 + 2);
        if ( !v21 || v26 > (__int64)Acl + Acl->AclSize - (_QWORD)v21 )
        {
          v14 = 1;
          goto LABEL_24;
        }
        if ( v14 )
          goto LABEL_44;
        memmove(v21, (const void *)v18, *(unsigned __int16 *)(v18 + 2));
        if ( (*(_BYTE *)v21 <= 0xAu || (unsigned __int8)(*(_BYTE *)v21 - 13) <= 1u) && (*((_BYTE *)v21 + 1) & 8) == 0 )
        {
          RtlMapGenericMask(v21 + 1, GenericMapping);
          if ( *(_BYTE *)v21 <= 0xAu && (v31 = 1651, _bittest(&v31, *(unsigned __int8 *)v21)) )
            GenericAll = GenericMapping->GenericAll;
          else
            GenericAll = GenericMapping->GenericAll | 0x1000000;
          v21[1] &= GenericAll;
        }
        *((_BYTE *)v21 + 1) &= ~a4;
        ++Acl->AceCount;
      }
LABEL_25:
      v21 = (ACCESS_MASK *)((char *)v21 + (unsigned int)v26);
      goto LABEL_26;
    }
    v22 = (*(_BYTE *)(v18 + 1) & 0x10) == 0;
LABEL_10:
    if ( v22 )
      goto LABEL_11;
LABEL_27:
    ++v19;
    v18 += *(unsigned __int16 *)(v18 + 2);
    *(_DWORD *)&v35[7] = v19;
    if ( v19 >= *(unsigned __int16 *)(v15 + 4) )
      goto LABEL_28;
  }
  if ( a12 != 3 )
    goto LABEL_27;
  if ( !RtlFindAceByType(Acl, 0x11u, 0LL) )
  {
    v19 = *(_DWORD *)&v35[7];
    goto LABEL_7;
  }
LABEL_28:
  if ( v20 > 0xFFFF )
    return 3221225597LL;
  v16 = (_DWORD *)v44;
LABEL_30:
  *v16 = v20;
  return v14 != 0 ? 0xC0000023 : 0;
}
