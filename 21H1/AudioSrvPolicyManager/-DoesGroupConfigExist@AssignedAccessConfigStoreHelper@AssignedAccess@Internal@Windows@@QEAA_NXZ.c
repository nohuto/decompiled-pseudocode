/*
 * XREFs of ?DoesGroupConfigExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ @ 0x18003D5B8
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x18003CBF8 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18003D040 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18003D11C (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18003D1F8 (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::DoesGroupConfigExist(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *this)
{
  void *v2; // rdi
  char v3; // r14
  void *v4; // rbx
  void *v5; // rsi
  _QWORD *v6; // r15
  __int64 v7; // r12
  HANDLE ProcessHeap; // rax
  HANDLE v9; // rax
  HANDLE v10; // rax
  HANDLE v11; // rax
  HANDLE v12; // rax
  HANDLE v13; // rax
  HANDLE v14; // rax
  HANDLE v15; // rax
  LPVOID lpMem; // [rsp+20h] [rbp-40h] BYREF
  LPVOID v18; // [rsp+28h] [rbp-38h] BYREF
  LPVOID v19; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF

  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(&v19);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(&v18);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(&lpMem);
  v2 = v19;
  v3 = 0;
  v4 = v18;
  if ( v19 && v18 )
  {
    v5 = lpMem;
    if ( lpMem )
    {
      v20[0] = v19;
      v6 = v20;
      v20[1] = v18;
      v20[2] = lpMem;
      while ( 1 )
      {
        v7 = *v6;
        if ( *((_DWORD *)this + 6) <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 24LL))(*v6) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7) )
            break;
        }
        if ( ++v6 == &v21 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v5);
          v9 = GetProcessHeap();
          HeapFree(v9, 0, v4);
          goto LABEL_15;
        }
      }
      v10 = GetProcessHeap();
      HeapFree(v10, 0, v5);
      v11 = GetProcessHeap();
      HeapFree(v11, 0, v4);
      v12 = GetProcessHeap();
      HeapFree(v12, 0, v2);
      return 1;
    }
  }
  else if ( lpMem )
  {
    v13 = GetProcessHeap();
    HeapFree(v13, 0, lpMem);
  }
  if ( v4 )
  {
    v14 = GetProcessHeap();
    HeapFree(v14, 0, v4);
  }
  if ( v2 )
  {
LABEL_15:
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v2);
  }
  return v3;
}
