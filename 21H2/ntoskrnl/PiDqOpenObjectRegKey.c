/*
 * XREFs of PiDqOpenObjectRegKey @ 0x1406A9838
 * Callers:
 *     PiDqPropertyCallback @ 0x1406384F0 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14063AAFC (PiDqActionDataGetRequestedProperties.c)
 *     PiDqIrpPropertySet @ 0x14072E3E4 (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetChangedProperties @ 0x140771174 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x1408A4250 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408A44E0 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     _PnpOpenObjectRegKey @ 0x140637864 (_PnpOpenObjectRegKey.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406A98B8 (PiDqOpenUserObjectRegKey.c)
 */

__int64 __fastcall PiDqOpenObjectRegKey(int a1, __int64 a2, unsigned int a3, int a4, char a5, __int64 a6, _QWORD *a7)
{
  int v8; // r8d

  *a7 = 0LL;
  if ( !a1 )
    return PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, a4, a5, (__int64)a7);
  if ( a1 != 1 )
    return 3221225485LL;
  v8 = a4;
  LOBYTE(a4) = a5;
  return PiDqOpenUserObjectRegKey(a2, a3, v8, a4, a6, (__int64)a7);
}
