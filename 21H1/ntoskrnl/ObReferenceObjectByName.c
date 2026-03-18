/*
 * XREFs of ObReferenceObjectByName @ 0x140613480
 * Callers:
 *     IopGetDriverPathInformation @ 0x1404FB0F4 (IopGetDriverPathInformation.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405EACD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     IopGetLegacyVetoListDrivers @ 0x140615B5C (IopGetLegacyVetoListDrivers.c)
 *     AlpcpCreateClientPort @ 0x140648EB8 (AlpcpCreateClientPort.c)
 *     CmLoadDifferencingKey @ 0x14068C83C (CmLoadDifferencingKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406D0150 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086B220 (CmKeyBodyRemapToVirtual.c)
 *     ObShutdownSystem @ 0x1408D7B20 (ObShutdownSystem.c)
 * Callees:
 *     SeClearLearningModeObjectInformation @ 0x1402064E0 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x140206590 (SepDeleteAccessState.c)
 *     PsGetCurrentSilo @ 0x140206860 (PsGetCurrentSilo.c)
 *     SeSetLearningModeObjectInformation @ 0x1402068B0 (SeSetLearningModeObjectInformation.c)
 *     ObpReleaseLookupContext @ 0x14025B298 (ObpReleaseLookupContext.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObpCaptureObjectName @ 0x1405EBAF0 (ObpCaptureObjectName.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     ObpFreeObjectNameBuffer @ 0x1406136C8 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x140613740 (SeCreateAccessState.c)
 *     ObpCheckObjectReference @ 0x1406137F0 (ObpCheckObjectReference.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        unsigned __int64 a1,
        int a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        PADAPTER_OBJECT *a8)
{
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  unsigned __int64 v14; // rdx
  NTSTATUS AccessState; // [rsp+70h] [rbp-90h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-88h] BYREF
  int v17[4]; // [rsp+80h] [rbp-80h] BYREF
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
  *(_OWORD *)v17 = 0LL;
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
  result = ObpCaptureObjectName(a6, a1, (__int64)v17, 1);
  AccessState = result;
  if ( (int)result < 0 )
    return result;
  if ( !LOWORD(v17[0]) )
    return 3221225523LL;
  if ( a3 || (a3 = v25, AccessState = SeCreateAccessState(v25, v26, a4, a5 + 76), AccessState >= 0) )
  {
    CurrentSilo = PsGetCurrentSilo();
    AccessState = ObpLookupObjectName(
                    0,
                    (int)v17,
                    a2,
                    a5,
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
      v14 = LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
      *(_QWORD *)&v20 = 0LL;
      *(_QWORD *)&v19 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v14] + 16;
      *((_QWORD *)&v19 + 1) = v17;
      SeSetLearningModeObjectInformation((__int64)&v18);
      if ( (unsigned __int8)ObpCheckObjectReference((_DWORD)DmaAdapter, &AccessState) )
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
  ObpFreeObjectNameBuffer(v17);
  return (unsigned int)AccessState;
}
