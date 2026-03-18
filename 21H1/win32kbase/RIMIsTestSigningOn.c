/*
 * XREFs of RIMIsTestSigningOn @ 0x1C0187974
 * Callers:
 *     rimOnPnpArrived @ 0x1C0059E98 (rimOnPnpArrived.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1C0183F38 (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsCheckForObservationPermissions @ 0x1C018497C (rimObsCheckForObservationPermissions.c)
 * Callees:
 *     <none>
 */

__int64 RIMIsTestSigningOn()
{
  unsigned int v0; // ebx
  ULONG v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 8LL;
  v2 = 0;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &v3, 8u, &v2) >= 0 )
    return (HIDWORD(v3) >> 1) & 1;
  return v0;
}
