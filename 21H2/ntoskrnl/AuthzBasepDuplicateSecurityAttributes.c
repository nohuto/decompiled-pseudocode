/*
 * XREFs of AuthzBasepDuplicateSecurityAttributes @ 0x140360E30
 * Callers:
 *     SepGetAnonymousToken @ 0x1402A509C (SepGetAnonymousToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1402F2FB0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140597C1C (SepValidateAndCopyGlobalEntry.c)
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 *     SepDuplicateClaimAttributes @ 0x1409251D0 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x1402F56A0 (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x1403610A0 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140361170 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x1403613F4 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDuplicateSecurityAttributes(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v3; // r14
  __int64 *v4; // r12
  unsigned int v5; // edi
  char v6; // bl
  _QWORD *v7; // r13
  __int64 SecurityAttribute; // rax
  __int64 v9; // rsi
  int v10; // ecx
  _QWORD *v11; // rcx
  __int64 *v12; // rdi
  POOL_TYPE v13; // ecx
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  __int64 *v18; // rdi
  __int64 SecurityAttributeValue; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbp
  void *v25; // rcx
  unsigned int v26; // eax
  __int64 *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rbp

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
    SecurityAttribute = AuthzBasepAllocateSecurityAttribute(v3 + 4);
    v9 = SecurityAttribute;
    if ( !SecurityAttribute )
      goto LABEL_34;
    v10 = *((_DWORD *)v3 + 13);
    *(_DWORD *)(SecurityAttribute + 52) = v10;
    if ( v6 && (*((_DWORD *)v3 + 13) & 0x80u) != 0 )
      *(_DWORD *)(SecurityAttribute + 52) = v10 & 0xFFFFFF7E | 1;
    *(_WORD *)(SecurityAttribute + 48) = *((_WORD *)v3 + 24);
    if ( (*(_DWORD *)(SecurityAttribute + 56) & 2) == 0 )
    {
      a2 = (_QWORD *)v7[5];
      v11 = (_QWORD *)(SecurityAttribute + 16);
      if ( (_QWORD *)*a2 != v7 + 4 )
LABEL_45:
        __fastfail(3u);
      *v11 = v7 + 4;
      *(_QWORD *)(SecurityAttribute + 24) = a2;
      *a2 = v11;
      v7[5] = v11;
      *(_DWORD *)(SecurityAttribute + 56) |= 2u;
      ++*((_DWORD *)v7 + 6);
    }
    if ( *((_WORD *)v3 + 24) != 2 )
      break;
LABEL_9:
    v12 = (__int64 *)v3[9];
    if ( v12 != v3 + 9 )
    {
      while ( 1 )
      {
        v13 = PagedPool;
        if ( KeGetCurrentIrql() >= 2u )
          v13 = NonPagedPoolNx;
        PoolWithTag = ExAllocatePoolWithTag(v13, 0x40uLL, 0x74416553u);
        v15 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_34;
        memset(PoolWithTag, 0, 0x40uLL);
        v15[5] = v12[5];
        if ( (v15[4] & 2) == 0 )
        {
          a2 = *(_QWORD **)(v9 + 104);
          v16 = v15 + 2;
          if ( *a2 != v9 + 96 )
            goto LABEL_45;
          *v16 = v9 + 96;
          v15[3] = a2;
          *a2 = v16;
          *(_QWORD *)(v9 + 104) = v16;
          *((_DWORD *)v15 + 8) |= 2u;
          ++*(_DWORD *)(v9 + 88);
        }
        v12 = (__int64 *)*v12;
        if ( v12 == v3 + 9 )
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
      v18 = (__int64 *)v3[9];
      if ( v18 == v3 + 9 )
        goto LABEL_18;
      while ( 1 )
      {
        SecurityAttributeValue = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v18 + 20));
        v20 = SecurityAttributeValue;
        if ( !SecurityAttributeValue )
          goto LABEL_34;
        *(_WORD *)(SecurityAttributeValue + 40) = 0;
        *(_WORD *)(SecurityAttributeValue + 42) = *((_WORD *)v18 + 20);
        *(_QWORD *)(SecurityAttributeValue + 48) = SecurityAttributeValue + 64;
        RtlCopyUnicodeString((PUNICODE_STRING)(SecurityAttributeValue + 40), (PCUNICODE_STRING)(v18 + 5));
        if ( (*(_DWORD *)(v20 + 32) & 2) == 0 )
        {
          a2 = *(_QWORD **)(v9 + 104);
          v21 = (_QWORD *)(v20 + 16);
          if ( *a2 != v9 + 96 )
            goto LABEL_45;
          *v21 = v9 + 96;
          *(_QWORD *)(v20 + 24) = a2;
          *a2 = v21;
          *(_QWORD *)(v9 + 104) = v21;
          *(_DWORD *)(v20 + 32) |= 2u;
          ++*(_DWORD *)(v9 + 88);
        }
        v18 = (__int64 *)*v18;
        if ( v18 == v3 + 9 )
          goto LABEL_17;
      }
    case 4:
      v22 = (__int64 *)v3[9];
      if ( v22 == v3 + 9 )
        goto LABEL_17;
      while ( 1 )
      {
        v23 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v22 + 24));
        v24 = v23;
        if ( !v23 )
          goto LABEL_34;
        v25 = (void *)(v23 + 64);
        *(_QWORD *)(v23 + 40) = v22[5];
        v26 = *((unsigned __int16 *)v22 + 24);
        *(_WORD *)(v24 + 48) = v26;
        *(_QWORD *)(v24 + 56) = v24 + 64;
        memmove(v25, (const void *)v22[7], v26);
        AuthzBasepAddSecurityAttributeValueToLists(v9, v24, 0, 1);
        v22 = (__int64 *)*v22;
        if ( v22 == v3 + 9 )
          goto LABEL_17;
      }
    case 5:
    case 0x10:
      v27 = (__int64 *)v3[9];
      if ( v27 == v3 + 9 )
        goto LABEL_17;
      break;
    default:
      v5 = -1073741811;
      goto LABEL_35;
  }
  while ( 1 )
  {
    v28 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned int *)v27 + 12));
    v29 = v28;
    if ( !v28 )
      break;
    *(_QWORD *)(v28 + 40) = v28 + 64;
    *(_DWORD *)(v28 + 48) = *((_DWORD *)v27 + 12);
    memmove((void *)(v28 + 64), (const void *)v27[5], *((unsigned int *)v27 + 12));
    AuthzBasepAddSecurityAttributeValueToLists(v9, v29, 0, 1);
    v27 = (__int64 *)*v27;
    if ( v27 == v3 + 9 )
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
