/*
 * XREFs of sub_180007930 @ 0x180007930
 * Callers:
 *     sub_180005E08 @ 0x180005E08 (sub_180005E08.c)
 *     sub_180006008 @ 0x180006008 (sub_180006008.c)
 * Callees:
 *     sub_1800045C4 @ 0x1800045C4 (sub_1800045C4.c)
 *     sub_180007AC0 @ 0x180007AC0 (sub_180007AC0.c)
 *     sub_180007C24 @ 0x180007C24 (sub_180007C24.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D5648 @ 0x1800D5648 (sub_1800D5648.c)
 *     sub_1800D5670 @ 0x1800D5670 (sub_1800D5670.c)
 */

__int64 __fastcall sub_180007930(__int64 a1, _BYTE *a2)
{
  void *v4; // rcx
  __int64 v5; // rcx
  struct _ACL *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rsi
  struct _ACL *v10; // rdi
  const void *v11; // rax
  BOOL v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  PACL pDacl; // [rsp+20h] [rbp-48h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+28h] [rbp-40h] BYREF
  WINBOOL bDaclPresent; // [rsp+2Ch] [rbp-3Ch] BYREF
  _BYTE pAclInformation[4]; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+34h] [rbp-34h]

  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    sub_180007C24(a1);
    v4 = *(void **)(a1 + 8);
  }
  pDacl = 0LL;
  if ( v4 )
  {
    if ( !GetSecurityDescriptorDacl(v4, &bDaclPresent, &pDacl, &bDaclDefaulted) )
      sub_1800D5670(v5);
  }
  else
  {
    sub_1800045C4(a1);
  }
  if ( a2[16] || !(*(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 8LL))(a2) )
  {
    v10 = 0LL;
  }
  else
  {
    v6 = (struct _ACL *)sub_180007AC0(a2);
    if ( a2[16] )
    {
      v8 = 0;
    }
    else
    {
      if ( !GetAclInformation(v6, pAclInformation, 0xCu, AclSizeInformation) )
        sub_1800D5670(v7);
      v8 = Size;
    }
    v9 = v8;
    v10 = (struct _ACL *)o_malloc(v8);
    if ( !v10 )
      sub_1800B8610(2147942414LL);
    v11 = (const void *)sub_180007AC0(a2);
    if ( v9 )
    {
      if ( !v11 )
      {
        memset(v10, 0, (unsigned int)v9);
        *(_DWORD *)o__errno(v17) = 22;
        o__invalid_parameter_noinfo(v18);
        sub_1800B8610(2147942487LL);
      }
      memcpy(v10, v11, (unsigned int)v9);
    }
  }
  v12 = a2[16] || v10;
  if ( !SetSecurityDescriptorDacl(*(PSECURITY_DESCRIPTOR *)(a1 + 8), v12, v10, 0) )
  {
    v19 = sub_1800D5648(v14, v13, v15);
    _o_free(v10);
    sub_1800B8610(v19);
  }
  return _o_free(pDacl);
}
