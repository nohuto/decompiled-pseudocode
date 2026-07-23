/*
 * XREFs of AuthzBasepGetNextValue @ 0x1402F48F4
 * Callers:
 *     AuthzBasepValueInSet @ 0x1402F47C8 (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateSetRelationship @ 0x1402F49EC (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepDeviceMemberOf @ 0x1405C2110 (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepMemberOf @ 0x1405C2258 (AuthzBasepMemberOf.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1402F2F08 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepGetConstantOperand @ 0x1402F3AC8 (AuthzBasepGetConstantOperand.c)
 */

__int64 __fastcall AuthzBasepGetNextValue(__int64 a1, __int64 a2)
{
  unsigned int ConstantOperand; // ecx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v8; // edx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  ConstantOperand = 0;
  v9 = 0;
  v5 = *(unsigned int *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    if ( *(_BYTE *)(a1 + 4) )
    {
      v8 = *(_DWORD *)(a1 + 24);
      if ( (unsigned int)v5 < v8 )
      {
        ConstantOperand = AuthzBasepGetConstantOperand(
                            (char *)(*(_QWORD *)(a1 + 32) + v5),
                            v8 - (unsigned int)v5,
                            a2,
                            &v9);
        if ( *(_BYTE *)(a2 + 4) )
          return (unsigned int)-1073741406;
        else
          *(_DWORD *)(a1 + 8) += v9;
        return ConstantOperand;
      }
    }
    else if ( !(_DWORD)v5 )
    {
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 24);
      *(_OWORD *)a2 = *(_OWORD *)a1;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
      return ConstantOperand;
    }
    return (unsigned int)-2147483622;
  }
  if ( (_DWORD)v5 || !*(_DWORD *)(a1 + 4) )
  {
    if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 4) )
      return (_DWORD)v5 != 0 ? -2147483622 : -1073741275;
    ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues(*(_QWORD *)(a1 + 16));
    *(_WORD *)a2 = *(_WORD *)a1;
    *(_BYTE *)(a2 + 4) = *(_BYTE *)(a1 + 4);
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 24);
    v6 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 16) = v6;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)a1;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  }
  ++*(_DWORD *)(a1 + 8);
  return ConstantOperand;
}
