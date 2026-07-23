/*
 * XREFs of SepCreateClaimAttributes @ 0x1406A9F58
 * Callers:
 *     SepSetTokenClaims @ 0x1406A9EDC (SepSetTokenClaims.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x14020DF80 (RtlSidHashInitialize.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14029DCC0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402E2490 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403118DC (AuthzBasepAllocateSecurityAttributesList.c)
 *     SepLengthSidAndAttributesArray @ 0x1406A9938 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406A99F0 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x14096F010 (AuthzBasepAllocateClaimCollectionNoLists.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCreateClaimAttributes(unsigned int **a1, __int64 a2, __int64 a3, unsigned int a4, void *Src)
{
  int v8; // ebx
  _DWORD *v9; // rbp
  _DWORD *v10; // rsi
  _SID_AND_ATTRIBUTES *v11; // r14
  unsigned int *ClaimCollectionNoLists; // rdi
  _QWORD *SecurityAttributesList; // rax
  _QWORD *v15; // rax
  unsigned int v16; // ebx
  char *PoolWithTag; // rax
  int v18; // [rsp+28h] [rbp-70h]
  int v19; // [rsp+30h] [rbp-68h]
  char v20; // [rsp+50h] [rbp-48h]
  char v21; // [rsp+51h] [rbp-47h]
  int v22; // [rsp+54h] [rbp-44h] BYREF
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-40h] BYREF
  __int64 v24; // [rsp+60h] [rbp-38h] BYREF

  v22 = 1;
  v20 = 0;
  v21 = 0;
  LODWORD(NumberOfBytes) = 0;
  v8 = 0;
  v24 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( !a2 && !a3 && !a4 )
    return 0LL;
  ClaimCollectionNoLists = (unsigned int *)AuthzBasepAllocateClaimCollectionNoLists();
  if ( ClaimCollectionNoLists )
  {
    if ( a2 )
    {
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
      v9 = SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v8 = -1073741670;
LABEL_35:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v8;
      }
      v8 = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v22, a2);
      if ( v8 < 0 )
        goto LABEL_25;
      v20 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 72) = v9;
    }
    if ( a3 )
    {
      v15 = AuthzBasepAllocateSecurityAttributesList();
      v10 = v15;
      if ( !v15 )
        goto LABEL_37;
      v8 = AuthzBasepSetSecurityAttributesToken(v15, &v22, a3);
      if ( v8 < 0 )
        goto LABEL_25;
      v21 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 73) = v10;
    }
    if ( !Src || !a4 )
      goto LABEL_24;
    v8 = SepLengthSidAndAttributesArray(Src, a4, &NumberOfBytes);
    if ( v8 < 0 )
    {
LABEL_25:
      if ( v9 )
      {
        if ( v20 )
          AuthzBasepFreeSecurityAttributesList(v9);
        ExFreePoolWithTag(v9, 0);
      }
      if ( v10 )
      {
        if ( v21 )
          AuthzBasepFreeSecurityAttributesList(v10);
        ExFreePoolWithTag(v10, 0);
      }
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      goto LABEL_35;
    }
    v16 = NumberOfBytes;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64546553u);
    v11 = (_SID_AND_ATTRIBUTES *)PoolWithTag;
    if ( PoolWithTag )
    {
      v8 = SeCaptureSidAndAttributesArray(
             (char *)Src,
             a4,
             0,
             PoolWithTag,
             v16,
             v18,
             v19,
             (PVOID *)&v24,
             (unsigned int *)&NumberOfBytes);
      if ( v8 >= 0 )
      {
        *ClaimCollectionNoLists = a4;
        *((_QWORD *)ClaimCollectionNoLists + 1) = v11;
        RtlSidHashInitialize(v11, a4, (PSID_AND_ATTRIBUTES_HASH)(ClaimCollectionNoLists + 8));
LABEL_24:
        *a1 = ClaimCollectionNoLists;
        return (unsigned int)v8;
      }
      goto LABEL_25;
    }
LABEL_37:
    v8 = -1073741670;
    goto LABEL_25;
  }
  return (unsigned int)-1073741670;
}
