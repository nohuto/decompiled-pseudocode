/*
 * XREFs of CmpCheckSecurityCellAccess @ 0x14060385C
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x140662298 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckKeyAccess @ 0x140871884 (CmpCheckKeyAccess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406038E0 (CmpCheckKeySecurityDescriptorAccess.c)
 */

__int64 __fastcall CmpCheckSecurityCellAccess(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0xFFFFFFFFLL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(a1 + 8))(a1, a2, &v6);
  if ( v3 )
  {
    v4 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(v3 + 20));
    (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
