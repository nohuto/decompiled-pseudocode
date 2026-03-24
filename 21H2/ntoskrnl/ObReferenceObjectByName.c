/*
 * XREFs of ObReferenceObjectByName @ 0x140661100
 * Callers:
 *     IopGetDriverPathInformation @ 0x140500B9C (IopGetDriverPathInformation.c)
 *     AlpcpCreateClientPort @ 0x1405E054C (AlpcpCreateClientPort.c)
 *     IopGetLegacyVetoListDrivers @ 0x140661930 (IopGetLegacyVetoListDrivers.c)
 *     CmLoadDifferencingKey @ 0x14066E58C (CmLoadDifferencingKey.c)
 *     ObShutdownSystem @ 0x1408DC490 (ObShutdownSystem.c)
 * Callees:
 *     SeClearLearningModeObjectInformation @ 0x14027C5B0 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x14027C660 (SepDeleteAccessState.c)
 *     PsGetCurrentSilo @ 0x14027C930 (PsGetCurrentSilo.c)
 *     SeSetLearningModeObjectInformation @ 0x14027C980 (SeSetLearningModeObjectInformation.c)
 *     ObpReleaseLookupContext @ 0x14027EAD0 (ObpReleaseLookupContext.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     ObpCaptureObjectName @ 0x1406566B0 (ObpCaptureObjectName.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     ObpCheckObjectReference @ 0x140660F3C (ObpCheckObjectReference.c)
 *     ObpFreeObjectNameBuffer @ 0x140661348 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x140661880 (SeCreateAccessState.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        PADAPTER_OBJECT *a8)
{
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  unsigned __int64 v13; // rdx
  BOOLEAN v14; // r8
  NTSTATUS AccessState; // [rsp+70h] [rbp-90h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-88h] BYREF
  __int128 v17; // [rsp+80h] [rbp-80h] BYREF
  __int128 v18; // [rsp+90h] [rbp-70h] BYREF
  __int128 v19; // [rsp+A0h] [rbp-60h]
  __int128 v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+C0h] [rbp-40h]
  __int64 v22[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v23; // [rsp+D8h] [rbp-28h]
  __int64 v24; // [rsp+E8h] [rbp-18h]
  __int64 v25[20]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v26[224]; // [rsp+190h] [rbp+90h] BYREF

  memset(v26, 0, sizeof(v26));
  DmaAdapter = 0LL;
  v17 = 0LL;
  memset(v25, 0, sizeof(v25));
  v24 = 0LL;
  v21 = 0LL;
  *(_OWORD *)v22 = 0LL;
  v23 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( !a1 )
    return 3221225523LL;
  result = ObpCaptureObjectName(a6, a1, (__int64)&v17, 1);
  AccessState = result;
  if ( (int)result < 0 )
    return result;
  if ( !(_WORD)v17 )
    return 3221225523LL;
  if ( a3 || (a3 = v25, AccessState = SeCreateAccessState(v25, v26, a4, a5 + 76), AccessState >= 0) )
  {
    CurrentSilo = PsGetCurrentSilo();
    AccessState = ObpLookupObjectName(
                    0LL,
                    a6,
                    a7,
                    0LL,
                    0LL,
                    (__int64)CurrentSilo,
                    (__int64)a3,
                    (__int64)v22,
                    0LL,
                    (__int64)&DmaAdapter);
    ObpReleaseLookupContext((__int64)v22);
    *a8 = 0LL;
    if ( AccessState >= 0 )
    {
      v13 = LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
      *(_QWORD *)&v20 = 0LL;
      *(_QWORD *)&v19 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v13] + 16;
      *((_QWORD *)&v19 + 1) = &v17;
      SeSetLearningModeObjectInformation((__int64)&v18);
      if ( ObpCheckObjectReference((__int64)DmaAdapter, (__int64)a3, v14, a6, &AccessState) )
        *a8 = DmaAdapter;
      else
        HalPutDmaAdapter(DmaAdapter);
      SeClearLearningModeObjectInformation();
    }
    if ( a3 == v25 )
    {
      SepDeleteAccessState((__int64)a3);
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3 + 1);
    }
  }
  ObpFreeObjectNameBuffer(&v17);
  return (unsigned int)AccessState;
}
