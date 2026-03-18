/*
 * XREFs of AuthzBasepDuplicateSecurityAttributes @ 0x140204B30
 * Callers:
 *     SepGetAnonymousToken @ 0x14021F764 (SepGetAnonymousToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140300534 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1405F58AC (SepValidateAndCopyGlobalEntry.c)
 *     SepFilterToken @ 0x14078E3F0 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1407CDED0 (SepDuplicateToken.c)
 *     SepDuplicateClaimAttributes @ 0x1409CE94C (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x140204AE4 (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x140204DA0 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140204E2C (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x140204FE0 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall AuthzBasepDuplicateSecurityAttributes(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v3; // r14
  __int64 *v4; // r13
  unsigned int v5; // edi
  char v6; // bl
  _QWORD *v7; // rbp
  __int64 SecurityAttribute; // rax
  __int64 v9; // r9
  __int64 v10; // rsi
  int v11; // ecx
  _QWORD *v12; // rcx
  __int64 *v13; // rdi
  __int64 v14; // rcx
  _QWORD *Pool2; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  __int64 *v19; // rdi
  __int64 SecurityAttributeValue; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r15
  void *v26; // rcx
  unsigned int v27; // eax
  __int64 *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r15

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a1 + 8);
  v5 = 0;
  v6 = a3;
  v7 = a2;
  if ( v3 == (__int64 *)(a1 + 8) )
  {
LABEL_20:
    LOBYTE(a2) = 1;
    goto LABEL_21;
  }
  while ( 1 )
  {
    if ( v6 && (*((_DWORD *)v3 + 13) & 1) != 0 )
      goto LABEL_18;
    SecurityAttribute = AuthzBasepAllocateSecurityAttribute((PCUNICODE_STRING)v3 + 2);
    v10 = SecurityAttribute;
    if ( !SecurityAttribute )
      goto LABEL_34;
    v11 = *((_DWORD *)v3 + 13);
    *(_DWORD *)(SecurityAttribute + 52) = v11;
    if ( v6 && (*((_DWORD *)v3 + 13) & 0x80u) != 0 )
      *(_DWORD *)(SecurityAttribute + 52) = v11 & 0xFFFFFF7E | 1;
    *(_WORD *)(SecurityAttribute + 48) = *((_WORD *)v3 + 24);
    if ( (*(_DWORD *)(SecurityAttribute + 56) & 2) == 0 )
    {
      a2 = (_QWORD *)v7[5];
      v12 = (_QWORD *)(SecurityAttribute + 16);
      if ( (_QWORD *)*a2 != v7 + 4 )
LABEL_45:
        __fastfail(3u);
      *v12 = v7 + 4;
      *(_QWORD *)(SecurityAttribute + 24) = a2;
      *a2 = v12;
      v7[5] = v12;
      *(_DWORD *)(SecurityAttribute + 56) |= 2u;
      ++*((_DWORD *)v7 + 6);
    }
    if ( *((_WORD *)v3 + 24) != 2 )
      break;
LABEL_9:
    v13 = (__int64 *)v3[9];
    if ( v13 != v3 + 9 )
    {
      while ( 1 )
      {
        v14 = 256LL;
        if ( KeGetCurrentIrql() >= 2u )
          v14 = 64LL;
        Pool2 = (_QWORD *)ExAllocatePool2(v14, 64LL, 1950442835LL, v9);
        v16 = Pool2;
        if ( !Pool2 )
          goto LABEL_34;
        memset(Pool2, 0, 0x40uLL);
        v16[5] = v13[5];
        if ( (v16[4] & 2) == 0 )
        {
          a2 = *(_QWORD **)(v10 + 104);
          v17 = v16 + 2;
          if ( *a2 != v10 + 96 )
            goto LABEL_45;
          *v17 = v10 + 96;
          v16[3] = a2;
          *a2 = v17;
          *(_QWORD *)(v10 + 104) = v17;
          *((_DWORD *)v16 + 8) |= 2u;
          ++*(_DWORD *)(v10 + 88);
        }
        v13 = (__int64 *)*v13;
        if ( v13 == v3 + 9 )
          goto LABEL_17;
      }
    }
LABEL_18:
    v3 = (__int64 *)*v3;
    if ( v3 == v4 )
    {
      v5 = 0;
      goto LABEL_20;
    }
  }
  switch ( *((_WORD *)v3 + 24) )
  {
    case 1:
    case 6:
      goto LABEL_9;
    case 3:
      v19 = (__int64 *)v3[9];
      if ( v19 == v3 + 9 )
        goto LABEL_18;
      while ( 1 )
      {
        SecurityAttributeValue = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v19 + 20));
        v21 = SecurityAttributeValue;
        if ( !SecurityAttributeValue )
          goto LABEL_34;
        *(_WORD *)(SecurityAttributeValue + 40) = 0;
        *(_WORD *)(SecurityAttributeValue + 42) = *((_WORD *)v19 + 20);
        *(_QWORD *)(SecurityAttributeValue + 48) = SecurityAttributeValue + 64;
        RtlCopyUnicodeString((PUNICODE_STRING)(SecurityAttributeValue + 40), (PCUNICODE_STRING)(v19 + 5));
        if ( (*(_DWORD *)(v21 + 32) & 2) == 0 )
        {
          a2 = *(_QWORD **)(v10 + 104);
          v22 = (_QWORD *)(v21 + 16);
          if ( *a2 != v10 + 96 )
            goto LABEL_45;
          *v22 = v10 + 96;
          *(_QWORD *)(v21 + 24) = a2;
          *a2 = v22;
          *(_QWORD *)(v10 + 104) = v22;
          *(_DWORD *)(v21 + 32) |= 2u;
          ++*(_DWORD *)(v10 + 88);
        }
        v19 = (__int64 *)*v19;
        if ( v19 == v3 + 9 )
          goto LABEL_17;
      }
    case 4:
      v23 = (__int64 *)v3[9];
      if ( v23 == v3 + 9 )
        goto LABEL_17;
      while ( 1 )
      {
        v24 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v23 + 24));
        v25 = v24;
        if ( !v24 )
          goto LABEL_34;
        v26 = (void *)(v24 + 64);
        *(_QWORD *)(v24 + 40) = v23[5];
        v27 = *((unsigned __int16 *)v23 + 24);
        *(_WORD *)(v25 + 48) = v27;
        *(_QWORD *)(v25 + 56) = v25 + 64;
        memmove(v26, (const void *)v23[7], v27);
        AuthzBasepAddSecurityAttributeValueToLists(v10, v25, 0, 1);
        v23 = (__int64 *)*v23;
        if ( v23 == v3 + 9 )
          goto LABEL_17;
      }
    case 5:
    case 0x10:
      v28 = (__int64 *)v3[9];
      if ( v28 == v3 + 9 )
        goto LABEL_17;
      break;
    default:
      v5 = -1073741811;
      goto LABEL_35;
  }
  while ( 1 )
  {
    v29 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned int *)v28 + 12));
    v30 = v29;
    if ( !v29 )
      break;
    *(_QWORD *)(v29 + 40) = v29 + 64;
    *(_DWORD *)(v29 + 48) = *((_DWORD *)v28 + 12);
    memmove((void *)(v29 + 64), (const void *)v28[5], *((unsigned int *)v28 + 12));
    AuthzBasepAddSecurityAttributeValueToLists(v10, v30, 0, 1);
    v28 = (__int64 *)*v28;
    if ( v28 == v3 + 9 )
    {
LABEL_17:
      v6 = a3;
      goto LABEL_18;
    }
  }
LABEL_34:
  v5 = -1073741670;
LABEL_35:
  LOBYTE(a2) = 0;
LABEL_21:
  AuthzBasepFinaliseSecurityAttributesList(v7, a2);
  return v5;
}
