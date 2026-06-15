/*
 * XREFs of sub_180034E90 @ 0x180034E90
 * Callers:
 *     sub_180034A74 @ 0x180034A74 (sub_180034A74.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180035110 @ 0x180035110 (sub_180035110.c)
 *     sub_1800362DC @ 0x1800362DC (sub_1800362DC.c)
 *     sub_180036308 @ 0x180036308 (sub_180036308.c)
 */

void __fastcall sub_180034E90(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  void *v5; // r15
  DWORD v6; // ecx
  __int64 v7; // rax
  void *pOwner; // r12
  DWORD v9; // eax
  void *pPrimaryGroup; // r14
  DWORD v11; // eax
  struct _ACL *v12; // rsi
  DWORD v13; // eax
  struct _ACL *pSacl; // rdi
  __int64 v15; // rcx
  int v16; // ebx
  DWORD dwDaclSize; // [rsp+60h] [rbp-18h] BYREF
  DWORD dwAbsoluteSecurityDescriptorSize; // [rsp+64h] [rbp-14h] BYREF
  DWORD dwRevision[4]; // [rsp+68h] [rbp-10h] BYREF
  WORD pControl; // [rsp+C0h] [rbp+48h] BYREF
  DWORD dwPrimaryGroupSize; // [rsp+C8h] [rbp+50h] BYREF
  DWORD dwOwnerSize; // [rsp+D0h] [rbp+58h] BYREF
  DWORD dwSaclSize; // [rsp+D8h] [rbp+60h] BYREF

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    pControl = 0;
    if ( !GetSecurityDescriptorControl(v2, &pControl, dwRevision) )
      goto LABEL_29;
    if ( (pControl & 0x8000u) == 0 )
      return;
    v3 = *(void **)(a1 + 8);
    dwSaclSize = 0;
    dwDaclSize = 0;
    dwPrimaryGroupSize = 0;
    dwOwnerSize = 0;
    dwAbsoluteSecurityDescriptorSize = 0;
    MakeAbsoluteSD(
      v3,
      0LL,
      &dwAbsoluteSecurityDescriptorSize,
      0LL,
      &dwDaclSize,
      0LL,
      &dwSaclSize,
      0LL,
      &dwOwnerSize,
      0LL,
      &dwPrimaryGroupSize);
    if ( GetLastError() != 122 )
      sub_180036308(v4);
    v5 = (void *)o_malloc(dwAbsoluteSecurityDescriptorSize);
    if ( !v5 )
      goto LABEL_29;
    v6 = dwOwnerSize;
    if ( dwOwnerSize )
    {
      v7 = o_malloc(dwOwnerSize);
      v6 = dwOwnerSize;
      pOwner = (void *)v7;
    }
    else
    {
      pOwner = 0LL;
    }
    if ( v6 && !pOwner )
      goto LABEL_29;
    v9 = dwPrimaryGroupSize;
    if ( dwPrimaryGroupSize )
    {
      pPrimaryGroup = (void *)o_malloc(dwPrimaryGroupSize);
      v9 = dwPrimaryGroupSize;
    }
    else
    {
      pPrimaryGroup = 0LL;
    }
    if ( v9 && !pPrimaryGroup
      || ((v11 = dwDaclSize) == 0
        ? (v12 = 0LL)
        : (struct _ACL *)(v12 = (struct _ACL *)o_malloc(dwDaclSize), v11 = dwDaclSize),
          v11 && !v12
       || ((v13 = dwSaclSize) == 0
         ? (pSacl = 0LL)
         : (struct _ACL *)(pSacl = (struct _ACL *)o_malloc(dwSaclSize), v13 = dwSaclSize),
           v13 && !pSacl)) )
    {
LABEL_29:
      sub_18000A174(-2147467259);
    }
    if ( !MakeAbsoluteSD(
            *(PSECURITY_DESCRIPTOR *)(a1 + 8),
            v5,
            &dwAbsoluteSecurityDescriptorSize,
            v12,
            &dwDaclSize,
            pSacl,
            &dwSaclSize,
            pOwner,
            &dwOwnerSize,
            pPrimaryGroup,
            &dwPrimaryGroupSize) )
    {
      v16 = sub_1800362DC(v15);
      _o_free(v5);
      _o_free(pOwner);
      _o_free(pPrimaryGroup);
      _o_free(v12);
      _o_free(pSacl);
      sub_18000A174(v16);
    }
    sub_180035110(a1);
    *(_QWORD *)(a1 + 8) = v5;
  }
}
