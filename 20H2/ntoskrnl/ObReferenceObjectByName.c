/*
 * XREFs of ObReferenceObjectByName @ 0x1405FDA80
 * Callers:
 *     IopGetDriverPathInformation @ 0x1404FF018 (IopGetDriverPathInformation.c)
 *     AlpcpCreateClientPort @ 0x1405E751C (AlpcpCreateClientPort.c)
 *     IopGetLegacyVetoListDrivers @ 0x1405FDDF0 (IopGetLegacyVetoListDrivers.c)
 *     CmLoadDifferencingKey @ 0x1406FE1FC (CmLoadDifferencingKey.c)
 *     ObShutdownSystem @ 0x1408DECD0 (ObShutdownSystem.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14020AE7C (ObpReleaseLookupContext.c)
 *     SeClearLearningModeObjectInformation @ 0x140210DE0 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x140210E90 (SepDeleteAccessState.c)
 *     PsGetCurrentSilo @ 0x140211160 (PsGetCurrentSilo.c)
 *     SeSetLearningModeObjectInformation @ 0x1402111B0 (SeSetLearningModeObjectInformation.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObpCheckObjectReference @ 0x1405F53C4 (ObpCheckObjectReference.c)
 *     ObpFreeObjectNameBuffer @ 0x1405FDCC8 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x1405FDD40 (SeCreateAccessState.c)
 *     ObpCaptureObjectName @ 0x14060D4D0 (ObpCaptureObjectName.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        PADAPTER_OBJECT *a8)
{
  __int64 v11; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  BOOLEAN v16; // r8
  NTSTATUS AccessState; // [rsp+70h] [rbp-90h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-88h] BYREF
  __int128 v19; // [rsp+80h] [rbp-80h] BYREF
  __int128 v20; // [rsp+90h] [rbp-70h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-60h]
  __int128 v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+C0h] [rbp-40h]
  __int64 v24[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v25; // [rsp+D8h] [rbp-28h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  __int64 v27[20]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v28[224]; // [rsp+190h] [rbp+90h] BYREF

  memset(v28, 0, sizeof(v28));
  DmaAdapter = 0LL;
  v19 = 0LL;
  memset(v27, 0, sizeof(v27));
  v26 = 0LL;
  v23 = 0LL;
  *(_OWORD *)v24 = 0LL;
  v25 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( !a1 )
    return 3221225523LL;
  LOBYTE(v11) = a6;
  result = ObpCaptureObjectName(v11, a1, &v19, 1LL);
  AccessState = result;
  if ( (int)result < 0 )
    return result;
  if ( !(_WORD)v19 )
    return 3221225523LL;
  if ( a3 || (a3 = v27, AccessState = SeCreateAccessState(v27, v28, a4, a5 + 76), AccessState >= 0) )
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
                    (__int64)v24,
                    0LL,
                    (__int64)&DmaAdapter);
    ObpReleaseLookupContext((__int64)v24);
    *a8 = 0LL;
    if ( AccessState >= 0 )
    {
      v14 = LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
      *(_QWORD *)&v22 = 0LL;
      *(_QWORD *)&v21 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v14] + 16;
      *((_QWORD *)&v21 + 1) = &v19;
      SeSetLearningModeObjectInformation((__int64)&v20);
      LOBYTE(v15) = a6;
      if ( ObpCheckObjectReference((__int64)DmaAdapter, (__int64)a3, v16, v15, &AccessState) )
        *a8 = DmaAdapter;
      else
        HalPutDmaAdapter(DmaAdapter);
      SeClearLearningModeObjectInformation();
    }
    if ( a3 == v27 )
    {
      SepDeleteAccessState((__int64)a3);
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3 + 1);
    }
  }
  ObpFreeObjectNameBuffer(&v19);
  return (unsigned int)AccessState;
}
