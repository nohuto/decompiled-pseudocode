/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x140259940
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x1403125E0 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     NtQueryInformationToken @ 0x140606BA0 (NtQueryInformationToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140609AE0 (NtQuerySecurityAttributesToken.c)
 *     SeQuerySecurityAttributesToken @ 0x1406AB1C0 (SeQuerySecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x140231230 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1402599E0 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepFindSecurityAttribute @ 0x140259DD0 (AuthzBasepFindSecurityAttribute.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140303D5C (AuthzBasepAllocateSecurityAttributesList.c)
 *     SepPotentialGlobalTableAttribute @ 0x140313924 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140338570 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140339374 (SepGetSingletonEntryFromIndexNumber.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140591C20 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepInternalFillNoAttribs @ 0x140591CD0 (SepInternalFillNoAttribs.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepInternalQuerySecurityAttributesTokenEx(
        __int64 a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  _DWORD *v8; // rbx
  bool v10; // zf
  unsigned int v14; // r14d
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v16; // r14
  unsigned __int64 v17; // r15
  __int64 SecurityAttributesList; // rax
  int SecurityAttributesToken; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+68h] [rbp+10h] BYREF

  LOBYTE(v25) = a2;
  v8 = 0LL;
  v10 = (*(_DWORD *)(a1 + 200) & 0x20000) == 0;
  v24 = 0LL;
  v25 = 0;
  if ( !v10 )
    return AuthzBasepQuerySecurityAttributesToken(*(_QWORD *)(a1 + 776), a3, a4, a6, a7, a8);
  if ( a5 )
    goto LABEL_10;
  if ( (SepSingletonGlobal[4] & 1) == 0 || !a3 )
    return AuthzBasepQuerySecurityAttributesToken(*(_QWORD *)(a1 + 776), a3, a4, a6, a7, a8);
  v14 = 0;
  if ( a4 )
  {
    while ( (unsigned __int8)SepPotentialGlobalTableAttribute((PCUNICODE_STRING)(a3 + 16LL * v14))
         && !AuthzBasepFindSecurityAttribute(*(_QWORD *)(a1 + 776), a3 + 16LL * v14) )
    {
      if ( ++v14 >= a4 )
        goto LABEL_10;
    }
    return AuthzBasepQuerySecurityAttributesToken(*(_QWORD *)(a1 + 776), a3, a4, a6, a7, a8);
  }
LABEL_10:
  if ( (int)SepGetProcUniqueLuidAndIndexFromTokenEx(0LL, a1, &v25, &v24) < 0 )
    return SepInternalFillNoAttribs(a6, a7, a8);
  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v25);
  v16 = SingletonEntryFromIndexNumber;
  if ( !SingletonEntryFromIndexNumber )
    return SepInternalFillNoAttribs(a6, a7, a8);
  v17 = ExAcquireSpinLockShared(SingletonEntryFromIndexNumber);
  if ( *((_QWORD *)v16 + 2) )
  {
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
    v8 = (_DWORD *)SecurityAttributesList;
    SecurityAttributesToken = SecurityAttributesList
                            ? AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)v16 + 2), SecurityAttributesList, 0LL)
                            : -1073741801;
  }
  else
  {
    SecurityAttributesToken = -1073741275;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v16);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v10 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v17);
  if ( SecurityAttributesToken == -1073741275 )
    return SepInternalFillNoAttribs(a6, a7, a8);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_29;
  if ( v8 )
  {
    SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(v8, a3, a4, a6, a7, a8);
LABEL_29:
    if ( v8 )
    {
      AuthzBasepFreeSecurityAttributesList(v8);
      ExFreePoolWithTag(v8, 0);
    }
  }
  return (unsigned int)SecurityAttributesToken;
}
