/*
 * XREFs of BcdQueryObject @ 0x14076EB14
 * Callers:
 *     PopBcdSetPendingResume @ 0x140763680 (PopBcdSetPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14076DA90 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F11A4 (PopBcdRegenerateResumeObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14096EAAC (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14039807C (BiIsOfflineHandle.c)
 *     BiGetObjectDescription @ 0x14076D7E8 (BiGetObjectDescription.c)
 *     BiReleaseBcdSyncMutant @ 0x14076FF84 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x14076FFAC (BiGetObjectIdentifier.c)
 *     BiAcquireBcdSyncMutant @ 0x140770148 (BiAcquireBcdSyncMutant.c)
 */

__int64 __fastcall BcdQueryObject(__int64 a1, int a2, _DWORD *a3, __int64 a4)
{
  __int64 v7; // rcx
  char v8; // r14
  __int64 result; // rax
  __int64 v10; // rcx
  int ObjectIdentifier; // ebx

  if ( a3 )
  {
    if ( a2 == 1 )
      goto LABEL_3;
    return 3221225485LL;
  }
  if ( !a4 )
    return 3221225485LL;
LABEL_3:
  LOBYTE(v7) = BiIsOfflineHandle(a1);
  v8 = v7;
  result = BiAcquireBcdSyncMutant(v7);
  if ( (int)result >= 0 )
  {
    ObjectIdentifier = 0;
    if ( !a3 || (ObjectIdentifier = BiGetObjectDescription(a1, a3), ObjectIdentifier >= 0) )
    {
      if ( a4 )
        ObjectIdentifier = BiGetObjectIdentifier(a1, a4);
    }
    LOBYTE(v10) = v8;
    BiReleaseBcdSyncMutant(v10);
    return (unsigned int)ObjectIdentifier;
  }
  return result;
}
