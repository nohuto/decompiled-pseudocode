/*
 * XREFs of ??F?$SafeInt@KUSafeIntErrorPolicy_SafeIntException@utilities@msl@@@utilities@msl@@QEAA?AV012@H@Z @ 0x1800F48B0
 * Callers:
 *     ?UnregisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1800F4D80 (-UnregisterObserverClient@-$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub.c)
 * Callees:
 *     ?SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ @ 0x1800F4D54 (-SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ.c)
 */

_DWORD *__fastcall msl::utilities::SafeInt<unsigned long,msl::utilities::SafeIntErrorPolicy_SafeIntException>::operator--(
        int *a1,
        _DWORD *a2)
{
  int v2; // eax

  v2 = *a1;
  if ( !*a1 )
    msl::utilities::SafeIntErrorPolicy_SafeIntException::SafeIntOnOverflow();
  *a2 = v2;
  *a1 = v2 - 1;
  return a2;
}
