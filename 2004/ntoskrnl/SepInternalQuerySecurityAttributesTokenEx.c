/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x1402961C0
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x140350370 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     SeQuerySecurityAttributesToken @ 0x1406179D0 (SeQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x14067EC80 (NtQueryInformationToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140681C30 (NtQuerySecurityAttributesToken.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140268870 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140269674 (SepGetSingletonEntryFromIndexNumber.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x140296260 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepFindSecurityAttribute @ 0x140296650 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402C4060 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepPotentialGlobalTableAttribute @ 0x1402FE950 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140340B2C (AuthzBasepAllocateSecurityAttributesList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140592310 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepInternalFillNoAttribs @ 0x1405923C0 (SepInternalFillNoAttribs.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  void *v8; // rbx
  bool v10; // zf
  unsigned int v14; // r14d
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v16; // r14
  unsigned __int64 v17; // r15
  _QWORD *SecurityAttributesList; // rax
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
    SecurityAttributesList = (_QWORD *)AuthzBasepAllocateSecurityAttributesList();
    v8 = SecurityAttributesList;
    SecurityAttributesToken = SecurityAttributesList
                            ? AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)v16 + 2), SecurityAttributesList, 0)
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
