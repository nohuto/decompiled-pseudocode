/*
 * XREFs of ObReferenceObjectByName @ 0x140668760
 * Callers:
 *     IopGetDriverPathInformation @ 0x1404FB744 (IopGetDriverPathInformation.c)
 *     AlpcpCreateClientPort @ 0x14062B308 (AlpcpCreateClientPort.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14064FA70 (CmKeyBodyReplicateToVirtual.c)
 *     CmLoadDifferencingKey @ 0x140650EAC (CmLoadDifferencingKey.c)
 *     IopGetLegacyVetoListDrivers @ 0x14066853C (IopGetLegacyVetoListDrivers.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140694210 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086C570 (CmKeyBodyRemapToVirtual.c)
 *     ObShutdownSystem @ 0x1408D8E90 (ObShutdownSystem.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObpReleaseLookupContext @ 0x140297B18 (ObpReleaseLookupContext.c)
 *     SeClearLearningModeObjectInformation @ 0x140298FF0 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x1402990A0 (SepDeleteAccessState.c)
 *     PsGetCurrentSilo @ 0x140299370 (PsGetCurrentSilo.c)
 *     SeSetLearningModeObjectInformation @ 0x1402993C0 (SeSetLearningModeObjectInformation.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     ObpFreeObjectNameBuffer @ 0x1406689A8 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x140668A20 (SeCreateAccessState.c)
 *     ObpCheckObjectReference @ 0x140668AD0 (ObpCheckObjectReference.c)
 *     ObpCaptureObjectName @ 0x140695030 (ObpCaptureObjectName.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        __int64 a1,
        int a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        PADAPTER_OBJECT *a8)
{
  __int64 v12; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  unsigned __int64 v15; // rdx
  NTSTATUS AccessState; // [rsp+70h] [rbp-90h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-88h] BYREF
  int v18[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v19; // [rsp+90h] [rbp-70h] BYREF
  __int128 v20; // [rsp+A0h] [rbp-60h]
  __int128 v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+C0h] [rbp-40h]
  __int64 v23[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v24; // [rsp+D8h] [rbp-28h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  __int64 v26[20]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v27[224]; // [rsp+190h] [rbp+90h] BYREF

  memset(v27, 0, sizeof(v27));
  DmaAdapter = 0LL;
  *(_OWORD *)v18 = 0LL;
  memset(v26, 0, sizeof(v26));
  v25 = 0LL;
  v22 = 0LL;
  *(_OWORD *)v23 = 0LL;
  v24 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( !a1 )
    return 3221225523LL;
  LOBYTE(v12) = a6;
  result = ObpCaptureObjectName(v12, a1, v18, 1LL);
  AccessState = result;
  if ( (int)result < 0 )
    return result;
  if ( !LOWORD(v18[0]) )
    return 3221225523LL;
  if ( a3 || (a3 = v26, AccessState = SeCreateAccessState(v26, v27, a4, a5 + 76), AccessState >= 0) )
  {
    CurrentSilo = PsGetCurrentSilo();
    AccessState = ObpLookupObjectName(
                    0LL,
                    (__m128i *)v18,
                    a2,
                    a5,
                    a6,
                    a7,
                    0LL,
                    0LL,
                    (__int64)CurrentSilo,
                    (__int64)a3,
                    (__int64)v23,
                    0LL,
                    &DmaAdapter);
    ObpReleaseLookupContext((__int64)v23);
    *a8 = 0LL;
    if ( AccessState >= 0 )
    {
      v15 = LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
      *(_QWORD *)&v21 = 0LL;
      *(_QWORD *)&v20 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v15] + 16;
      *((_QWORD *)&v20 + 1) = v18;
      SeSetLearningModeObjectInformation((__int64)&v19);
      if ( (unsigned __int8)ObpCheckObjectReference((_DWORD)DmaAdapter, &AccessState) )
        *a8 = DmaAdapter;
      else
        HalPutDmaAdapter(DmaAdapter);
      SeClearLearningModeObjectInformation();
    }
    if ( a3 == v26 )
    {
      SepDeleteAccessState((__int64)a3);
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3 + 1);
    }
  }
  ObpFreeObjectNameBuffer(v18);
  return (unsigned int)AccessState;
}
