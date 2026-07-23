/*
 * XREFs of BcdQueryObject @ 0x140770F24
 * Callers:
 *     PopBcdSetPendingResume @ 0x1407650A0 (PopBcdSetPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14076FEA0 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F2494 (PopBcdRegenerateResumeObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14096FE4C (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140398810 (BiIsOfflineHandle.c)
 *     BiGetObjectDescription @ 0x14076FBF8 (BiGetObjectDescription.c)
 *     BiReleaseBcdSyncMutant @ 0x140772394 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x1407723BC (BiGetObjectIdentifier.c)
 *     BiAcquireBcdSyncMutant @ 0x140772558 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdQueryObject(
        HANDLE BcdObjectHandle,
        ULONG BcdVersion,
        BCD_OBJECT_DESCRIPTION Description,
        PGUID Identifier)
{
  __int64 v7; // rcx
  char v8; // r14
  NTSTATUS result; // eax
  __int64 v10; // rcx
  NTSTATUS ObjectIdentifier; // ebx

  if ( Description )
  {
    if ( BcdVersion == 1 )
      goto LABEL_3;
    return -1073741811;
  }
  if ( !Identifier )
    return -1073741811;
LABEL_3:
  LOBYTE(v7) = BiIsOfflineHandle((char)BcdObjectHandle);
  v8 = v7;
  result = BiAcquireBcdSyncMutant(v7);
  if ( result >= 0 )
  {
    ObjectIdentifier = 0;
    if ( !*(_QWORD *)&Description
      || (ObjectIdentifier = BiGetObjectDescription((__int64)BcdObjectHandle, *(_DWORD **)&Description),
          ObjectIdentifier >= 0) )
    {
      if ( Identifier )
        ObjectIdentifier = BiGetObjectIdentifier(BcdObjectHandle, Identifier);
    }
    LOBYTE(v10) = v8;
    BiReleaseBcdSyncMutant(v10);
    return ObjectIdentifier;
  }
  return result;
}
