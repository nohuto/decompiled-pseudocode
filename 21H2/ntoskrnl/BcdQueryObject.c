/*
 * XREFs of BcdQueryObject @ 0x140800A38
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x140800680 (PopBcdEstablishResumeObject.c)
 *     PopBcdSetPendingResume @ 0x140800808 (PopBcdSetPendingResume.c)
 *     PopBcdRegenerateResumeObject @ 0x14099D244 (PopBcdRegenerateResumeObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140A212A0 (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1403A7864 (BiIsOfflineHandle.c)
 *     BiGetObjectDescription @ 0x140800ADC (BiGetObjectDescription.c)
 *     BiReleaseBcdSyncMutant @ 0x1408134D8 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x140813500 (BiGetObjectIdentifier.c)
 *     BiAcquireBcdSyncMutant @ 0x14081369C (BiAcquireBcdSyncMutant.c)
 */

__int64 __fastcall BcdQueryObject(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  char v8; // r14
  __int64 result; // rax
  __int64 v10; // rcx
  int ObjectIdentifier; // ebx

  if ( !a3 )
  {
    if ( a4 )
      goto LABEL_3;
    return 3221225485LL;
  }
  if ( a2 != 1 )
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
