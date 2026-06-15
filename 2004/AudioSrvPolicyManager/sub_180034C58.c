/*
 * XREFs of sub_180034C58 @ 0x180034C58
 * Callers:
 *     sub_180035970 @ 0x180035970 (sub_180035970.c)
 * Callees:
 *     sub_180033B5C @ 0x180033B5C (sub_180033B5C.c)
 *     sub_1800361E8 @ 0x1800361E8 (sub_1800361E8.c)
 */

bool __fastcall sub_180034C58(__int64 a1, __int64 a2)
{
  BOOL SecurityDescriptorDacl; // eax
  __int64 v4; // rcx
  struct _ACL *v5; // rdi
  WINBOOL bDaclPresent; // [rsp+40h] [rbp+8h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+50h] [rbp+18h] BYREF
  PACL pDacl; // [rsp+58h] [rbp+20h] BYREF

  SecurityDescriptorDacl = GetSecurityDescriptorDacl(
                             *(PSECURITY_DESCRIPTOR *)(a1 + 8),
                             &bDaclPresent,
                             &pDacl,
                             &bDaclDefaulted);
  if ( SecurityDescriptorDacl )
  {
    if ( a2 )
    {
      v4 = *(_QWORD *)(a2 + 24);
      if ( bDaclPresent )
      {
        v5 = pDacl;
        if ( pDacl )
        {
          if ( v4 )
          {
            sub_1800361E8(v4, *(_QWORD *)(a2 + 32));
            _o_free(*(_QWORD *)(a2 + 24));
            *(_QWORD *)(a2 + 24) = 0LL;
          }
          *(_QWORD *)(a2 + 32) = 0LL;
          *(_QWORD *)(a2 + 40) = 0LL;
          _o_free(*(_QWORD *)(a2 + 8));
          *(_QWORD *)(a2 + 8) = 0LL;
          sub_180033B5C(a2, v5);
          goto LABEL_15;
        }
        if ( v4 )
        {
          sub_1800361E8(v4, *(_QWORD *)(a2 + 32));
          _o_free(*(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) = 0LL;
        }
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_QWORD *)(a2 + 40) = 0LL;
        _o_free(*(_QWORD *)(a2 + 8));
        *(_BYTE *)(a2 + 16) = 1;
      }
      else
      {
        if ( v4 )
        {
          sub_1800361E8(v4, *(_QWORD *)(a2 + 32));
          _o_free(*(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) = 0LL;
        }
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_QWORD *)(a2 + 40) = 0LL;
        _o_free(*(_QWORD *)(a2 + 8));
        *(_BYTE *)(a2 + 16) = 0;
      }
      *(_QWORD *)(a2 + 8) = 0LL;
    }
LABEL_15:
    LOBYTE(SecurityDescriptorDacl) = 1;
  }
  return SecurityDescriptorDacl;
}
