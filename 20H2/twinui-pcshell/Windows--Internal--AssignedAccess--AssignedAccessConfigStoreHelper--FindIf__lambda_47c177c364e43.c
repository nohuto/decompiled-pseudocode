/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x180477F28
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x180477C2C (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180478330 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1804783E4 (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180478474 (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rsi
  void *v4; // rbx
  void *v5; // rdi
  _QWORD *v6; // r14
  __int64 v7; // r15
  char v8; // bp
  void *v10; // [rsp+20h] [rbp-58h] BYREF
  void *Block; // [rsp+28h] [rbp-50h] BYREF
  void *v12; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF

  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(&v12);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(&v10);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(&Block);
  v3 = v12;
  v4 = v10;
  v5 = Block;
  if ( v12 && v10 && Block )
  {
    v13[0] = v12;
    v6 = v13;
    v13[1] = v10;
    v13[2] = Block;
    while ( 1 )
    {
      v7 = *v6;
      if ( *(_DWORD *)(a2 + 24) <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 24LL))(*v6) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7) )
          break;
      }
      if ( ++v6 == &v14 )
        goto LABEL_8;
    }
    v8 = 1;
  }
  else
  {
LABEL_8:
    v8 = 0;
  }
  if ( v5 )
    operator delete(v5);
  if ( v4 )
    operator delete(v4);
  if ( v3 )
    operator delete(v3);
  return v8;
}
