/*
 * XREFs of sub_180034A74 @ 0x180034A74
 * Callers:
 *     sub_180035970 @ 0x180035970 (sub_180035970.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180033580 @ 0x180033580 (sub_180033580.c)
 *     sub_180034E90 @ 0x180034E90 (sub_180034E90.c)
 *     sub_180036244 @ 0x180036244 (sub_180036244.c)
 *     sub_1800362DC @ 0x1800362DC (sub_1800362DC.c)
 *     sub_180036308 @ 0x180036308 (sub_180036308.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180034A74(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  BOOL v5; // ebp
  __int64 v6; // rcx
  void *v7; // rax
  __int64 v8; // rcx
  char v9; // al
  struct _ACL *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // r14d
  struct _ACL *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  int v18; // ebx
  int v19; // ebx
  PACL pDacl; // [rsp+20h] [rbp-48h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+28h] [rbp-40h] BYREF
  WINBOOL bDaclPresent; // [rsp+2Ch] [rbp-3Ch] BYREF
  _BYTE pAclInformation[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-34h]

  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    sub_180034E90(a1);
    v4 = *(void **)(a1 + 8);
  }
  pDacl = 0LL;
  v5 = 1;
  if ( v4 )
  {
    if ( !GetSecurityDescriptorDacl(v4, &bDaclPresent, &pDacl, &bDaclDefaulted) )
      sub_180036308(v6);
  }
  else
  {
    v7 = (void *)o_malloc(40LL);
    *(_QWORD *)(a1 + 8) = v7;
    if ( !v7 )
      goto LABEL_22;
    if ( !InitializeSecurityDescriptor(v7, 1u) )
    {
      v18 = sub_1800362DC(v8);
      _o_free(*(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 8) = 0LL;
      sub_18000A174(v18);
    }
  }
  v9 = *(_BYTE *)(a2 + 16);
  if ( v9 || !*(_DWORD *)(a2 + 32) )
  {
    v14 = 0LL;
    goto LABEL_17;
  }
  v10 = (struct _ACL *)sub_180033580(a2);
  if ( *(_BYTE *)(a2 + 16) )
  {
    v11 = 0;
  }
  else
  {
    if ( !GetAclInformation(v10, pAclInformation, 0xCu, AclSizeInformation) )
      sub_180036308(v12);
    v11 = v24;
  }
  v13 = v11;
  v14 = (struct _ACL *)o_malloc(v11);
  if ( !v14 )
LABEL_22:
    sub_18000A174(-2147024882);
  v15 = sub_180033580(a2);
  sub_180036244(v14, v13, v15, v13);
  v9 = *(_BYTE *)(a2 + 16);
LABEL_17:
  if ( !v9 && !v14 )
    v5 = 0;
  if ( !SetSecurityDescriptorDacl(*(PSECURITY_DESCRIPTOR *)(a1 + 8), v5, v14, 0) )
  {
    v19 = sub_1800362DC(v16);
    _o_free(v14);
    sub_18000A174(v19);
  }
  return _o_free(pDacl);
}
