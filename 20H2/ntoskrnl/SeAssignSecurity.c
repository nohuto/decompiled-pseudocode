/*
 * XREFs of SeAssignSecurity @ 0x1407046D0
 * Callers:
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140789E10 (CmpCreateHiveRootCell.c)
 *     CmFcInitSystem2 @ 0x140A3B394 (CmFcInitSystem2.c)
 * Callees:
 *     RtlpNewSecurityObject @ 0x140602BE0 (RtlpNewSecurityObject.c)
 */

NTSTATUS __stdcall SeAssignSecurity(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR ExplicitDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        BOOLEAN IsDirectoryObject,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PGENERIC_MAPPING GenericMapping,
        POOL_TYPE PoolType)
{
  int v7; // r10d

  v7 = 0;
  if ( ParentDescriptor )
  {
    if ( (!ExplicitDescriptor || (*((_BYTE *)ExplicitDescriptor + 2) & 4) == 0)
      && (*((_WORD *)ParentDescriptor + 1) & 0x400) != 0 )
    {
      v7 = 1;
    }
    if ( (!ExplicitDescriptor || (*((_BYTE *)ExplicitDescriptor + 2) & 0x10) == 0)
      && (*((_WORD *)ParentDescriptor + 1) & 0x800) != 0 )
    {
      v7 |= 2u;
    }
  }
  return RtlpNewSecurityObject(
           (__int64)ParentDescriptor,
           ExplicitDescriptor,
           NewDescriptor,
           0LL,
           0,
           IsDirectoryObject,
           v7,
           (__int64)SubjectContext,
           GenericMapping,
           0LL);
}
