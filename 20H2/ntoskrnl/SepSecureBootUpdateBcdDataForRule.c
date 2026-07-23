/*
 * XREFs of SepSecureBootUpdateBcdDataForRule @ 0x140926E84
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x140926A18 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiDeleteElement @ 0x14077F3BC (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1407801FC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407803E0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootGetPolicyDefaultValue @ 0x140926CF4 (SepSecureBootGetPolicyDefaultValue.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x140926FE4 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSecureBootUpdateBcdDataForRule(__int64 a1, void *a2, BCD_FLAGS a3)
{
  _WORD *v3; // rsi
  __int64 *PoolWithTag; // rdi
  int PolicyDefaultValue; // ebx
  ULONG v8; // edx
  __int64 *p_Buffer; // r12
  NTSTATUS ElementDataWithFlags; // eax
  __int64 v11; // rdx
  BCD_FLAGS v12; // r8d
  BCD_FLAGS v13; // r8d
  PVOID v15[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG BufferSize; // [rsp+80h] [rbp+40h] BYREF
  ULONG v17; // [rsp+90h] [rbp+50h] BYREF
  __int64 Buffer; // [rsp+98h] [rbp+58h] BYREF

  v3 = (_WORD *)(qword_140CF9F28 + *(unsigned int *)(a1 + 8));
  Buffer = 0LL;
  PoolWithTag = 0LL;
  v15[0] = 0LL;
  v17 = 0;
  PolicyDefaultValue = 0;
  if ( (*(_BYTE *)v3 & 0x1F) == 8 )
  {
    if ( !v3[1] )
    {
      PolicyDefaultValue = BiDeleteElement(a2, *(_DWORD *)(a1 + 4));
      if ( PolicyDefaultValue == -1073741275 )
        return 0;
    }
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 4);
    BufferSize = 8;
    p_Buffer = &Buffer;
    ElementDataWithFlags = BcdGetElementDataWithFlags(a2, v8, a3, &Buffer, &BufferSize);
    PolicyDefaultValue = ElementDataWithFlags;
    if ( ElementDataWithFlags != -1073741789 && ElementDataWithFlags != -2147483643 )
      goto LABEL_19;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, BufferSize, 0x62536553u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    p_Buffer = PoolWithTag;
    PolicyDefaultValue = BcdGetElementDataWithFlags(a2, *(_DWORD *)(a1 + 4), v12, PoolWithTag, &BufferSize);
    if ( PolicyDefaultValue >= 0 )
    {
LABEL_19:
      if ( PolicyDefaultValue < 0
        || (PolicyDefaultValue = SepSecureBootValidateBcdDataAgainstBcdRule(a1, p_Buffer, BufferSize),
            PolicyDefaultValue < 0) )
      {
        PolicyDefaultValue = SepSecureBootGetPolicyDefaultValue(v3, v11, v15, (int *)&v17);
        if ( PolicyDefaultValue >= 0 )
          PolicyDefaultValue = BcdSetElementDataWithFlags(a2, *(_DWORD *)(a1 + 4), v13, v15[0], v17);
      }
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x62536553u);
  }
  return (unsigned int)PolicyDefaultValue;
}
